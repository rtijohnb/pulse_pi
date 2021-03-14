#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <iostream>


#include "ndds/ndds_cpp.h"
#include <pthread.h>

#include "SerialPort.h"
//#include "rs232.h"

static bool run_flag = true;

// Local prototypes
void handle_SIGINT(int unused);
int pulse_main (int domainId, unsigned int);
int main (int argc, char *argv[]);

class PatientConfigInfo {
    public:
    PatientConfigInfo() {
        pulse_high_threshold = 90;
        pulse_low_threshold = 60;
    }
       DDS_UnsignedLong pulse_high_threshold;
       DDS_UnsignedLong pulse_low_threshold;
} myPatientConfigInfo;

//-------------------------------------------------------------------
// handle_SIGINT - sets flag for orderly shutdown on Ctrl-C
//-------------------------------------------------------------------
void handle_SIGINT(int unused)
{
  // On CTRL+C - abort! //
  run_flag = false;
}

class WaitsetWriterInfo {
    // holds waitset info needed for the writer waitset processing thread
    public:
        WaitsetWriterInfo(std::string writerName) {
            myName = writerName;
        }
        void print_myname() {
            std::cout << myName << std::endl;
        }
        DDSDynamicDataWriter * writer;
		bool * run_flag;
    private:
        std::string myName;
} ;

void*  pthreadToProcWriterEvents(void  * waitsetWriterInfo) {
	WaitsetWriterInfo * myWaitsetInfo;
    myWaitsetInfo = (WaitsetWriterInfo *)waitsetWriterInfo;
	DDSWaitSet * waitset = waitset = new DDSWaitSet();;
    DDS_ReturnCode_t retcode;
    DDSConditionSeq active_conditions_seq;

    printf("Created Writer Pthread ");
    myWaitsetInfo->print_myname();

    // Configure Waitset for Writer Status ****
    DDSStatusCondition *status_condition = myWaitsetInfo->writer->get_statuscondition();
    if (status_condition == NULL) {
        printf("Writer thread: get_statuscondition error\n");
        goto end_writer_thread;
    }

    // Set enabled statuses
    retcode = status_condition->set_enabled_statuses(
            DDS_PUBLICATION_MATCHED_STATUS);
    if (retcode != DDS_RETCODE_OK) {
        printf("Writer thread: set_enabled_statuses error\n");
        goto end_writer_thread;
    }

    // Attach Status Conditions to the above waitset
    retcode = waitset->attach_condition(status_condition);
    if (retcode != DDS_RETCODE_OK) {
        printf("Writer thread: attach_condition error\n");
        goto end_writer_thread;
    }

    // wait() blocks execution of the thread until one or more attached condition triggers  
	// thread exits upon ^c or error
    while ((* myWaitsetInfo->run_flag) == true) { 
        retcode = waitset->wait(active_conditions_seq, DDS_DURATION_INFINITE);
        /* We get to timeout if no conditions were triggered */
        if (retcode == DDS_RETCODE_TIMEOUT) {
            printf("Writer thread: Wait timed out!! No conditions were triggered.\n");
            continue;
        } else if (retcode != DDS_RETCODE_OK) {
            printf("Writer thread: wait returned error: %d\n", retcode);
            goto end_writer_thread;
        }

        /* Get the number of active conditions */
        int active_conditions = active_conditions_seq.length();

        for (int i = 0; i < active_conditions; ++i) {
            /* Compare with Status Conditions */
            if (active_conditions_seq[i] == status_condition) {
                DDS_StatusMask triggeredmask =
                        myWaitsetInfo->writer->get_status_changes();

                if (triggeredmask & DDS_PUBLICATION_MATCHED_STATUS) {
					DDS_PublicationMatchedStatus st;
                	myWaitsetInfo->writer->get_publication_matched_status(st);
                    myWaitsetInfo->print_myname();
					printf("Writer Subs: %d %d\n", st.current_count, st.current_count_change);
                }
            } else {
                // writers can only have status condition
                myWaitsetInfo->print_myname();
                printf ("Writer: False Writer Event Trigger");
            }
        }
	} // While (run_flag)
	end_writer_thread: // reached by ^C or an error
	printf("Writer: Pthread Exiting\n");
	exit(0);
}


