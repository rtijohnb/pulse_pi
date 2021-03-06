/*
* (c) Copyright, Real-Time Innovations, 2012.  All rights reserved.
* RTI grants Licensee a license to use, modify, compile, and create derivative
* works of the software solely for use with RTI Connext DDS. Licensee may
* redistribute copies of the software provided that all such copies are subject
* to this license. The software is provided "as is", with no warranty of any
* type, including any warranty for fitness for any purpose. RTI is under no
* obligation to maintain or support the software. RTI shall not be liable for
* any incidental or consequential damages arising out of the use or inability
* to use the software.
*/

/* MedicalDemo_publisher.cxx

A publication of data of type RTI_PATIENT_PatientConfig

This file is derived from code automatically generated by the rtiddsgen 
command:

rtiddsgen -language C++ -example <arch> MedicalDemo.idl

Example publication of type RTI_PATIENT_PatientConfig automatically generated by 
'rtiddsgen'. To test it, follow these steps:

(1) Compile this file and the example subscription.

(2) Start the subscription

(3) Start the publication

(4) [Optional] Specify the list of discovery initial peers and 
multicast receive addresses via an environment variable or a file 
(in the current working directory) called NDDS_DISCOVERY_PEERS. 

You can run any number of publisher and subscriber programs, and can 
add and remove them dynamically from the domain.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <iostream>

#include "MedicalDemo.h"
#include "MedicalDemoSupport.h"
#include "ndds/ndds_cpp.h"

#include "rs232.h"

class RTI_PATIENT_PatientConfigListener : public DDSDataReaderListener {
public:

	virtual void on_requested_deadline_missed(
		DDSDataReader* /*reader*/,
		const DDS_RequestedDeadlineMissedStatus& /*status*/) {}

	virtual void on_requested_incompatible_qos(
		DDSDataReader* /*reader*/,
		const DDS_RequestedIncompatibleQosStatus& /*status*/) {}

	virtual void on_sample_rejected(
		DDSDataReader* /*reader*/,
		const DDS_SampleRejectedStatus& /*status*/) {}

	virtual void on_liveliness_changed(
		DDSDataReader* /*reader*/,
		const DDS_LivelinessChangedStatus& /*status*/) {}

	virtual void on_sample_lost(
		DDSDataReader* /*reader*/,
		const DDS_SampleLostStatus& /*status*/) {}

	virtual void on_subscription_matched(
		DDSDataReader* /*reader*/,
		const DDS_SubscriptionMatchedStatus& /*status*/) {}

	virtual void on_data_available(DDSDataReader* reader);

  int get_pulse_high_threshold() {return (this->pulse_high_threshold); };
  int get_pulse_low_threshold() {return (this->pulse_low_threshold); };

private:
       int pulse_high_threshold = 90;
       int pulse_low_threshold = 50;

};

void RTI_PATIENT_PatientConfigListener::on_data_available(DDSDataReader* reader)
{
	RTI_PATIENT_PatientConfigDataReader *RTI_PATIENT_PatientConfig_reader = NULL;
	RTI_PATIENT_PatientConfigSeq data_seq;
	DDS_SampleInfoSeq info_seq;
	DDS_ReturnCode_t retcode;
	int i;

	RTI_PATIENT_PatientConfig_reader = RTI_PATIENT_PatientConfigDataReader::narrow(reader);
	if (RTI_PATIENT_PatientConfig_reader == NULL) {
		fprintf(stderr, "DataReader narrow error\n");
		return;
	}

	retcode = RTI_PATIENT_PatientConfig_reader->take(
		data_seq, info_seq, DDS_LENGTH_UNLIMITED,
		DDS_ANY_SAMPLE_STATE, DDS_ANY_VIEW_STATE, DDS_ANY_INSTANCE_STATE);

	if (retcode == DDS_RETCODE_NO_DATA) {
		return;
	}
	else if (retcode != DDS_RETCODE_OK) {
		fprintf(stderr, "take error %d\n", retcode);
		return;
	}

	for (i = 0; i < data_seq.length(); ++i) {
		if (info_seq[i].valid_data) {
			printf("Received data\n");
			//RTI_PATIENT_PatientConfigTypeSupport::print_data(&data_seq[i]);
			// Each Pi/Arduino would be configured for one patient
			this->pulse_high_threshold = data_seq[i].PulseHighThreshold;
			this->pulse_low_threshold = data_seq[i].PulseLowThreshold;
			printf("ID: %s  PHT: %d PLT: %d \n", data_seq[i].Id,this->pulse_high_threshold, this->pulse_low_threshold);

		}
	}

	retcode = RTI_PATIENT_PatientConfig_reader->return_loan(data_seq, info_seq);
	if (retcode != DDS_RETCODE_OK) {
		fprintf(stderr, "return loan error %d\n", retcode);
	}
}




