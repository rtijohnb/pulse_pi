

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MedicalDemo.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MedicalDemo_1585937706_h
#define MedicalDemo_1585937706_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

static const DDS_Char * const RTI_CONSTANTS_QOS_LIBRARY= "Demo_Qos_Lib";
static const DDS_Char * const RTI_CONSTANTS_BASE_PARTICIPANT_QOS= "Base_Participant_Qos";
static const DDS_Char * const RTI_CONSTANTS_BEST_EFFORT_DEADLINE_QOS= "Best_Effort_Deadline_Qos";
static const DDS_Char * const RTI_CONSTANTS_COMMAND_RESPONSE_QOS= "Command_Response_Qos";
static const DDS_Char * const RTI_CONSTANTS_DURABLE_STATE_QOS= "Durable_State_Qos";
static const DDS_Char * const RTI_CONSTANTS_EVENTS_ALARMS_QOS= "Events_Alarms_Qos";
static const DDS_Char * const RTI_CONSTANTS_BATCHED_SAMPLES_QOS= "Batched_Samples_Qos";
typedef    DDS_LongLong   RTI_TYPES_TimeStamp_t ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_TYPES_TimeStamp_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_TYPES_TimeStamp_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_TYPES_TimeStamp_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_TYPES_TimeStamp_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_TYPES_TimeStamp_tSeq, RTI_TYPES_TimeStamp_t);

NDDSUSERDllExport
RTIBool RTI_TYPES_TimeStamp_t_initialize(
    RTI_TYPES_TimeStamp_t* self);

