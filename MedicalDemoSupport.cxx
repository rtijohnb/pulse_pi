
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MedicalDemo.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "MedicalDemoSupport.h"
#include "MedicalDemoPlugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'RTI_SENSOR_SensorPeriodics' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   RTI_SENSOR_SensorPeriodicsTYPENAME

/* Defines */
#define TDataWriter RTI_SENSOR_SensorPeriodicsDataWriter
#define TData       RTI_SENSOR_SensorPeriodics

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   RTI_SENSOR_SensorPeriodicsTYPENAME

/* Defines */
#define TDataReader RTI_SENSOR_SensorPeriodicsDataReader
#define TDataSeq    RTI_SENSOR_SensorPeriodicsSeq
#define TData       RTI_SENSOR_SensorPeriodics

#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    RTI_SENSOR_SensorPeriodicsTYPENAME
#define TPlugin_new  RTI_SENSOR_SensorPeriodicsPlugin_new
#define TPlugin_delete  RTI_SENSOR_SensorPeriodicsPlugin_delete

/* Defines */
#define TTypeSupport RTI_SENSOR_SensorPeriodicsTypeSupport
#define TData        RTI_SENSOR_SensorPeriodics
#define TDataReader  RTI_SENSOR_SensorPeriodicsDataReader
#define TDataWriter  RTI_SENSOR_SensorPeriodicsDataWriter
#define TGENERATE_SER_CODE
#ifndef NDDS_STANDALONE_TYPE
#define TGENERATE_TYPECODE
#endif

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#ifndef NDDS_STANDALONE_TYPE
#undef TGENERATE_TYPECODE
#endif
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'RTI_SENSOR_SensorInfo' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   RTI_SENSOR_SensorInfoTYPENAME

/* Defines */
#define TDataWriter RTI_SENSOR_SensorInfoDataWriter
#define TData       RTI_SENSOR_SensorInfo

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   RTI_SENSOR_SensorInfoTYPENAME

/* Defines */
#define TDataReader RTI_SENSOR_SensorInfoDataReader
#define TDataSeq    RTI_SENSOR_SensorInfoSeq
#define TData       RTI_SENSOR_SensorInfo

#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    RTI_SENSOR_SensorInfoTYPENAME
#define TPlugin_new  RTI_SENSOR_SensorInfoPlugin_new
#define TPlugin_delete  RTI_SENSOR_SensorInfoPlugin_delete

/* Defines */
#define TTypeSupport RTI_SENSOR_SensorInfoTypeSupport
#define TData        RTI_SENSOR_SensorInfo
#define TDataReader  RTI_SENSOR_SensorInfoDataReader
#define TDataWriter  RTI_SENSOR_SensorInfoDataWriter
#define TGENERATE_SER_CODE
#ifndef NDDS_STANDALONE_TYPE
#define TGENERATE_TYPECODE
#endif

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#ifndef NDDS_STANDALONE_TYPE
#undef TGENERATE_TYPECODE
#endif
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'RTI_SENSOR_SensorConfig' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   RTI_SENSOR_SensorConfigTYPENAME

/* Defines */
#define TDataWriter RTI_SENSOR_SensorConfigDataWriter
#define TData       RTI_SENSOR_SensorConfig

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   RTI_SENSOR_SensorConfigTYPENAME

/* Defines */
#define TDataReader RTI_SENSOR_SensorConfigDataReader
#define TDataSeq    RTI_SENSOR_SensorConfigSeq
#define TData       RTI_SENSOR_SensorConfig

#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    RTI_SENSOR_SensorConfigTYPENAME
#define TPlugin_new  RTI_SENSOR_SensorConfigPlugin_new
#define TPlugin_delete  RTI_SENSOR_SensorConfigPlugin_delete

/* Defines */
#define TTypeSupport RTI_SENSOR_SensorConfigTypeSupport
#define TData        RTI_SENSOR_SensorConfig
#define TDataReader  RTI_SENSOR_SensorConfigDataReader
#define TDataWriter  RTI_SENSOR_SensorConfigDataWriter
#define TGENERATE_SER_CODE
#ifndef NDDS_STANDALONE_TYPE
#define TGENERATE_TYPECODE
#endif

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#ifndef NDDS_STANDALONE_TYPE
#undef TGENERATE_TYPECODE
#endif
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'RTI_PATIENT_PatientPulse' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   RTI_PATIENT_PatientPulseTYPENAME

/* Defines */
#define TDataWriter RTI_PATIENT_PatientPulseDataWriter
#define TData       RTI_PATIENT_PatientPulse

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   RTI_PATIENT_PatientPulseTYPENAME

/* Defines */
#define TDataReader RTI_PATIENT_PatientPulseDataReader
#define TDataSeq    RTI_PATIENT_PatientPulseSeq
#define TData       RTI_PATIENT_PatientPulse