/* Delete all entities */
static int DDS_entities_shutdown(
    DDSDomainParticipant *participant)
{
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

    /* RTI Connext provides finalize_instance() method on
    domain participant factory for people who want to release memory used
    by the participant factory. Uncomment the following block of code for
    clean destruction of the singleton. */
    /*

    retcode = DDSDomainParticipantFactory::finalize_instance();
    if (retcode != DDS_RETCODE_OK) {
        fprintf(stderr, "finalize_instance error %d\n", retcode);
        status = -1;
    }
    */

    return status;
}

extern "C" int publisher_main(int domainId, int sample_count)
{
    DDSDomainParticipant *participant = NULL;
    DDSPublisher *publisher = NULL;
    DDSSubscriber *subscriber = NULL;
    DDSTopic *topic = NULL;
    DDSDataWriter *writer = NULL;
    RTI_PATIENT_PatientPulseDataWriter * RTI_PATIENT_PatientPulse_writer = NULL;
    RTI_PATIENT_PatientInfoDataWriter * RTI_PATIENT_PatientInfo_writer = NULL;
    RTI_PATIENT_PatientConfigDataWriter * RTI_PATIENT_PatientConfig_writer = NULL;
    RTI_PATIENT_PatientPulse *PatientPulseInstance = NULL;
    RTI_PATIENT_PatientInfo *PatientInfoInstance = NULL;
    RTI_PATIENT_PatientConfig *PatientConfigInstance = NULL;
    DDSDataReader *reader = NULL;
    RTI_PATIENT_PatientConfigListener *patient_config_reader_listener = NULL;
    DDS_ReturnCode_t retcode;
    DDS_InstanceHandle_t instance_handle = DDS_HANDLE_NIL;
    const char *type_name = NULL;
    int count = 0;  
    const DDS_Duration_t TEN_READINGS_TIME = {0,100000000}; // tenth of sec
    char * strtoraw;
    int series_size;
    const int READINGS_PER_TOPIC = 10;
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
    int bdrate = 115200;       /* 115200 baud */
    char buf[SAMPLES_BUF_SZ];
    char bufln[2*MAX_LINE_SZ]; // + extra space in case we miss a CRLF.
    char mode[] = { '8','N','1',0 };

    /* Initialize serial port */
    if (RS232_OpenComport(cport_nr, bdrate, mode, 0))
    {
	printf("Can not open comport\n");
	return(0);
    }

    /* Set up the DDS Participant */
    participant = DDSTheParticipantFactory->create_participant_with_profile(
        domainId, "RTI_Eval_Qos_Library_1_0", "pulse_pi_Profile", 
        NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (participant == NULL) {
        fprintf(stderr, "create_participant error\n");
		DDS_entities_shutdown(participant);
        return -1;
    }

    /* Create the DDS Publisher for the PatientPulse and PatientInfo topics */
    publisher = participant->create_publisher(
        DDS_PUBLISHER_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_NONE);
    if (publisher == NULL) {
        fprintf(stderr, "create_publisher error\n");
		DDS_entities_shutdown(participant);
        return -1;
    }

	/* Create the DDS Subscriber for the PatientConfig topic */
	subscriber = participant->create_subscriber(
		DDS_SUBSCRIBER_QOS_DEFAULT, NULL /* listener */, DDS_STATUS_MASK_NONE);
	if (subscriber == NULL) {
		fprintf(stderr, "create_subscriber error\n");
		DDS_entities_shutdown(participant);
		return -1;
	}


	/*** Setup the PulseType Topic ***/
	/* Register PatientPulseType before creating topic */
	type_name = RTI_PATIENT_PatientPulseTypeSupport::get_type_name();
	retcode = RTI_PATIENT_PatientPulseTypeSupport::register_type(
		participant, type_name);
	if (retcode != DDS_RETCODE_OK) {
		fprintf(stderr, "register_PatientPulse type error %d\n", retcode);
		DDS_entities_shutdown(participant);
		return -1;
	}

	/* Create PatientPulseTopic */
	topic = participant->create_topic(
		"PatientPulseTopic",
		type_name, DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
		DDS_STATUS_MASK_NONE);
	if (topic == NULL) {
		fprintf(stderr, "create_PatientPulseTopic topic error\n");
		DDS_entities_shutdown(participant);
		return -1;
	}

	writer = publisher->create_datawriter_with_profile(
		topic, "RTI_Eval_Qos_Library_1_0", "pulse_pi_Profile", NULL /* listener */,
		DDS_STATUS_MASK_NONE);
	if (writer == NULL) {
		fprintf(stderr, "create_datawriter error\n");
		DDS_entities_shutdown(participant);
		return -1;
	}
	RTI_PATIENT_PatientPulse_writer = RTI_PATIENT_PatientPulseDataWriter::narrow(writer);
	if (RTI_PATIENT_PatientPulse_writer == NULL) {
		fprintf(stderr, "Patient Pulse DataWriter narrow error\n");
		DDS_entities_shutdown(participant);
		return -1;
	}

	/* Create data sample for writing */
	PatientPulseInstance = RTI_PATIENT_PatientPulseTypeSupport::create_data();
	if (PatientPulseInstance == NULL) {
		fprintf(stderr, "RTI_PATIENT_PatientPulseTypeSupport::create_data error\n");
		DDS_entities_shutdown(participant);
		return -1;
	}



	/****** Setup the PatientInfoType Topic ******/
	/* Register PatienInfoType before creating topic */
	type_name = RTI_PATIENT_PatientInfoTypeSupport::get_type_name();
	retcode = RTI_PATIENT_PatientInfoTypeSupport::register_type(
		participant, type_name);
	if (retcode != DDS_RETCODE_OK) {
		fprintf(stderr, "register_PatientInfo type error %d\n", retcode);
		DDS_entities_shutdown(participant);
		return -1;
	}

	/* Create PatientInfoTopic */
	topic = participant->create_topic(
		"PatientInfoTopic",
		type_name, DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
		DDS_STATUS_MASK_NONE);
	if (topic == NULL) {
		fprintf(stderr, "create_PatientInfo topic error\n");
		DDS_entities_shutdown(participant);
		return -1;
	}

	writer = publisher->create_datawriter(
		topic, DDS_DATAWRITER_QOS_DEFAULT, NULL /* listener */,
		DDS_STATUS_MASK_NONE);
	if (writer == NULL) {
		fprintf(stderr, "create_PatientInfo datawriter error\n");
		DDS_entities_shutdown(participant);
		return -1;
	}
	RTI_PATIENT_PatientInfo_writer = RTI_PATIENT_PatientInfoDataWriter::narrow(writer);
	if (RTI_PATIENT_PatientInfo_writer == NULL) {
		fprintf(stderr, "PatientInfo DataWriter narrow error\n");
		DDS_entities_shutdown(participant);
		return -1;
	}

	/* Create data sample for writing */
	PatientInfoInstance = RTI_PATIENT_PatientInfoTypeSupport::create_data();
	if (PatientInfoInstance == NULL) {
		fprintf(stderr, "RTI_PATIENT_PatientInfoTypeSupport::create_data error\n");
		DDS_entities_shutdown(participant);
		return -1;
	}

	/********* Setup the PatientConfigType Topic ************/
	/* Register PatientConfigType before creating topic */
	type_name = RTI_PATIENT_PatientConfigTypeSupport::get_type_name();
	retcode = RTI_PATIENT_PatientConfigTypeSupport::register_type(
		participant, type_name);
	if (retcode != DDS_RETCODE_OK) {
		fprintf(stderr, "register_PatientConfig type error %d\n", retcode);
		DDS_entities_shutdown(participant);
		return -1;
	}

	topic = participant->create_topic(
		"PatientConfigTopic",
		type_name, DDS_TOPIC_QOS_DEFAULT, NULL /* listener */,
		DDS_STATUS_MASK_NONE);
	if (topic == NULL) {
		fprintf(stderr, "create_topic error\n");
		DDS_entities_shutdown(participant);
		return -1;
	}

	/* Create a data reader listener */
	patient_config_reader_listener = new RTI_PATIENT_PatientConfigListener();

	reader = subscriber->create_datareader(
		topic, DDS_DATAREADER_QOS_DEFAULT, patient_config_reader_listener,
		DDS_STATUS_MASK_ALL);
	if (reader == NULL) {
		fprintf(stderr, "create_datareader error\n");
		DDS_entities_shutdown(participant);
		delete patient_config_reader_listener;
		return -1;
	}

	/* Create data sample for writing */
	PatientConfigInstance = RTI_PATIENT_PatientConfigTypeSupport::create_data();
	if (PatientConfigInstance == NULL) {
		fprintf(stderr, "RTI_PATIENT_PatientConfigTypeSupport::create_data error\n");
			DDS_entities_shutdown(participant);
		return -1;
	}

	/* For a data type that has a key, if the same instance is going to be
	written multiple times, initialize the key here
	and register the keyed instance prior to writing */

	// instance_handle = RTI_PATIENT_PatientConfig_writer->register_instance(*instance);

	/* Initialize PatientInfo data */
	PatientInfoInstance->Id.Id = (char *)"H1234HMS007";
	PatientInfoInstance->Age = 33;
	PatientInfoInstance->FirstName = (char *)"James";
	PatientInfoInstance->LastName = (char *)"Bond";
	PatientInfoInstance->HeightCm = 180;
	PatientInfoInstance->Sex = (char *)"male";
	PatientInfoInstance->WeightKg = 90;
	
	/* Initialize the PatientConfig values */
	PatientConfigInstance->PulseHighThreshold = 1000;
	PatientConfigInstance->PulseLowThreshold = 0;

	/* Send PatientInfo */
	printf("Writing PatientInfo\n");
	retcode = RTI_PATIENT_PatientInfo_writer->write(*PatientInfoInstance, instance_handle);
	if (retcode != DDS_RETCODE_OK) {
		fprintf(stderr, "write error %d\n", retcode);
	}
	RTI_PATIENT_PatientInfoTypeSupport::print_data(PatientInfoInstance);

	/* Main loop */
	printf ("count %d, sample_count %d \n", count, sample_count);
	for (count = 0; (sample_count == 0) || (count < sample_count );) 
	{
	  PatientPulseInstance->readings.length(READINGS_PER_TOPIC);  // Set the length		
	  /* Read from serial port */
	  // 
	  i = RS232_PollComport(cport_nr, (unsigned char *)buf, sizeof(buf));
	  /* Make sure that \n is at the end of the string */
	  buf[i] = '\0';
	  // printf(".%s",buf);
	  // printf(buf);
	  // i initialized to 0 out side the loop - tracks the line
	  i=0;  // now start reading the buf, DO NOT Reset where j, k here
	  while (buf[i] != '\0') {   // while we have chars
	    if (buf[i] !='\n') {     // and while it's not a CRLF
	      bufln[j] = buf[i];     // con't to build up a bufferLn
	      j++;
	    } else {                 // we have a line - process a line at a time
	      badline = false;       // assume a good line
	      bufln[j] = '\0';
	      // Qualify the line as we parse info into a topic reading index
 	      // Qualifications:The line must close to the right size 
	      //                and must have 'raw:', 'bpm:'
	      //                we know it terminated with CRLF or we wouldn't be here
	      if ((j< MIN_LINE_SZ) || (j>MAX_LINE_SZ)) badline = true;
	      strtoraw = strtok(bufln,":"); // goto first ':' check for raw
              if (strcmp(strtoraw,"raw")) badline=true;
	      strtoraw = strtok(NULL, " "); // grab raw value
	      // printf("raw: %s bi: %d bli: %d, tri: %d\n",strtoraw, i,j,k);
	      PatientPulseInstance->readings[k] = atoi(strtoraw);
	      strtoraw = strtok(NULL, ":"); // move up after 'ave:'
	      strtoraw = strtok(NULL, ":"); // move up after 'thresh:'
	      strtoraw = strtok(NULL, " "); // move up after thresh value
	      strtoraw = strtok(NULL, ":"); // move up after 'bpm'
	      if (strcmp(strtoraw,"bpm")) badline=true;
	      strtoraw = strtok(NULL, "eol"); // 'eol' does not exist so search to eol strtoraw = bmp value;
		    
	      PatientPulseInstance->bpm = atoi(strtoraw);
	      pulse_high_threshold = patient_config_reader_listener->get_pulse_high_threshold();
	      pulse_low_threshold = patient_config_reader_listener->get_pulse_low_threshold();
	      
	      if ((PatientPulseInstance->bpm >= pulse_high_threshold) && !alarm) {
		alarm = true;
		printf("***BPM HIGH ALARM PATIENT %s BPM: BPM %d Hit max threshold %d\n",
		       PatientInfoInstance->Id, PatientPulseInstance->bpm, pulse_high_threshold);
	      }	else if ((PatientPulseInstance->bpm <= pulse_low_threshold) && !alarm) {
		alarm = true;
		printf("***BPM LOW ALARM PATIENT %s BPM: BPM %d Hit set min threshold %d\n",
		       PatientInfoInstance->Id, PatientPulseInstance->bpm, pulse_low_threshold);
	      } else if ((PatientPulseInstance->bpm < pulse_high_threshold) &&
			 (PatientPulseInstance->bpm > pulse_low_threshold)) {
			   if (alarm) {
			     printf("***CLEARED BPM ALARM PATIENT %s: BPM %d within: %d - %d range\n",
				    PatientInfoInstance->Id, PatientPulseInstance->bpm,
				    pulse_low_threshold, pulse_high_threshold );
			   }
			   alarm = false;
	      }
	      
		    		    
	      // printf("updated reading: %d with raw: %d, current_line Len: %d\n", k, PatientPulseInstance->readings[k], j);
	      j=0;  // resest bufln
		    
	      if (!badline) { // If its good, add it to the topic Readings and increment k
		if (k==READINGS_PER_TOPIC-1) {  // if we have enough readings, send topic
		  PatientPulseInstance->readings.length(k+1);
		  PatientPulseInstance->timestamp = count;
		  PatientPulseInstance->Id = PatientInfoInstance->Id;
				
		  // Write that Patient Pulse data 
		  retcode = RTI_PATIENT_PatientPulse_writer->write(*PatientPulseInstance, instance_handle);
		  if (retcode != DDS_RETCODE_OK) {
		    fprintf(stderr, "write error %d\n", retcode);
		  }

		  // Send PatientInfo 
		  retcode = RTI_PATIENT_PatientInfo_writer->write(*PatientInfoInstance, instance_handle);
		  if (retcode != DDS_RETCODE_OK) {
		    fprintf(stderr, "write error %d\n", retcode);
		  }
		  //printf("Topic Sample: bi: %d, bl: %d, tri: %d \n", i, j, k);
		  //RTI_PATIENT_PatientPulseTypeSupport::print_data(PatientPulseInstance);

		  k=0; // reset for next topic readings set
		  count++; // Topic Sample counts sent controls loop
		} else { // if (k !=READINGS_PER_TOPIC)
		  k++;
		}
	      } else { // badline - leave k allow overwrite by good sample
		num_bad_readings++;
		printf("Bad reading from Arduino Sensor: Count %d\n", num_bad_readings);
	      } 
	    }  // else newline
	    i++;
	  } // while
	  //	  NDDSUtility::sleep(TEN_READINGS_TIME);  // we have buffers for 20 so read every 10 at a time
	}

        /*
        retcode = RTI_PATIENT_PatientConfig_writer->unregister_instance(
		*instance, instance_handle);
        if (retcode != DDS_RETCODE_OK) {
		fprintf(stderr, "unregister instance error %d\n", retcode);
        }
        */

        /* Delete data sample */
	retcode = RTI_PATIENT_PatientPulseTypeSupport::delete_data(PatientPulseInstance);
	if (retcode != DDS_RETCODE_OK) {
		fprintf(stderr, "RTI_PATIENT_PatientConfigTypeSupport::delete_data error %d\n", retcode);
	}

	retcode = RTI_PATIENT_PatientInfoTypeSupport::delete_data(PatientInfoInstance);
	if (retcode != DDS_RETCODE_OK) {
		fprintf(stderr, "RTI_PATIENT_PatientConfigTypeSupport::delete_data error %d\n", retcode);
	}

	retcode = RTI_PATIENT_PatientConfigTypeSupport::delete_data(PatientConfigInstance);
	if (retcode != DDS_RETCODE_OK) {
		fprintf(stderr, "RTI_PATIENT_PatientConfigTypeSupport::delete_data error %d\n", retcode);
	}

	/* Delete all entities */
	return DDS_entities_shutdown(participant);
}

int main(int argc, char *argv[])
{
    int domain_id = 0;
    int sample_count = 0; /* Number of Topic Samples sent, 0=infinite loop */

    if (argc >= 2) {
        domain_id = atoi(argv[1]);
    }
    if (argc >= 3) {
        sample_count = atoi(argv[2]);
    }

    /* Uncomment this to turn on additional logging
    NDDSConfigLogger::get_instance()->
    set_verbosity_by_category(NDDS_CONFIG_LOG_CATEGORY_API, 
    NDDS_CONFIG_LOG_VERBOSITY_STATUS_ALL);
    */

    return publisher_main(domain_id, sample_count);
}

