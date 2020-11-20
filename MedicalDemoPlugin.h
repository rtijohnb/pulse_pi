

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MedicalDemo.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MedicalDemoPlugin_1585937757_h
#define MedicalDemoPlugin_1585937757_h

#include "MedicalDemo.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C" {

    #define RTI_TYPES_TimeStamp_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RTI_TYPES_TimeStamp_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RTI_TYPES_TimeStamp_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RTI_TYPES_TimeStamp_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RTI_TYPES_TimeStamp_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTI_TYPES_TimeStamp_t*
    RTI_TYPES_TimeStamp_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RTI_TYPES_TimeStamp_t*
    RTI_TYPES_TimeStamp_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_TYPES_TimeStamp_t*
    RTI_TYPES_TimeStamp_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RTI_TYPES_TimeStamp_tPluginSupport_copy_data(
        RTI_TYPES_TimeStamp_t *out,
        const RTI_TYPES_TimeStamp_t *in);

    NDDSUSERDllExport extern void 
    RTI_TYPES_TimeStamp_tPluginSupport_destroy_data_w_params(
        RTI_TYPES_TimeStamp_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RTI_TYPES_TimeStamp_tPluginSupport_destroy_data_ex(
        RTI_TYPES_TimeStamp_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_TYPES_TimeStamp_tPluginSupport_destroy_data(
        RTI_TYPES_TimeStamp_t *sample);

    NDDSUSERDllExport extern void 
    RTI_TYPES_TimeStamp_tPluginSupport_print_data(
        const RTI_TYPES_TimeStamp_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    RTI_TYPES_TimeStamp_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_TYPES_TimeStamp_t *out,
        const RTI_TYPES_TimeStamp_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_TimeStamp_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RTI_TYPES_TimeStamp_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_TimeStamp_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_TimeStamp_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define RTI_TYPES_Duration_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RTI_TYPES_Duration_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RTI_TYPES_Duration_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RTI_TYPES_Duration_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RTI_TYPES_Duration_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTI_TYPES_Duration_t*
    RTI_TYPES_Duration_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RTI_TYPES_Duration_t*
    RTI_TYPES_Duration_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_TYPES_Duration_t*
    RTI_TYPES_Duration_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RTI_TYPES_Duration_tPluginSupport_copy_data(
        RTI_TYPES_Duration_t *out,
        const RTI_TYPES_Duration_t *in);

    NDDSUSERDllExport extern void 
    RTI_TYPES_Duration_tPluginSupport_destroy_data_w_params(
        RTI_TYPES_Duration_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RTI_TYPES_Duration_tPluginSupport_destroy_data_ex(
        RTI_TYPES_Duration_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_TYPES_Duration_tPluginSupport_destroy_data(
        RTI_TYPES_Duration_t *sample);

    NDDSUSERDllExport extern void 
    RTI_TYPES_Duration_tPluginSupport_print_data(
        const RTI_TYPES_Duration_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    RTI_TYPES_Duration_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_TYPES_Duration_t *out,
        const RTI_TYPES_Duration_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    RTI_TYPES_Duration_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const RTI_TYPES_Duration_t *sample); 

    NDDSUSERDllExport extern RTIBool
    RTI_TYPES_Duration_tPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const RTI_TYPES_Duration_t *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    RTI_TYPES_Duration_tPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        RTI_TYPES_Duration_t **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    RTI_TYPES_Duration_tPlugin_deserialize_from_cdr_buffer(
        RTI_TYPES_Duration_t *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    RTI_TYPES_Duration_tPlugin_data_to_string(
        const RTI_TYPES_Duration_t *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_Duration_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RTI_TYPES_Duration_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_Duration_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_Duration_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    RTI_TYPES_Duration_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        RTI_TYPES_Duration_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *RTI_TYPES_Duration_tPlugin_get_programs();

    #define RTI_TYPES_AnalogReadng_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RTI_TYPES_AnalogReadng_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RTI_TYPES_AnalogReadng_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RTI_TYPES_AnalogReadng_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RTI_TYPES_AnalogReadng_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTI_TYPES_AnalogReadng_t*
    RTI_TYPES_AnalogReadng_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RTI_TYPES_AnalogReadng_t*
    RTI_TYPES_AnalogReadng_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_TYPES_AnalogReadng_t*
    RTI_TYPES_AnalogReadng_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RTI_TYPES_AnalogReadng_tPluginSupport_copy_data(
        RTI_TYPES_AnalogReadng_t *out,
        const RTI_TYPES_AnalogReadng_t *in);

    NDDSUSERDllExport extern void 
    RTI_TYPES_AnalogReadng_tPluginSupport_destroy_data_w_params(
        RTI_TYPES_AnalogReadng_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RTI_TYPES_AnalogReadng_tPluginSupport_destroy_data_ex(
        RTI_TYPES_AnalogReadng_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_TYPES_AnalogReadng_tPluginSupport_destroy_data(
        RTI_TYPES_AnalogReadng_t *sample);

    NDDSUSERDllExport extern void 
    RTI_TYPES_AnalogReadng_tPluginSupport_print_data(
        const RTI_TYPES_AnalogReadng_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    RTI_TYPES_AnalogReadng_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_TYPES_AnalogReadng_t *out,
        const RTI_TYPES_AnalogReadng_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_AnalogReadng_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RTI_TYPES_AnalogReadng_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_AnalogReadng_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_AnalogReadng_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define RTI_TYPES_Voltage_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RTI_TYPES_Voltage_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RTI_TYPES_Voltage_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RTI_TYPES_Voltage_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RTI_TYPES_Voltage_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTI_TYPES_Voltage_t*
    RTI_TYPES_Voltage_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RTI_TYPES_Voltage_t*
    RTI_TYPES_Voltage_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_TYPES_Voltage_t*
    RTI_TYPES_Voltage_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RTI_TYPES_Voltage_tPluginSupport_copy_data(
        RTI_TYPES_Voltage_t *out,
        const RTI_TYPES_Voltage_t *in);

    NDDSUSERDllExport extern void 
    RTI_TYPES_Voltage_tPluginSupport_destroy_data_w_params(
        RTI_TYPES_Voltage_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RTI_TYPES_Voltage_tPluginSupport_destroy_data_ex(
        RTI_TYPES_Voltage_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_TYPES_Voltage_tPluginSupport_destroy_data(
        RTI_TYPES_Voltage_t *sample);

    NDDSUSERDllExport extern void 
    RTI_TYPES_Voltage_tPluginSupport_print_data(
        const RTI_TYPES_Voltage_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    RTI_TYPES_Voltage_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_TYPES_Voltage_t *out,
        const RTI_TYPES_Voltage_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_Voltage_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RTI_TYPES_Voltage_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_Voltage_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_Voltage_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define RTI_TYPES_Temperature_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RTI_TYPES_Temperature_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RTI_TYPES_Temperature_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RTI_TYPES_Temperature_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RTI_TYPES_Temperature_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTI_TYPES_Temperature_t*
    RTI_TYPES_Temperature_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RTI_TYPES_Temperature_t*
    RTI_TYPES_Temperature_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_TYPES_Temperature_t*
    RTI_TYPES_Temperature_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RTI_TYPES_Temperature_tPluginSupport_copy_data(
        RTI_TYPES_Temperature_t *out,
        const RTI_TYPES_Temperature_t *in);

    NDDSUSERDllExport extern void 
    RTI_TYPES_Temperature_tPluginSupport_destroy_data_w_params(
        RTI_TYPES_Temperature_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RTI_TYPES_Temperature_tPluginSupport_destroy_data_ex(
        RTI_TYPES_Temperature_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_TYPES_Temperature_tPluginSupport_destroy_data(
        RTI_TYPES_Temperature_t *sample);

    NDDSUSERDllExport extern void 
    RTI_TYPES_Temperature_tPluginSupport_print_data(
        const RTI_TYPES_Temperature_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    RTI_TYPES_Temperature_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_TYPES_Temperature_t *out,
        const RTI_TYPES_Temperature_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_Temperature_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RTI_TYPES_Temperature_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_Temperature_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_Temperature_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_Temperature_Units_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_Temperature_Units_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_Temperature_Units_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    RTI_TYPES_Temperature_Units_tPluginSupport_print_data(
        const RTI_TYPES_Temperature_Units_t *sample, const char *desc, int indent_level);

    #define RTI_TYPES_Percentage_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RTI_TYPES_Percentage_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RTI_TYPES_Percentage_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RTI_TYPES_Percentage_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RTI_TYPES_Percentage_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTI_TYPES_Percentage_t*
    RTI_TYPES_Percentage_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RTI_TYPES_Percentage_t*
    RTI_TYPES_Percentage_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_TYPES_Percentage_t*
    RTI_TYPES_Percentage_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RTI_TYPES_Percentage_tPluginSupport_copy_data(
        RTI_TYPES_Percentage_t *out,
        const RTI_TYPES_Percentage_t *in);

    NDDSUSERDllExport extern void 
    RTI_TYPES_Percentage_tPluginSupport_destroy_data_w_params(
        RTI_TYPES_Percentage_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RTI_TYPES_Percentage_tPluginSupport_destroy_data_ex(
        RTI_TYPES_Percentage_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_TYPES_Percentage_tPluginSupport_destroy_data(
        RTI_TYPES_Percentage_t *sample);

    NDDSUSERDllExport extern void 
    RTI_TYPES_Percentage_tPluginSupport_print_data(
        const RTI_TYPES_Percentage_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    RTI_TYPES_Percentage_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_TYPES_Percentage_t *out,
        const RTI_TYPES_Percentage_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_Percentage_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RTI_TYPES_Percentage_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_Percentage_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_TYPES_Percentage_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct _sensor_id_t
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct _sensor_id_t)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * _sensor_id_t must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct _sensor_id_t.
    */
    typedef  class RTI_SENSOR__sensor_id_t RTI_SENSOR__sensor_id_tKeyHolder;

    #define RTI_SENSOR__sensor_id_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RTI_SENSOR__sensor_id_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RTI_SENSOR__sensor_id_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RTI_SENSOR__sensor_id_tPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define RTI_SENSOR__sensor_id_tPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define RTI_SENSOR__sensor_id_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RTI_SENSOR__sensor_id_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTI_SENSOR__sensor_id_t*
    RTI_SENSOR__sensor_id_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RTI_SENSOR__sensor_id_t*
    RTI_SENSOR__sensor_id_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_SENSOR__sensor_id_t*
    RTI_SENSOR__sensor_id_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR__sensor_id_tPluginSupport_copy_data(
        RTI_SENSOR__sensor_id_t *out,
        const RTI_SENSOR__sensor_id_t *in);

    NDDSUSERDllExport extern void 
    RTI_SENSOR__sensor_id_tPluginSupport_destroy_data_w_params(
        RTI_SENSOR__sensor_id_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RTI_SENSOR__sensor_id_tPluginSupport_destroy_data_ex(
        RTI_SENSOR__sensor_id_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_SENSOR__sensor_id_tPluginSupport_destroy_data(
        RTI_SENSOR__sensor_id_t *sample);

    NDDSUSERDllExport extern void 
    RTI_SENSOR__sensor_id_tPluginSupport_print_data(
        const RTI_SENSOR__sensor_id_t *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern RTI_SENSOR__sensor_id_t*
    RTI_SENSOR__sensor_id_tPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_SENSOR__sensor_id_t*
    RTI_SENSOR__sensor_id_tPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    RTI_SENSOR__sensor_id_tPluginSupport_destroy_key_ex(
        RTI_SENSOR__sensor_id_tKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_SENSOR__sensor_id_tPluginSupport_destroy_key(
        RTI_SENSOR__sensor_id_tKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR__sensor_id_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR__sensor_id_t *out,
        const RTI_SENSOR__sensor_id_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    RTI_SENSOR__sensor_id_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const RTI_SENSOR__sensor_id_t *sample); 

    NDDSUSERDllExport extern RTIBool
    RTI_SENSOR__sensor_id_tPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const RTI_SENSOR__sensor_id_t *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR__sensor_id_tPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR__sensor_id_t **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    RTI_SENSOR__sensor_id_tPlugin_deserialize_from_cdr_buffer(
        RTI_SENSOR__sensor_id_t *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    RTI_SENSOR__sensor_id_tPlugin_data_to_string(
        const RTI_SENSOR__sensor_id_t *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    RTI_SENSOR__sensor_id_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RTI_SENSOR__sensor_id_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RTI_SENSOR__sensor_id_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_SENSOR__sensor_id_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR__sensor_id_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR__sensor_id_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR__sensor_id_tPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR__sensor_id_tKeyHolder *key, 
        const RTI_SENSOR__sensor_id_t *instance);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR__sensor_id_tPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR__sensor_id_t *instance, 
        const RTI_SENSOR__sensor_id_tKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR__sensor_id_tPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const RTI_SENSOR__sensor_id_t *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR__sensor_id_tPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *RTI_SENSOR__sensor_id_tPlugin_get_programs();

    #define RTI_SENSOR_SensorID_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RTI_SENSOR_SensorID_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RTI_SENSOR_SensorID_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RTI_SENSOR_SensorID_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RTI_SENSOR_SensorID_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTI_SENSOR_SensorID_t*
    RTI_SENSOR_SensorID_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RTI_SENSOR_SensorID_t*
    RTI_SENSOR_SensorID_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_SENSOR_SensorID_t*
    RTI_SENSOR_SensorID_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR_SensorID_tPluginSupport_copy_data(
        RTI_SENSOR_SensorID_t *out,
        const RTI_SENSOR_SensorID_t *in);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorID_tPluginSupport_destroy_data_w_params(
        RTI_SENSOR_SensorID_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorID_tPluginSupport_destroy_data_ex(
        RTI_SENSOR_SensorID_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorID_tPluginSupport_destroy_data(
        RTI_SENSOR_SensorID_t *sample);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorID_tPluginSupport_print_data(
        const RTI_SENSOR_SensorID_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR_SensorID_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR_SensorID_t *out,
        const RTI_SENSOR_SensorID_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    RTI_SENSOR_SensorID_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RTI_SENSOR_SensorID_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RTI_SENSOR_SensorID_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_SENSOR_SensorID_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define RTI_SENSOR_SensorPeriodicsPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RTI_SENSOR_SensorPeriodicsPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RTI_SENSOR_SensorPeriodicsPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RTI_SENSOR_SensorPeriodicsPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RTI_SENSOR_SensorPeriodicsPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTI_SENSOR_SensorPeriodics*
    RTI_SENSOR_SensorPeriodicsPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RTI_SENSOR_SensorPeriodics*
    RTI_SENSOR_SensorPeriodicsPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_SENSOR_SensorPeriodics*
    RTI_SENSOR_SensorPeriodicsPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR_SensorPeriodicsPluginSupport_copy_data(
        RTI_SENSOR_SensorPeriodics *out,
        const RTI_SENSOR_SensorPeriodics *in);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorPeriodicsPluginSupport_destroy_data_w_params(
        RTI_SENSOR_SensorPeriodics *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorPeriodicsPluginSupport_destroy_data_ex(
        RTI_SENSOR_SensorPeriodics *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorPeriodicsPluginSupport_destroy_data(
        RTI_SENSOR_SensorPeriodics *sample);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorPeriodicsPluginSupport_print_data(
        const RTI_SENSOR_SensorPeriodics *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    RTI_SENSOR_SensorPeriodicsPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorPeriodicsPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    RTI_SENSOR_SensorPeriodicsPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorPeriodicsPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    RTI_SENSOR_SensorPeriodicsPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR_SensorPeriodics *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR_SensorPeriodicsPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR_SensorPeriodics *out,
        const RTI_SENSOR_SensorPeriodics *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    RTI_SENSOR_SensorPeriodicsPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const RTI_SENSOR_SensorPeriodics *sample); 

    NDDSUSERDllExport extern RTIBool
    RTI_SENSOR_SensorPeriodicsPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const RTI_SENSOR_SensorPeriodics *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR_SensorPeriodicsPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR_SensorPeriodics **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    RTI_SENSOR_SensorPeriodicsPlugin_deserialize_from_cdr_buffer(
        RTI_SENSOR_SensorPeriodics *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    RTI_SENSOR_SensorPeriodicsPlugin_data_to_string(
        const RTI_SENSOR_SensorPeriodics *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    RTI_SENSOR_SensorPeriodicsPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RTI_SENSOR_SensorPeriodicsPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RTI_SENSOR_SensorPeriodicsPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_SENSOR_SensorPeriodicsPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR_SensorPeriodicsPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR_SensorPeriodics ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *RTI_SENSOR_SensorPeriodicsPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    RTI_SENSOR_SensorPeriodicsPlugin_new(void);

    NDDSUSERDllExport extern void
    RTI_SENSOR_SensorPeriodicsPlugin_delete(struct PRESTypePlugin *);

    #define RTI_SENSOR_SensorInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RTI_SENSOR_SensorInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RTI_SENSOR_SensorInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RTI_SENSOR_SensorInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RTI_SENSOR_SensorInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTI_SENSOR_SensorInfo*
    RTI_SENSOR_SensorInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RTI_SENSOR_SensorInfo*
    RTI_SENSOR_SensorInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_SENSOR_SensorInfo*
    RTI_SENSOR_SensorInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR_SensorInfoPluginSupport_copy_data(
        RTI_SENSOR_SensorInfo *out,
        const RTI_SENSOR_SensorInfo *in);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorInfoPluginSupport_destroy_data_w_params(
        RTI_SENSOR_SensorInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorInfoPluginSupport_destroy_data_ex(
        RTI_SENSOR_SensorInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorInfoPluginSupport_destroy_data(
        RTI_SENSOR_SensorInfo *sample);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorInfoPluginSupport_print_data(
        const RTI_SENSOR_SensorInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    RTI_SENSOR_SensorInfoPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorInfoPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    RTI_SENSOR_SensorInfoPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorInfoPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    RTI_SENSOR_SensorInfoPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR_SensorInfo *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR_SensorInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR_SensorInfo *out,
        const RTI_SENSOR_SensorInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    RTI_SENSOR_SensorInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const RTI_SENSOR_SensorInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    RTI_SENSOR_SensorInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const RTI_SENSOR_SensorInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR_SensorInfoPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR_SensorInfo **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    RTI_SENSOR_SensorInfoPlugin_deserialize_from_cdr_buffer(
        RTI_SENSOR_SensorInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    RTI_SENSOR_SensorInfoPlugin_data_to_string(
        const RTI_SENSOR_SensorInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    RTI_SENSOR_SensorInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RTI_SENSOR_SensorInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RTI_SENSOR_SensorInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_SENSOR_SensorInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR_SensorInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR_SensorInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *RTI_SENSOR_SensorInfoPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    RTI_SENSOR_SensorInfoPlugin_new(void);

    NDDSUSERDllExport extern void
    RTI_SENSOR_SensorInfoPlugin_delete(struct PRESTypePlugin *);

    #define RTI_SENSOR_SensorConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RTI_SENSOR_SensorConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RTI_SENSOR_SensorConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RTI_SENSOR_SensorConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RTI_SENSOR_SensorConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTI_SENSOR_SensorConfig*
    RTI_SENSOR_SensorConfigPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RTI_SENSOR_SensorConfig*
    RTI_SENSOR_SensorConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_SENSOR_SensorConfig*
    RTI_SENSOR_SensorConfigPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR_SensorConfigPluginSupport_copy_data(
        RTI_SENSOR_SensorConfig *out,
        const RTI_SENSOR_SensorConfig *in);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorConfigPluginSupport_destroy_data_w_params(
        RTI_SENSOR_SensorConfig *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorConfigPluginSupport_destroy_data_ex(
        RTI_SENSOR_SensorConfig *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorConfigPluginSupport_destroy_data(
        RTI_SENSOR_SensorConfig *sample);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorConfigPluginSupport_print_data(
        const RTI_SENSOR_SensorConfig *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    RTI_SENSOR_SensorConfigPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorConfigPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    RTI_SENSOR_SensorConfigPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    RTI_SENSOR_SensorConfigPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    RTI_SENSOR_SensorConfigPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR_SensorConfig *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR_SensorConfigPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR_SensorConfig *out,
        const RTI_SENSOR_SensorConfig *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    RTI_SENSOR_SensorConfigPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const RTI_SENSOR_SensorConfig *sample); 

    NDDSUSERDllExport extern RTIBool
    RTI_SENSOR_SensorConfigPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const RTI_SENSOR_SensorConfig *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR_SensorConfigPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR_SensorConfig **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    RTI_SENSOR_SensorConfigPlugin_deserialize_from_cdr_buffer(
        RTI_SENSOR_SensorConfig *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    RTI_SENSOR_SensorConfigPlugin_data_to_string(
        const RTI_SENSOR_SensorConfig *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    RTI_SENSOR_SensorConfigPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RTI_SENSOR_SensorConfigPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RTI_SENSOR_SensorConfigPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_SENSOR_SensorConfigPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    RTI_SENSOR_SensorConfigPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        RTI_SENSOR_SensorConfig ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *RTI_SENSOR_SensorConfigPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    RTI_SENSOR_SensorConfigPlugin_new(void);

    NDDSUSERDllExport extern void
    RTI_SENSOR_SensorConfigPlugin_delete(struct PRESTypePlugin *);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT_PATIENT_ALARM_TYPEPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT_PATIENT_ALARM_TYPEPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT_PATIENT_ALARM_TYPEPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* ----------------------------------------------------------------------------
    Support functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern void
    RTI_PATIENT_PATIENT_ALARM_TYPEPluginSupport_print_data(
        const RTI_PATIENT_PATIENT_ALARM_TYPE *sample, const char *desc, int indent_level);

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct _patient_id_t
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct _patient_id_t)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * _patient_id_t must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct _patient_id_t.
    */
    typedef  class RTI_PATIENT__patient_id_t RTI_PATIENT__patient_id_tKeyHolder;

    #define RTI_PATIENT__patient_id_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RTI_PATIENT__patient_id_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RTI_PATIENT__patient_id_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RTI_PATIENT__patient_id_tPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define RTI_PATIENT__patient_id_tPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define RTI_PATIENT__patient_id_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RTI_PATIENT__patient_id_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTI_PATIENT__patient_id_t*
    RTI_PATIENT__patient_id_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RTI_PATIENT__patient_id_t*
    RTI_PATIENT__patient_id_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_PATIENT__patient_id_t*
    RTI_PATIENT__patient_id_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT__patient_id_tPluginSupport_copy_data(
        RTI_PATIENT__patient_id_t *out,
        const RTI_PATIENT__patient_id_t *in);

    NDDSUSERDllExport extern void 
    RTI_PATIENT__patient_id_tPluginSupport_destroy_data_w_params(
        RTI_PATIENT__patient_id_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RTI_PATIENT__patient_id_tPluginSupport_destroy_data_ex(
        RTI_PATIENT__patient_id_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_PATIENT__patient_id_tPluginSupport_destroy_data(
        RTI_PATIENT__patient_id_t *sample);

    NDDSUSERDllExport extern void 
    RTI_PATIENT__patient_id_tPluginSupport_print_data(
        const RTI_PATIENT__patient_id_t *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern RTI_PATIENT__patient_id_t*
    RTI_PATIENT__patient_id_tPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_PATIENT__patient_id_t*
    RTI_PATIENT__patient_id_tPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    RTI_PATIENT__patient_id_tPluginSupport_destroy_key_ex(
        RTI_PATIENT__patient_id_tKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_PATIENT__patient_id_tPluginSupport_destroy_key(
        RTI_PATIENT__patient_id_tKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT__patient_id_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT__patient_id_t *out,
        const RTI_PATIENT__patient_id_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    RTI_PATIENT__patient_id_tPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const RTI_PATIENT__patient_id_t *sample); 

    NDDSUSERDllExport extern RTIBool
    RTI_PATIENT__patient_id_tPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const RTI_PATIENT__patient_id_t *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT__patient_id_tPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT__patient_id_t **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    RTI_PATIENT__patient_id_tPlugin_deserialize_from_cdr_buffer(
        RTI_PATIENT__patient_id_t *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    RTI_PATIENT__patient_id_tPlugin_data_to_string(
        const RTI_PATIENT__patient_id_t *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT__patient_id_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RTI_PATIENT__patient_id_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT__patient_id_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT__patient_id_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT__patient_id_tPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT__patient_id_t ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT__patient_id_tPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT__patient_id_tKeyHolder *key, 
        const RTI_PATIENT__patient_id_t *instance);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT__patient_id_tPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT__patient_id_t *instance, 
        const RTI_PATIENT__patient_id_tKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT__patient_id_tPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const RTI_PATIENT__patient_id_t *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT__patient_id_tPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *RTI_PATIENT__patient_id_tPlugin_get_programs();

    #define RTI_PATIENT_Patient_ID_tPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RTI_PATIENT_Patient_ID_tPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RTI_PATIENT_Patient_ID_tPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RTI_PATIENT_Patient_ID_tPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RTI_PATIENT_Patient_ID_tPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTI_PATIENT_Patient_ID_t*
    RTI_PATIENT_Patient_ID_tPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RTI_PATIENT_Patient_ID_t*
    RTI_PATIENT_Patient_ID_tPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_PATIENT_Patient_ID_t*
    RTI_PATIENT_Patient_ID_tPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT_Patient_ID_tPluginSupport_copy_data(
        RTI_PATIENT_Patient_ID_t *out,
        const RTI_PATIENT_Patient_ID_t *in);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_Patient_ID_tPluginSupport_destroy_data_w_params(
        RTI_PATIENT_Patient_ID_t *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_Patient_ID_tPluginSupport_destroy_data_ex(
        RTI_PATIENT_Patient_ID_t *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_Patient_ID_tPluginSupport_destroy_data(
        RTI_PATIENT_Patient_ID_t *sample);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_Patient_ID_tPluginSupport_print_data(
        const RTI_PATIENT_Patient_ID_t *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT_Patient_ID_tPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT_Patient_ID_t *out,
        const RTI_PATIENT_Patient_ID_t *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT_Patient_ID_tPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RTI_PATIENT_Patient_ID_tPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT_Patient_ID_tPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT_Patient_ID_tPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    #define RTI_PATIENT_PatientPulsePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RTI_PATIENT_PatientPulsePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RTI_PATIENT_PatientPulsePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RTI_PATIENT_PatientPulsePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RTI_PATIENT_PatientPulsePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTI_PATIENT_PatientPulse*
    RTI_PATIENT_PatientPulsePluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RTI_PATIENT_PatientPulse*
    RTI_PATIENT_PatientPulsePluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_PATIENT_PatientPulse*
    RTI_PATIENT_PatientPulsePluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT_PatientPulsePluginSupport_copy_data(
        RTI_PATIENT_PatientPulse *out,
        const RTI_PATIENT_PatientPulse *in);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientPulsePluginSupport_destroy_data_w_params(
        RTI_PATIENT_PatientPulse *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientPulsePluginSupport_destroy_data_ex(
        RTI_PATIENT_PatientPulse *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientPulsePluginSupport_destroy_data(
        RTI_PATIENT_PatientPulse *sample);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientPulsePluginSupport_print_data(
        const RTI_PATIENT_PatientPulse *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    RTI_PATIENT_PatientPulsePlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientPulsePlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    RTI_PATIENT_PatientPulsePlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientPulsePlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    RTI_PATIENT_PatientPulsePlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT_PatientPulse *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT_PatientPulsePlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT_PatientPulse *out,
        const RTI_PATIENT_PatientPulse *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    RTI_PATIENT_PatientPulsePlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const RTI_PATIENT_PatientPulse *sample); 

    NDDSUSERDllExport extern RTIBool
    RTI_PATIENT_PatientPulsePlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const RTI_PATIENT_PatientPulse *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT_PatientPulsePlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT_PatientPulse **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    RTI_PATIENT_PatientPulsePlugin_deserialize_from_cdr_buffer(
        RTI_PATIENT_PatientPulse *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    RTI_PATIENT_PatientPulsePlugin_data_to_string(
        const RTI_PATIENT_PatientPulse *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT_PatientPulsePlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RTI_PATIENT_PatientPulsePlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT_PatientPulsePlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT_PatientPulsePlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT_PatientPulsePlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT_PatientPulse ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *RTI_PATIENT_PatientPulsePlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    RTI_PATIENT_PatientPulsePlugin_new(void);

    NDDSUSERDllExport extern void
    RTI_PATIENT_PatientPulsePlugin_delete(struct PRESTypePlugin *);

    #define RTI_PATIENT_PatientInfoPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RTI_PATIENT_PatientInfoPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RTI_PATIENT_PatientInfoPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RTI_PATIENT_PatientInfoPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RTI_PATIENT_PatientInfoPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTI_PATIENT_PatientInfo*
    RTI_PATIENT_PatientInfoPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RTI_PATIENT_PatientInfo*
    RTI_PATIENT_PatientInfoPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_PATIENT_PatientInfo*
    RTI_PATIENT_PatientInfoPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT_PatientInfoPluginSupport_copy_data(
        RTI_PATIENT_PatientInfo *out,
        const RTI_PATIENT_PatientInfo *in);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientInfoPluginSupport_destroy_data_w_params(
        RTI_PATIENT_PatientInfo *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientInfoPluginSupport_destroy_data_ex(
        RTI_PATIENT_PatientInfo *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientInfoPluginSupport_destroy_data(
        RTI_PATIENT_PatientInfo *sample);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientInfoPluginSupport_print_data(
        const RTI_PATIENT_PatientInfo *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    RTI_PATIENT_PatientInfoPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientInfoPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    RTI_PATIENT_PatientInfoPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientInfoPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    RTI_PATIENT_PatientInfoPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT_PatientInfo *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT_PatientInfoPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT_PatientInfo *out,
        const RTI_PATIENT_PatientInfo *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    RTI_PATIENT_PatientInfoPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const RTI_PATIENT_PatientInfo *sample); 

    NDDSUSERDllExport extern RTIBool
    RTI_PATIENT_PatientInfoPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const RTI_PATIENT_PatientInfo *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT_PatientInfoPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT_PatientInfo **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    RTI_PATIENT_PatientInfoPlugin_deserialize_from_cdr_buffer(
        RTI_PATIENT_PatientInfo *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    RTI_PATIENT_PatientInfoPlugin_data_to_string(
        const RTI_PATIENT_PatientInfo *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT_PatientInfoPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RTI_PATIENT_PatientInfoPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT_PatientInfoPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT_PatientInfoPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT_PatientInfoPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT_PatientInfo ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *RTI_PATIENT_PatientInfoPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    RTI_PATIENT_PatientInfoPlugin_new(void);

    NDDSUSERDllExport extern void
    RTI_PATIENT_PatientInfoPlugin_delete(struct PRESTypePlugin *);

    #define RTI_PATIENT_PatientConfigPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define RTI_PATIENT_PatientConfigPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define RTI_PATIENT_PatientConfigPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define RTI_PATIENT_PatientConfigPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define RTI_PATIENT_PatientConfigPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTI_PATIENT_PatientConfig*
    RTI_PATIENT_PatientConfigPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern RTI_PATIENT_PatientConfig*
    RTI_PATIENT_PatientConfigPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern RTI_PATIENT_PatientConfig*
    RTI_PATIENT_PatientConfigPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT_PatientConfigPluginSupport_copy_data(
        RTI_PATIENT_PatientConfig *out,
        const RTI_PATIENT_PatientConfig *in);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientConfigPluginSupport_destroy_data_w_params(
        RTI_PATIENT_PatientConfig *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientConfigPluginSupport_destroy_data_ex(
        RTI_PATIENT_PatientConfig *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientConfigPluginSupport_destroy_data(
        RTI_PATIENT_PatientConfig *sample);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientConfigPluginSupport_print_data(
        const RTI_PATIENT_PatientConfig *sample,
        const char *desc,
        unsigned int indent);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    RTI_PATIENT_PatientConfigPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientConfigPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    RTI_PATIENT_PatientConfigPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    RTI_PATIENT_PatientConfigPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    RTI_PATIENT_PatientConfigPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT_PatientConfig *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT_PatientConfigPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT_PatientConfig *out,
        const RTI_PATIENT_PatientConfig *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    RTI_PATIENT_PatientConfigPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const RTI_PATIENT_PatientConfig *sample); 

    NDDSUSERDllExport extern RTIBool
    RTI_PATIENT_PatientConfigPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const RTI_PATIENT_PatientConfig *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT_PatientConfigPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT_PatientConfig **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    RTI_PATIENT_PatientConfigPlugin_deserialize_from_cdr_buffer(
        RTI_PATIENT_PatientConfig *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    RTI_PATIENT_PatientConfigPlugin_data_to_string(
        const RTI_PATIENT_PatientConfig *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT_PatientConfigPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    RTI_PATIENT_PatientConfigPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT_PatientConfigPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    RTI_PATIENT_PatientConfigPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    RTI_PATIENT_PatientConfigPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        RTI_PATIENT_PatientConfig ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *RTI_PATIENT_PatientConfigPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    RTI_PATIENT_PatientConfigPlugin_new(void);

    NDDSUSERDllExport extern void
    RTI_PATIENT_PatientConfigPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MedicalDemoPlugin_1585937757_h */

