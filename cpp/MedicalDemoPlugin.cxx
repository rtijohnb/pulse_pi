
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MedicalDemo.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#include "xcdr/xcdr_interpreter.h"
#include "xcdr/xcdr_stream.h"

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "dds_c/dds_c_typecode_impl.h"

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include <new>

#include "MedicalDemoPlugin.h"

/* ----------------------------------------------------------------------------
*  Type RTI_TYPES_TimeStamp_t
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

RTI_TYPES_TimeStamp_t*
RTI_TYPES_TimeStamp_tPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    RTI_TYPES_TimeStamp_t *sample = NULL;

    sample = new (std::nothrow) RTI_TYPES_TimeStamp_t ;
    if (sample == NULL) {
        return NULL;
    }

    if (!RTI_TYPES_TimeStamp_t_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

RTI_TYPES_TimeStamp_t *
RTI_TYPES_TimeStamp_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    RTI_TYPES_TimeStamp_t *sample = NULL;

    sample = new (std::nothrow) RTI_TYPES_TimeStamp_t ;

    if(sample == NULL) {
        return NULL;
    }

    if (!RTI_TYPES_TimeStamp_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

RTI_TYPES_TimeStamp_t *
RTI_TYPES_TimeStamp_tPluginSupport_create_data(void)
{
    return RTI_TYPES_TimeStamp_tPluginSupport_create_data_ex(RTI_TRUE);
}

void 
RTI_TYPES_TimeStamp_tPluginSupport_destroy_data_w_params(
    RTI_TYPES_TimeStamp_t *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    RTI_TYPES_TimeStamp_t_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
RTI_TYPES_TimeStamp_tPluginSupport_destroy_data_ex(
    RTI_TYPES_TimeStamp_t *sample,RTIBool deallocate_pointers) {
    RTI_TYPES_TimeStamp_t_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
RTI_TYPES_TimeStamp_tPluginSupport_destroy_data(
    RTI_TYPES_TimeStamp_t *sample) {

    RTI_TYPES_TimeStamp_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
RTI_TYPES_TimeStamp_tPluginSupport_copy_data(
    RTI_TYPES_TimeStamp_t *dst,
    const RTI_TYPES_TimeStamp_t *src)
{
    return RTI_TYPES_TimeStamp_t_copy(dst,(const RTI_TYPES_TimeStamp_t*) src);
}

void 
RTI_TYPES_TimeStamp_tPluginSupport_print_data(
    const RTI_TYPES_TimeStamp_t *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printLongLong(
        sample, "", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
RTI_TYPES_TimeStamp_tPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_TYPES_TimeStamp_t *dst,
    const RTI_TYPES_TimeStamp_t *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return RTI_TYPES_TimeStamp_tPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
RTI_TYPES_TimeStamp_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
RTI_TYPES_TimeStamp_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
RTI_TYPES_TimeStamp_tPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
RTI_TYPES_TimeStamp_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
RTI_TYPES_TimeStamp_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type RTI_TYPES_Duration_t
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

RTI_TYPES_Duration_t*
RTI_TYPES_Duration_tPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    RTI_TYPES_Duration_t *sample = NULL;

    sample = new (std::nothrow) RTI_TYPES_Duration_t ;
    if (sample == NULL) {
        return NULL;
    }

    if (!RTI_TYPES_Duration_t_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

RTI_TYPES_Duration_t *
RTI_TYPES_Duration_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    RTI_TYPES_Duration_t *sample = NULL;

    sample = new (std::nothrow) RTI_TYPES_Duration_t ;

    if(sample == NULL) {
        return NULL;
    }

    if (!RTI_TYPES_Duration_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

RTI_TYPES_Duration_t *
RTI_TYPES_Duration_tPluginSupport_create_data(void)
{
    return RTI_TYPES_Duration_tPluginSupport_create_data_ex(RTI_TRUE);
}

void 
RTI_TYPES_Duration_tPluginSupport_destroy_data_w_params(
    RTI_TYPES_Duration_t *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    RTI_TYPES_Duration_t_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
RTI_TYPES_Duration_tPluginSupport_destroy_data_ex(
    RTI_TYPES_Duration_t *sample,RTIBool deallocate_pointers) {
    RTI_TYPES_Duration_t_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
RTI_TYPES_Duration_tPluginSupport_destroy_data(
    RTI_TYPES_Duration_t *sample) {

    RTI_TYPES_Duration_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
RTI_TYPES_Duration_tPluginSupport_copy_data(
    RTI_TYPES_Duration_t *dst,
    const RTI_TYPES_Duration_t *src)
{
    return RTI_TYPES_Duration_t_copy(dst,(const RTI_TYPES_Duration_t*) src);
}

void 
RTI_TYPES_Duration_tPluginSupport_print_data(
    const RTI_TYPES_Duration_t *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printLong(
        &sample->sec, "sec", indent_level + 1);    

    RTICdrType_printLong(
        &sample->nanosec, "nanosec", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
RTI_TYPES_Duration_tPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_TYPES_Duration_t *dst,
    const RTI_TYPES_Duration_t *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return RTI_TYPES_Duration_tPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
RTI_TYPES_Duration_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
RTI_TYPES_Duration_tPlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const RTI_TYPES_Duration_t *sample,
    DDS_DataRepresentationId_t representation)
{
    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;

    if (length == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_TYPES_Duration_t_get_typecode();
    pd.programs = RTI_TYPES_Duration_tPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    encapsulationId = DDS_TypeCode_get_native_encapsulation(
        (DDS_TypeCode *) plugin.typeCode,
        representation);    
    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    RTI_TYPES_Duration_tPlugin_get_serialized_sample_max_size(
        (PRESTypePluginEndpointData)&epd, 
        RTI_TRUE, 
        encapsulationId,
        0);

    if (buffer == NULL) {
        *length = 
        PRESTypePlugin_interpretedGetSerializedSampleSize(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            encapsulationId,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = PRESTypePlugin_interpretedSerialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        encapsulationId,
        RTI_TRUE,
        NULL);

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;
}

RTIBool
RTI_TYPES_Duration_tPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const RTI_TYPES_Duration_t *sample)
{
    return RTI_TYPES_Duration_tPlugin_serialize_to_cdr_buffer_ex(
        buffer,
        length,
        sample,
        DDS_AUTO_DATA_REPRESENTATION);
}

RTIBool
RTI_TYPES_Duration_tPlugin_deserialize_from_cdr_buffer(
    RTI_TYPES_Duration_t *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePluginDefaultParticipantData pd;
    struct PRESTypePlugin plugin;

    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_TYPES_Duration_t_get_typecode();
    pd.programs = RTI_TYPES_Duration_tPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    RTI_TYPES_Duration_t_finalize_optional_members(sample, RTI_TRUE);
    return PRESTypePlugin_interpretedDeserialize( 
        (PRESTypePluginEndpointData)&epd, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

#ifndef NDDS_STANDALONE_TYPE
DDS_ReturnCode_t
RTI_TYPES_Duration_tPlugin_data_to_string(
    const RTI_TYPES_Duration_t *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }
    if (!RTI_TYPES_Duration_tPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!RTI_TYPES_Duration_tPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }
    data = DDS_DynamicData_new(
        RTI_TYPES_Duration_t_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}
#endif

unsigned int 
RTI_TYPES_Duration_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
RTI_TYPES_Duration_tPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool RTI_TYPES_Duration_tPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_TYPES_Duration_t **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= PRESTypePlugin_interpretedDeserializeKey(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    return result;    

}

unsigned int
RTI_TYPES_Duration_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
RTI_TYPES_Duration_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

struct RTIXCdrInterpreterPrograms *RTI_TYPES_Duration_tPlugin_get_programs()
{
    return ::rti::xcdr::get_cdr_serialization_programs<
    RTI_TYPES_Duration_t, 
    true, true, true>();
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type RTI_TYPES_AnalogReadng_t
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

RTI_TYPES_AnalogReadng_t*
RTI_TYPES_AnalogReadng_tPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    RTI_TYPES_AnalogReadng_t *sample = NULL;

    sample = new (std::nothrow) RTI_TYPES_AnalogReadng_t ;
    if (sample == NULL) {
        return NULL;
    }

    if (!RTI_TYPES_AnalogReadng_t_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

RTI_TYPES_AnalogReadng_t *
RTI_TYPES_AnalogReadng_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    RTI_TYPES_AnalogReadng_t *sample = NULL;

    sample = new (std::nothrow) RTI_TYPES_AnalogReadng_t ;

    if(sample == NULL) {
        return NULL;
    }

    if (!RTI_TYPES_AnalogReadng_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

RTI_TYPES_AnalogReadng_t *
RTI_TYPES_AnalogReadng_tPluginSupport_create_data(void)
{
    return RTI_TYPES_AnalogReadng_tPluginSupport_create_data_ex(RTI_TRUE);
}

void 
RTI_TYPES_AnalogReadng_tPluginSupport_destroy_data_w_params(
    RTI_TYPES_AnalogReadng_t *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    RTI_TYPES_AnalogReadng_t_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
RTI_TYPES_AnalogReadng_tPluginSupport_destroy_data_ex(
    RTI_TYPES_AnalogReadng_t *sample,RTIBool deallocate_pointers) {
    RTI_TYPES_AnalogReadng_t_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
RTI_TYPES_AnalogReadng_tPluginSupport_destroy_data(
    RTI_TYPES_AnalogReadng_t *sample) {

    RTI_TYPES_AnalogReadng_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
RTI_TYPES_AnalogReadng_tPluginSupport_copy_data(
    RTI_TYPES_AnalogReadng_t *dst,
    const RTI_TYPES_AnalogReadng_t *src)
{
    return RTI_TYPES_AnalogReadng_t_copy(dst,(const RTI_TYPES_AnalogReadng_t*) src);
}

void 
RTI_TYPES_AnalogReadng_tPluginSupport_print_data(
    const RTI_TYPES_AnalogReadng_t *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printUnsignedShort(
        sample, "", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
RTI_TYPES_AnalogReadng_tPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_TYPES_AnalogReadng_t *dst,
    const RTI_TYPES_AnalogReadng_t *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return RTI_TYPES_AnalogReadng_tPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
RTI_TYPES_AnalogReadng_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
RTI_TYPES_AnalogReadng_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
RTI_TYPES_AnalogReadng_tPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
RTI_TYPES_AnalogReadng_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
RTI_TYPES_AnalogReadng_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type RTI_TYPES_Voltage_t
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

RTI_TYPES_Voltage_t*
RTI_TYPES_Voltage_tPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    RTI_TYPES_Voltage_t *sample = NULL;

    sample = new (std::nothrow) RTI_TYPES_Voltage_t ;
    if (sample == NULL) {
        return NULL;
    }

    if (!RTI_TYPES_Voltage_t_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

RTI_TYPES_Voltage_t *
RTI_TYPES_Voltage_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    RTI_TYPES_Voltage_t *sample = NULL;

    sample = new (std::nothrow) RTI_TYPES_Voltage_t ;

    if(sample == NULL) {
        return NULL;
    }

    if (!RTI_TYPES_Voltage_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

RTI_TYPES_Voltage_t *
RTI_TYPES_Voltage_tPluginSupport_create_data(void)
{
    return RTI_TYPES_Voltage_tPluginSupport_create_data_ex(RTI_TRUE);
}

void 
RTI_TYPES_Voltage_tPluginSupport_destroy_data_w_params(
    RTI_TYPES_Voltage_t *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    RTI_TYPES_Voltage_t_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
RTI_TYPES_Voltage_tPluginSupport_destroy_data_ex(
    RTI_TYPES_Voltage_t *sample,RTIBool deallocate_pointers) {
    RTI_TYPES_Voltage_t_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
RTI_TYPES_Voltage_tPluginSupport_destroy_data(
    RTI_TYPES_Voltage_t *sample) {

    RTI_TYPES_Voltage_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
RTI_TYPES_Voltage_tPluginSupport_copy_data(
    RTI_TYPES_Voltage_t *dst,
    const RTI_TYPES_Voltage_t *src)
{
    return RTI_TYPES_Voltage_t_copy(dst,(const RTI_TYPES_Voltage_t*) src);
}

void 
RTI_TYPES_Voltage_tPluginSupport_print_data(
    const RTI_TYPES_Voltage_t *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printFloat(
        sample, "", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
RTI_TYPES_Voltage_tPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_TYPES_Voltage_t *dst,
    const RTI_TYPES_Voltage_t *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return RTI_TYPES_Voltage_tPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
RTI_TYPES_Voltage_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
RTI_TYPES_Voltage_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
RTI_TYPES_Voltage_tPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
RTI_TYPES_Voltage_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
RTI_TYPES_Voltage_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type RTI_TYPES_Temperature_t
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

RTI_TYPES_Temperature_t*
RTI_TYPES_Temperature_tPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    RTI_TYPES_Temperature_t *sample = NULL;

    sample = new (std::nothrow) RTI_TYPES_Temperature_t ;
    if (sample == NULL) {
        return NULL;
    }

    if (!RTI_TYPES_Temperature_t_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

RTI_TYPES_Temperature_t *
RTI_TYPES_Temperature_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    RTI_TYPES_Temperature_t *sample = NULL;

    sample = new (std::nothrow) RTI_TYPES_Temperature_t ;

    if(sample == NULL) {
        return NULL;
    }

    if (!RTI_TYPES_Temperature_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

RTI_TYPES_Temperature_t *
RTI_TYPES_Temperature_tPluginSupport_create_data(void)
{
    return RTI_TYPES_Temperature_tPluginSupport_create_data_ex(RTI_TRUE);
}

void 
RTI_TYPES_Temperature_tPluginSupport_destroy_data_w_params(
    RTI_TYPES_Temperature_t *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    RTI_TYPES_Temperature_t_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
RTI_TYPES_Temperature_tPluginSupport_destroy_data_ex(
    RTI_TYPES_Temperature_t *sample,RTIBool deallocate_pointers) {
    RTI_TYPES_Temperature_t_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
RTI_TYPES_Temperature_tPluginSupport_destroy_data(
    RTI_TYPES_Temperature_t *sample) {

    RTI_TYPES_Temperature_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
RTI_TYPES_Temperature_tPluginSupport_copy_data(
    RTI_TYPES_Temperature_t *dst,
    const RTI_TYPES_Temperature_t *src)
{
    return RTI_TYPES_Temperature_t_copy(dst,(const RTI_TYPES_Temperature_t*) src);
}

void 
RTI_TYPES_Temperature_tPluginSupport_print_data(
    const RTI_TYPES_Temperature_t *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printFloat(
        sample, "", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
RTI_TYPES_Temperature_tPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_TYPES_Temperature_t *dst,
    const RTI_TYPES_Temperature_t *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return RTI_TYPES_Temperature_tPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
RTI_TYPES_Temperature_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
RTI_TYPES_Temperature_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
RTI_TYPES_Temperature_tPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
RTI_TYPES_Temperature_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
RTI_TYPES_Temperature_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

unsigned int 
RTI_TYPES_Temperature_Units_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void RTI_TYPES_Temperature_Units_tPluginSupport_print_data(
    const RTI_TYPES_Temperature_Units_t *sample,
    const char *description, int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILog_debug("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "RTI_TYPES_Temperature_Units_t", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type RTI_TYPES_Percentage_t
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

RTI_TYPES_Percentage_t*
RTI_TYPES_Percentage_tPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    RTI_TYPES_Percentage_t *sample = NULL;

    sample = new (std::nothrow) RTI_TYPES_Percentage_t ;
    if (sample == NULL) {
        return NULL;
    }

    if (!RTI_TYPES_Percentage_t_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

RTI_TYPES_Percentage_t *
RTI_TYPES_Percentage_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    RTI_TYPES_Percentage_t *sample = NULL;

    sample = new (std::nothrow) RTI_TYPES_Percentage_t ;

    if(sample == NULL) {
        return NULL;
    }

    if (!RTI_TYPES_Percentage_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

RTI_TYPES_Percentage_t *
RTI_TYPES_Percentage_tPluginSupport_create_data(void)
{
    return RTI_TYPES_Percentage_tPluginSupport_create_data_ex(RTI_TRUE);
}

void 
RTI_TYPES_Percentage_tPluginSupport_destroy_data_w_params(
    RTI_TYPES_Percentage_t *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    RTI_TYPES_Percentage_t_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
RTI_TYPES_Percentage_tPluginSupport_destroy_data_ex(
    RTI_TYPES_Percentage_t *sample,RTIBool deallocate_pointers) {
    RTI_TYPES_Percentage_t_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
RTI_TYPES_Percentage_tPluginSupport_destroy_data(
    RTI_TYPES_Percentage_t *sample) {

    RTI_TYPES_Percentage_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
RTI_TYPES_Percentage_tPluginSupport_copy_data(
    RTI_TYPES_Percentage_t *dst,
    const RTI_TYPES_Percentage_t *src)
{
    return RTI_TYPES_Percentage_t_copy(dst,(const RTI_TYPES_Percentage_t*) src);
}

void 
RTI_TYPES_Percentage_tPluginSupport_print_data(
    const RTI_TYPES_Percentage_t *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printFloat(
        sample, "", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
RTI_TYPES_Percentage_tPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_TYPES_Percentage_t *dst,
    const RTI_TYPES_Percentage_t *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return RTI_TYPES_Percentage_tPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
RTI_TYPES_Percentage_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
RTI_TYPES_Percentage_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
RTI_TYPES_Percentage_tPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
RTI_TYPES_Percentage_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
RTI_TYPES_Percentage_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type RTI_SENSOR__sensor_id_t
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

RTI_SENSOR__sensor_id_t*
RTI_SENSOR__sensor_id_tPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    RTI_SENSOR__sensor_id_t *sample = NULL;

    sample = new (std::nothrow) RTI_SENSOR__sensor_id_t ;
    if (sample == NULL) {
        return NULL;
    }

    if (!RTI_SENSOR__sensor_id_t_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

RTI_SENSOR__sensor_id_t *
RTI_SENSOR__sensor_id_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    RTI_SENSOR__sensor_id_t *sample = NULL;

    sample = new (std::nothrow) RTI_SENSOR__sensor_id_t ;

    if(sample == NULL) {
        return NULL;
    }

    if (!RTI_SENSOR__sensor_id_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

RTI_SENSOR__sensor_id_t *
RTI_SENSOR__sensor_id_tPluginSupport_create_data(void)
{
    return RTI_SENSOR__sensor_id_tPluginSupport_create_data_ex(RTI_TRUE);
}

void 
RTI_SENSOR__sensor_id_tPluginSupport_destroy_data_w_params(
    RTI_SENSOR__sensor_id_t *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    RTI_SENSOR__sensor_id_t_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
RTI_SENSOR__sensor_id_tPluginSupport_destroy_data_ex(
    RTI_SENSOR__sensor_id_t *sample,RTIBool deallocate_pointers) {
    RTI_SENSOR__sensor_id_t_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
RTI_SENSOR__sensor_id_tPluginSupport_destroy_data(
    RTI_SENSOR__sensor_id_t *sample) {

    RTI_SENSOR__sensor_id_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
RTI_SENSOR__sensor_id_tPluginSupport_copy_data(
    RTI_SENSOR__sensor_id_t *dst,
    const RTI_SENSOR__sensor_id_t *src)
{
    return RTI_SENSOR__sensor_id_t_copy(dst,(const RTI_SENSOR__sensor_id_t*) src);
}

void 
RTI_SENSOR__sensor_id_tPluginSupport_print_data(
    const RTI_SENSOR__sensor_id_t *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    if (sample->SensorTag==NULL) {
        RTICdrType_printString(
            NULL,"SensorTag", indent_level + 1);
    } else {
        RTICdrType_printString(
            sample->SensorTag,"SensorTag", indent_level + 1);    
    }

}

RTI_SENSOR__sensor_id_t *
RTI_SENSOR__sensor_id_tPluginSupport_create_key_ex(RTIBool allocate_pointers){
    RTI_SENSOR__sensor_id_t *key = NULL;

    key = new (std::nothrow) RTI_SENSOR__sensor_id_tKeyHolder ;

    RTI_SENSOR__sensor_id_t_initialize_ex(key,allocate_pointers, RTI_TRUE);

    return key;
}

RTI_SENSOR__sensor_id_t *
RTI_SENSOR__sensor_id_tPluginSupport_create_key(void)
{
    return  RTI_SENSOR__sensor_id_tPluginSupport_create_key_ex(RTI_TRUE);
}

void 
RTI_SENSOR__sensor_id_tPluginSupport_destroy_key_ex(
    RTI_SENSOR__sensor_id_tKeyHolder *key,RTIBool deallocate_pointers)
{
    RTI_SENSOR__sensor_id_t_finalize_ex(key,deallocate_pointers);

    delete  key;
    key=NULL;
}

void 
RTI_SENSOR__sensor_id_tPluginSupport_destroy_key(
    RTI_SENSOR__sensor_id_tKeyHolder *key) {

    RTI_SENSOR__sensor_id_tPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
RTI_SENSOR__sensor_id_tPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_SENSOR__sensor_id_t *dst,
    const RTI_SENSOR__sensor_id_t *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return RTI_SENSOR__sensor_id_tPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
RTI_SENSOR__sensor_id_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
RTI_SENSOR__sensor_id_tPlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const RTI_SENSOR__sensor_id_t *sample,
    DDS_DataRepresentationId_t representation)
{
    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;

    if (length == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_SENSOR__sensor_id_t_get_typecode();
    pd.programs = RTI_SENSOR__sensor_id_tPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    encapsulationId = DDS_TypeCode_get_native_encapsulation(
        (DDS_TypeCode *) plugin.typeCode,
        representation);    
    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    RTI_SENSOR__sensor_id_tPlugin_get_serialized_sample_max_size(
        (PRESTypePluginEndpointData)&epd, 
        RTI_TRUE, 
        encapsulationId,
        0);

    if (buffer == NULL) {
        *length = 
        PRESTypePlugin_interpretedGetSerializedSampleSize(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            encapsulationId,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = PRESTypePlugin_interpretedSerialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        encapsulationId,
        RTI_TRUE,
        NULL);

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;
}

RTIBool
RTI_SENSOR__sensor_id_tPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const RTI_SENSOR__sensor_id_t *sample)
{
    return RTI_SENSOR__sensor_id_tPlugin_serialize_to_cdr_buffer_ex(
        buffer,
        length,
        sample,
        DDS_AUTO_DATA_REPRESENTATION);
}

RTIBool
RTI_SENSOR__sensor_id_tPlugin_deserialize_from_cdr_buffer(
    RTI_SENSOR__sensor_id_t *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePluginDefaultParticipantData pd;
    struct PRESTypePlugin plugin;

    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_SENSOR__sensor_id_t_get_typecode();
    pd.programs = RTI_SENSOR__sensor_id_tPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    RTI_SENSOR__sensor_id_t_finalize_optional_members(sample, RTI_TRUE);
    return PRESTypePlugin_interpretedDeserialize( 
        (PRESTypePluginEndpointData)&epd, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

#ifndef NDDS_STANDALONE_TYPE
DDS_ReturnCode_t
RTI_SENSOR__sensor_id_tPlugin_data_to_string(
    const RTI_SENSOR__sensor_id_t *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }
    if (!RTI_SENSOR__sensor_id_tPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!RTI_SENSOR__sensor_id_tPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }
    data = DDS_DynamicData_new(
        RTI_SENSOR__sensor_id_t_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}
#endif

unsigned int 
RTI_SENSOR__sensor_id_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
RTI_SENSOR__sensor_id_tPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool RTI_SENSOR__sensor_id_tPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_SENSOR__sensor_id_t **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= PRESTypePlugin_interpretedDeserializeKey(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    return result;    

}

unsigned int
RTI_SENSOR__sensor_id_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
RTI_SENSOR__sensor_id_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
RTI_SENSOR__sensor_id_tPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_SENSOR__sensor_id_tKeyHolder *dst, 
    const RTI_SENSOR__sensor_id_t *src)
{
    if (endpoint_data) {} /* To avoid warnings */   

    if (!RTICdrType_copyStringEx (
        &dst->SensorTag, src->SensorTag, 
        (32) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool 
RTI_SENSOR__sensor_id_tPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    RTI_SENSOR__sensor_id_t *dst, const
    RTI_SENSOR__sensor_id_tKeyHolder *src)
{
    if (endpoint_data) {} /* To avoid warnings */   
    if (!RTICdrType_copyStringEx (
        &dst->SensorTag, src->SensorTag, 
        (32) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool 
RTI_SENSOR__sensor_id_tPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const RTI_SENSOR__sensor_id_t *instance,
    RTIEncapsulationId encapsulationId)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;
    RTIXCdrBoolean iCdrv2;

    iCdrv2 = RTIXCdrEncapsulationId_isCdrV2(encapsulationId);
    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
        endpoint_data,
        instance,
        md5Stream,
        iCdrv2?
        RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
        RTI_CDR_ENCAPSULATION_ID_CDR_BE,
        NULL)) 
    {
        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)PRESTypePlugin_interpretedGetSerializedSampleSize(
            endpoint_data,
            RTI_FALSE,
            iCdrv2?
            RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
            endpoint_data,
            instance,
            md5Stream, 
            iCdrv2?
            RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data, iCdrv2) > 
    (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH) ||
    PRESTypePluginDefaultEndpointData_forceMD5KeyHash(endpoint_data)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }

    return RTI_TRUE;
}