#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    RTI_PATIENT_PatientPulseTYPENAME
#define TPlugin_new  RTI_PATIENT_PatientPulsePlugin_new
#define TPlugin_delete  RTI_PATIENT_PatientPulsePlugin_delete

/* Defines */
#define TTypeSupport RTI_PATIENT_PatientPulseTypeSupport
#define TData        RTI_PATIENT_PatientPulse
#define TDataReader  RTI_PATIENT_PatientPulseDataReader
#define TDataWriter  RTI_PATIENT_PatientPulseDataWriter
#define TGENERATE_SER_CODE
#ifndef NDDS_STANDALONE_TYPE
#define TGENERATE_TYPECODE
#endif

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#ifndef NDDS_STANDALONE_TYPE
#undef TGENERATE_TYPECODE
#endif
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'RTI_PATIENT_PatientInfo' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   RTI_PATIENT_PatientInfoTYPENAME

/* Defines */
#define TDataWriter RTI_PATIENT_PatientInfoDataWriter
#define TData       RTI_PATIENT_PatientInfo

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   RTI_PATIENT_PatientInfoTYPENAME

/* Defines */
#define TDataReader RTI_PATIENT_PatientInfoDataReader
#define TDataSeq    RTI_PATIENT_PatientInfoSeq
#define TData       RTI_PATIENT_PatientInfo

#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    RTI_PATIENT_PatientInfoTYPENAME
#define TPlugin_new  RTI_PATIENT_PatientInfoPlugin_new
#define TPlugin_delete  RTI_PATIENT_PatientInfoPlugin_delete

/* Defines */
#define TTypeSupport RTI_PATIENT_PatientInfoTypeSupport
#define TData        RTI_PATIENT_PatientInfo
#define TDataReader  RTI_PATIENT_PatientInfoDataReader
#define TDataWriter  RTI_PATIENT_PatientInfoDataWriter
#define TGENERATE_SER_CODE
#ifndef NDDS_STANDALONE_TYPE
#define TGENERATE_TYPECODE
#endif

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#ifndef NDDS_STANDALONE_TYPE
#undef TGENERATE_TYPECODE
#endif
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

/* ========================================================================= */
/**
<<IMPLEMENTATION>>

Defines:   TData,
TDataWriter,
TDataReader,
TTypeSupport

Configure and implement 'RTI_PATIENT_PatientConfig' support classes.

Note: Only the #defined classes get defined
*/

/* ----------------------------------------------------------------- */
/* DDSDataWriter
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataWriter, TData
*/

/* Requires */
#define TTYPENAME   RTI_PATIENT_PatientConfigTYPENAME

/* Defines */
#define TDataWriter RTI_PATIENT_PatientConfigDataWriter
#define TData       RTI_PATIENT_PatientConfig

#define ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS
#include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"
#undef ENABLE_TDATAWRITER_DATA_CONSTRUCTOR_METHODS

#undef TDataWriter
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* DDSDataReader
*/

/**
<<IMPLEMENTATION >>

Defines:   TDataReader, TDataSeq, TData
*/

/* Requires */
#define TTYPENAME   RTI_PATIENT_PatientConfigTYPENAME

/* Defines */
#define TDataReader RTI_PATIENT_PatientConfigDataReader
#define TDataSeq    RTI_PATIENT_PatientConfigSeq
#define TData       RTI_PATIENT_PatientConfig

#define ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD
#include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"
#undef ENABLE_TDATAREADER_DATA_CONSISTENCY_CHECK_METHOD

#undef TDataReader
#undef TDataSeq
#undef TData

#undef TTYPENAME

/* ----------------------------------------------------------------- */
/* TypeSupport

<<IMPLEMENTATION >>

Requires:  TTYPENAME,
TPlugin_new
TPlugin_delete
Defines:   TTypeSupport, TData, TDataReader, TDataWriter
*/

/* Requires */
#define TTYPENAME    RTI_PATIENT_PatientConfigTYPENAME
#define TPlugin_new  RTI_PATIENT_PatientConfigPlugin_new
#define TPlugin_delete  RTI_PATIENT_PatientConfigPlugin_delete

/* Defines */
#define TTypeSupport RTI_PATIENT_PatientConfigTypeSupport
#define TData        RTI_PATIENT_PatientConfig
#define TDataReader  RTI_PATIENT_PatientConfigDataReader
#define TDataWriter  RTI_PATIENT_PatientConfigDataWriter
#define TGENERATE_SER_CODE
#ifndef NDDS_STANDALONE_TYPE
#define TGENERATE_TYPECODE
#endif

#include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

#undef TTypeSupport
#undef TData
#undef TDataReader
#undef TDataWriter
#ifndef NDDS_STANDALONE_TYPE
#undef TGENERATE_TYPECODE
#endif
#undef TGENERATE_SER_CODE
#undef TTYPENAME
#undef TPlugin_new
#undef TPlugin_delete