NDDSUSERDllExport
RTIBool RTI_TYPES_TimeStamp_t_initialize_ex(
    RTI_TYPES_TimeStamp_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_TYPES_TimeStamp_t_initialize_w_params(
    RTI_TYPES_TimeStamp_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_TYPES_TimeStamp_t_finalize_w_return(
    RTI_TYPES_TimeStamp_t* self);

NDDSUSERDllExport
void RTI_TYPES_TimeStamp_t_finalize(
    RTI_TYPES_TimeStamp_t* self);

NDDSUSERDllExport
void RTI_TYPES_TimeStamp_t_finalize_ex(
    RTI_TYPES_TimeStamp_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_TYPES_TimeStamp_t_finalize_w_params(
    RTI_TYPES_TimeStamp_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_TYPES_TimeStamp_t_finalize_optional_members(
    RTI_TYPES_TimeStamp_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_TYPES_TimeStamp_t_copy(
    RTI_TYPES_TimeStamp_t* dst,
    const RTI_TYPES_TimeStamp_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *RTI_TYPES_Duration_tTYPENAME;

}

struct RTI_TYPES_Duration_tSeq;
class RTI_TYPES_Duration_t 
{
  public:
    typedef struct RTI_TYPES_Duration_tSeq Seq;

    DDS_Long   sec ;
    DDS_Long   nanosec ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_TYPES_Duration_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_TYPES_Duration_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_TYPES_Duration_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_TYPES_Duration_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_TYPES_Duration_tSeq, RTI_TYPES_Duration_t);

NDDSUSERDllExport
RTIBool RTI_TYPES_Duration_t_initialize(
    RTI_TYPES_Duration_t* self);

NDDSUSERDllExport
RTIBool RTI_TYPES_Duration_t_initialize_ex(
    RTI_TYPES_Duration_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_TYPES_Duration_t_initialize_w_params(
    RTI_TYPES_Duration_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_TYPES_Duration_t_finalize_w_return(
    RTI_TYPES_Duration_t* self);

NDDSUSERDllExport
void RTI_TYPES_Duration_t_finalize(
    RTI_TYPES_Duration_t* self);

NDDSUSERDllExport
void RTI_TYPES_Duration_t_finalize_ex(
    RTI_TYPES_Duration_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_TYPES_Duration_t_finalize_w_params(
    RTI_TYPES_Duration_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_TYPES_Duration_t_finalize_optional_members(
    RTI_TYPES_Duration_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_TYPES_Duration_t_copy(
    RTI_TYPES_Duration_t* dst,
    const RTI_TYPES_Duration_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    DDS_UnsignedShort   RTI_TYPES_AnalogReadng_t ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_TYPES_AnalogReadng_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_TYPES_AnalogReadng_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_TYPES_AnalogReadng_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_TYPES_AnalogReadng_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_TYPES_AnalogReadng_tSeq, RTI_TYPES_AnalogReadng_t);

NDDSUSERDllExport
RTIBool RTI_TYPES_AnalogReadng_t_initialize(
    RTI_TYPES_AnalogReadng_t* self);

NDDSUSERDllExport
RTIBool RTI_TYPES_AnalogReadng_t_initialize_ex(
    RTI_TYPES_AnalogReadng_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_TYPES_AnalogReadng_t_initialize_w_params(
    RTI_TYPES_AnalogReadng_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_TYPES_AnalogReadng_t_finalize_w_return(
    RTI_TYPES_AnalogReadng_t* self);

NDDSUSERDllExport
void RTI_TYPES_AnalogReadng_t_finalize(
    RTI_TYPES_AnalogReadng_t* self);

NDDSUSERDllExport
void RTI_TYPES_AnalogReadng_t_finalize_ex(
    RTI_TYPES_AnalogReadng_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_TYPES_AnalogReadng_t_finalize_w_params(
    RTI_TYPES_AnalogReadng_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_TYPES_AnalogReadng_t_finalize_optional_members(
    RTI_TYPES_AnalogReadng_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_TYPES_AnalogReadng_t_copy(
    RTI_TYPES_AnalogReadng_t* dst,
    const RTI_TYPES_AnalogReadng_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    DDS_Float   RTI_TYPES_Voltage_t ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_TYPES_Voltage_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_TYPES_Voltage_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_TYPES_Voltage_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_TYPES_Voltage_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_TYPES_Voltage_tSeq, RTI_TYPES_Voltage_t);

NDDSUSERDllExport
RTIBool RTI_TYPES_Voltage_t_initialize(
    RTI_TYPES_Voltage_t* self);

NDDSUSERDllExport
RTIBool RTI_TYPES_Voltage_t_initialize_ex(
    RTI_TYPES_Voltage_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_TYPES_Voltage_t_initialize_w_params(
    RTI_TYPES_Voltage_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_TYPES_Voltage_t_finalize_w_return(
    RTI_TYPES_Voltage_t* self);

NDDSUSERDllExport
void RTI_TYPES_Voltage_t_finalize(
    RTI_TYPES_Voltage_t* self);

NDDSUSERDllExport
void RTI_TYPES_Voltage_t_finalize_ex(
    RTI_TYPES_Voltage_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_TYPES_Voltage_t_finalize_w_params(
    RTI_TYPES_Voltage_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_TYPES_Voltage_t_finalize_optional_members(
    RTI_TYPES_Voltage_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_TYPES_Voltage_t_copy(
    RTI_TYPES_Voltage_t* dst,
    const RTI_TYPES_Voltage_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    DDS_Float   RTI_TYPES_Temperature_t ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_TYPES_Temperature_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_TYPES_Temperature_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_TYPES_Temperature_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_TYPES_Temperature_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_TYPES_Temperature_tSeq, RTI_TYPES_Temperature_t);

NDDSUSERDllExport
RTIBool RTI_TYPES_Temperature_t_initialize(
    RTI_TYPES_Temperature_t* self);

NDDSUSERDllExport
RTIBool RTI_TYPES_Temperature_t_initialize_ex(
    RTI_TYPES_Temperature_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_TYPES_Temperature_t_initialize_w_params(
    RTI_TYPES_Temperature_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_TYPES_Temperature_t_finalize_w_return(
    RTI_TYPES_Temperature_t* self);

NDDSUSERDllExport
void RTI_TYPES_Temperature_t_finalize(
    RTI_TYPES_Temperature_t* self);

NDDSUSERDllExport
void RTI_TYPES_Temperature_t_finalize_ex(
    RTI_TYPES_Temperature_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_TYPES_Temperature_t_finalize_w_params(
    RTI_TYPES_Temperature_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_TYPES_Temperature_t_finalize_optional_members(
    RTI_TYPES_Temperature_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_TYPES_Temperature_t_copy(
    RTI_TYPES_Temperature_t* dst,
    const RTI_TYPES_Temperature_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef enum RTI_TYPES_Temperature_Units_t
{
    DEGREES_C ,      
    DEGREES_F ,      
    DEGREES_K      
} RTI_TYPES_Temperature_Units_t;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_TYPES_Temperature_Units_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_TYPES_Temperature_Units_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_TYPES_Temperature_Units_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_TYPES_Temperature_Units_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_TYPES_Temperature_Units_tSeq, RTI_TYPES_Temperature_Units_t);

NDDSUSERDllExport
RTIBool RTI_TYPES_Temperature_Units_t_initialize(
    RTI_TYPES_Temperature_Units_t* self);

NDDSUSERDllExport
RTIBool RTI_TYPES_Temperature_Units_t_initialize_ex(
    RTI_TYPES_Temperature_Units_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_TYPES_Temperature_Units_t_initialize_w_params(
    RTI_TYPES_Temperature_Units_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_TYPES_Temperature_Units_t_finalize_w_return(
    RTI_TYPES_Temperature_Units_t* self);

NDDSUSERDllExport
void RTI_TYPES_Temperature_Units_t_finalize(
    RTI_TYPES_Temperature_Units_t* self);

NDDSUSERDllExport
void RTI_TYPES_Temperature_Units_t_finalize_ex(
    RTI_TYPES_Temperature_Units_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_TYPES_Temperature_Units_t_finalize_w_params(
    RTI_TYPES_Temperature_Units_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_TYPES_Temperature_Units_t_finalize_optional_members(
    RTI_TYPES_Temperature_Units_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_TYPES_Temperature_Units_t_copy(
    RTI_TYPES_Temperature_Units_t* dst,
    const RTI_TYPES_Temperature_Units_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    DDS_Float   RTI_TYPES_Percentage_t ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_TYPES_Percentage_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_TYPES_Percentage_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_TYPES_Percentage_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_TYPES_Percentage_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_TYPES_Percentage_tSeq, RTI_TYPES_Percentage_t);

NDDSUSERDllExport
RTIBool RTI_TYPES_Percentage_t_initialize(
    RTI_TYPES_Percentage_t* self);

NDDSUSERDllExport
RTIBool RTI_TYPES_Percentage_t_initialize_ex(
    RTI_TYPES_Percentage_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_TYPES_Percentage_t_initialize_w_params(
    RTI_TYPES_Percentage_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_TYPES_Percentage_t_finalize_w_return(
    RTI_TYPES_Percentage_t* self);

NDDSUSERDllExport
void RTI_TYPES_Percentage_t_finalize(
    RTI_TYPES_Percentage_t* self);

NDDSUSERDllExport
void RTI_TYPES_Percentage_t_finalize_ex(
    RTI_TYPES_Percentage_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_TYPES_Percentage_t_finalize_w_params(
    RTI_TYPES_Percentage_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_TYPES_Percentage_t_finalize_optional_members(
    RTI_TYPES_Percentage_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_TYPES_Percentage_t_copy(
    RTI_TYPES_Percentage_t* dst,
    const RTI_TYPES_Percentage_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_Char * const RTI_SENSOR_SENSOR_PERIODICS_TOPIC= "SensorPeriodics";
static const DDS_Char * const RTI_SENSOR_SENSOR_INFO_TOPIC= "SensorInfo";
static const DDS_Char * const RTI_SENSOR_SENSOR_CONFIG_TOPIC= "SensorConfig";
extern "C" {

    extern const char *RTI_SENSOR__sensor_id_tTYPENAME;

}

struct RTI_SENSOR__sensor_id_tSeq;
class RTI_SENSOR__sensor_id_t 
{
  public:
    typedef struct RTI_SENSOR__sensor_id_tSeq Seq;

    DDS_Char *   SensorTag ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_SENSOR__sensor_id_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_SENSOR__sensor_id_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_SENSOR__sensor_id_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_SENSOR__sensor_id_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_SENSOR__sensor_id_tSeq, RTI_SENSOR__sensor_id_t);

NDDSUSERDllExport
RTIBool RTI_SENSOR__sensor_id_t_initialize(
    RTI_SENSOR__sensor_id_t* self);

NDDSUSERDllExport
RTIBool RTI_SENSOR__sensor_id_t_initialize_ex(
    RTI_SENSOR__sensor_id_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_SENSOR__sensor_id_t_initialize_w_params(
    RTI_SENSOR__sensor_id_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_SENSOR__sensor_id_t_finalize_w_return(
    RTI_SENSOR__sensor_id_t* self);

NDDSUSERDllExport
void RTI_SENSOR__sensor_id_t_finalize(
    RTI_SENSOR__sensor_id_t* self);

NDDSUSERDllExport
void RTI_SENSOR__sensor_id_t_finalize_ex(
    RTI_SENSOR__sensor_id_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_SENSOR__sensor_id_t_finalize_w_params(
    RTI_SENSOR__sensor_id_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_SENSOR__sensor_id_t_finalize_optional_members(
    RTI_SENSOR__sensor_id_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_SENSOR__sensor_id_t_copy(
    RTI_SENSOR__sensor_id_t* dst,
    const RTI_SENSOR__sensor_id_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    RTI_SENSOR__sensor_id_t   RTI_SENSOR_SensorID_t ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_SENSOR_SensorID_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_SENSOR_SensorID_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_SENSOR_SensorID_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_SENSOR_SensorID_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_SENSOR_SensorID_tSeq, RTI_SENSOR_SensorID_t);

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorID_t_initialize(
    RTI_SENSOR_SensorID_t* self);

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorID_t_initialize_ex(
    RTI_SENSOR_SensorID_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorID_t_initialize_w_params(
    RTI_SENSOR_SensorID_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorID_t_finalize_w_return(
    RTI_SENSOR_SensorID_t* self);

NDDSUSERDllExport
void RTI_SENSOR_SensorID_t_finalize(
    RTI_SENSOR_SensorID_t* self);

NDDSUSERDllExport
void RTI_SENSOR_SensorID_t_finalize_ex(
    RTI_SENSOR_SensorID_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_SENSOR_SensorID_t_finalize_w_params(
    RTI_SENSOR_SensorID_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_SENSOR_SensorID_t_finalize_optional_members(
    RTI_SENSOR_SensorID_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorID_t_copy(
    RTI_SENSOR_SensorID_t* dst,
    const RTI_SENSOR_SensorID_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *RTI_SENSOR_SensorPeriodicsTYPENAME;

}

struct RTI_SENSOR_SensorPeriodicsSeq;
#ifndef NDDS_STANDALONE_TYPE
class RTI_SENSOR_SensorPeriodicsTypeSupport;
class RTI_SENSOR_SensorPeriodicsDataWriter;
class RTI_SENSOR_SensorPeriodicsDataReader;
#endif
class RTI_SENSOR_SensorPeriodics 
{
  public:
    typedef struct RTI_SENSOR_SensorPeriodicsSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef RTI_SENSOR_SensorPeriodicsTypeSupport TypeSupport;
    typedef RTI_SENSOR_SensorPeriodicsDataWriter DataWriter;
    typedef RTI_SENSOR_SensorPeriodicsDataReader DataReader;
    #endif

    RTI_SENSOR__sensor_id_t   id ;
    DDS_LongLong   timestamp ;
    DDS_Float   exampleSensorReading ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_SENSOR_SensorPeriodics_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_SENSOR_SensorPeriodics_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_SENSOR_SensorPeriodics_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_SENSOR_SensorPeriodics_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_SENSOR_SensorPeriodicsSeq, RTI_SENSOR_SensorPeriodics);

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorPeriodics_initialize(
    RTI_SENSOR_SensorPeriodics* self);

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorPeriodics_initialize_ex(
    RTI_SENSOR_SensorPeriodics* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorPeriodics_initialize_w_params(
    RTI_SENSOR_SensorPeriodics* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorPeriodics_finalize_w_return(
    RTI_SENSOR_SensorPeriodics* self);

NDDSUSERDllExport
void RTI_SENSOR_SensorPeriodics_finalize(
    RTI_SENSOR_SensorPeriodics* self);

NDDSUSERDllExport
void RTI_SENSOR_SensorPeriodics_finalize_ex(
    RTI_SENSOR_SensorPeriodics* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_SENSOR_SensorPeriodics_finalize_w_params(
    RTI_SENSOR_SensorPeriodics* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_SENSOR_SensorPeriodics_finalize_optional_members(
    RTI_SENSOR_SensorPeriodics* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorPeriodics_copy(
    RTI_SENSOR_SensorPeriodics* dst,
    const RTI_SENSOR_SensorPeriodics* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *RTI_SENSOR_SensorInfoTYPENAME;

}

struct RTI_SENSOR_SensorInfoSeq;
#ifndef NDDS_STANDALONE_TYPE
class RTI_SENSOR_SensorInfoTypeSupport;
class RTI_SENSOR_SensorInfoDataWriter;
class RTI_SENSOR_SensorInfoDataReader;
#endif
class RTI_SENSOR_SensorInfo 
{
  public:
    typedef struct RTI_SENSOR_SensorInfoSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef RTI_SENSOR_SensorInfoTypeSupport TypeSupport;
    typedef RTI_SENSOR_SensorInfoDataWriter DataWriter;
    typedef RTI_SENSOR_SensorInfoDataReader DataReader;
    #endif

    RTI_SENSOR__sensor_id_t   id ;
    DDS_Long   parameter1 ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_SENSOR_SensorInfo_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_SENSOR_SensorInfo_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_SENSOR_SensorInfo_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_SENSOR_SensorInfo_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_SENSOR_SensorInfoSeq, RTI_SENSOR_SensorInfo);

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorInfo_initialize(
    RTI_SENSOR_SensorInfo* self);

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorInfo_initialize_ex(
    RTI_SENSOR_SensorInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorInfo_initialize_w_params(
    RTI_SENSOR_SensorInfo* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorInfo_finalize_w_return(
    RTI_SENSOR_SensorInfo* self);

NDDSUSERDllExport
void RTI_SENSOR_SensorInfo_finalize(
    RTI_SENSOR_SensorInfo* self);

NDDSUSERDllExport
void RTI_SENSOR_SensorInfo_finalize_ex(
    RTI_SENSOR_SensorInfo* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_SENSOR_SensorInfo_finalize_w_params(
    RTI_SENSOR_SensorInfo* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_SENSOR_SensorInfo_finalize_optional_members(
    RTI_SENSOR_SensorInfo* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorInfo_copy(
    RTI_SENSOR_SensorInfo* dst,
    const RTI_SENSOR_SensorInfo* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *RTI_SENSOR_SensorConfigTYPENAME;

}

struct RTI_SENSOR_SensorConfigSeq;
#ifndef NDDS_STANDALONE_TYPE
class RTI_SENSOR_SensorConfigTypeSupport;
class RTI_SENSOR_SensorConfigDataWriter;
class RTI_SENSOR_SensorConfigDataReader;
#endif
class RTI_SENSOR_SensorConfig 
{
  public:
    typedef struct RTI_SENSOR_SensorConfigSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef RTI_SENSOR_SensorConfigTypeSupport TypeSupport;
    typedef RTI_SENSOR_SensorConfigDataWriter DataWriter;
    typedef RTI_SENSOR_SensorConfigDataReader DataReader;
    #endif

    RTI_SENSOR__sensor_id_t   id ;
    RTI_TYPES_Temperature_Units_t   units ;
    DDS_FloatSeq  calibrationFactors ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_SENSOR_SensorConfig_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_SENSOR_SensorConfig_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_SENSOR_SensorConfig_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_SENSOR_SensorConfig_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_SENSOR_SensorConfigSeq, RTI_SENSOR_SensorConfig);

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorConfig_initialize(
    RTI_SENSOR_SensorConfig* self);

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorConfig_initialize_ex(
    RTI_SENSOR_SensorConfig* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorConfig_initialize_w_params(
    RTI_SENSOR_SensorConfig* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorConfig_finalize_w_return(
    RTI_SENSOR_SensorConfig* self);

NDDSUSERDllExport
void RTI_SENSOR_SensorConfig_finalize(
    RTI_SENSOR_SensorConfig* self);

NDDSUSERDllExport
void RTI_SENSOR_SensorConfig_finalize_ex(
    RTI_SENSOR_SensorConfig* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_SENSOR_SensorConfig_finalize_w_params(
    RTI_SENSOR_SensorConfig* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_SENSOR_SensorConfig_finalize_optional_members(
    RTI_SENSOR_SensorConfig* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_SENSOR_SensorConfig_copy(
    RTI_SENSOR_SensorConfig* dst,
    const RTI_SENSOR_SensorConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
static const DDS_Char * const RTI_PATIENT_PATIENT_INFO_TOPIC= "PatientInfo";
static const DDS_Char * const RTI_PATIENT_PATIENT_PERIODICS_TOPIC= "PatientPeriodics";
static const DDS_Char * const RTI_PATIENT_PATIENT_CONFIG_TOPIC= "PatientConfig";
typedef enum RTI_PATIENT_PATIENT_ALARM_TYPE
{
    NO_ALARM  = 0,      
    PULSE_LOW  = 1,      
    PULSE_HIGH  = 2,      
    PULSE_SENSOR_ERROR  = 3     
} RTI_PATIENT_PATIENT_ALARM_TYPE;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_PATIENT_PATIENT_ALARM_TYPE_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_PATIENT_PATIENT_ALARM_TYPE_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_PATIENT_PATIENT_ALARM_TYPE_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_PATIENT_PATIENT_ALARM_TYPE_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_PATIENT_PATIENT_ALARM_TYPESeq, RTI_PATIENT_PATIENT_ALARM_TYPE);

NDDSUSERDllExport
RTIBool RTI_PATIENT_PATIENT_ALARM_TYPE_initialize(
    RTI_PATIENT_PATIENT_ALARM_TYPE* self);

NDDSUSERDllExport
RTIBool RTI_PATIENT_PATIENT_ALARM_TYPE_initialize_ex(
    RTI_PATIENT_PATIENT_ALARM_TYPE* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_PATIENT_PATIENT_ALARM_TYPE_initialize_w_params(
    RTI_PATIENT_PATIENT_ALARM_TYPE* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_PATIENT_PATIENT_ALARM_TYPE_finalize_w_return(
    RTI_PATIENT_PATIENT_ALARM_TYPE* self);

NDDSUSERDllExport
void RTI_PATIENT_PATIENT_ALARM_TYPE_finalize(
    RTI_PATIENT_PATIENT_ALARM_TYPE* self);

NDDSUSERDllExport
void RTI_PATIENT_PATIENT_ALARM_TYPE_finalize_ex(
    RTI_PATIENT_PATIENT_ALARM_TYPE* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_PATIENT_PATIENT_ALARM_TYPE_finalize_w_params(
    RTI_PATIENT_PATIENT_ALARM_TYPE* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_PATIENT_PATIENT_ALARM_TYPE_finalize_optional_members(
    RTI_PATIENT_PATIENT_ALARM_TYPE* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_PATIENT_PATIENT_ALARM_TYPE_copy(
    RTI_PATIENT_PATIENT_ALARM_TYPE* dst,
    const RTI_PATIENT_PATIENT_ALARM_TYPE* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *RTI_PATIENT__patient_id_tTYPENAME;

}

struct RTI_PATIENT__patient_id_tSeq;
class RTI_PATIENT__patient_id_t 
{
  public:
    typedef struct RTI_PATIENT__patient_id_tSeq Seq;

    DDS_Char *   Id ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_PATIENT__patient_id_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_PATIENT__patient_id_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_PATIENT__patient_id_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_PATIENT__patient_id_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_PATIENT__patient_id_tSeq, RTI_PATIENT__patient_id_t);

NDDSUSERDllExport
RTIBool RTI_PATIENT__patient_id_t_initialize(
    RTI_PATIENT__patient_id_t* self);

NDDSUSERDllExport
RTIBool RTI_PATIENT__patient_id_t_initialize_ex(
    RTI_PATIENT__patient_id_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_PATIENT__patient_id_t_initialize_w_params(
    RTI_PATIENT__patient_id_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_PATIENT__patient_id_t_finalize_w_return(
    RTI_PATIENT__patient_id_t* self);

NDDSUSERDllExport
void RTI_PATIENT__patient_id_t_finalize(
    RTI_PATIENT__patient_id_t* self);

NDDSUSERDllExport
void RTI_PATIENT__patient_id_t_finalize_ex(
    RTI_PATIENT__patient_id_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_PATIENT__patient_id_t_finalize_w_params(
    RTI_PATIENT__patient_id_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_PATIENT__patient_id_t_finalize_optional_members(
    RTI_PATIENT__patient_id_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_PATIENT__patient_id_t_copy(
    RTI_PATIENT__patient_id_t* dst,
    const RTI_PATIENT__patient_id_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
typedef    RTI_PATIENT__patient_id_t   RTI_PATIENT_Patient_ID_t ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_PATIENT_Patient_ID_t_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_PATIENT_Patient_ID_t_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_PATIENT_Patient_ID_t_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_PATIENT_Patient_ID_t_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_PATIENT_Patient_ID_tSeq, RTI_PATIENT_Patient_ID_t);

NDDSUSERDllExport
RTIBool RTI_PATIENT_Patient_ID_t_initialize(
    RTI_PATIENT_Patient_ID_t* self);

NDDSUSERDllExport
RTIBool RTI_PATIENT_Patient_ID_t_initialize_ex(
    RTI_PATIENT_Patient_ID_t* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_PATIENT_Patient_ID_t_initialize_w_params(
    RTI_PATIENT_Patient_ID_t* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_PATIENT_Patient_ID_t_finalize_w_return(
    RTI_PATIENT_Patient_ID_t* self);

NDDSUSERDllExport
void RTI_PATIENT_Patient_ID_t_finalize(
    RTI_PATIENT_Patient_ID_t* self);

NDDSUSERDllExport
void RTI_PATIENT_Patient_ID_t_finalize_ex(
    RTI_PATIENT_Patient_ID_t* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_PATIENT_Patient_ID_t_finalize_w_params(
    RTI_PATIENT_Patient_ID_t* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_PATIENT_Patient_ID_t_finalize_optional_members(
    RTI_PATIENT_Patient_ID_t* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_PATIENT_Patient_ID_t_copy(
    RTI_PATIENT_Patient_ID_t* dst,
    const RTI_PATIENT_Patient_ID_t* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *RTI_PATIENT_PatientPulseTYPENAME;

}

struct RTI_PATIENT_PatientPulseSeq;
#ifndef NDDS_STANDALONE_TYPE
class RTI_PATIENT_PatientPulseTypeSupport;
class RTI_PATIENT_PatientPulseDataWriter;
class RTI_PATIENT_PatientPulseDataReader;
#endif
class RTI_PATIENT_PatientPulse 
{
  public:
    typedef struct RTI_PATIENT_PatientPulseSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef RTI_PATIENT_PatientPulseTypeSupport TypeSupport;
    typedef RTI_PATIENT_PatientPulseDataWriter DataWriter;
    typedef RTI_PATIENT_PatientPulseDataReader DataReader;
    #endif

    DDS_Char *   Id ;
    DDS_LongLong   timestamp ;
    DDS_UnsignedLongSeq  readings ;
    DDS_Octet   bpm ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_PATIENT_PatientPulse_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_PATIENT_PatientPulse_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_PATIENT_PatientPulse_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_PATIENT_PatientPulse_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_PATIENT_PatientPulseSeq, RTI_PATIENT_PatientPulse);

NDDSUSERDllExport
RTIBool RTI_PATIENT_PatientPulse_initialize(
    RTI_PATIENT_PatientPulse* self);

NDDSUSERDllExport
RTIBool RTI_PATIENT_PatientPulse_initialize_ex(
    RTI_PATIENT_PatientPulse* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_PATIENT_PatientPulse_initialize_w_params(
    RTI_PATIENT_PatientPulse* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_PATIENT_PatientPulse_finalize_w_return(
    RTI_PATIENT_PatientPulse* self);

NDDSUSERDllExport
void RTI_PATIENT_PatientPulse_finalize(
    RTI_PATIENT_PatientPulse* self);

NDDSUSERDllExport
void RTI_PATIENT_PatientPulse_finalize_ex(
    RTI_PATIENT_PatientPulse* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_PATIENT_PatientPulse_finalize_w_params(
    RTI_PATIENT_PatientPulse* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_PATIENT_PatientPulse_finalize_optional_members(
    RTI_PATIENT_PatientPulse* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_PATIENT_PatientPulse_copy(
    RTI_PATIENT_PatientPulse* dst,
    const RTI_PATIENT_PatientPulse* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *RTI_PATIENT_PatientInfoTYPENAME;

}

struct RTI_PATIENT_PatientInfoSeq;
#ifndef NDDS_STANDALONE_TYPE
class RTI_PATIENT_PatientInfoTypeSupport;
class RTI_PATIENT_PatientInfoDataWriter;
class RTI_PATIENT_PatientInfoDataReader;
#endif
class RTI_PATIENT_PatientInfo 
{
  public:
    typedef struct RTI_PATIENT_PatientInfoSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef RTI_PATIENT_PatientInfoTypeSupport TypeSupport;
    typedef RTI_PATIENT_PatientInfoDataWriter DataWriter;
    typedef RTI_PATIENT_PatientInfoDataReader DataReader;
    #endif

    DDS_Char *   Id ;
    DDS_Char *   FirstName ;
    DDS_Char *   LastName ;
    DDS_UnsignedLong   Age ;
    DDS_UnsignedLong   HeightCm ;
    DDS_UnsignedLong   WeightKg ;
    DDS_Char *   Sex ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_PATIENT_PatientInfo_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_PATIENT_PatientInfo_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_PATIENT_PatientInfo_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_PATIENT_PatientInfo_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_PATIENT_PatientInfoSeq, RTI_PATIENT_PatientInfo);

NDDSUSERDllExport
RTIBool RTI_PATIENT_PatientInfo_initialize(
    RTI_PATIENT_PatientInfo* self);

NDDSUSERDllExport
RTIBool RTI_PATIENT_PatientInfo_initialize_ex(
    RTI_PATIENT_PatientInfo* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_PATIENT_PatientInfo_initialize_w_params(
    RTI_PATIENT_PatientInfo* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_PATIENT_PatientInfo_finalize_w_return(
    RTI_PATIENT_PatientInfo* self);

NDDSUSERDllExport
void RTI_PATIENT_PatientInfo_finalize(
    RTI_PATIENT_PatientInfo* self);

NDDSUSERDllExport
void RTI_PATIENT_PatientInfo_finalize_ex(
    RTI_PATIENT_PatientInfo* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_PATIENT_PatientInfo_finalize_w_params(
    RTI_PATIENT_PatientInfo* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_PATIENT_PatientInfo_finalize_optional_members(
    RTI_PATIENT_PatientInfo* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_PATIENT_PatientInfo_copy(
    RTI_PATIENT_PatientInfo* dst,
    const RTI_PATIENT_PatientInfo* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *RTI_PATIENT_PatientConfigTYPENAME;

}

struct RTI_PATIENT_PatientConfigSeq;
#ifndef NDDS_STANDALONE_TYPE
class RTI_PATIENT_PatientConfigTypeSupport;
class RTI_PATIENT_PatientConfigDataWriter;
class RTI_PATIENT_PatientConfigDataReader;
#endif
class RTI_PATIENT_PatientConfig 
{
  public:
    typedef struct RTI_PATIENT_PatientConfigSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef RTI_PATIENT_PatientConfigTypeSupport TypeSupport;
    typedef RTI_PATIENT_PatientConfigDataWriter DataWriter;
    typedef RTI_PATIENT_PatientConfigDataReader DataReader;
    #endif

    DDS_Char *   Id ;
    DDS_UnsignedLong   PulseHighThreshold ;
    DDS_UnsignedLong   PulseLowThreshold ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* RTI_PATIENT_PatientConfig_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *RTI_PATIENT_PatientConfig_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_PATIENT_PatientConfig_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *RTI_PATIENT_PatientConfig_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(RTI_PATIENT_PatientConfigSeq, RTI_PATIENT_PatientConfig);

NDDSUSERDllExport
RTIBool RTI_PATIENT_PatientConfig_initialize(
    RTI_PATIENT_PatientConfig* self);

NDDSUSERDllExport
RTIBool RTI_PATIENT_PatientConfig_initialize_ex(
    RTI_PATIENT_PatientConfig* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool RTI_PATIENT_PatientConfig_initialize_w_params(
    RTI_PATIENT_PatientConfig* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool RTI_PATIENT_PatientConfig_finalize_w_return(
    RTI_PATIENT_PatientConfig* self);

NDDSUSERDllExport
void RTI_PATIENT_PatientConfig_finalize(
    RTI_PATIENT_PatientConfig* self);

NDDSUSERDllExport
void RTI_PATIENT_PatientConfig_finalize_ex(
    RTI_PATIENT_PatientConfig* self,RTIBool deletePointers);

NDDSUSERDllExport
void RTI_PATIENT_PatientConfig_finalize_w_params(
    RTI_PATIENT_PatientConfig* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void RTI_PATIENT_PatientConfig_finalize_optional_members(
    RTI_PATIENT_PatientConfig* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool RTI_PATIENT_PatientConfig_copy(
    RTI_PATIENT_PatientConfig* dst,
    const RTI_PATIENT_PatientConfig* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<RTI_TYPES_Duration_t> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<RTI_SENSOR__sensor_id_t> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<RTI_SENSOR_SensorPeriodics> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<RTI_SENSOR_SensorInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<RTI_SENSOR_SensorConfig> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<RTI_PATIENT__patient_id_t> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<RTI_PATIENT_PatientPulse> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<RTI_PATIENT_PatientInfo> {
            static const RTIXCdrTypeCode * get();
        };

        template <>
        struct type_code<RTI_PATIENT_PatientConfig> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* MedicalDemo */