RTIBool 
RTI_SENSOR__sensor_id_tPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    RTI_SENSOR__sensor_id_t * sample = NULL;
    sample = (RTI_SENSOR__sensor_id_t *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
    if (sample == NULL) {
        return RTI_FALSE;
    }

    if (!PRESTypePlugin_interpretedSerializedSampleToKey(
        endpoint_data,
        sample,
        stream, 
        deserialize_encapsulation, 
        RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if (!RTI_SENSOR__sensor_id_tPlugin_instance_to_keyhash(
        endpoint_data, 
        keyhash, 
        sample,
        RTICdrStream_getEncapsulationKind(stream))) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

struct RTIXCdrInterpreterPrograms *RTI_SENSOR__sensor_id_tPlugin_get_programs()
{
    return ::rti::xcdr::get_cdr_serialization_programs<
    RTI_SENSOR__sensor_id_t, 
    true, true, true>();
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type RTI_SENSOR_SensorID_t
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

RTI_SENSOR_SensorID_t*
RTI_SENSOR_SensorID_tPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    RTI_SENSOR_SensorID_t *sample = NULL;

    sample = new (std::nothrow) RTI_SENSOR_SensorID_t ;
    if (sample == NULL) {
        return NULL;
    }

    if (!RTI_SENSOR_SensorID_t_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

RTI_SENSOR_SensorID_t *
RTI_SENSOR_SensorID_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    RTI_SENSOR_SensorID_t *sample = NULL;

    sample = new (std::nothrow) RTI_SENSOR_SensorID_t ;

    if(sample == NULL) {
        return NULL;
    }

    if (!RTI_SENSOR_SensorID_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

RTI_SENSOR_SensorID_t *
RTI_SENSOR_SensorID_tPluginSupport_create_data(void)
{
    return RTI_SENSOR_SensorID_tPluginSupport_create_data_ex(RTI_TRUE);
}

void 
RTI_SENSOR_SensorID_tPluginSupport_destroy_data_w_params(
    RTI_SENSOR_SensorID_t *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    RTI_SENSOR_SensorID_t_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
RTI_SENSOR_SensorID_tPluginSupport_destroy_data_ex(
    RTI_SENSOR_SensorID_t *sample,RTIBool deallocate_pointers) {
    RTI_SENSOR_SensorID_t_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
RTI_SENSOR_SensorID_tPluginSupport_destroy_data(
    RTI_SENSOR_SensorID_t *sample) {

    RTI_SENSOR_SensorID_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
RTI_SENSOR_SensorID_tPluginSupport_copy_data(
    RTI_SENSOR_SensorID_t *dst,
    const RTI_SENSOR_SensorID_t *src)
{
    return RTI_SENSOR_SensorID_t_copy(dst,(const RTI_SENSOR_SensorID_t*) src);
}

void 
RTI_SENSOR_SensorID_tPluginSupport_print_data(
    const RTI_SENSOR_SensorID_t *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTI_SENSOR__sensor_id_tPluginSupport_print_data(
        (const RTI_SENSOR__sensor_id_t*) sample, "", indent_level + 1);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
RTI_SENSOR_SensorID_tPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_SENSOR_SensorID_t *dst,
    const RTI_SENSOR_SensorID_t *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return RTI_SENSOR_SensorID_tPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
RTI_SENSOR_SensorID_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
RTI_SENSOR_SensorID_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
RTI_SENSOR_SensorID_tPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
RTI_SENSOR_SensorID_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
RTI_SENSOR_SensorID_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type RTI_SENSOR_SensorPeriodics
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

RTI_SENSOR_SensorPeriodics*
RTI_SENSOR_SensorPeriodicsPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    RTI_SENSOR_SensorPeriodics *sample = NULL;

    sample = new (std::nothrow) RTI_SENSOR_SensorPeriodics ;
    if (sample == NULL) {
        return NULL;
    }

    if (!RTI_SENSOR_SensorPeriodics_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

RTI_SENSOR_SensorPeriodics *
RTI_SENSOR_SensorPeriodicsPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    RTI_SENSOR_SensorPeriodics *sample = NULL;

    sample = new (std::nothrow) RTI_SENSOR_SensorPeriodics ;

    if(sample == NULL) {
        return NULL;
    }

    if (!RTI_SENSOR_SensorPeriodics_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

RTI_SENSOR_SensorPeriodics *
RTI_SENSOR_SensorPeriodicsPluginSupport_create_data(void)
{
    return RTI_SENSOR_SensorPeriodicsPluginSupport_create_data_ex(RTI_TRUE);
}

void 
RTI_SENSOR_SensorPeriodicsPluginSupport_destroy_data_w_params(
    RTI_SENSOR_SensorPeriodics *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    RTI_SENSOR_SensorPeriodics_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
RTI_SENSOR_SensorPeriodicsPluginSupport_destroy_data_ex(
    RTI_SENSOR_SensorPeriodics *sample,RTIBool deallocate_pointers) {
    RTI_SENSOR_SensorPeriodics_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
RTI_SENSOR_SensorPeriodicsPluginSupport_destroy_data(
    RTI_SENSOR_SensorPeriodics *sample) {

    RTI_SENSOR_SensorPeriodicsPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
RTI_SENSOR_SensorPeriodicsPluginSupport_copy_data(
    RTI_SENSOR_SensorPeriodics *dst,
    const RTI_SENSOR_SensorPeriodics *src)
{
    return RTI_SENSOR_SensorPeriodics_copy(dst,(const RTI_SENSOR_SensorPeriodics*) src);
}

void 
RTI_SENSOR_SensorPeriodicsPluginSupport_print_data(
    const RTI_SENSOR_SensorPeriodics *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTI_SENSOR__sensor_id_tPluginSupport_print_data(
        (const RTI_SENSOR__sensor_id_t*) &sample->id, "id", indent_level + 1);

    RTICdrType_printLongLong(
        &sample->timestamp, "timestamp", indent_level + 1);    

    RTICdrType_printFloat(
        &sample->exampleSensorReading, "exampleSensorReading", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
RTI_SENSOR_SensorPeriodicsPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
    RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;

    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    pd = (struct PRESTypePluginDefaultParticipantData *)
    PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        RTI_SENSOR_SensorPeriodics_get_typecode(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);
    if (programs == NULL) {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData) pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void 
RTI_SENSOR_SensorPeriodicsPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{  		
    if (participant_data != NULL) {
        struct PRESTypePluginDefaultParticipantData *pd = 
        (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL) {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
RTI_SENSOR_SensorPeriodicsPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;
    unsigned int serializedSampleMaxSize = 0;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    if (participant_data == NULL) {
        return NULL;
    } 

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        RTI_SENSOR_SensorPeriodicsPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        RTI_SENSOR_SensorPeriodicsPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = RTI_SENSOR_SensorPeriodicsPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            RTI_SENSOR_SensorPeriodicsPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
RTI_SENSOR_SensorPeriodicsPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
RTI_SENSOR_SensorPeriodicsPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_SENSOR_SensorPeriodics *sample,
    void *handle)
{
    RTI_SENSOR_SensorPeriodics_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
RTI_SENSOR_SensorPeriodicsPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_SENSOR_SensorPeriodics *dst,
    const RTI_SENSOR_SensorPeriodics *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return RTI_SENSOR_SensorPeriodicsPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
RTI_SENSOR_SensorPeriodicsPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
RTI_SENSOR_SensorPeriodicsPlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const RTI_SENSOR_SensorPeriodics *sample,
    DDS_DataRepresentationId_t representation)
{
    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;

    if (length == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_SENSOR_SensorPeriodics_get_typecode();
    pd.programs = RTI_SENSOR_SensorPeriodicsPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    encapsulationId = DDS_TypeCode_get_native_encapsulation(
        (DDS_TypeCode *) plugin.typeCode,
        representation);    
    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    RTI_SENSOR_SensorPeriodicsPlugin_get_serialized_sample_max_size(
        (PRESTypePluginEndpointData)&epd, 
        RTI_TRUE, 
        encapsulationId,
        0);

    if (buffer == NULL) {
        *length = 
        PRESTypePlugin_interpretedGetSerializedSampleSize(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            encapsulationId,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = PRESTypePlugin_interpretedSerialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        encapsulationId,
        RTI_TRUE,
        NULL);

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;
}

RTIBool
RTI_SENSOR_SensorPeriodicsPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const RTI_SENSOR_SensorPeriodics *sample)
{
    return RTI_SENSOR_SensorPeriodicsPlugin_serialize_to_cdr_buffer_ex(
        buffer,
        length,
        sample,
        DDS_AUTO_DATA_REPRESENTATION);
}

RTIBool
RTI_SENSOR_SensorPeriodicsPlugin_deserialize_from_cdr_buffer(
    RTI_SENSOR_SensorPeriodics *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePluginDefaultParticipantData pd;
    struct PRESTypePlugin plugin;

    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_SENSOR_SensorPeriodics_get_typecode();
    pd.programs = RTI_SENSOR_SensorPeriodicsPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    RTI_SENSOR_SensorPeriodics_finalize_optional_members(sample, RTI_TRUE);
    return PRESTypePlugin_interpretedDeserialize( 
        (PRESTypePluginEndpointData)&epd, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

#ifndef NDDS_STANDALONE_TYPE
DDS_ReturnCode_t
RTI_SENSOR_SensorPeriodicsPlugin_data_to_string(
    const RTI_SENSOR_SensorPeriodics *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }
    if (!RTI_SENSOR_SensorPeriodicsPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!RTI_SENSOR_SensorPeriodicsPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }
    data = DDS_DynamicData_new(
        RTI_SENSOR_SensorPeriodics_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}
#endif

unsigned int 
RTI_SENSOR_SensorPeriodicsPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
RTI_SENSOR_SensorPeriodicsPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool RTI_SENSOR_SensorPeriodicsPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_SENSOR_SensorPeriodics **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= PRESTypePlugin_interpretedDeserializeKey(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    return result;    

}

unsigned int
RTI_SENSOR_SensorPeriodicsPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
RTI_SENSOR_SensorPeriodicsPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

struct RTIXCdrInterpreterPrograms *RTI_SENSOR_SensorPeriodicsPlugin_get_programs()
{
    return ::rti::xcdr::get_cdr_serialization_programs<
    RTI_SENSOR_SensorPeriodics, 
    true, true, true>();
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *RTI_SENSOR_SensorPeriodicsPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    RTI_SENSOR_SensorPeriodicsPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    RTI_SENSOR_SensorPeriodicsPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    RTI_SENSOR_SensorPeriodicsPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    RTI_SENSOR_SensorPeriodicsPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    RTI_SENSOR_SensorPeriodicsPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    RTI_SENSOR_SensorPeriodicsPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    RTI_SENSOR_SensorPeriodicsPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    RTI_SENSOR_SensorPeriodics_finalize_optional_members;

    plugin->serializeFnc = 
    (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    RTI_SENSOR_SensorPeriodicsPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL; 
    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    RTI_SENSOR_SensorPeriodicsPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    RTI_SENSOR_SensorPeriodicsPlugin_return_sample;
    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    RTI_SENSOR_SensorPeriodicsPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    #ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL; 
    #else
    plugin->typeCode =  (struct RTICdrTypeCode *)RTI_SENSOR_SensorPeriodics_get_typecode();
    #endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    RTI_SENSOR_SensorPeriodicsPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    RTI_SENSOR_SensorPeriodicsPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;  
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL; 
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    plugin->endpointTypeName = RTI_SENSOR_SensorPeriodicsTYPENAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void
RTI_SENSOR_SensorPeriodicsPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type RTI_SENSOR_SensorInfo
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

RTI_SENSOR_SensorInfo*
RTI_SENSOR_SensorInfoPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    RTI_SENSOR_SensorInfo *sample = NULL;

    sample = new (std::nothrow) RTI_SENSOR_SensorInfo ;
    if (sample == NULL) {
        return NULL;
    }

    if (!RTI_SENSOR_SensorInfo_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

RTI_SENSOR_SensorInfo *
RTI_SENSOR_SensorInfoPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    RTI_SENSOR_SensorInfo *sample = NULL;

    sample = new (std::nothrow) RTI_SENSOR_SensorInfo ;

    if(sample == NULL) {
        return NULL;
    }

    if (!RTI_SENSOR_SensorInfo_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

RTI_SENSOR_SensorInfo *
RTI_SENSOR_SensorInfoPluginSupport_create_data(void)
{
    return RTI_SENSOR_SensorInfoPluginSupport_create_data_ex(RTI_TRUE);
}

void 
RTI_SENSOR_SensorInfoPluginSupport_destroy_data_w_params(
    RTI_SENSOR_SensorInfo *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    RTI_SENSOR_SensorInfo_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
RTI_SENSOR_SensorInfoPluginSupport_destroy_data_ex(
    RTI_SENSOR_SensorInfo *sample,RTIBool deallocate_pointers) {
    RTI_SENSOR_SensorInfo_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
RTI_SENSOR_SensorInfoPluginSupport_destroy_data(
    RTI_SENSOR_SensorInfo *sample) {

    RTI_SENSOR_SensorInfoPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
RTI_SENSOR_SensorInfoPluginSupport_copy_data(
    RTI_SENSOR_SensorInfo *dst,
    const RTI_SENSOR_SensorInfo *src)
{
    return RTI_SENSOR_SensorInfo_copy(dst,(const RTI_SENSOR_SensorInfo*) src);
}

void 
RTI_SENSOR_SensorInfoPluginSupport_print_data(
    const RTI_SENSOR_SensorInfo *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTI_SENSOR__sensor_id_tPluginSupport_print_data(
        (const RTI_SENSOR__sensor_id_t*) &sample->id, "id", indent_level + 1);

    RTICdrType_printLong(
        &sample->parameter1, "parameter1", indent_level + 1);    

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
RTI_SENSOR_SensorInfoPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
    RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;

    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    pd = (struct PRESTypePluginDefaultParticipantData *)
    PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        RTI_SENSOR_SensorInfo_get_typecode(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);
    if (programs == NULL) {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData) pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void 
RTI_SENSOR_SensorInfoPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{  		
    if (participant_data != NULL) {
        struct PRESTypePluginDefaultParticipantData *pd = 
        (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL) {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
RTI_SENSOR_SensorInfoPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;
    unsigned int serializedSampleMaxSize = 0;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    if (participant_data == NULL) {
        return NULL;
    } 

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        RTI_SENSOR_SensorInfoPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        RTI_SENSOR_SensorInfoPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = RTI_SENSOR_SensorInfoPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            RTI_SENSOR_SensorInfoPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
RTI_SENSOR_SensorInfoPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
RTI_SENSOR_SensorInfoPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_SENSOR_SensorInfo *sample,
    void *handle)
{
    RTI_SENSOR_SensorInfo_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
RTI_SENSOR_SensorInfoPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_SENSOR_SensorInfo *dst,
    const RTI_SENSOR_SensorInfo *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return RTI_SENSOR_SensorInfoPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
RTI_SENSOR_SensorInfoPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
RTI_SENSOR_SensorInfoPlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const RTI_SENSOR_SensorInfo *sample,
    DDS_DataRepresentationId_t representation)
{
    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;

    if (length == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_SENSOR_SensorInfo_get_typecode();
    pd.programs = RTI_SENSOR_SensorInfoPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    encapsulationId = DDS_TypeCode_get_native_encapsulation(
        (DDS_TypeCode *) plugin.typeCode,
        representation);    
    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    RTI_SENSOR_SensorInfoPlugin_get_serialized_sample_max_size(
        (PRESTypePluginEndpointData)&epd, 
        RTI_TRUE, 
        encapsulationId,
        0);

    if (buffer == NULL) {
        *length = 
        PRESTypePlugin_interpretedGetSerializedSampleSize(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            encapsulationId,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = PRESTypePlugin_interpretedSerialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        encapsulationId,
        RTI_TRUE,
        NULL);

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;
}

RTIBool
RTI_SENSOR_SensorInfoPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const RTI_SENSOR_SensorInfo *sample)
{
    return RTI_SENSOR_SensorInfoPlugin_serialize_to_cdr_buffer_ex(
        buffer,
        length,
        sample,
        DDS_AUTO_DATA_REPRESENTATION);
}

RTIBool
RTI_SENSOR_SensorInfoPlugin_deserialize_from_cdr_buffer(
    RTI_SENSOR_SensorInfo *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePluginDefaultParticipantData pd;
    struct PRESTypePlugin plugin;

    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_SENSOR_SensorInfo_get_typecode();
    pd.programs = RTI_SENSOR_SensorInfoPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    RTI_SENSOR_SensorInfo_finalize_optional_members(sample, RTI_TRUE);
    return PRESTypePlugin_interpretedDeserialize( 
        (PRESTypePluginEndpointData)&epd, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

#ifndef NDDS_STANDALONE_TYPE
DDS_ReturnCode_t
RTI_SENSOR_SensorInfoPlugin_data_to_string(
    const RTI_SENSOR_SensorInfo *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }
    if (!RTI_SENSOR_SensorInfoPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!RTI_SENSOR_SensorInfoPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }
    data = DDS_DynamicData_new(
        RTI_SENSOR_SensorInfo_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}
#endif

unsigned int 
RTI_SENSOR_SensorInfoPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
RTI_SENSOR_SensorInfoPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool RTI_SENSOR_SensorInfoPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_SENSOR_SensorInfo **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= PRESTypePlugin_interpretedDeserializeKey(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    return result;    

}

unsigned int
RTI_SENSOR_SensorInfoPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
RTI_SENSOR_SensorInfoPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

struct RTIXCdrInterpreterPrograms *RTI_SENSOR_SensorInfoPlugin_get_programs()
{
    return ::rti::xcdr::get_cdr_serialization_programs<
    RTI_SENSOR_SensorInfo, 
    true, true, true>();
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *RTI_SENSOR_SensorInfoPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    RTI_SENSOR_SensorInfoPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    RTI_SENSOR_SensorInfoPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    RTI_SENSOR_SensorInfoPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    RTI_SENSOR_SensorInfoPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    RTI_SENSOR_SensorInfoPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    RTI_SENSOR_SensorInfoPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    RTI_SENSOR_SensorInfoPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    RTI_SENSOR_SensorInfo_finalize_optional_members;

    plugin->serializeFnc = 
    (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    RTI_SENSOR_SensorInfoPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL; 
    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    RTI_SENSOR_SensorInfoPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    RTI_SENSOR_SensorInfoPlugin_return_sample;
    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    RTI_SENSOR_SensorInfoPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    #ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL; 
    #else
    plugin->typeCode =  (struct RTICdrTypeCode *)RTI_SENSOR_SensorInfo_get_typecode();
    #endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    RTI_SENSOR_SensorInfoPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    RTI_SENSOR_SensorInfoPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;  
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL; 
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    plugin->endpointTypeName = RTI_SENSOR_SensorInfoTYPENAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void
RTI_SENSOR_SensorInfoPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type RTI_SENSOR_SensorConfig
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

RTI_SENSOR_SensorConfig*
RTI_SENSOR_SensorConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    RTI_SENSOR_SensorConfig *sample = NULL;

    sample = new (std::nothrow) RTI_SENSOR_SensorConfig ;
    if (sample == NULL) {
        return NULL;
    }

    if (!RTI_SENSOR_SensorConfig_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

RTI_SENSOR_SensorConfig *
RTI_SENSOR_SensorConfigPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    RTI_SENSOR_SensorConfig *sample = NULL;

    sample = new (std::nothrow) RTI_SENSOR_SensorConfig ;

    if(sample == NULL) {
        return NULL;
    }

    if (!RTI_SENSOR_SensorConfig_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

RTI_SENSOR_SensorConfig *
RTI_SENSOR_SensorConfigPluginSupport_create_data(void)
{
    return RTI_SENSOR_SensorConfigPluginSupport_create_data_ex(RTI_TRUE);
}

void 
RTI_SENSOR_SensorConfigPluginSupport_destroy_data_w_params(
    RTI_SENSOR_SensorConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    RTI_SENSOR_SensorConfig_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
RTI_SENSOR_SensorConfigPluginSupport_destroy_data_ex(
    RTI_SENSOR_SensorConfig *sample,RTIBool deallocate_pointers) {
    RTI_SENSOR_SensorConfig_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
RTI_SENSOR_SensorConfigPluginSupport_destroy_data(
    RTI_SENSOR_SensorConfig *sample) {

    RTI_SENSOR_SensorConfigPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
RTI_SENSOR_SensorConfigPluginSupport_copy_data(
    RTI_SENSOR_SensorConfig *dst,
    const RTI_SENSOR_SensorConfig *src)
{
    return RTI_SENSOR_SensorConfig_copy(dst,(const RTI_SENSOR_SensorConfig*) src);
}

void 
RTI_SENSOR_SensorConfigPluginSupport_print_data(
    const RTI_SENSOR_SensorConfig *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTI_SENSOR__sensor_id_tPluginSupport_print_data(
        (const RTI_SENSOR__sensor_id_t*) &sample->id, "id", indent_level + 1);

    RTI_TYPES_Temperature_Units_tPluginSupport_print_data(
        (const RTI_TYPES_Temperature_Units_t*) &sample->units, "units", indent_level + 1);

    if (DDS_FloatSeq_get_contiguous_bufferI(&sample->calibrationFactors) != NULL) {
        RTICdrType_printArray(
            DDS_FloatSeq_get_contiguous_bufferI(&sample->calibrationFactors),
            DDS_FloatSeq_get_length(&sample->calibrationFactors),
            RTI_CDR_FLOAT_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printFloat,
            "calibrationFactors", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_FloatSeq_get_discontiguous_bufferI(&sample->calibrationFactors),
            DDS_FloatSeq_get_length(&sample->calibrationFactors ),
            (RTICdrTypePrintFunction)RTICdrType_printFloat,
            "calibrationFactors", indent_level + 1);
    }

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
RTI_SENSOR_SensorConfigPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
    RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;

    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    pd = (struct PRESTypePluginDefaultParticipantData *)
    PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        RTI_SENSOR_SensorConfig_get_typecode(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);
    if (programs == NULL) {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData) pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void 
RTI_SENSOR_SensorConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{  		
    if (participant_data != NULL) {
        struct PRESTypePluginDefaultParticipantData *pd = 
        (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL) {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
RTI_SENSOR_SensorConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;
    unsigned int serializedSampleMaxSize = 0;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    if (participant_data == NULL) {
        return NULL;
    } 

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        RTI_SENSOR_SensorConfigPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        RTI_SENSOR_SensorConfigPluginSupport_destroy_data,
        NULL , NULL );

    if (epd == NULL) {
        return NULL;
    } 

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = RTI_SENSOR_SensorConfigPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            RTI_SENSOR_SensorConfigPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
RTI_SENSOR_SensorConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
RTI_SENSOR_SensorConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_SENSOR_SensorConfig *sample,
    void *handle)
{
    RTI_SENSOR_SensorConfig_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
RTI_SENSOR_SensorConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_SENSOR_SensorConfig *dst,
    const RTI_SENSOR_SensorConfig *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return RTI_SENSOR_SensorConfigPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
RTI_SENSOR_SensorConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
RTI_SENSOR_SensorConfigPlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const RTI_SENSOR_SensorConfig *sample,
    DDS_DataRepresentationId_t representation)
{
    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;

    if (length == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_SENSOR_SensorConfig_get_typecode();
    pd.programs = RTI_SENSOR_SensorConfigPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    encapsulationId = DDS_TypeCode_get_native_encapsulation(
        (DDS_TypeCode *) plugin.typeCode,
        representation);    
    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    RTI_SENSOR_SensorConfigPlugin_get_serialized_sample_max_size(
        (PRESTypePluginEndpointData)&epd, 
        RTI_TRUE, 
        encapsulationId,
        0);

    if (buffer == NULL) {
        *length = 
        PRESTypePlugin_interpretedGetSerializedSampleSize(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            encapsulationId,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = PRESTypePlugin_interpretedSerialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        encapsulationId,
        RTI_TRUE,
        NULL);

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;
}

RTIBool
RTI_SENSOR_SensorConfigPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const RTI_SENSOR_SensorConfig *sample)
{
    return RTI_SENSOR_SensorConfigPlugin_serialize_to_cdr_buffer_ex(
        buffer,
        length,
        sample,
        DDS_AUTO_DATA_REPRESENTATION);
}

RTIBool
RTI_SENSOR_SensorConfigPlugin_deserialize_from_cdr_buffer(
    RTI_SENSOR_SensorConfig *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePluginDefaultParticipantData pd;
    struct PRESTypePlugin plugin;

    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_SENSOR_SensorConfig_get_typecode();
    pd.programs = RTI_SENSOR_SensorConfigPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    RTI_SENSOR_SensorConfig_finalize_optional_members(sample, RTI_TRUE);
    return PRESTypePlugin_interpretedDeserialize( 
        (PRESTypePluginEndpointData)&epd, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

#ifndef NDDS_STANDALONE_TYPE
DDS_ReturnCode_t
RTI_SENSOR_SensorConfigPlugin_data_to_string(
    const RTI_SENSOR_SensorConfig *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }
    if (!RTI_SENSOR_SensorConfigPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!RTI_SENSOR_SensorConfigPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }
    data = DDS_DynamicData_new(
        RTI_SENSOR_SensorConfig_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}
#endif

unsigned int 
RTI_SENSOR_SensorConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
RTI_SENSOR_SensorConfigPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool RTI_SENSOR_SensorConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_SENSOR_SensorConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= PRESTypePlugin_interpretedDeserializeKey(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    return result;    

}

unsigned int
RTI_SENSOR_SensorConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
RTI_SENSOR_SensorConfigPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

struct RTIXCdrInterpreterPrograms *RTI_SENSOR_SensorConfigPlugin_get_programs()
{
    return ::rti::xcdr::get_cdr_serialization_programs<
    RTI_SENSOR_SensorConfig, 
    true, true, true>();
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *RTI_SENSOR_SensorConfigPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    RTI_SENSOR_SensorConfigPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    RTI_SENSOR_SensorConfigPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    RTI_SENSOR_SensorConfigPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    RTI_SENSOR_SensorConfigPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    RTI_SENSOR_SensorConfigPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    RTI_SENSOR_SensorConfigPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    RTI_SENSOR_SensorConfigPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    RTI_SENSOR_SensorConfig_finalize_optional_members;

    plugin->serializeFnc = 
    (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    RTI_SENSOR_SensorConfigPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL; 
    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    RTI_SENSOR_SensorConfigPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    RTI_SENSOR_SensorConfigPlugin_return_sample;
    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    RTI_SENSOR_SensorConfigPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    #ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL; 
    #else
    plugin->typeCode =  (struct RTICdrTypeCode *)RTI_SENSOR_SensorConfig_get_typecode();
    #endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    RTI_SENSOR_SensorConfigPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    RTI_SENSOR_SensorConfigPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;  
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL; 
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    plugin->endpointTypeName = RTI_SENSOR_SensorConfigTYPENAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void
RTI_SENSOR_SensorConfigPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

unsigned int 
RTI_PATIENT_PATIENT_ALARM_TYPEPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int initial_alignment = current_alignment;

    current_alignment += PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,
        NULL,
        include_encapsulation,
        encapsulation_id, current_alignment);

    return current_alignment - initial_alignment;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

void RTI_PATIENT_PATIENT_ALARM_TYPEPluginSupport_print_data(
    const RTI_PATIENT_PATIENT_ALARM_TYPE *sample,
    const char *description, int indent_level)
{
    if (description != NULL) {
        RTICdrType_printIndent(indent_level);
        RTILog_debug("%s:\n", description);
    }

    if (sample == NULL) {
        RTICdrType_printIndent(indent_level+1);
        RTILog_debug("NULL\n");
        return;
    }

    RTICdrType_printEnum((RTICdrEnum *)sample, "RTI_PATIENT_PATIENT_ALARM_TYPE", indent_level + 1);
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type RTI_PATIENT__patient_id_t
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

RTI_PATIENT__patient_id_t*
RTI_PATIENT__patient_id_tPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    RTI_PATIENT__patient_id_t *sample = NULL;

    sample = new (std::nothrow) RTI_PATIENT__patient_id_t ;
    if (sample == NULL) {
        return NULL;
    }

    if (!RTI_PATIENT__patient_id_t_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

RTI_PATIENT__patient_id_t *
RTI_PATIENT__patient_id_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    RTI_PATIENT__patient_id_t *sample = NULL;

    sample = new (std::nothrow) RTI_PATIENT__patient_id_t ;

    if(sample == NULL) {
        return NULL;
    }

    if (!RTI_PATIENT__patient_id_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

RTI_PATIENT__patient_id_t *
RTI_PATIENT__patient_id_tPluginSupport_create_data(void)
{
    return RTI_PATIENT__patient_id_tPluginSupport_create_data_ex(RTI_TRUE);
}

void 
RTI_PATIENT__patient_id_tPluginSupport_destroy_data_w_params(
    RTI_PATIENT__patient_id_t *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    RTI_PATIENT__patient_id_t_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
RTI_PATIENT__patient_id_tPluginSupport_destroy_data_ex(
    RTI_PATIENT__patient_id_t *sample,RTIBool deallocate_pointers) {
    RTI_PATIENT__patient_id_t_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
RTI_PATIENT__patient_id_tPluginSupport_destroy_data(
    RTI_PATIENT__patient_id_t *sample) {

    RTI_PATIENT__patient_id_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
RTI_PATIENT__patient_id_tPluginSupport_copy_data(
    RTI_PATIENT__patient_id_t *dst,
    const RTI_PATIENT__patient_id_t *src)
{
    return RTI_PATIENT__patient_id_t_copy(dst,(const RTI_PATIENT__patient_id_t*) src);
}

void 
RTI_PATIENT__patient_id_tPluginSupport_print_data(
    const RTI_PATIENT__patient_id_t *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    if (sample->Id==NULL) {
        RTICdrType_printString(
            NULL,"Id", indent_level + 1);
    } else {
        RTICdrType_printString(
            sample->Id,"Id", indent_level + 1);    
    }

}

RTI_PATIENT__patient_id_t *
RTI_PATIENT__patient_id_tPluginSupport_create_key_ex(RTIBool allocate_pointers){
    RTI_PATIENT__patient_id_t *key = NULL;

    key = new (std::nothrow) RTI_PATIENT__patient_id_tKeyHolder ;

    RTI_PATIENT__patient_id_t_initialize_ex(key,allocate_pointers, RTI_TRUE);

    return key;
}

RTI_PATIENT__patient_id_t *
RTI_PATIENT__patient_id_tPluginSupport_create_key(void)
{
    return  RTI_PATIENT__patient_id_tPluginSupport_create_key_ex(RTI_TRUE);
}

void 
RTI_PATIENT__patient_id_tPluginSupport_destroy_key_ex(
    RTI_PATIENT__patient_id_tKeyHolder *key,RTIBool deallocate_pointers)
{
    RTI_PATIENT__patient_id_t_finalize_ex(key,deallocate_pointers);

    delete  key;
    key=NULL;
}

void 
RTI_PATIENT__patient_id_tPluginSupport_destroy_key(
    RTI_PATIENT__patient_id_tKeyHolder *key) {

    RTI_PATIENT__patient_id_tPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
RTI_PATIENT__patient_id_tPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT__patient_id_t *dst,
    const RTI_PATIENT__patient_id_t *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return RTI_PATIENT__patient_id_tPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
RTI_PATIENT__patient_id_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
RTI_PATIENT__patient_id_tPlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const RTI_PATIENT__patient_id_t *sample,
    DDS_DataRepresentationId_t representation)
{
    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;

    if (length == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_PATIENT__patient_id_t_get_typecode();
    pd.programs = RTI_PATIENT__patient_id_tPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    encapsulationId = DDS_TypeCode_get_native_encapsulation(
        (DDS_TypeCode *) plugin.typeCode,
        representation);    
    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    RTI_PATIENT__patient_id_tPlugin_get_serialized_sample_max_size(
        (PRESTypePluginEndpointData)&epd, 
        RTI_TRUE, 
        encapsulationId,
        0);

    if (buffer == NULL) {
        *length = 
        PRESTypePlugin_interpretedGetSerializedSampleSize(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            encapsulationId,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = PRESTypePlugin_interpretedSerialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        encapsulationId,
        RTI_TRUE,
        NULL);

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;
}

RTIBool
RTI_PATIENT__patient_id_tPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const RTI_PATIENT__patient_id_t *sample)
{
    return RTI_PATIENT__patient_id_tPlugin_serialize_to_cdr_buffer_ex(
        buffer,
        length,
        sample,
        DDS_AUTO_DATA_REPRESENTATION);
}

RTIBool
RTI_PATIENT__patient_id_tPlugin_deserialize_from_cdr_buffer(
    RTI_PATIENT__patient_id_t *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePluginDefaultParticipantData pd;
    struct PRESTypePlugin plugin;

    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_PATIENT__patient_id_t_get_typecode();
    pd.programs = RTI_PATIENT__patient_id_tPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    RTI_PATIENT__patient_id_t_finalize_optional_members(sample, RTI_TRUE);
    return PRESTypePlugin_interpretedDeserialize( 
        (PRESTypePluginEndpointData)&epd, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

#ifndef NDDS_STANDALONE_TYPE
DDS_ReturnCode_t
RTI_PATIENT__patient_id_tPlugin_data_to_string(
    const RTI_PATIENT__patient_id_t *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }
    if (!RTI_PATIENT__patient_id_tPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!RTI_PATIENT__patient_id_tPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }
    data = DDS_DynamicData_new(
        RTI_PATIENT__patient_id_t_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}
#endif

unsigned int 
RTI_PATIENT__patient_id_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
RTI_PATIENT__patient_id_tPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool RTI_PATIENT__patient_id_tPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT__patient_id_t **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= PRESTypePlugin_interpretedDeserializeKey(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    return result;    

}

unsigned int
RTI_PATIENT__patient_id_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
RTI_PATIENT__patient_id_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
RTI_PATIENT__patient_id_tPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT__patient_id_tKeyHolder *dst, 
    const RTI_PATIENT__patient_id_t *src)
{
    if (endpoint_data) {} /* To avoid warnings */   

    if (!RTICdrType_copyStringEx (
        &dst->Id, src->Id, 
        (32) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool 
RTI_PATIENT__patient_id_tPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT__patient_id_t *dst, const
    RTI_PATIENT__patient_id_tKeyHolder *src)
{
    if (endpoint_data) {} /* To avoid warnings */   
    if (!RTICdrType_copyStringEx (
        &dst->Id, src->Id, 
        (32) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool 
RTI_PATIENT__patient_id_tPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const RTI_PATIENT__patient_id_t *instance,
    RTIEncapsulationId encapsulationId)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;
    RTIXCdrBoolean iCdrv2;

    iCdrv2 = RTIXCdrEncapsulationId_isCdrV2(encapsulationId);
    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
        endpoint_data,
        instance,
        md5Stream,
        iCdrv2?
        RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
        RTI_CDR_ENCAPSULATION_ID_CDR_BE,
        NULL)) 
    {
        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)PRESTypePlugin_interpretedGetSerializedSampleSize(
            endpoint_data,
            RTI_FALSE,
            iCdrv2?
            RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
            endpoint_data,
            instance,
            md5Stream, 
            iCdrv2?
            RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data, iCdrv2) > 
    (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH) ||
    PRESTypePluginDefaultEndpointData_forceMD5KeyHash(endpoint_data)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }

    return RTI_TRUE;
}

RTIBool 
RTI_PATIENT__patient_id_tPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    RTI_PATIENT__patient_id_t * sample = NULL;
    sample = (RTI_PATIENT__patient_id_t *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
    if (sample == NULL) {
        return RTI_FALSE;
    }

    if (!PRESTypePlugin_interpretedSerializedSampleToKey(
        endpoint_data,
        sample,
        stream, 
        deserialize_encapsulation, 
        RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if (!RTI_PATIENT__patient_id_tPlugin_instance_to_keyhash(
        endpoint_data, 
        keyhash, 
        sample,
        RTICdrStream_getEncapsulationKind(stream))) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

struct RTIXCdrInterpreterPrograms *RTI_PATIENT__patient_id_tPlugin_get_programs()
{
    return ::rti::xcdr::get_cdr_serialization_programs<
    RTI_PATIENT__patient_id_t, 
    true, true, true>();
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type RTI_PATIENT_Patient_ID_t
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

RTI_PATIENT_Patient_ID_t*
RTI_PATIENT_Patient_ID_tPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    RTI_PATIENT_Patient_ID_t *sample = NULL;

    sample = new (std::nothrow) RTI_PATIENT_Patient_ID_t ;
    if (sample == NULL) {
        return NULL;
    }

    if (!RTI_PATIENT_Patient_ID_t_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

RTI_PATIENT_Patient_ID_t *
RTI_PATIENT_Patient_ID_tPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    RTI_PATIENT_Patient_ID_t *sample = NULL;

    sample = new (std::nothrow) RTI_PATIENT_Patient_ID_t ;

    if(sample == NULL) {
        return NULL;
    }

    if (!RTI_PATIENT_Patient_ID_t_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

RTI_PATIENT_Patient_ID_t *
RTI_PATIENT_Patient_ID_tPluginSupport_create_data(void)
{
    return RTI_PATIENT_Patient_ID_tPluginSupport_create_data_ex(RTI_TRUE);
}

void 
RTI_PATIENT_Patient_ID_tPluginSupport_destroy_data_w_params(
    RTI_PATIENT_Patient_ID_t *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    RTI_PATIENT_Patient_ID_t_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
RTI_PATIENT_Patient_ID_tPluginSupport_destroy_data_ex(
    RTI_PATIENT_Patient_ID_t *sample,RTIBool deallocate_pointers) {
    RTI_PATIENT_Patient_ID_t_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
RTI_PATIENT_Patient_ID_tPluginSupport_destroy_data(
    RTI_PATIENT_Patient_ID_t *sample) {

    RTI_PATIENT_Patient_ID_tPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
RTI_PATIENT_Patient_ID_tPluginSupport_copy_data(
    RTI_PATIENT_Patient_ID_t *dst,
    const RTI_PATIENT_Patient_ID_t *src)
{
    return RTI_PATIENT_Patient_ID_t_copy(dst,(const RTI_PATIENT_Patient_ID_t*) src);
}

void 
RTI_PATIENT_Patient_ID_tPluginSupport_print_data(
    const RTI_PATIENT_Patient_ID_t *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    RTI_PATIENT__patient_id_tPluginSupport_print_data(
        (const RTI_PATIENT__patient_id_t*) sample, "", indent_level + 1);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

RTIBool 
RTI_PATIENT_Patient_ID_tPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT_Patient_ID_t *dst,
    const RTI_PATIENT_Patient_ID_t *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return RTI_PATIENT_Patient_ID_tPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
RTI_PATIENT_Patient_ID_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

unsigned int 
RTI_PATIENT_Patient_ID_tPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
RTI_PATIENT_Patient_ID_tPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

unsigned int
RTI_PATIENT_Patient_ID_tPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
RTI_PATIENT_Patient_ID_tPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */

/* ----------------------------------------------------------------------------
*  Type RTI_PATIENT_PatientPulse
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

RTI_PATIENT_PatientPulse*
RTI_PATIENT_PatientPulsePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    RTI_PATIENT_PatientPulse *sample = NULL;

    sample = new (std::nothrow) RTI_PATIENT_PatientPulse ;
    if (sample == NULL) {
        return NULL;
    }

    if (!RTI_PATIENT_PatientPulse_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

RTI_PATIENT_PatientPulse *
RTI_PATIENT_PatientPulsePluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    RTI_PATIENT_PatientPulse *sample = NULL;

    sample = new (std::nothrow) RTI_PATIENT_PatientPulse ;

    if(sample == NULL) {
        return NULL;
    }

    if (!RTI_PATIENT_PatientPulse_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

RTI_PATIENT_PatientPulse *
RTI_PATIENT_PatientPulsePluginSupport_create_data(void)
{
    return RTI_PATIENT_PatientPulsePluginSupport_create_data_ex(RTI_TRUE);
}

void 
RTI_PATIENT_PatientPulsePluginSupport_destroy_data_w_params(
    RTI_PATIENT_PatientPulse *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    RTI_PATIENT_PatientPulse_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
RTI_PATIENT_PatientPulsePluginSupport_destroy_data_ex(
    RTI_PATIENT_PatientPulse *sample,RTIBool deallocate_pointers) {
    RTI_PATIENT_PatientPulse_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
RTI_PATIENT_PatientPulsePluginSupport_destroy_data(
    RTI_PATIENT_PatientPulse *sample) {

    RTI_PATIENT_PatientPulsePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
RTI_PATIENT_PatientPulsePluginSupport_copy_data(
    RTI_PATIENT_PatientPulse *dst,
    const RTI_PATIENT_PatientPulse *src)
{
    return RTI_PATIENT_PatientPulse_copy(dst,(const RTI_PATIENT_PatientPulse*) src);
}

void 
RTI_PATIENT_PatientPulsePluginSupport_print_data(
    const RTI_PATIENT_PatientPulse *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    if (sample->Id==NULL) {
        RTICdrType_printString(
            NULL,"Id", indent_level + 1);
    } else {
        RTICdrType_printString(
            sample->Id,"Id", indent_level + 1);    
    }

    RTICdrType_printLongLong(
        &sample->timestamp, "timestamp", indent_level + 1);    

    if (DDS_UnsignedLongSeq_get_contiguous_bufferI(&sample->readings) != NULL) {
        RTICdrType_printArray(
            DDS_UnsignedLongSeq_get_contiguous_bufferI(&sample->readings),
            DDS_UnsignedLongSeq_get_length(&sample->readings),
            RTI_CDR_UNSIGNED_LONG_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printUnsignedLong,
            "readings", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_UnsignedLongSeq_get_discontiguous_bufferI(&sample->readings),
            DDS_UnsignedLongSeq_get_length(&sample->readings ),
            (RTICdrTypePrintFunction)RTICdrType_printUnsignedLong,
            "readings", indent_level + 1);
    }

    RTICdrType_printOctet(
        &sample->bpm, "bpm", indent_level + 1);    

}

RTI_PATIENT_PatientPulse *
RTI_PATIENT_PatientPulsePluginSupport_create_key_ex(RTIBool allocate_pointers){
    RTI_PATIENT_PatientPulse *key = NULL;

    key = new (std::nothrow) RTI_PATIENT_PatientPulseKeyHolder ;

    RTI_PATIENT_PatientPulse_initialize_ex(key,allocate_pointers, RTI_TRUE);

    return key;
}

RTI_PATIENT_PatientPulse *
RTI_PATIENT_PatientPulsePluginSupport_create_key(void)
{
    return  RTI_PATIENT_PatientPulsePluginSupport_create_key_ex(RTI_TRUE);
}

void 
RTI_PATIENT_PatientPulsePluginSupport_destroy_key_ex(
    RTI_PATIENT_PatientPulseKeyHolder *key,RTIBool deallocate_pointers)
{
    RTI_PATIENT_PatientPulse_finalize_ex(key,deallocate_pointers);

    delete  key;
    key=NULL;
}

void 
RTI_PATIENT_PatientPulsePluginSupport_destroy_key(
    RTI_PATIENT_PatientPulseKeyHolder *key) {

    RTI_PATIENT_PatientPulsePluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
RTI_PATIENT_PatientPulsePlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
    RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;

    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    pd = (struct PRESTypePluginDefaultParticipantData *)
    PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        RTI_PATIENT_PatientPulse_get_typecode(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);
    if (programs == NULL) {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData) pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void 
RTI_PATIENT_PatientPulsePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{  		
    if (participant_data != NULL) {
        struct PRESTypePluginDefaultParticipantData *pd = 
        (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL) {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
RTI_PATIENT_PatientPulsePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;
    unsigned int serializedSampleMaxSize = 0;

    unsigned int serializedKeyMaxSize = 0;
    unsigned int serializedKeyMaxSizeV2 = 0;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    if (participant_data == NULL) {
        return NULL;
    } 

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        RTI_PATIENT_PatientPulsePluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        RTI_PATIENT_PatientPulsePluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        RTI_PATIENT_PatientPulsePluginSupport_create_key ,            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        RTI_PATIENT_PatientPulsePluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 

    serializedKeyMaxSize =  RTI_PATIENT_PatientPulsePlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    serializedKeyMaxSizeV2 =  RTI_PATIENT_PatientPulsePlugin_get_serialized_key_max_size_for_keyhash(
        epd,
        RTI_CDR_ENCAPSULATION_ID_CDR2_BE,
        0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,
        endpoint_info,
        serializedKeyMaxSize,
        serializedKeyMaxSizeV2))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = RTI_PATIENT_PatientPulsePlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            RTI_PATIENT_PatientPulsePlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
RTI_PATIENT_PatientPulsePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
RTI_PATIENT_PatientPulsePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT_PatientPulse *sample,
    void *handle)
{
    RTI_PATIENT_PatientPulse_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
RTI_PATIENT_PatientPulsePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT_PatientPulse *dst,
    const RTI_PATIENT_PatientPulse *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return RTI_PATIENT_PatientPulsePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
RTI_PATIENT_PatientPulsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
RTI_PATIENT_PatientPulsePlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const RTI_PATIENT_PatientPulse *sample,
    DDS_DataRepresentationId_t representation)
{
    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;

    if (length == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_PATIENT_PatientPulse_get_typecode();
    pd.programs = RTI_PATIENT_PatientPulsePlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    encapsulationId = DDS_TypeCode_get_native_encapsulation(
        (DDS_TypeCode *) plugin.typeCode,
        representation);    
    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    RTI_PATIENT_PatientPulsePlugin_get_serialized_sample_max_size(
        (PRESTypePluginEndpointData)&epd, 
        RTI_TRUE, 
        encapsulationId,
        0);

    if (buffer == NULL) {
        *length = 
        PRESTypePlugin_interpretedGetSerializedSampleSize(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            encapsulationId,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = PRESTypePlugin_interpretedSerialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        encapsulationId,
        RTI_TRUE,
        NULL);

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;
}

RTIBool
RTI_PATIENT_PatientPulsePlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const RTI_PATIENT_PatientPulse *sample)
{
    return RTI_PATIENT_PatientPulsePlugin_serialize_to_cdr_buffer_ex(
        buffer,
        length,
        sample,
        DDS_AUTO_DATA_REPRESENTATION);
}

RTIBool
RTI_PATIENT_PatientPulsePlugin_deserialize_from_cdr_buffer(
    RTI_PATIENT_PatientPulse *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePluginDefaultParticipantData pd;
    struct PRESTypePlugin plugin;

    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_PATIENT_PatientPulse_get_typecode();
    pd.programs = RTI_PATIENT_PatientPulsePlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    RTI_PATIENT_PatientPulse_finalize_optional_members(sample, RTI_TRUE);
    return PRESTypePlugin_interpretedDeserialize( 
        (PRESTypePluginEndpointData)&epd, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

#ifndef NDDS_STANDALONE_TYPE
DDS_ReturnCode_t
RTI_PATIENT_PatientPulsePlugin_data_to_string(
    const RTI_PATIENT_PatientPulse *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }
    if (!RTI_PATIENT_PatientPulsePlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!RTI_PATIENT_PatientPulsePlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }
    data = DDS_DynamicData_new(
        RTI_PATIENT_PatientPulse_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}
#endif

unsigned int 
RTI_PATIENT_PatientPulsePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
RTI_PATIENT_PatientPulsePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool RTI_PATIENT_PatientPulsePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT_PatientPulse **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= PRESTypePlugin_interpretedDeserializeKey(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    return result;    

}

unsigned int
RTI_PATIENT_PatientPulsePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
RTI_PATIENT_PatientPulsePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
RTI_PATIENT_PatientPulsePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT_PatientPulseKeyHolder *dst, 
    const RTI_PATIENT_PatientPulse *src)
{
    if (endpoint_data) {} /* To avoid warnings */   

    if (!RTICdrType_copyStringEx (
        &dst->Id, src->Id, 
        (32) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool 
RTI_PATIENT_PatientPulsePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT_PatientPulse *dst, const
    RTI_PATIENT_PatientPulseKeyHolder *src)
{
    if (endpoint_data) {} /* To avoid warnings */   
    if (!RTICdrType_copyStringEx (
        &dst->Id, src->Id, 
        (32) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool 
RTI_PATIENT_PatientPulsePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const RTI_PATIENT_PatientPulse *instance,
    RTIEncapsulationId encapsulationId)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;
    RTIXCdrBoolean iCdrv2;

    iCdrv2 = RTIXCdrEncapsulationId_isCdrV2(encapsulationId);
    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
        endpoint_data,
        instance,
        md5Stream,
        iCdrv2?
        RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
        RTI_CDR_ENCAPSULATION_ID_CDR_BE,
        NULL)) 
    {
        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)PRESTypePlugin_interpretedGetSerializedSampleSize(
            endpoint_data,
            RTI_FALSE,
            iCdrv2?
            RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
            endpoint_data,
            instance,
            md5Stream, 
            iCdrv2?
            RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data, iCdrv2) > 
    (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH) ||
    PRESTypePluginDefaultEndpointData_forceMD5KeyHash(endpoint_data)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }

    return RTI_TRUE;
}

RTIBool 
RTI_PATIENT_PatientPulsePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    RTI_PATIENT_PatientPulse * sample = NULL;
    sample = (RTI_PATIENT_PatientPulse *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
    if (sample == NULL) {
        return RTI_FALSE;
    }

    if (!PRESTypePlugin_interpretedSerializedSampleToKey(
        endpoint_data,
        sample,
        stream, 
        deserialize_encapsulation, 
        RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if (!RTI_PATIENT_PatientPulsePlugin_instance_to_keyhash(
        endpoint_data, 
        keyhash, 
        sample,
        RTICdrStream_getEncapsulationKind(stream))) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

struct RTIXCdrInterpreterPrograms *RTI_PATIENT_PatientPulsePlugin_get_programs()
{
    return ::rti::xcdr::get_cdr_serialization_programs<
    RTI_PATIENT_PatientPulse, 
    true, true, true>();
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *RTI_PATIENT_PatientPulsePlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    RTI_PATIENT_PatientPulsePlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    RTI_PATIENT_PatientPulsePlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    RTI_PATIENT_PatientPulsePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    RTI_PATIENT_PatientPulsePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    RTI_PATIENT_PatientPulsePlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    RTI_PATIENT_PatientPulsePlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    RTI_PATIENT_PatientPulsePlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    RTI_PATIENT_PatientPulse_finalize_optional_members;

    plugin->serializeFnc = 
    (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    RTI_PATIENT_PatientPulsePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL; 
    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    RTI_PATIENT_PatientPulsePlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    RTI_PATIENT_PatientPulsePlugin_return_sample;
    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    RTI_PATIENT_PatientPulsePlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    RTI_PATIENT_PatientPulsePlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    PRESTypePlugin_interpretedSerializeKey;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    RTI_PATIENT_PatientPulsePlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    PRESTypePlugin_interpretedDeserializeKey;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    RTI_PATIENT_PatientPulsePlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    RTI_PATIENT_PatientPulsePlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    RTI_PATIENT_PatientPulsePlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    RTI_PATIENT_PatientPulsePlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    RTI_PATIENT_PatientPulsePlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    RTI_PATIENT_PatientPulsePlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    #ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL; 
    #else
    plugin->typeCode =  (struct RTICdrTypeCode *)RTI_PATIENT_PatientPulse_get_typecode();
    #endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    RTI_PATIENT_PatientPulsePlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    RTI_PATIENT_PatientPulsePlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;  
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL; 
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    plugin->endpointTypeName = RTI_PATIENT_PatientPulseTYPENAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void
RTI_PATIENT_PatientPulsePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type RTI_PATIENT_PatientInfo
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

RTI_PATIENT_PatientInfo*
RTI_PATIENT_PatientInfoPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    RTI_PATIENT_PatientInfo *sample = NULL;

    sample = new (std::nothrow) RTI_PATIENT_PatientInfo ;
    if (sample == NULL) {
        return NULL;
    }

    if (!RTI_PATIENT_PatientInfo_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

RTI_PATIENT_PatientInfo *
RTI_PATIENT_PatientInfoPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    RTI_PATIENT_PatientInfo *sample = NULL;

    sample = new (std::nothrow) RTI_PATIENT_PatientInfo ;

    if(sample == NULL) {
        return NULL;
    }

    if (!RTI_PATIENT_PatientInfo_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

RTI_PATIENT_PatientInfo *
RTI_PATIENT_PatientInfoPluginSupport_create_data(void)
{
    return RTI_PATIENT_PatientInfoPluginSupport_create_data_ex(RTI_TRUE);
}

void 
RTI_PATIENT_PatientInfoPluginSupport_destroy_data_w_params(
    RTI_PATIENT_PatientInfo *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    RTI_PATIENT_PatientInfo_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
RTI_PATIENT_PatientInfoPluginSupport_destroy_data_ex(
    RTI_PATIENT_PatientInfo *sample,RTIBool deallocate_pointers) {
    RTI_PATIENT_PatientInfo_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
RTI_PATIENT_PatientInfoPluginSupport_destroy_data(
    RTI_PATIENT_PatientInfo *sample) {

    RTI_PATIENT_PatientInfoPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
RTI_PATIENT_PatientInfoPluginSupport_copy_data(
    RTI_PATIENT_PatientInfo *dst,
    const RTI_PATIENT_PatientInfo *src)
{
    return RTI_PATIENT_PatientInfo_copy(dst,(const RTI_PATIENT_PatientInfo*) src);
}

void 
RTI_PATIENT_PatientInfoPluginSupport_print_data(
    const RTI_PATIENT_PatientInfo *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    if (sample->Id==NULL) {
        RTICdrType_printString(
            NULL,"Id", indent_level + 1);
    } else {
        RTICdrType_printString(
            sample->Id,"Id", indent_level + 1);    
    }

    if (sample->FirstName==NULL) {
        RTICdrType_printString(
            NULL,"FirstName", indent_level + 1);
    } else {
        RTICdrType_printString(
            sample->FirstName,"FirstName", indent_level + 1);    
    }

    if (sample->LastName==NULL) {
        RTICdrType_printString(
            NULL,"LastName", indent_level + 1);
    } else {
        RTICdrType_printString(
            sample->LastName,"LastName", indent_level + 1);    
    }

    RTICdrType_printUnsignedLong(
        &sample->Age, "Age", indent_level + 1);    

    RTICdrType_printUnsignedLong(
        &sample->HeightCm, "HeightCm", indent_level + 1);    

    RTICdrType_printUnsignedLong(
        &sample->WeightKg, "WeightKg", indent_level + 1);    

    if (sample->Sex==NULL) {
        RTICdrType_printString(
            NULL,"Sex", indent_level + 1);
    } else {
        RTICdrType_printString(
            sample->Sex,"Sex", indent_level + 1);    
    }

}

RTI_PATIENT_PatientInfo *
RTI_PATIENT_PatientInfoPluginSupport_create_key_ex(RTIBool allocate_pointers){
    RTI_PATIENT_PatientInfo *key = NULL;

    key = new (std::nothrow) RTI_PATIENT_PatientInfoKeyHolder ;

    RTI_PATIENT_PatientInfo_initialize_ex(key,allocate_pointers, RTI_TRUE);

    return key;
}

RTI_PATIENT_PatientInfo *
RTI_PATIENT_PatientInfoPluginSupport_create_key(void)
{
    return  RTI_PATIENT_PatientInfoPluginSupport_create_key_ex(RTI_TRUE);
}

void 
RTI_PATIENT_PatientInfoPluginSupport_destroy_key_ex(
    RTI_PATIENT_PatientInfoKeyHolder *key,RTIBool deallocate_pointers)
{
    RTI_PATIENT_PatientInfo_finalize_ex(key,deallocate_pointers);

    delete  key;
    key=NULL;
}

void 
RTI_PATIENT_PatientInfoPluginSupport_destroy_key(
    RTI_PATIENT_PatientInfoKeyHolder *key) {

    RTI_PATIENT_PatientInfoPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
RTI_PATIENT_PatientInfoPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
    RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;

    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    pd = (struct PRESTypePluginDefaultParticipantData *)
    PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        RTI_PATIENT_PatientInfo_get_typecode(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);
    if (programs == NULL) {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData) pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void 
RTI_PATIENT_PatientInfoPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{  		
    if (participant_data != NULL) {
        struct PRESTypePluginDefaultParticipantData *pd = 
        (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL) {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
RTI_PATIENT_PatientInfoPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;
    unsigned int serializedSampleMaxSize = 0;

    unsigned int serializedKeyMaxSize = 0;
    unsigned int serializedKeyMaxSizeV2 = 0;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    if (participant_data == NULL) {
        return NULL;
    } 

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        RTI_PATIENT_PatientInfoPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        RTI_PATIENT_PatientInfoPluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        RTI_PATIENT_PatientInfoPluginSupport_create_key ,            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        RTI_PATIENT_PatientInfoPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 

    serializedKeyMaxSize =  RTI_PATIENT_PatientInfoPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    serializedKeyMaxSizeV2 =  RTI_PATIENT_PatientInfoPlugin_get_serialized_key_max_size_for_keyhash(
        epd,
        RTI_CDR_ENCAPSULATION_ID_CDR2_BE,
        0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,
        endpoint_info,
        serializedKeyMaxSize,
        serializedKeyMaxSizeV2))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = RTI_PATIENT_PatientInfoPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            RTI_PATIENT_PatientInfoPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
RTI_PATIENT_PatientInfoPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
RTI_PATIENT_PatientInfoPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT_PatientInfo *sample,
    void *handle)
{
    RTI_PATIENT_PatientInfo_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
RTI_PATIENT_PatientInfoPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT_PatientInfo *dst,
    const RTI_PATIENT_PatientInfo *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return RTI_PATIENT_PatientInfoPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
RTI_PATIENT_PatientInfoPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
RTI_PATIENT_PatientInfoPlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const RTI_PATIENT_PatientInfo *sample,
    DDS_DataRepresentationId_t representation)
{
    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;

    if (length == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_PATIENT_PatientInfo_get_typecode();
    pd.programs = RTI_PATIENT_PatientInfoPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    encapsulationId = DDS_TypeCode_get_native_encapsulation(
        (DDS_TypeCode *) plugin.typeCode,
        representation);    
    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    RTI_PATIENT_PatientInfoPlugin_get_serialized_sample_max_size(
        (PRESTypePluginEndpointData)&epd, 
        RTI_TRUE, 
        encapsulationId,
        0);

    if (buffer == NULL) {
        *length = 
        PRESTypePlugin_interpretedGetSerializedSampleSize(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            encapsulationId,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = PRESTypePlugin_interpretedSerialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        encapsulationId,
        RTI_TRUE,
        NULL);

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;
}

RTIBool
RTI_PATIENT_PatientInfoPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const RTI_PATIENT_PatientInfo *sample)
{
    return RTI_PATIENT_PatientInfoPlugin_serialize_to_cdr_buffer_ex(
        buffer,
        length,
        sample,
        DDS_AUTO_DATA_REPRESENTATION);
}

RTIBool
RTI_PATIENT_PatientInfoPlugin_deserialize_from_cdr_buffer(
    RTI_PATIENT_PatientInfo *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePluginDefaultParticipantData pd;
    struct PRESTypePlugin plugin;

    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_PATIENT_PatientInfo_get_typecode();
    pd.programs = RTI_PATIENT_PatientInfoPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    RTI_PATIENT_PatientInfo_finalize_optional_members(sample, RTI_TRUE);
    return PRESTypePlugin_interpretedDeserialize( 
        (PRESTypePluginEndpointData)&epd, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

#ifndef NDDS_STANDALONE_TYPE
DDS_ReturnCode_t
RTI_PATIENT_PatientInfoPlugin_data_to_string(
    const RTI_PATIENT_PatientInfo *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }
    if (!RTI_PATIENT_PatientInfoPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!RTI_PATIENT_PatientInfoPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }
    data = DDS_DynamicData_new(
        RTI_PATIENT_PatientInfo_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}
#endif

unsigned int 
RTI_PATIENT_PatientInfoPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
RTI_PATIENT_PatientInfoPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool RTI_PATIENT_PatientInfoPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT_PatientInfo **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= PRESTypePlugin_interpretedDeserializeKey(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    return result;    

}

unsigned int
RTI_PATIENT_PatientInfoPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
RTI_PATIENT_PatientInfoPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
RTI_PATIENT_PatientInfoPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT_PatientInfoKeyHolder *dst, 
    const RTI_PATIENT_PatientInfo *src)
{
    if (endpoint_data) {} /* To avoid warnings */   

    if (!RTICdrType_copyStringEx (
        &dst->Id, src->Id, 
        (32) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool 
RTI_PATIENT_PatientInfoPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT_PatientInfo *dst, const
    RTI_PATIENT_PatientInfoKeyHolder *src)
{
    if (endpoint_data) {} /* To avoid warnings */   
    if (!RTICdrType_copyStringEx (
        &dst->Id, src->Id, 
        (32) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool 
RTI_PATIENT_PatientInfoPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const RTI_PATIENT_PatientInfo *instance,
    RTIEncapsulationId encapsulationId)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;
    RTIXCdrBoolean iCdrv2;

    iCdrv2 = RTIXCdrEncapsulationId_isCdrV2(encapsulationId);
    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
        endpoint_data,
        instance,
        md5Stream,
        iCdrv2?
        RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
        RTI_CDR_ENCAPSULATION_ID_CDR_BE,
        NULL)) 
    {
        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)PRESTypePlugin_interpretedGetSerializedSampleSize(
            endpoint_data,
            RTI_FALSE,
            iCdrv2?
            RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
            endpoint_data,
            instance,
            md5Stream, 
            iCdrv2?
            RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data, iCdrv2) > 
    (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH) ||
    PRESTypePluginDefaultEndpointData_forceMD5KeyHash(endpoint_data)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }

    return RTI_TRUE;
}

RTIBool 
RTI_PATIENT_PatientInfoPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    RTI_PATIENT_PatientInfo * sample = NULL;
    sample = (RTI_PATIENT_PatientInfo *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
    if (sample == NULL) {
        return RTI_FALSE;
    }

    if (!PRESTypePlugin_interpretedSerializedSampleToKey(
        endpoint_data,
        sample,
        stream, 
        deserialize_encapsulation, 
        RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if (!RTI_PATIENT_PatientInfoPlugin_instance_to_keyhash(
        endpoint_data, 
        keyhash, 
        sample,
        RTICdrStream_getEncapsulationKind(stream))) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

struct RTIXCdrInterpreterPrograms *RTI_PATIENT_PatientInfoPlugin_get_programs()
{
    return ::rti::xcdr::get_cdr_serialization_programs<
    RTI_PATIENT_PatientInfo, 
    true, true, true>();
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *RTI_PATIENT_PatientInfoPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    RTI_PATIENT_PatientInfoPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    RTI_PATIENT_PatientInfoPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    RTI_PATIENT_PatientInfoPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    RTI_PATIENT_PatientInfoPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    RTI_PATIENT_PatientInfoPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    RTI_PATIENT_PatientInfoPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    RTI_PATIENT_PatientInfoPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    RTI_PATIENT_PatientInfo_finalize_optional_members;

    plugin->serializeFnc = 
    (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    RTI_PATIENT_PatientInfoPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL; 
    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    RTI_PATIENT_PatientInfoPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    RTI_PATIENT_PatientInfoPlugin_return_sample;
    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    RTI_PATIENT_PatientInfoPlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    RTI_PATIENT_PatientInfoPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    PRESTypePlugin_interpretedSerializeKey;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    RTI_PATIENT_PatientInfoPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    PRESTypePlugin_interpretedDeserializeKey;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    RTI_PATIENT_PatientInfoPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    RTI_PATIENT_PatientInfoPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    RTI_PATIENT_PatientInfoPlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    RTI_PATIENT_PatientInfoPlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    RTI_PATIENT_PatientInfoPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    RTI_PATIENT_PatientInfoPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    #ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL; 
    #else
    plugin->typeCode =  (struct RTICdrTypeCode *)RTI_PATIENT_PatientInfo_get_typecode();
    #endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    RTI_PATIENT_PatientInfoPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    RTI_PATIENT_PatientInfoPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;  
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL; 
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    plugin->endpointTypeName = RTI_PATIENT_PatientInfoTYPENAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void
RTI_PATIENT_PatientInfoPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type RTI_PATIENT_PatientConfig
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

RTI_PATIENT_PatientConfig*
RTI_PATIENT_PatientConfigPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    RTI_PATIENT_PatientConfig *sample = NULL;

    sample = new (std::nothrow) RTI_PATIENT_PatientConfig ;
    if (sample == NULL) {
        return NULL;
    }

    if (!RTI_PATIENT_PatientConfig_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

RTI_PATIENT_PatientConfig *
RTI_PATIENT_PatientConfigPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    RTI_PATIENT_PatientConfig *sample = NULL;

    sample = new (std::nothrow) RTI_PATIENT_PatientConfig ;

    if(sample == NULL) {
        return NULL;
    }

    if (!RTI_PATIENT_PatientConfig_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

RTI_PATIENT_PatientConfig *
RTI_PATIENT_PatientConfigPluginSupport_create_data(void)
{
    return RTI_PATIENT_PatientConfigPluginSupport_create_data_ex(RTI_TRUE);
}

void 
RTI_PATIENT_PatientConfigPluginSupport_destroy_data_w_params(
    RTI_PATIENT_PatientConfig *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    RTI_PATIENT_PatientConfig_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
RTI_PATIENT_PatientConfigPluginSupport_destroy_data_ex(
    RTI_PATIENT_PatientConfig *sample,RTIBool deallocate_pointers) {
    RTI_PATIENT_PatientConfig_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
RTI_PATIENT_PatientConfigPluginSupport_destroy_data(
    RTI_PATIENT_PatientConfig *sample) {

    RTI_PATIENT_PatientConfigPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
RTI_PATIENT_PatientConfigPluginSupport_copy_data(
    RTI_PATIENT_PatientConfig *dst,
    const RTI_PATIENT_PatientConfig *src)
{
    return RTI_PATIENT_PatientConfig_copy(dst,(const RTI_PATIENT_PatientConfig*) src);
}

void 
RTI_PATIENT_PatientConfigPluginSupport_print_data(
    const RTI_PATIENT_PatientConfig *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    if (sample->Id==NULL) {
        RTICdrType_printString(
            NULL,"Id", indent_level + 1);
    } else {
        RTICdrType_printString(
            sample->Id,"Id", indent_level + 1);    
    }

    RTICdrType_printUnsignedLong(
        &sample->PulseHighThreshold, "PulseHighThreshold", indent_level + 1);    

    RTICdrType_printUnsignedLong(
        &sample->PulseLowThreshold, "PulseLowThreshold", indent_level + 1);    

}

RTI_PATIENT_PatientConfig *
RTI_PATIENT_PatientConfigPluginSupport_create_key_ex(RTIBool allocate_pointers){
    RTI_PATIENT_PatientConfig *key = NULL;

    key = new (std::nothrow) RTI_PATIENT_PatientConfigKeyHolder ;

    RTI_PATIENT_PatientConfig_initialize_ex(key,allocate_pointers, RTI_TRUE);

    return key;
}

RTI_PATIENT_PatientConfig *
RTI_PATIENT_PatientConfigPluginSupport_create_key(void)
{
    return  RTI_PATIENT_PatientConfigPluginSupport_create_key_ex(RTI_TRUE);
}

void 
RTI_PATIENT_PatientConfigPluginSupport_destroy_key_ex(
    RTI_PATIENT_PatientConfigKeyHolder *key,RTIBool deallocate_pointers)
{
    RTI_PATIENT_PatientConfig_finalize_ex(key,deallocate_pointers);

    delete  key;
    key=NULL;
}

void 
RTI_PATIENT_PatientConfigPluginSupport_destroy_key(
    RTI_PATIENT_PatientConfigKeyHolder *key) {

    RTI_PATIENT_PatientConfigPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
RTI_PATIENT_PatientConfigPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
    RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;

    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    pd = (struct PRESTypePluginDefaultParticipantData *)
    PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        RTI_PATIENT_PatientConfig_get_typecode(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);
    if (programs == NULL) {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData) pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void 
RTI_PATIENT_PatientConfigPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{  		
    if (participant_data != NULL) {
        struct PRESTypePluginDefaultParticipantData *pd = 
        (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL) {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
RTI_PATIENT_PatientConfigPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;
    unsigned int serializedSampleMaxSize = 0;

    unsigned int serializedKeyMaxSize = 0;
    unsigned int serializedKeyMaxSizeV2 = 0;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    if (participant_data == NULL) {
        return NULL;
    } 

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        RTI_PATIENT_PatientConfigPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        RTI_PATIENT_PatientConfigPluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        RTI_PATIENT_PatientConfigPluginSupport_create_key ,            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        RTI_PATIENT_PatientConfigPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 

    serializedKeyMaxSize =  RTI_PATIENT_PatientConfigPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    serializedKeyMaxSizeV2 =  RTI_PATIENT_PatientConfigPlugin_get_serialized_key_max_size_for_keyhash(
        epd,
        RTI_CDR_ENCAPSULATION_ID_CDR2_BE,
        0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,
        endpoint_info,
        serializedKeyMaxSize,
        serializedKeyMaxSizeV2))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = RTI_PATIENT_PatientConfigPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            RTI_PATIENT_PatientConfigPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
RTI_PATIENT_PatientConfigPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
RTI_PATIENT_PatientConfigPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT_PatientConfig *sample,
    void *handle)
{
    RTI_PATIENT_PatientConfig_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
RTI_PATIENT_PatientConfigPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT_PatientConfig *dst,
    const RTI_PATIENT_PatientConfig *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return RTI_PATIENT_PatientConfigPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
RTI_PATIENT_PatientConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
RTI_PATIENT_PatientConfigPlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const RTI_PATIENT_PatientConfig *sample,
    DDS_DataRepresentationId_t representation)
{
    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;

    if (length == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_PATIENT_PatientConfig_get_typecode();
    pd.programs = RTI_PATIENT_PatientConfigPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    encapsulationId = DDS_TypeCode_get_native_encapsulation(
        (DDS_TypeCode *) plugin.typeCode,
        representation);    
    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    RTI_PATIENT_PatientConfigPlugin_get_serialized_sample_max_size(
        (PRESTypePluginEndpointData)&epd, 
        RTI_TRUE, 
        encapsulationId,
        0);

    if (buffer == NULL) {
        *length = 
        PRESTypePlugin_interpretedGetSerializedSampleSize(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            encapsulationId,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = PRESTypePlugin_interpretedSerialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        encapsulationId,
        RTI_TRUE,
        NULL);

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;
}

RTIBool
RTI_PATIENT_PatientConfigPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const RTI_PATIENT_PatientConfig *sample)
{
    return RTI_PATIENT_PatientConfigPlugin_serialize_to_cdr_buffer_ex(
        buffer,
        length,
        sample,
        DDS_AUTO_DATA_REPRESENTATION);
}

RTIBool
RTI_PATIENT_PatientConfigPlugin_deserialize_from_cdr_buffer(
    RTI_PATIENT_PatientConfig *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePluginDefaultParticipantData pd;
    struct PRESTypePlugin plugin;

    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    RTI_PATIENT_PatientConfig_get_typecode();
    pd.programs = RTI_PATIENT_PatientConfigPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    RTI_PATIENT_PatientConfig_finalize_optional_members(sample, RTI_TRUE);
    return PRESTypePlugin_interpretedDeserialize( 
        (PRESTypePluginEndpointData)&epd, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

#ifndef NDDS_STANDALONE_TYPE
DDS_ReturnCode_t
RTI_PATIENT_PatientConfigPlugin_data_to_string(
    const RTI_PATIENT_PatientConfig *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }
    if (!RTI_PATIENT_PatientConfigPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!RTI_PATIENT_PatientConfigPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }
    data = DDS_DynamicData_new(
        RTI_PATIENT_PatientConfig_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}
#endif

unsigned int 
RTI_PATIENT_PatientConfigPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
RTI_PATIENT_PatientConfigPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool RTI_PATIENT_PatientConfigPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT_PatientConfig **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= PRESTypePlugin_interpretedDeserializeKey(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    return result;    

}

unsigned int
RTI_PATIENT_PatientConfigPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
RTI_PATIENT_PatientConfigPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
RTI_PATIENT_PatientConfigPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT_PatientConfigKeyHolder *dst, 
    const RTI_PATIENT_PatientConfig *src)
{
    if (endpoint_data) {} /* To avoid warnings */   

    if (!RTICdrType_copyStringEx (
        &dst->Id, src->Id, 
        (32) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool 
RTI_PATIENT_PatientConfigPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    RTI_PATIENT_PatientConfig *dst, const
    RTI_PATIENT_PatientConfigKeyHolder *src)
{
    if (endpoint_data) {} /* To avoid warnings */   
    if (!RTICdrType_copyStringEx (
        &dst->Id, src->Id, 
        (32) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool 
RTI_PATIENT_PatientConfigPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const RTI_PATIENT_PatientConfig *instance,
    RTIEncapsulationId encapsulationId)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;
    RTIXCdrBoolean iCdrv2;

    iCdrv2 = RTIXCdrEncapsulationId_isCdrV2(encapsulationId);
    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
        endpoint_data,
        instance,
        md5Stream,
        iCdrv2?
        RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
        RTI_CDR_ENCAPSULATION_ID_CDR_BE,
        NULL)) 
    {
        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)PRESTypePlugin_interpretedGetSerializedSampleSize(
            endpoint_data,
            RTI_FALSE,
            iCdrv2?
            RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
            endpoint_data,
            instance,
            md5Stream, 
            iCdrv2?
            RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data, iCdrv2) > 
    (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH) ||
    PRESTypePluginDefaultEndpointData_forceMD5KeyHash(endpoint_data)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }

    return RTI_TRUE;
}

RTIBool 
RTI_PATIENT_PatientConfigPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    RTI_PATIENT_PatientConfig * sample = NULL;
    sample = (RTI_PATIENT_PatientConfig *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
    if (sample == NULL) {
        return RTI_FALSE;
    }

    if (!PRESTypePlugin_interpretedSerializedSampleToKey(
        endpoint_data,
        sample,
        stream, 
        deserialize_encapsulation, 
        RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if (!RTI_PATIENT_PatientConfigPlugin_instance_to_keyhash(
        endpoint_data, 
        keyhash, 
        sample,
        RTICdrStream_getEncapsulationKind(stream))) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

struct RTIXCdrInterpreterPrograms *RTI_PATIENT_PatientConfigPlugin_get_programs()
{
    return ::rti::xcdr::get_cdr_serialization_programs<
    RTI_PATIENT_PatientConfig, 
    true, true, true>();
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *RTI_PATIENT_PatientConfigPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    RTI_PATIENT_PatientConfigPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    RTI_PATIENT_PatientConfigPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    RTI_PATIENT_PatientConfigPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    RTI_PATIENT_PatientConfigPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    RTI_PATIENT_PatientConfigPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    RTI_PATIENT_PatientConfigPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    RTI_PATIENT_PatientConfigPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    RTI_PATIENT_PatientConfig_finalize_optional_members;

    plugin->serializeFnc = 
    (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    RTI_PATIENT_PatientConfigPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL; 
    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    RTI_PATIENT_PatientConfigPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    RTI_PATIENT_PatientConfigPlugin_return_sample;
    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    RTI_PATIENT_PatientConfigPlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    RTI_PATIENT_PatientConfigPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    PRESTypePlugin_interpretedSerializeKey;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    RTI_PATIENT_PatientConfigPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    PRESTypePlugin_interpretedDeserializeKey;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    RTI_PATIENT_PatientConfigPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    RTI_PATIENT_PatientConfigPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    RTI_PATIENT_PatientConfigPlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    RTI_PATIENT_PatientConfigPlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    RTI_PATIENT_PatientConfigPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    RTI_PATIENT_PatientConfigPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    #ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL; 
    #else
    plugin->typeCode =  (struct RTICdrTypeCode *)RTI_PATIENT_PatientConfig_get_typecode();
    #endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    RTI_PATIENT_PatientConfigPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    RTI_PATIENT_PatientConfigPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;  
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL; 
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    plugin->endpointTypeName = RTI_PATIENT_PatientConfigTYPENAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void
RTI_PATIENT_PatientConfigPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 
#undef RTI_CDR_CURRENT_SUBMODULE 