class WaitsetReaderInfo {
    // holds waitset info needed for the Reader waitset processing thread
    public:
        WaitsetReaderInfo(std::string readerName) {
            myName = readerName;
        };
        void print_myname() {
            std::cout << myName << std::endl;
        }
        DDSDynamicDataReader * reader;
		bool * run_flag;
    private:
        std::string myName;
} ;

void*  pthreadToProcReaderEvents(void *waitsetReaderInfo) {
    WaitsetReaderInfo * myWaitsetInfo;
    myWaitsetInfo = (WaitsetReaderInfo *)waitsetReaderInfo;
	DDSStatusCondition *status_condition =  NULL;
	DDSReadCondition * read_condition = NULL;
	DDSWaitSet *waitset = new DDSWaitSet();
    DDS_ReturnCode_t retcode;
    DDSConditionSeq active_conditions_seq;
	DDS_DynamicDataSeq patient_config_data_seq;
	DDS_SampleInfoSeq patient_config_info_seq;

    printf("Created Reader Pthread: ");
    myWaitsetInfo->print_myname();

    // Create read condition
    read_condition = myWaitsetInfo->reader->create_readcondition(
            DDS_NOT_READ_SAMPLE_STATE,
            DDS_ANY_VIEW_STATE,
            DDS_ANY_INSTANCE_STATE);
    if (read_condition == NULL) {
        printf("Reader thread: create_readcondition error\n");
		goto end_reader_thread;
    }

    //  Get status conditions
    status_condition = myWaitsetInfo->reader->get_statuscondition();
    if (status_condition == NULL) {
        printf("Reader thread: get_statuscondition error\n");
 		goto end_reader_thread;
    }

    // Set enabled statuses
    retcode = status_condition->set_enabled_statuses(DDS_SUBSCRIPTION_MATCHED_STATUS);
    if (retcode != DDS_RETCODE_OK) {
        printf("Reader thread: set_enabled_statuses error\n");
 		goto end_reader_thread;
    }   

    /* Attach Read Conditions */
    retcode = waitset->attach_condition(read_condition);
    if (retcode != DDS_RETCODE_OK) {
        printf("Reader thread: attach_condition error\n");
		goto end_reader_thread;
    }

    /* Attach Status Conditions */
    retcode = waitset->attach_condition(status_condition);
    if (retcode != DDS_RETCODE_OK) {
        printf("Reader thread: attach_condition error\n");
		goto end_reader_thread;
    }

	while ((* myWaitsetInfo->run_flag) == true) {
       	retcode = waitset->wait(active_conditions_seq, DDS_DURATION_INFINITE);
        if (retcode == DDS_RETCODE_TIMEOUT) {
            printf("Reader thread: Wait timed out!! No conditions were triggered.\n");
            continue;
        } else if (retcode != DDS_RETCODE_OK) {
            printf("Reader thread:  wait returned error: %d\n", retcode);
            goto end_reader_thread;
        }

        int active_conditions = active_conditions_seq.length();

        for (int i = 0; i < active_conditions; ++i) {
            if (active_conditions_seq[i] == status_condition) {
                /* Get the status changes so we can check which status
                 * condition triggered. */
                DDS_StatusMask triggeredmask =
                        myWaitsetInfo->reader->get_status_changes();

                /* Subscription matched */
                if (triggeredmask & DDS_SUBSCRIPTION_MATCHED_STATUS) {
                    DDS_SubscriptionMatchedStatus st;
                    myWaitsetInfo->reader->get_subscription_matched_status(st);
                    myWaitsetInfo->print_myname();
					printf("Reader thread: Pubs: %d %d\n", st.current_count, st.current_count_change);
                }
            } else if (active_conditions_seq[i] == read_condition) { 
                // Get the latest samples
				retcode = myWaitsetInfo->reader->take(
							patient_config_data_seq, patient_config_info_seq, DDS_LENGTH_UNLIMITED,
							DDS_ANY_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE);
				if (retcode == DDS_RETCODE_OK) {
					for (int i = 0; i < patient_config_data_seq.length(); ++i) {
						if (patient_config_info_seq[i].valid_data) {                  
							retcode=patient_config_data_seq[i].get_ulong(myPatientConfigInfo.pulse_high_threshold, 
									"PulseHighThreshold", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED);
							if (retcode != DDS_RETCODE_OK) goto end_reader_thread;
							retcode=patient_config_data_seq[i].get_ulong(myPatientConfigInfo.pulse_low_threshold,
									"PulseLowThreshold", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED);
							if (retcode != DDS_RETCODE_OK) goto end_reader_thread;
							printf("Reader Thread: PHT %d, PLT %d\n", myPatientConfigInfo.pulse_high_threshold, myPatientConfigInfo.pulse_low_threshold);
                            fflush(stdout);
						}
					}
				} else if (retcode == DDS_RETCODE_NO_DATA) {
					continue;
				} else {
					fprintf(stderr, "Reader thread: read data error %d\n", retcode);
					goto end_reader_thread;
				}
                retcode = myWaitsetInfo->reader->return_loan(patient_config_data_seq, patient_config_info_seq);
                if (retcode != DDS_RETCODE_OK) {
                    fprintf(stderr, "Reader thread:return_loan error %d\n", retcode);
                    goto end_reader_thread;
                }  
			}
		}
	} // While (run_flag)
	end_reader_thread: // reached by ^C or an error
	printf("Reader thread: Pthread Exiting\n");
	exit(0);
}


//-------------------------------------------------------------------
// Shutdown in an orderly fashion
//-------------------------------------------------------------------
static int participant_shutdown (DDSDomainParticipant *participant) {
    DDS_ReturnCode_t retcode;
    int status = 0;

    if (participant != NULL) {
        retcode = participant->delete_contained_entities();
        if (retcode != DDS_RETCODE_OK) {
            fprintf(stderr, "delete_contained_entities error %d\n", retcode);
            status = -1;
        }

        retcode = DDSTheParticipantFactory->delete_participant(participant);
        if (retcode != DDS_RETCODE_OK) {
            fprintf(stderr, "delete_participant error %d\n", retcode);
            status = -1;
        }
    }
    return status;
}


extern "C" int pulse_main(int domainId) {
    DDSDomainParticipant * participant = NULL;
	DDSDynamicDataWriter * patient_pulse_writer = NULL;
	DDSDynamicDataWriter * patient_info_writer = NULL;
	DDSDynamicDataReader * patient_config_reader = NULL;
    DDS_DynamicData * patient_info_data = NULL;
    DDS_DynamicData * patient_pulse_data = NULL;
    DDS_ReturnCode_t retcode;

    const char *type_name = NULL;
    DDS_LongLong count = 0;  
    const DDS_Duration_t FIVE_READINGS_TIME = {0,50000000}; // 50K ns (1/20th sec)
    char * strtoraw;
    int series_size;
    const uint32_t READINGS_PER_TOPIC = 10;
    const int MIN_LINE_SZ = 30;  // reading from Arduino with all single digits
    const int MAX_LINE_SZ = 35;  // Arduino sample ="raw:402 avg:520 thresh:670 bpm:80\n
    const int SAMPLES_BUF_SZ = READINGS_PER_TOPIC * MAX_LINE_SZ;  // set for 2x samples, sleep for 10
    bool badline; // Aruino reading invalide or not
    int num_bad_readings = 0;  // Track number of bad readings from Arduino
    bool alarm = false;
    int pulse_high_threshold, pulse_low_threshold;

    /* Serial port variables */
    int i = 0, j = 0, k = 0;  // i=buf indx, j=bufln indx, k=topic.reading indx, count=topic sample indx
    int cport_nr = 24;        /* /dev/ttyUSB0 */
	const char devicePathStr[] = "/dev/tty.usbmodem144101";
    const int baudRate = 115200;
    char buf[SAMPLES_BUF_SZ];
    char bufln[2*MAX_LINE_SZ]; // + extra space in case we miss a CRLF.
    char mode[] = { '8','N','1',0 };

    const char* this_device_patient_id="H1234HMS007";
    DDS_Short bpm;  // local copy read from arduino
    uint32_t readings[READINGS_PER_TOPIC];

    WaitsetWriterInfo * myWaitsetPatientPulseWriterInfo = new WaitsetWriterInfo("PatientPulseTopic"); 
	WaitsetWriterInfo * myWaitsetPatientInfoWriterInfo = new WaitsetWriterInfo("PatientInfoTopic"); 
    WaitsetReaderInfo * myWaitsetPatientConfigReaderInfo = new WaitsetReaderInfo("PatientConfifTopic");

    /* Initialize serial port */
	/*
    if (RS232_OpenComport(cport_nr, baudRate, mode, 0))
    {
	printf("Can not open comport\n");
	return(0);
    }
	*/

    //* Open port macOs port, and connect to a device
    int sfd = openAndConfigureSerialPort(devicePathStr, baudRate);
    if (sfd < 0) {
        if (sfd == -1) {
            printf("Unable to connect to serial port.\n");
        }
        else { //sfd == -2
            printf("Error setting serial port attributes.\n");
        }
        return 0;
    }

	if (serialPortIsOpen()) {
		printf("serial port: %s is open @ %d bps\n", devicePathStr, baudRate);
	}

	// Create the domain participant from XML
	participant = DDSTheParticipantFactory->create_participant_from_config(
		"MedicalParticipantLibrary1::RaspberryPiParticipant1");
	if (participant == NULL) {
		fprintf(stderr, "create participant error\n");
		//goto pulse_main_end;
	}

	patient_pulse_writer = DDSDynamicDataWriter::narrow(
        participant->lookup_datawriter_by_name("RaspberryPiPublisher1::PatientPulseTopicWriter"));
    if (patient_pulse_writer == NULL) {
        fprintf(stderr, "PatientPulseWriter: lookup_datawriter_by_name error\n"); 
		//goto pulse_main_end;
    }

    patient_info_writer = DDSDynamicDataWriter::narrow(
		// Defined only in domain_participant_library. PUblisher name not defined QoS file
        participant->lookup_datawriter_by_name("RaspberryPiPublisher1::PatientInfoTopicWriter"));
    if (patient_info_writer  == NULL) {
        fprintf(stderr, "PatientInfoTopicWriter: lookup_datawriter_by_name error\n"); 
		//goto pulse_main_end;
    }

 	patient_config_reader = DDSDynamicDataReader::narrow(
		// Defined only in domain_participant_library. PUblisher name not defined QoS file
		participant->lookup_datareader_by_name("RaspberryPiSubscriber1::PatientConfigTopicReader")); 
    if (patient_config_reader == NULL) {
        fprintf(stderr, "PatientConfigTopicReader: lookup_datareader_by_name error\n");
		//goto pulse_main_end;
    }    

 	// Turn up a waitset threads and hang on them for writer events and reader events and data
    myWaitsetPatientPulseWriterInfo->writer = patient_pulse_writer;
	myWaitsetPatientPulseWriterInfo->run_flag = &run_flag;
    pthread_t wpp_tid;
    pthread_create(&wpp_tid, NULL, pthreadToProcWriterEvents, (void*) myWaitsetPatientPulseWriterInfo);

    myWaitsetPatientInfoWriterInfo->writer = patient_info_writer;
	myWaitsetPatientInfoWriterInfo->run_flag = &run_flag;
    pthread_t wpi_tid;
    pthread_create(&wpi_tid, NULL, pthreadToProcWriterEvents, (void*) myWaitsetPatientInfoWriterInfo);

    myWaitsetPatientConfigReaderInfo->reader = patient_config_reader;
	myWaitsetPatientConfigReaderInfo->run_flag = &run_flag;
    pthread_t rpc_tid;
    pthread_create(&rpc_tid, NULL, pthreadToProcReaderEvents, (void*) myWaitsetPatientConfigReaderInfo);

    patient_info_data = patient_info_writer->create_data(DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (patient_info_data == NULL) {
        fprintf(stderr, "patient_info_data: create_data error\n");
		goto pulse_main_end;
    } 

  	/* Initialize PatientInfo data */
    retcode = patient_info_data->set_string("Id.Id", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, this_device_patient_id); // does not work
    retcode = patient_info_data->set_ulong("Age", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, 33);
    retcode = patient_info_data->set_string("FirstName", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, (char *)"James");
    retcode = patient_info_data->set_string("LastName", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, (char *)"Bond");
    retcode = patient_info_data->set_ulong("HeightCm", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, 180);
    retcode = patient_info_data->set_ulong("WeightKg", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, 90);
    retcode = patient_info_data->set_string("Sex", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, (char *)"Male");

	if (retcode != DDS_RETCODE_OK) {  // check only the last set (factor into a bool set_info())
		fprintf(stderr, "patient_info_data set topic data error\n");
		goto pulse_main_end;
	}

    patient_pulse_data = patient_pulse_writer->create_data(DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (patient_pulse_data == NULL) {
        fprintf(stderr, "patient_info_data: create_data error\n");
		goto pulse_main_end;
    } 
    retcode = patient_pulse_data->set_string("Id.Id", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, this_device_patient_id);

	/* Main loop */
	while(run_flag) {
        
        //i = RS232_PollComport(cport_nr, (unsigned char *)buf, sizeof(buf));
        i = readSerialData(buf, sizeof(buf)-1);

        buf[i] = '\0';         // Make sure that \n is at the end of the string 
        // printf(".%s",buf);
        // printf(buf);
        // i initialized to 0 out side the loop - tracks the line
        i=0;  // now start reading the buf, DO NOT Reset where j, k here
        while (buf[i] != '\0') {            // while we have chars
            if (buf[i] !='\n') {            // and while it's not a CRLF
                bufln[j] = buf[i];          // con't to build up a bufferLn
                (j < (sizeof(bufln)-1)) ? j++ : 0; // don't let j exceed bufln size

            } else {                   // we have a line - process a line at a time
                badline = false;       // assume a good line
                bufln[j] = '\0';
                // printf("%s\n",bufln);
                // Qualify the line as we parse info into a topic reading index
                // Qualifications:The line must close to the right size 
                //                and must have 'raw:', 'bpm:'
                //                we know it terminated with CRLF or we wouldn't be here
                if ((j< MIN_LINE_SZ) || (j>MAX_LINE_SZ)) badline = true;
                strtoraw = strtok(bufln,":"); // goto first ':' check for raw
                    if (strcmp(strtoraw,"raw")) badline=true;
                strtoraw = strtok(NULL, " "); // grab raw value
                //printf("raw: %s bi: %d bli: %d, tri: %d\n",strtoraw, i,j,k);
                readings[k]=atoi(strtoraw);
                strtoraw = strtok(NULL, ":"); // move up after 'ave:'
                strtoraw = strtok(NULL, ":"); // move up after 'thresh:'
                strtoraw = strtok(NULL, " "); // move up after thresh value
                strtoraw = strtok(NULL, ":"); // move up after 'bpm'
                if (strcmp(strtoraw,"bpm")) badline=true;
                strtoraw = strtok(NULL, "eol"); // 'eol' does not exist so search to eol strtoraw = bmp value;
                bpm = atoi(strtoraw);
            
                if ((bpm >= myPatientConfigInfo.pulse_high_threshold) && !alarm) {
                    alarm = true;
                    printf("***BPM HIGH ALARM PATIENT %s BPM: BPM %d Hit max threshold %d\n",
                    this_device_patient_id, bpm, myPatientConfigInfo.pulse_high_threshold);
                }	else if ((bpm <= myPatientConfigInfo.pulse_low_threshold) && !alarm) {
                    alarm = true;
                    printf("***BPM LOW ALARM PATIENT %s BPM: BPM %d Hit set min threshold %d\n",
                    this_device_patient_id, bpm, myPatientConfigInfo.pulse_low_threshold);
                } else if ((bpm < myPatientConfigInfo.pulse_high_threshold) &&
                    (bpm > myPatientConfigInfo.pulse_low_threshold)) {
                    if (alarm) {
                        printf("***CLEARED BPM ALARM PATIENT %s: BPM %d within: %d - %d range\n",
                            this_device_patient_id, bpm,
                            myPatientConfigInfo.pulse_low_threshold,
                            myPatientConfigInfo.pulse_high_threshold );
                    }
                    alarm = false;
                }
                             
                // printf("updated reading: %d with raw: %d, current_line Len: %d\n", k, PatientPulseInstance->readings[k], j);
                j=0;  // resest bufln
                    
                if (!badline) { // If its good, add it to the topic Readings and increment k
                    if (k==READINGS_PER_TOPIC-1) {  // if we have enough readings, send topic
                    
                        retcode = patient_info_writer->write(* patient_info_data, DDS_HANDLE_NIL);
                        if (retcode != DDS_RETCODE_OK) {
                            fprintf(stderr, "patient_info_writer: write error\n");
                            goto pulse_main_end;
                        }

                        retcode = patient_pulse_data->set_longlong("timestamp", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, count);
                        retcode = patient_pulse_data->set_octet("bpm", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, bpm);
                        retcode = patient_pulse_data->set_ulong_array
                            ("readings", DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED, READINGS_PER_TOPIC, readings);
                        if (retcode != DDS_RETCODE_OK) {  // check only the last set (factor into a bool set_pulse())
                            fprintf(stderr, "patient_pulse_data set topic data error\n");
                            goto pulse_main_end;
                        }

                        retcode = patient_pulse_writer->write(* patient_pulse_data, DDS_HANDLE_NIL);
                        if (retcode != DDS_RETCODE_OK) {
                            fprintf(stderr, "patient_pulse_writer: write error\n");
                            goto pulse_main_end;
                        }
                    

                        k=0; // reset for next topic readings set
                        count++; // Topic Sample counts sent controls loop
                    } else { // if (k !=READINGS_PER_TOPIC)
                        if (k++ >READINGS_PER_TOPIC-1) printf("ERROR - k exceeded number of topics"); 
                    }   
                } else { // badline - leave k allow overwrite by good sample
                    num_bad_readings++;
                    printf("Bad reading from Arduino Sensor: Count %d\n", num_bad_readings);
                } 
            }  // else newline
            (i < (sizeof(buf)-1)) ? i++: 0; // don't let i exceed buf len - this should never happen
                                            // since we only read sizeof(buf)-1. If we are filling the buf
                                            // we are sleeping too long - leaving too short time to process
        } // while (chars in buf)
        
        NDDSUtility::sleep(FIVE_READINGS_TIME);  // we have buffers for 20 so read every 10 at a time
	} // while (run_flag)

	pulse_main_end:
	closeSerialPort(); 

	/* Delete all entities */
	return participant_shutdown(participant);
} //

int main(int argc, char *argv[]) {
    int domain_id = 0;
 
    signal(SIGINT, handle_SIGINT);

    if (argc >= 2) {
        domain_id = atoi(argv[1]);
    }

    // Uncomment this to turn on additional logging
    // NDDSConfigLogger::get_instance()->
    // set_verbosity_by_category(NDDS_CONFIG_LOG_CATEGORY_API, 
    // NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);
    
    return pulse_main(domain_id);
}