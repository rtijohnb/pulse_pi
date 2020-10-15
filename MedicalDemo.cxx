

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MedicalDemo.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif 
#ifndef dds_c_log_infrastructure_h                      
#include "dds_c/dds_c_infrastructure_impl.h"       
#endif 

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "MedicalDemo.h"

#ifndef NDDS_STANDALONE_TYPE
#include "MedicalDemoPlugin.h"
#endif

#include <new>

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_TYPES_TimeStamp_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTI_TYPES_TimeStamp_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"RTI::TYPES::TimeStamp_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  RTI_TYPES_TimeStamp_t */

    if (is_initialized) {
        return &RTI_TYPES_TimeStamp_t_g_tc;
    }

    RTI_TYPES_TimeStamp_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_TYPES_TimeStamp_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_longlong_w_new;

    /* Initialize the values for member annotations. */
    RTI_TYPES_TimeStamp_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
    RTI_TYPES_TimeStamp_t_g_tc._data._annotations._defaultValue._u.long_long_value = 0ll;
    RTI_TYPES_TimeStamp_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
    RTI_TYPES_TimeStamp_t_g_tc._data._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
    RTI_TYPES_TimeStamp_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
    RTI_TYPES_TimeStamp_t_g_tc._data._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

    RTI_TYPES_TimeStamp_t_g_tc._data._sampleAccessInfo =
    RTI_TYPES_TimeStamp_t_get_sample_access_info();
    RTI_TYPES_TimeStamp_t_g_tc._data._typePlugin =
    RTI_TYPES_TimeStamp_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_TYPES_TimeStamp_t_g_tc;
}

#define TSeq RTI_TYPES_TimeStamp_tSeq
#define T RTI_TYPES_TimeStamp_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_TYPES_TimeStamp_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_TYPES_TimeStamp_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_TYPES_TimeStamp_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_TYPES_TimeStamp_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_TYPES_TimeStamp_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_TYPES_TimeStamp_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_TYPES_TimeStamp_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_TYPES_TimeStamp_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_TYPES_TimeStamp_t_g_sampleAccessInfo;
    }

    RTI_TYPES_TimeStamp_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    RTI_TYPES_TimeStamp_t_g_sampleAccessInfo.memberAccessInfos = 
    RTI_TYPES_TimeStamp_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_TYPES_TimeStamp_t);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_TYPES_TimeStamp_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_TYPES_TimeStamp_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_TYPES_TimeStamp_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_TYPES_TimeStamp_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_TYPES_TimeStamp_t_get_member_value_pointer;

    RTI_TYPES_TimeStamp_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_TYPES_TimeStamp_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_TYPES_TimeStamp_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_TYPES_TimeStamp_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_TYPES_TimeStamp_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_TYPES_TimeStamp_t_finalize_w_return,
        NULL
    };

    return &RTI_TYPES_TimeStamp_t_g_typePlugin;
}
#endif

RTIBool RTI_TYPES_TimeStamp_t_initialize(
    RTI_TYPES_TimeStamp_t* sample) {
    return RTI_TYPES_TimeStamp_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_TYPES_TimeStamp_t_initialize_ex(
    RTI_TYPES_TimeStamp_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_TYPES_TimeStamp_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_TYPES_TimeStamp_t_initialize_w_params(
    RTI_TYPES_TimeStamp_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    (*sample) = 0ll;

    return RTI_TRUE;
}

RTIBool RTI_TYPES_TimeStamp_t_finalize_w_return(
    RTI_TYPES_TimeStamp_t* sample)
{
    RTI_TYPES_TimeStamp_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_TYPES_TimeStamp_t_finalize(
    RTI_TYPES_TimeStamp_t* sample)
{

    RTI_TYPES_TimeStamp_t_finalize_ex(sample,RTI_TRUE);
}

void RTI_TYPES_TimeStamp_t_finalize_ex(
    RTI_TYPES_TimeStamp_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_TYPES_TimeStamp_t_finalize_w_params(
        sample,&deallocParams);
}

void RTI_TYPES_TimeStamp_t_finalize_w_params(
    RTI_TYPES_TimeStamp_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void RTI_TYPES_TimeStamp_t_finalize_optional_members(
    RTI_TYPES_TimeStamp_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_TYPES_TimeStamp_t_copy(
    RTI_TYPES_TimeStamp_t* dst,
    const RTI_TYPES_TimeStamp_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyLongLong (
            dst, src)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_TYPES_TimeStamp_t' sequence class.
*/
#define T RTI_TYPES_TimeStamp_t
#define TSeq RTI_TYPES_TimeStamp_tSeq

#define T_initialize_w_params RTI_TYPES_TimeStamp_t_initialize_w_params

#define T_finalize_w_params   RTI_TYPES_TimeStamp_t_finalize_w_params
#define T_copy       RTI_TYPES_TimeStamp_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_TYPES_Duration_tTYPENAME = "RTI::TYPES::Duration_t";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_TYPES_Duration_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RTI_TYPES_Duration_t_g_tc_members[2]=
    {

        {
            (char *)"sec",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"nanosec",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_TYPES_Duration_t_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::TYPES::Duration_t", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            RTI_TYPES_Duration_t_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_TYPES_Duration_t*/

    if (is_initialized) {
        return &RTI_TYPES_Duration_t_g_tc;
    }

    RTI_TYPES_Duration_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_TYPES_Duration_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
    RTI_TYPES_Duration_t_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;

    /* Initialize the values for member annotations. */
    RTI_TYPES_Duration_t_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    RTI_TYPES_Duration_t_g_tc_members[0]._annotations._defaultValue._u.long_value = 0;
    RTI_TYPES_Duration_t_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    RTI_TYPES_Duration_t_g_tc_members[0]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    RTI_TYPES_Duration_t_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    RTI_TYPES_Duration_t_g_tc_members[0]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    RTI_TYPES_Duration_t_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    RTI_TYPES_Duration_t_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
    RTI_TYPES_Duration_t_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    RTI_TYPES_Duration_t_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    RTI_TYPES_Duration_t_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    RTI_TYPES_Duration_t_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    RTI_TYPES_Duration_t_g_tc._data._sampleAccessInfo =
    RTI_TYPES_Duration_t_get_sample_access_info();
    RTI_TYPES_Duration_t_g_tc._data._typePlugin =
    RTI_TYPES_Duration_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_TYPES_Duration_t_g_tc;
}

#define TSeq RTI_TYPES_Duration_tSeq
#define T RTI_TYPES_Duration_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_TYPES_Duration_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_TYPES_Duration_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_TYPES_Duration_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_TYPES_Duration_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_TYPES_Duration_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_TYPES_Duration_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    RTI_TYPES_Duration_t *sample;

    static RTIXCdrMemberAccessInfo RTI_TYPES_Duration_t_g_memberAccessInfos[2] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_TYPES_Duration_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_TYPES_Duration_t_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        RTI_TYPES_Duration_t);
    if (sample == NULL) {
        return NULL;
    }

    RTI_TYPES_Duration_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->sec - (char *)sample);

    RTI_TYPES_Duration_t_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->nanosec - (char *)sample);

    RTI_TYPES_Duration_t_g_sampleAccessInfo.memberAccessInfos = 
    RTI_TYPES_Duration_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_TYPES_Duration_t);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_TYPES_Duration_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_TYPES_Duration_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_TYPES_Duration_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_TYPES_Duration_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_TYPES_Duration_t_get_member_value_pointer;

    RTI_TYPES_Duration_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_TYPES_Duration_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_TYPES_Duration_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_TYPES_Duration_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_TYPES_Duration_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_TYPES_Duration_t_finalize_w_return,
        NULL
    };

    return &RTI_TYPES_Duration_t_g_typePlugin;
}
#endif

RTIBool RTI_TYPES_Duration_t_initialize(
    RTI_TYPES_Duration_t* sample) {
    return RTI_TYPES_Duration_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_TYPES_Duration_t_initialize_ex(
    RTI_TYPES_Duration_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_TYPES_Duration_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_TYPES_Duration_t_initialize_w_params(
    RTI_TYPES_Duration_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    sample->sec = 0;

    sample->nanosec = 0;

    return RTI_TRUE;
}

RTIBool RTI_TYPES_Duration_t_finalize_w_return(
    RTI_TYPES_Duration_t* sample)
{
    RTI_TYPES_Duration_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_TYPES_Duration_t_finalize(
    RTI_TYPES_Duration_t* sample)
{

    RTI_TYPES_Duration_t_finalize_ex(sample,RTI_TRUE);
}

void RTI_TYPES_Duration_t_finalize_ex(
    RTI_TYPES_Duration_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_TYPES_Duration_t_finalize_w_params(
        sample,&deallocParams);
}

void RTI_TYPES_Duration_t_finalize_w_params(
    RTI_TYPES_Duration_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void RTI_TYPES_Duration_t_finalize_optional_members(
    RTI_TYPES_Duration_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_TYPES_Duration_t_copy(
    RTI_TYPES_Duration_t* dst,
    const RTI_TYPES_Duration_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyLong (
            &dst->sec, &src->sec)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->nanosec, &src->nanosec)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_TYPES_Duration_t' sequence class.
*/
#define T RTI_TYPES_Duration_t
#define TSeq RTI_TYPES_Duration_tSeq

#define T_initialize_w_params RTI_TYPES_Duration_t_initialize_w_params

#define T_finalize_w_params   RTI_TYPES_Duration_t_finalize_w_params
#define T_copy       RTI_TYPES_Duration_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_TYPES_AnalogReadng_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTI_TYPES_AnalogReadng_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"RTI::TYPES::AnalogReadng_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  RTI_TYPES_AnalogReadng_t */

    if (is_initialized) {
        return &RTI_TYPES_AnalogReadng_t_g_tc;
    }

    RTI_TYPES_AnalogReadng_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_TYPES_AnalogReadng_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_ushort_w_new;

    /* Initialize the values for member annotations. */
    RTI_TYPES_AnalogReadng_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_USHORT;
    RTI_TYPES_AnalogReadng_t_g_tc._data._annotations._defaultValue._u.ushort_value = 0;
    RTI_TYPES_AnalogReadng_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_USHORT;
    RTI_TYPES_AnalogReadng_t_g_tc._data._annotations._minValue._u.ushort_value = RTIXCdrUnsignedShort_MIN;
    RTI_TYPES_AnalogReadng_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_USHORT;
    RTI_TYPES_AnalogReadng_t_g_tc._data._annotations._maxValue._u.ushort_value = RTIXCdrUnsignedShort_MAX;

    RTI_TYPES_AnalogReadng_t_g_tc._data._sampleAccessInfo =
    RTI_TYPES_AnalogReadng_t_get_sample_access_info();
    RTI_TYPES_AnalogReadng_t_g_tc._data._typePlugin =
    RTI_TYPES_AnalogReadng_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_TYPES_AnalogReadng_t_g_tc;
}

#define TSeq RTI_TYPES_AnalogReadng_tSeq
#define T RTI_TYPES_AnalogReadng_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_TYPES_AnalogReadng_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_TYPES_AnalogReadng_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_TYPES_AnalogReadng_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_TYPES_AnalogReadng_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_TYPES_AnalogReadng_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_TYPES_AnalogReadng_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_TYPES_AnalogReadng_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_TYPES_AnalogReadng_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_TYPES_AnalogReadng_t_g_sampleAccessInfo;
    }

    RTI_TYPES_AnalogReadng_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    RTI_TYPES_AnalogReadng_t_g_sampleAccessInfo.memberAccessInfos = 
    RTI_TYPES_AnalogReadng_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_TYPES_AnalogReadng_t);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_TYPES_AnalogReadng_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_TYPES_AnalogReadng_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_TYPES_AnalogReadng_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_TYPES_AnalogReadng_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_TYPES_AnalogReadng_t_get_member_value_pointer;

    RTI_TYPES_AnalogReadng_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_TYPES_AnalogReadng_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_TYPES_AnalogReadng_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_TYPES_AnalogReadng_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_TYPES_AnalogReadng_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_TYPES_AnalogReadng_t_finalize_w_return,
        NULL
    };

    return &RTI_TYPES_AnalogReadng_t_g_typePlugin;
}
#endif

RTIBool RTI_TYPES_AnalogReadng_t_initialize(
    RTI_TYPES_AnalogReadng_t* sample) {
    return RTI_TYPES_AnalogReadng_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_TYPES_AnalogReadng_t_initialize_ex(
    RTI_TYPES_AnalogReadng_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_TYPES_AnalogReadng_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_TYPES_AnalogReadng_t_initialize_w_params(
    RTI_TYPES_AnalogReadng_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    (*sample) = 0;

    return RTI_TRUE;
}

RTIBool RTI_TYPES_AnalogReadng_t_finalize_w_return(
    RTI_TYPES_AnalogReadng_t* sample)
{
    RTI_TYPES_AnalogReadng_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_TYPES_AnalogReadng_t_finalize(
    RTI_TYPES_AnalogReadng_t* sample)
{

    RTI_TYPES_AnalogReadng_t_finalize_ex(sample,RTI_TRUE);
}

void RTI_TYPES_AnalogReadng_t_finalize_ex(
    RTI_TYPES_AnalogReadng_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_TYPES_AnalogReadng_t_finalize_w_params(
        sample,&deallocParams);
}

void RTI_TYPES_AnalogReadng_t_finalize_w_params(
    RTI_TYPES_AnalogReadng_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void RTI_TYPES_AnalogReadng_t_finalize_optional_members(
    RTI_TYPES_AnalogReadng_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_TYPES_AnalogReadng_t_copy(
    RTI_TYPES_AnalogReadng_t* dst,
    const RTI_TYPES_AnalogReadng_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyUnsignedShort (
            dst, src)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_TYPES_AnalogReadng_t' sequence class.
*/
#define T RTI_TYPES_AnalogReadng_t
#define TSeq RTI_TYPES_AnalogReadng_tSeq

#define T_initialize_w_params RTI_TYPES_AnalogReadng_t_initialize_w_params

#define T_finalize_w_params   RTI_TYPES_AnalogReadng_t_finalize_w_params
#define T_copy       RTI_TYPES_AnalogReadng_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_TYPES_Voltage_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTI_TYPES_Voltage_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"RTI::TYPES::Voltage_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  RTI_TYPES_Voltage_t */

    if (is_initialized) {
        return &RTI_TYPES_Voltage_t_g_tc;
    }

    RTI_TYPES_Voltage_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_TYPES_Voltage_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_float_w_new;

    /* Initialize the values for member annotations. */
    RTI_TYPES_Voltage_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
    RTI_TYPES_Voltage_t_g_tc._data._annotations._defaultValue._u.float_value = 0.0f;
    RTI_TYPES_Voltage_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    RTI_TYPES_Voltage_t_g_tc._data._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
    RTI_TYPES_Voltage_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    RTI_TYPES_Voltage_t_g_tc._data._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    RTI_TYPES_Voltage_t_g_tc._data._sampleAccessInfo =
    RTI_TYPES_Voltage_t_get_sample_access_info();
    RTI_TYPES_Voltage_t_g_tc._data._typePlugin =
    RTI_TYPES_Voltage_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_TYPES_Voltage_t_g_tc;
}

#define TSeq RTI_TYPES_Voltage_tSeq
#define T RTI_TYPES_Voltage_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_TYPES_Voltage_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_TYPES_Voltage_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_TYPES_Voltage_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_TYPES_Voltage_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_TYPES_Voltage_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_TYPES_Voltage_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_TYPES_Voltage_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_TYPES_Voltage_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_TYPES_Voltage_t_g_sampleAccessInfo;
    }

    RTI_TYPES_Voltage_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    RTI_TYPES_Voltage_t_g_sampleAccessInfo.memberAccessInfos = 
    RTI_TYPES_Voltage_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_TYPES_Voltage_t);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_TYPES_Voltage_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_TYPES_Voltage_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_TYPES_Voltage_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_TYPES_Voltage_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_TYPES_Voltage_t_get_member_value_pointer;

    RTI_TYPES_Voltage_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_TYPES_Voltage_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_TYPES_Voltage_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_TYPES_Voltage_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_TYPES_Voltage_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_TYPES_Voltage_t_finalize_w_return,
        NULL
    };

    return &RTI_TYPES_Voltage_t_g_typePlugin;
}
#endif

RTIBool RTI_TYPES_Voltage_t_initialize(
    RTI_TYPES_Voltage_t* sample) {
    return RTI_TYPES_Voltage_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_TYPES_Voltage_t_initialize_ex(
    RTI_TYPES_Voltage_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_TYPES_Voltage_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_TYPES_Voltage_t_initialize_w_params(
    RTI_TYPES_Voltage_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    (*sample) = 0.0f;

    return RTI_TRUE;
}

RTIBool RTI_TYPES_Voltage_t_finalize_w_return(
    RTI_TYPES_Voltage_t* sample)
{
    RTI_TYPES_Voltage_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_TYPES_Voltage_t_finalize(
    RTI_TYPES_Voltage_t* sample)
{

    RTI_TYPES_Voltage_t_finalize_ex(sample,RTI_TRUE);
}

void RTI_TYPES_Voltage_t_finalize_ex(
    RTI_TYPES_Voltage_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_TYPES_Voltage_t_finalize_w_params(
        sample,&deallocParams);
}

void RTI_TYPES_Voltage_t_finalize_w_params(
    RTI_TYPES_Voltage_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void RTI_TYPES_Voltage_t_finalize_optional_members(
    RTI_TYPES_Voltage_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_TYPES_Voltage_t_copy(
    RTI_TYPES_Voltage_t* dst,
    const RTI_TYPES_Voltage_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyFloat (
            dst, src)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_TYPES_Voltage_t' sequence class.
*/
#define T RTI_TYPES_Voltage_t
#define TSeq RTI_TYPES_Voltage_tSeq

#define T_initialize_w_params RTI_TYPES_Voltage_t_initialize_w_params

#define T_finalize_w_params   RTI_TYPES_Voltage_t_finalize_w_params
#define T_copy       RTI_TYPES_Voltage_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_TYPES_Temperature_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTI_TYPES_Temperature_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"RTI::TYPES::Temperature_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  RTI_TYPES_Temperature_t */

    if (is_initialized) {
        return &RTI_TYPES_Temperature_t_g_tc;
    }

    RTI_TYPES_Temperature_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_TYPES_Temperature_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_float_w_new;

    /* Initialize the values for member annotations. */
    RTI_TYPES_Temperature_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
    RTI_TYPES_Temperature_t_g_tc._data._annotations._defaultValue._u.float_value = 0.0f;
    RTI_TYPES_Temperature_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    RTI_TYPES_Temperature_t_g_tc._data._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
    RTI_TYPES_Temperature_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    RTI_TYPES_Temperature_t_g_tc._data._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    RTI_TYPES_Temperature_t_g_tc._data._sampleAccessInfo =
    RTI_TYPES_Temperature_t_get_sample_access_info();
    RTI_TYPES_Temperature_t_g_tc._data._typePlugin =
    RTI_TYPES_Temperature_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_TYPES_Temperature_t_g_tc;
}

#define TSeq RTI_TYPES_Temperature_tSeq
#define T RTI_TYPES_Temperature_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_TYPES_Temperature_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_TYPES_Temperature_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_TYPES_Temperature_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_TYPES_Temperature_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_TYPES_Temperature_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_TYPES_Temperature_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_TYPES_Temperature_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_TYPES_Temperature_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_TYPES_Temperature_t_g_sampleAccessInfo;
    }

    RTI_TYPES_Temperature_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    RTI_TYPES_Temperature_t_g_sampleAccessInfo.memberAccessInfos = 
    RTI_TYPES_Temperature_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_TYPES_Temperature_t);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_TYPES_Temperature_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_TYPES_Temperature_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_TYPES_Temperature_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_TYPES_Temperature_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_TYPES_Temperature_t_get_member_value_pointer;

    RTI_TYPES_Temperature_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_TYPES_Temperature_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_TYPES_Temperature_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_TYPES_Temperature_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_TYPES_Temperature_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_TYPES_Temperature_t_finalize_w_return,
        NULL
    };

    return &RTI_TYPES_Temperature_t_g_typePlugin;
}
#endif

RTIBool RTI_TYPES_Temperature_t_initialize(
    RTI_TYPES_Temperature_t* sample) {
    return RTI_TYPES_Temperature_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_TYPES_Temperature_t_initialize_ex(
    RTI_TYPES_Temperature_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_TYPES_Temperature_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_TYPES_Temperature_t_initialize_w_params(
    RTI_TYPES_Temperature_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    (*sample) = 0.0f;

    return RTI_TRUE;
}

RTIBool RTI_TYPES_Temperature_t_finalize_w_return(
    RTI_TYPES_Temperature_t* sample)
{
    RTI_TYPES_Temperature_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_TYPES_Temperature_t_finalize(
    RTI_TYPES_Temperature_t* sample)
{

    RTI_TYPES_Temperature_t_finalize_ex(sample,RTI_TRUE);
}

void RTI_TYPES_Temperature_t_finalize_ex(
    RTI_TYPES_Temperature_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_TYPES_Temperature_t_finalize_w_params(
        sample,&deallocParams);
}

void RTI_TYPES_Temperature_t_finalize_w_params(
    RTI_TYPES_Temperature_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void RTI_TYPES_Temperature_t_finalize_optional_members(
    RTI_TYPES_Temperature_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_TYPES_Temperature_t_copy(
    RTI_TYPES_Temperature_t* dst,
    const RTI_TYPES_Temperature_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyFloat (
            dst, src)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_TYPES_Temperature_t' sequence class.
*/
#define T RTI_TYPES_Temperature_t
#define TSeq RTI_TYPES_Temperature_tSeq

#define T_initialize_w_params RTI_TYPES_Temperature_t_initialize_w_params

#define T_finalize_w_params   RTI_TYPES_Temperature_t_finalize_w_params
#define T_copy       RTI_TYPES_Temperature_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_TYPES_Temperature_Units_tTYPENAME = "RTI::TYPES::Temperature_Units_t";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_TYPES_Temperature_Units_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RTI_TYPES_Temperature_Units_t_g_tc_members[3]=
    {

        {
            (char *)"DEGREES_C",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            DEGREES_C, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"DEGREES_F",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            DEGREES_F, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"DEGREES_K",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            DEGREES_K, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_TYPES_Temperature_Units_t_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::TYPES::Temperature_Units_t", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            RTI_TYPES_Temperature_Units_t_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_TYPES_Temperature_Units_t*/

    if (is_initialized) {
        return &RTI_TYPES_Temperature_Units_t_g_tc;
    }

    RTI_TYPES_Temperature_Units_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    RTI_TYPES_Temperature_Units_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    RTI_TYPES_Temperature_Units_t_g_tc._data._annotations._defaultValue._u.long_value = 0;

    RTI_TYPES_Temperature_Units_t_g_tc._data._sampleAccessInfo =
    RTI_TYPES_Temperature_Units_t_get_sample_access_info();
    RTI_TYPES_Temperature_Units_t_g_tc._data._typePlugin =
    RTI_TYPES_Temperature_Units_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_TYPES_Temperature_Units_t_g_tc;
}

#define TSeq RTI_TYPES_Temperature_Units_tSeq
#define T RTI_TYPES_Temperature_Units_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_TYPES_Temperature_Units_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_TYPES_Temperature_Units_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_TYPES_Temperature_Units_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_TYPES_Temperature_Units_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_TYPES_Temperature_Units_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_TYPES_Temperature_Units_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_TYPES_Temperature_Units_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_TYPES_Temperature_Units_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_TYPES_Temperature_Units_t_g_sampleAccessInfo;
    }

    RTI_TYPES_Temperature_Units_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    RTI_TYPES_Temperature_Units_t_g_sampleAccessInfo.memberAccessInfos = 
    RTI_TYPES_Temperature_Units_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_TYPES_Temperature_Units_t);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_TYPES_Temperature_Units_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_TYPES_Temperature_Units_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_TYPES_Temperature_Units_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_TYPES_Temperature_Units_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_TYPES_Temperature_Units_t_get_member_value_pointer;

    RTI_TYPES_Temperature_Units_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_TYPES_Temperature_Units_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_TYPES_Temperature_Units_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_TYPES_Temperature_Units_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_TYPES_Temperature_Units_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_TYPES_Temperature_Units_t_finalize_w_return,
        NULL
    };

    return &RTI_TYPES_Temperature_Units_t_g_typePlugin;
}
#endif

RTIBool RTI_TYPES_Temperature_Units_t_initialize(
    RTI_TYPES_Temperature_Units_t* sample) {
    *sample = DEGREES_C;
    return RTI_TRUE;
}

RTIBool RTI_TYPES_Temperature_Units_t_initialize_ex(
    RTI_TYPES_Temperature_Units_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_TYPES_Temperature_Units_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_TYPES_Temperature_Units_t_initialize_w_params(
    RTI_TYPES_Temperature_Units_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = DEGREES_C;
    return RTI_TRUE;
}

RTIBool RTI_TYPES_Temperature_Units_t_finalize_w_return(
    RTI_TYPES_Temperature_Units_t* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void RTI_TYPES_Temperature_Units_t_finalize(
    RTI_TYPES_Temperature_Units_t* sample)
{

    if (sample==NULL) {
        return;
    }
}

void RTI_TYPES_Temperature_Units_t_finalize_ex(
    RTI_TYPES_Temperature_Units_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_TYPES_Temperature_Units_t_finalize_w_params(
        sample,&deallocParams);
}

void RTI_TYPES_Temperature_Units_t_finalize_w_params(
    RTI_TYPES_Temperature_Units_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void RTI_TYPES_Temperature_Units_t_finalize_optional_members(
    RTI_TYPES_Temperature_Units_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_TYPES_Temperature_Units_t_copy(
    RTI_TYPES_Temperature_Units_t* dst,
    const RTI_TYPES_Temperature_Units_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_TYPES_Temperature_Units_t' sequence class.
*/
#define T RTI_TYPES_Temperature_Units_t
#define TSeq RTI_TYPES_Temperature_Units_tSeq

#define T_initialize_w_params RTI_TYPES_Temperature_Units_t_initialize_w_params

#define T_finalize_w_params   RTI_TYPES_Temperature_Units_t_finalize_w_params
#define T_copy       RTI_TYPES_Temperature_Units_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_TYPES_Percentage_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTI_TYPES_Percentage_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"RTI::TYPES::Percentage_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  RTI_TYPES_Percentage_t */

    if (is_initialized) {
        return &RTI_TYPES_Percentage_t_g_tc;
    }

    RTI_TYPES_Percentage_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_TYPES_Percentage_t_g_tc._data._typeCode =  (RTICdrTypeCode *)&DDS_g_tc_float_w_new;

    /* Initialize the values for member annotations. */
    RTI_TYPES_Percentage_t_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
    RTI_TYPES_Percentage_t_g_tc._data._annotations._defaultValue._u.float_value = 0.0f;
    RTI_TYPES_Percentage_t_g_tc._data._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    RTI_TYPES_Percentage_t_g_tc._data._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
    RTI_TYPES_Percentage_t_g_tc._data._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    RTI_TYPES_Percentage_t_g_tc._data._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    RTI_TYPES_Percentage_t_g_tc._data._sampleAccessInfo =
    RTI_TYPES_Percentage_t_get_sample_access_info();
    RTI_TYPES_Percentage_t_g_tc._data._typePlugin =
    RTI_TYPES_Percentage_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_TYPES_Percentage_t_g_tc;
}

#define TSeq RTI_TYPES_Percentage_tSeq
#define T RTI_TYPES_Percentage_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_TYPES_Percentage_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_TYPES_Percentage_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_TYPES_Percentage_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_TYPES_Percentage_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_TYPES_Percentage_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_TYPES_Percentage_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_TYPES_Percentage_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_TYPES_Percentage_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_TYPES_Percentage_t_g_sampleAccessInfo;
    }

    RTI_TYPES_Percentage_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    RTI_TYPES_Percentage_t_g_sampleAccessInfo.memberAccessInfos = 
    RTI_TYPES_Percentage_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_TYPES_Percentage_t);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_TYPES_Percentage_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_TYPES_Percentage_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_TYPES_Percentage_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_TYPES_Percentage_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_TYPES_Percentage_t_get_member_value_pointer;

    RTI_TYPES_Percentage_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_TYPES_Percentage_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_TYPES_Percentage_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_TYPES_Percentage_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_TYPES_Percentage_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_TYPES_Percentage_t_finalize_w_return,
        NULL
    };

    return &RTI_TYPES_Percentage_t_g_typePlugin;
}
#endif

RTIBool RTI_TYPES_Percentage_t_initialize(
    RTI_TYPES_Percentage_t* sample) {
    return RTI_TYPES_Percentage_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_TYPES_Percentage_t_initialize_ex(
    RTI_TYPES_Percentage_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_TYPES_Percentage_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_TYPES_Percentage_t_initialize_w_params(
    RTI_TYPES_Percentage_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    (*sample) = 0.0f;

    return RTI_TRUE;
}

RTIBool RTI_TYPES_Percentage_t_finalize_w_return(
    RTI_TYPES_Percentage_t* sample)
{
    RTI_TYPES_Percentage_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_TYPES_Percentage_t_finalize(
    RTI_TYPES_Percentage_t* sample)
{

    RTI_TYPES_Percentage_t_finalize_ex(sample,RTI_TRUE);
}

void RTI_TYPES_Percentage_t_finalize_ex(
    RTI_TYPES_Percentage_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_TYPES_Percentage_t_finalize_w_params(
        sample,&deallocParams);
}

void RTI_TYPES_Percentage_t_finalize_w_params(
    RTI_TYPES_Percentage_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void RTI_TYPES_Percentage_t_finalize_optional_members(
    RTI_TYPES_Percentage_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_TYPES_Percentage_t_copy(
    RTI_TYPES_Percentage_t* dst,
    const RTI_TYPES_Percentage_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyFloat (
            dst, src)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_TYPES_Percentage_t' sequence class.
*/
#define T RTI_TYPES_Percentage_t
#define TSeq RTI_TYPES_Percentage_tSeq

#define T_initialize_w_params RTI_TYPES_Percentage_t_initialize_w_params

#define T_finalize_w_params   RTI_TYPES_Percentage_t_finalize_w_params
#define T_copy       RTI_TYPES_Percentage_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_SENSOR__sensor_id_tTYPENAME = "RTI::SENSOR::_sensor_id_t";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_SENSOR__sensor_id_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTI_SENSOR__sensor_id_t_g_tc_SensorTag_string = DDS_INITIALIZE_STRING_TYPECODE((32));

    static DDS_TypeCode_Member RTI_SENSOR__sensor_id_t_g_tc_members[1]=
    {

        {
            (char *)"SensorTag",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_SENSOR__sensor_id_t_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::SENSOR::_sensor_id_t", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            RTI_SENSOR__sensor_id_t_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_SENSOR__sensor_id_t*/

    if (is_initialized) {
        return &RTI_SENSOR__sensor_id_t_g_tc;
    }

    RTI_SENSOR__sensor_id_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_SENSOR__sensor_id_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&RTI_SENSOR__sensor_id_t_g_tc_SensorTag_string;

    /* Initialize the values for member annotations. */
    RTI_SENSOR__sensor_id_t_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    RTI_SENSOR__sensor_id_t_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    RTI_SENSOR__sensor_id_t_g_tc._data._sampleAccessInfo =
    RTI_SENSOR__sensor_id_t_get_sample_access_info();
    RTI_SENSOR__sensor_id_t_g_tc._data._typePlugin =
    RTI_SENSOR__sensor_id_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_SENSOR__sensor_id_t_g_tc;
}

#define TSeq RTI_SENSOR__sensor_id_tSeq
#define T RTI_SENSOR__sensor_id_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_SENSOR__sensor_id_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_SENSOR__sensor_id_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_SENSOR__sensor_id_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_SENSOR__sensor_id_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_SENSOR__sensor_id_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_SENSOR__sensor_id_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    RTI_SENSOR__sensor_id_t *sample;

    static RTIXCdrMemberAccessInfo RTI_SENSOR__sensor_id_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_SENSOR__sensor_id_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_SENSOR__sensor_id_t_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        RTI_SENSOR__sensor_id_t);
    if (sample == NULL) {
        return NULL;
    }

    RTI_SENSOR__sensor_id_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->SensorTag - (char *)sample);

    RTI_SENSOR__sensor_id_t_g_sampleAccessInfo.memberAccessInfos = 
    RTI_SENSOR__sensor_id_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_SENSOR__sensor_id_t);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_SENSOR__sensor_id_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_SENSOR__sensor_id_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_SENSOR__sensor_id_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_SENSOR__sensor_id_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_SENSOR__sensor_id_t_get_member_value_pointer;

    RTI_SENSOR__sensor_id_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_SENSOR__sensor_id_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_SENSOR__sensor_id_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_SENSOR__sensor_id_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_SENSOR__sensor_id_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_SENSOR__sensor_id_t_finalize_w_return,
        NULL
    };

    return &RTI_SENSOR__sensor_id_t_g_typePlugin;
}
#endif

RTIBool RTI_SENSOR__sensor_id_t_initialize(
    RTI_SENSOR__sensor_id_t* sample) {
    return RTI_SENSOR__sensor_id_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_SENSOR__sensor_id_t_initialize_ex(
    RTI_SENSOR__sensor_id_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_SENSOR__sensor_id_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_SENSOR__sensor_id_t_initialize_w_params(
    RTI_SENSOR__sensor_id_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        sample->SensorTag = DDS_String_alloc((32));
        RTICdrType_copyStringEx(
            &sample->SensorTag,
            "",
            (32),
            RTI_FALSE);
        if (sample->SensorTag == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->SensorTag != NULL) {
            RTICdrType_copyStringEx(
                &sample->SensorTag,
                "",
                (32),
                RTI_FALSE);
            if (sample->SensorTag == NULL) {
                return RTI_FALSE;
            }
        }
    }

    return RTI_TRUE;
}

RTIBool RTI_SENSOR__sensor_id_t_finalize_w_return(
    RTI_SENSOR__sensor_id_t* sample)
{
    RTI_SENSOR__sensor_id_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_SENSOR__sensor_id_t_finalize(
    RTI_SENSOR__sensor_id_t* sample)
{

    RTI_SENSOR__sensor_id_t_finalize_ex(sample,RTI_TRUE);
}

void RTI_SENSOR__sensor_id_t_finalize_ex(
    RTI_SENSOR__sensor_id_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_SENSOR__sensor_id_t_finalize_w_params(
        sample,&deallocParams);
}

void RTI_SENSOR__sensor_id_t_finalize_w_params(
    RTI_SENSOR__sensor_id_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (sample->SensorTag != NULL) {
        DDS_String_free(sample->SensorTag);
        sample->SensorTag=NULL;

    }
}

void RTI_SENSOR__sensor_id_t_finalize_optional_members(
    RTI_SENSOR__sensor_id_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_SENSOR__sensor_id_t_copy(
    RTI_SENSOR__sensor_id_t* dst,
    const RTI_SENSOR__sensor_id_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyStringEx (
            &dst->SensorTag, src->SensorTag, 
            (32) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_SENSOR__sensor_id_t' sequence class.
*/
#define T RTI_SENSOR__sensor_id_t
#define TSeq RTI_SENSOR__sensor_id_tSeq

#define T_initialize_w_params RTI_SENSOR__sensor_id_t_initialize_w_params

#define T_finalize_w_params   RTI_SENSOR__sensor_id_t_finalize_w_params
#define T_copy       RTI_SENSOR__sensor_id_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_SENSOR_SensorID_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTI_SENSOR_SensorID_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"RTI::SENSOR::SensorID_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  RTI_SENSOR_SensorID_t */

    if (is_initialized) {
        return &RTI_SENSOR_SensorID_t_g_tc;
    }

    RTI_SENSOR_SensorID_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_SENSOR_SensorID_t_g_tc._data._typeCode =  (RTICdrTypeCode *)RTI_SENSOR__sensor_id_t_get_typecode();

    /* Initialize the values for member annotations. */

    RTI_SENSOR_SensorID_t_g_tc._data._sampleAccessInfo =
    RTI_SENSOR_SensorID_t_get_sample_access_info();
    RTI_SENSOR_SensorID_t_g_tc._data._typePlugin =
    RTI_SENSOR_SensorID_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_SENSOR_SensorID_t_g_tc;
}

#define TSeq RTI_SENSOR_SensorID_tSeq
#define T RTI_SENSOR_SensorID_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_SENSOR_SensorID_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_SENSOR_SensorID_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_SENSOR_SensorID_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_SENSOR_SensorID_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_SENSOR_SensorID_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_SENSOR_SensorID_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_SENSOR_SensorID_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_SENSOR_SensorID_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_SENSOR_SensorID_t_g_sampleAccessInfo;
    }

    RTI_SENSOR_SensorID_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    RTI_SENSOR_SensorID_t_g_sampleAccessInfo.memberAccessInfos = 
    RTI_SENSOR_SensorID_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_SENSOR_SensorID_t);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_SENSOR_SensorID_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_SENSOR_SensorID_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_SENSOR_SensorID_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_SENSOR_SensorID_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_SENSOR_SensorID_t_get_member_value_pointer;

    RTI_SENSOR_SensorID_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_SENSOR_SensorID_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_SENSOR_SensorID_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_SENSOR_SensorID_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_SENSOR_SensorID_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_SENSOR_SensorID_t_finalize_w_return,
        NULL
    };

    return &RTI_SENSOR_SensorID_t_g_typePlugin;
}
#endif

RTIBool RTI_SENSOR_SensorID_t_initialize(
    RTI_SENSOR_SensorID_t* sample) {
    return RTI_SENSOR_SensorID_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_SENSOR_SensorID_t_initialize_ex(
    RTI_SENSOR_SensorID_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_SENSOR_SensorID_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_SENSOR_SensorID_t_initialize_w_params(
    RTI_SENSOR_SensorID_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_SENSOR__sensor_id_t_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool RTI_SENSOR_SensorID_t_finalize_w_return(
    RTI_SENSOR_SensorID_t* sample)
{
    RTI_SENSOR_SensorID_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_SENSOR_SensorID_t_finalize(
    RTI_SENSOR_SensorID_t* sample)
{

    RTI_SENSOR_SensorID_t_finalize_ex(sample,RTI_TRUE);
}

void RTI_SENSOR_SensorID_t_finalize_ex(
    RTI_SENSOR_SensorID_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_SENSOR_SensorID_t_finalize_w_params(
        sample,&deallocParams);
}

void RTI_SENSOR_SensorID_t_finalize_w_params(
    RTI_SENSOR_SensorID_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTI_SENSOR__sensor_id_t_finalize_w_params(sample,deallocParams);

}

void RTI_SENSOR_SensorID_t_finalize_optional_members(
    RTI_SENSOR_SensorID_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_SENSOR_SensorID_t_copy(
    RTI_SENSOR_SensorID_t* dst,
    const RTI_SENSOR_SensorID_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTI_SENSOR__sensor_id_t_copy(
            dst,(const RTI_SENSOR__sensor_id_t*)src)) {
            return RTI_FALSE;
        } 

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_SENSOR_SensorID_t' sequence class.
*/
#define T RTI_SENSOR_SensorID_t
#define TSeq RTI_SENSOR_SensorID_tSeq

#define T_initialize_w_params RTI_SENSOR_SensorID_t_initialize_w_params

#define T_finalize_w_params   RTI_SENSOR_SensorID_t_finalize_w_params
#define T_copy       RTI_SENSOR_SensorID_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_SENSOR_SensorPeriodicsTYPENAME = "RTI::SENSOR::SensorPeriodics";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_SENSOR_SensorPeriodics_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RTI_SENSOR_SensorPeriodics_g_tc_members[3]=
    {

        {
            (char *)"id",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"timestamp",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"exampleSensorReading",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_SENSOR_SensorPeriodics_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::SENSOR::SensorPeriodics", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            RTI_SENSOR_SensorPeriodics_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_SENSOR_SensorPeriodics*/

    if (is_initialized) {
        return &RTI_SENSOR_SensorPeriodics_g_tc;
    }

    RTI_SENSOR_SensorPeriodics_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_SENSOR_SensorPeriodics_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RTI_SENSOR_SensorID_t_get_typecode();
    RTI_SENSOR_SensorPeriodics_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)RTI_TYPES_TimeStamp_t_get_typecode();
    RTI_SENSOR_SensorPeriodics_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float_w_new;

    /* Initialize the values for member annotations. */

    RTI_SENSOR_SensorPeriodics_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
    RTI_SENSOR_SensorPeriodics_g_tc_members[1]._annotations._defaultValue._u.long_long_value = 0ll;
    RTI_SENSOR_SensorPeriodics_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
    RTI_SENSOR_SensorPeriodics_g_tc_members[1]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
    RTI_SENSOR_SensorPeriodics_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
    RTI_SENSOR_SensorPeriodics_g_tc_members[1]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

    RTI_SENSOR_SensorPeriodics_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_FLOAT;
    RTI_SENSOR_SensorPeriodics_g_tc_members[2]._annotations._defaultValue._u.float_value = 0.0f;
    RTI_SENSOR_SensorPeriodics_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_FLOAT;
    RTI_SENSOR_SensorPeriodics_g_tc_members[2]._annotations._minValue._u.float_value = RTIXCdrFloat_MIN;
    RTI_SENSOR_SensorPeriodics_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_FLOAT;
    RTI_SENSOR_SensorPeriodics_g_tc_members[2]._annotations._maxValue._u.float_value = RTIXCdrFloat_MAX;

    RTI_SENSOR_SensorPeriodics_g_tc._data._sampleAccessInfo =
    RTI_SENSOR_SensorPeriodics_get_sample_access_info();
    RTI_SENSOR_SensorPeriodics_g_tc._data._typePlugin =
    RTI_SENSOR_SensorPeriodics_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_SENSOR_SensorPeriodics_g_tc;
}

#define TSeq RTI_SENSOR_SensorPeriodicsSeq
#define T RTI_SENSOR_SensorPeriodics
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_SENSOR_SensorPeriodics_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_SENSOR_SensorPeriodics_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_SENSOR_SensorPeriodicsSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_SENSOR_SensorPeriodicsSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_SENSOR_SensorPeriodics_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_SENSOR_SensorPeriodics_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    RTI_SENSOR_SensorPeriodics *sample;

    static RTIXCdrMemberAccessInfo RTI_SENSOR_SensorPeriodics_g_memberAccessInfos[3] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_SENSOR_SensorPeriodics_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_SENSOR_SensorPeriodics_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        RTI_SENSOR_SensorPeriodics);
    if (sample == NULL) {
        return NULL;
    }

    RTI_SENSOR_SensorPeriodics_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

    RTI_SENSOR_SensorPeriodics_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timestamp - (char *)sample);

    RTI_SENSOR_SensorPeriodics_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->exampleSensorReading - (char *)sample);

    RTI_SENSOR_SensorPeriodics_g_sampleAccessInfo.memberAccessInfos = 
    RTI_SENSOR_SensorPeriodics_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_SENSOR_SensorPeriodics);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_SENSOR_SensorPeriodics_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_SENSOR_SensorPeriodics_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_SENSOR_SensorPeriodics_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_SENSOR_SensorPeriodics_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_SENSOR_SensorPeriodics_get_member_value_pointer;

    RTI_SENSOR_SensorPeriodics_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_SENSOR_SensorPeriodics_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_SENSOR_SensorPeriodics_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_SENSOR_SensorPeriodics_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_SENSOR_SensorPeriodics_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_SENSOR_SensorPeriodics_finalize_w_return,
        NULL
    };

    return &RTI_SENSOR_SensorPeriodics_g_typePlugin;
}
#endif

RTIBool RTI_SENSOR_SensorPeriodics_initialize(
    RTI_SENSOR_SensorPeriodics* sample) {
    return RTI_SENSOR_SensorPeriodics_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_SENSOR_SensorPeriodics_initialize_ex(
    RTI_SENSOR_SensorPeriodics* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_SENSOR_SensorPeriodics_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_SENSOR_SensorPeriodics_initialize_w_params(
    RTI_SENSOR_SensorPeriodics* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_SENSOR__sensor_id_t_initialize_w_params(&sample->id,
    allocParams)) {
        return RTI_FALSE;
    }

    sample->timestamp = 0ll;

    sample->exampleSensorReading = 0.0f;

    return RTI_TRUE;
}

RTIBool RTI_SENSOR_SensorPeriodics_finalize_w_return(
    RTI_SENSOR_SensorPeriodics* sample)
{
    RTI_SENSOR_SensorPeriodics_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_SENSOR_SensorPeriodics_finalize(
    RTI_SENSOR_SensorPeriodics* sample)
{

    RTI_SENSOR_SensorPeriodics_finalize_ex(sample,RTI_TRUE);
}

void RTI_SENSOR_SensorPeriodics_finalize_ex(
    RTI_SENSOR_SensorPeriodics* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_SENSOR_SensorPeriodics_finalize_w_params(
        sample,&deallocParams);
}

void RTI_SENSOR_SensorPeriodics_finalize_w_params(
    RTI_SENSOR_SensorPeriodics* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTI_SENSOR__sensor_id_t_finalize_w_params(&sample->id,deallocParams);

}

void RTI_SENSOR_SensorPeriodics_finalize_optional_members(
    RTI_SENSOR_SensorPeriodics* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_SENSOR_SensorPeriodics_copy(
    RTI_SENSOR_SensorPeriodics* dst,
    const RTI_SENSOR_SensorPeriodics* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTI_SENSOR__sensor_id_t_copy(
            &dst->id,(const RTI_SENSOR__sensor_id_t*)&src->id)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyLongLong (
            &dst->timestamp, &src->timestamp)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyFloat (
            &dst->exampleSensorReading, &src->exampleSensorReading)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_SENSOR_SensorPeriodics' sequence class.
*/
#define T RTI_SENSOR_SensorPeriodics
#define TSeq RTI_SENSOR_SensorPeriodicsSeq

#define T_initialize_w_params RTI_SENSOR_SensorPeriodics_initialize_w_params

#define T_finalize_w_params   RTI_SENSOR_SensorPeriodics_finalize_w_params
#define T_copy       RTI_SENSOR_SensorPeriodics_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_SENSOR_SensorInfoTYPENAME = "RTI::SENSOR::SensorInfo";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_SENSOR_SensorInfo_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RTI_SENSOR_SensorInfo_g_tc_members[2]=
    {

        {
            (char *)"id",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"parameter1",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_SENSOR_SensorInfo_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::SENSOR::SensorInfo", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            2, /* Number of members */
            RTI_SENSOR_SensorInfo_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_SENSOR_SensorInfo*/

    if (is_initialized) {
        return &RTI_SENSOR_SensorInfo_g_tc;
    }

    RTI_SENSOR_SensorInfo_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_SENSOR_SensorInfo_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RTI_SENSOR_SensorID_t_get_typecode();
    RTI_SENSOR_SensorInfo_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;

    /* Initialize the values for member annotations. */

    RTI_SENSOR_SensorInfo_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    RTI_SENSOR_SensorInfo_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
    RTI_SENSOR_SensorInfo_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    RTI_SENSOR_SensorInfo_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    RTI_SENSOR_SensorInfo_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    RTI_SENSOR_SensorInfo_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    RTI_SENSOR_SensorInfo_g_tc._data._sampleAccessInfo =
    RTI_SENSOR_SensorInfo_get_sample_access_info();
    RTI_SENSOR_SensorInfo_g_tc._data._typePlugin =
    RTI_SENSOR_SensorInfo_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_SENSOR_SensorInfo_g_tc;
}

#define TSeq RTI_SENSOR_SensorInfoSeq
#define T RTI_SENSOR_SensorInfo
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_SENSOR_SensorInfo_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_SENSOR_SensorInfo_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_SENSOR_SensorInfoSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_SENSOR_SensorInfoSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_SENSOR_SensorInfo_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_SENSOR_SensorInfo_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    RTI_SENSOR_SensorInfo *sample;

    static RTIXCdrMemberAccessInfo RTI_SENSOR_SensorInfo_g_memberAccessInfos[2] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_SENSOR_SensorInfo_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_SENSOR_SensorInfo_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        RTI_SENSOR_SensorInfo);
    if (sample == NULL) {
        return NULL;
    }

    RTI_SENSOR_SensorInfo_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

    RTI_SENSOR_SensorInfo_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->parameter1 - (char *)sample);

    RTI_SENSOR_SensorInfo_g_sampleAccessInfo.memberAccessInfos = 
    RTI_SENSOR_SensorInfo_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_SENSOR_SensorInfo);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_SENSOR_SensorInfo_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_SENSOR_SensorInfo_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_SENSOR_SensorInfo_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_SENSOR_SensorInfo_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_SENSOR_SensorInfo_get_member_value_pointer;

    RTI_SENSOR_SensorInfo_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_SENSOR_SensorInfo_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_SENSOR_SensorInfo_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_SENSOR_SensorInfo_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_SENSOR_SensorInfo_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_SENSOR_SensorInfo_finalize_w_return,
        NULL
    };

    return &RTI_SENSOR_SensorInfo_g_typePlugin;
}
#endif

RTIBool RTI_SENSOR_SensorInfo_initialize(
    RTI_SENSOR_SensorInfo* sample) {
    return RTI_SENSOR_SensorInfo_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_SENSOR_SensorInfo_initialize_ex(
    RTI_SENSOR_SensorInfo* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_SENSOR_SensorInfo_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_SENSOR_SensorInfo_initialize_w_params(
    RTI_SENSOR_SensorInfo* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_SENSOR__sensor_id_t_initialize_w_params(&sample->id,
    allocParams)) {
        return RTI_FALSE;
    }

    sample->parameter1 = 0;

    return RTI_TRUE;
}

RTIBool RTI_SENSOR_SensorInfo_finalize_w_return(
    RTI_SENSOR_SensorInfo* sample)
{
    RTI_SENSOR_SensorInfo_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_SENSOR_SensorInfo_finalize(
    RTI_SENSOR_SensorInfo* sample)
{

    RTI_SENSOR_SensorInfo_finalize_ex(sample,RTI_TRUE);
}

void RTI_SENSOR_SensorInfo_finalize_ex(
    RTI_SENSOR_SensorInfo* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_SENSOR_SensorInfo_finalize_w_params(
        sample,&deallocParams);
}

void RTI_SENSOR_SensorInfo_finalize_w_params(
    RTI_SENSOR_SensorInfo* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTI_SENSOR__sensor_id_t_finalize_w_params(&sample->id,deallocParams);

}

void RTI_SENSOR_SensorInfo_finalize_optional_members(
    RTI_SENSOR_SensorInfo* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_SENSOR_SensorInfo_copy(
    RTI_SENSOR_SensorInfo* dst,
    const RTI_SENSOR_SensorInfo* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTI_SENSOR__sensor_id_t_copy(
            &dst->id,(const RTI_SENSOR__sensor_id_t*)&src->id)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyLong (
            &dst->parameter1, &src->parameter1)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_SENSOR_SensorInfo' sequence class.
*/
#define T RTI_SENSOR_SensorInfo
#define TSeq RTI_SENSOR_SensorInfoSeq

#define T_initialize_w_params RTI_SENSOR_SensorInfo_initialize_w_params

#define T_finalize_w_params   RTI_SENSOR_SensorInfo_finalize_w_params
#define T_copy       RTI_SENSOR_SensorInfo_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_SENSOR_SensorConfigTYPENAME = "RTI::SENSOR::SensorConfig";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_SENSOR_SensorConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTI_SENSOR_SensorConfig_g_tc_calibrationFactors_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((3),NULL);

    static DDS_TypeCode_Member RTI_SENSOR_SensorConfig_g_tc_members[3]=
    {

        {
            (char *)"id",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"units",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"calibrationFactors",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_SENSOR_SensorConfig_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::SENSOR::SensorConfig", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            RTI_SENSOR_SensorConfig_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_SENSOR_SensorConfig*/

    if (is_initialized) {
        return &RTI_SENSOR_SensorConfig_g_tc;
    }

    RTI_SENSOR_SensorConfig_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_SENSOR_SensorConfig_g_tc_calibrationFactors_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float_w_new;
    RTI_SENSOR_SensorConfig_g_tc_calibrationFactors_sequence._data._sampleAccessInfo = &DDS_g_sai_float_seq;
    RTI_SENSOR_SensorConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RTI_SENSOR_SensorID_t_get_typecode();
    RTI_SENSOR_SensorConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)RTI_TYPES_Temperature_Units_t_get_typecode();
    RTI_SENSOR_SensorConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& RTI_SENSOR_SensorConfig_g_tc_calibrationFactors_sequence;

    /* Initialize the values for member annotations. */

    RTI_SENSOR_SensorConfig_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    RTI_SENSOR_SensorConfig_g_tc_members[1]._annotations._defaultValue._u.enumerated_value = 0;

    RTI_SENSOR_SensorConfig_g_tc._data._sampleAccessInfo =
    RTI_SENSOR_SensorConfig_get_sample_access_info();
    RTI_SENSOR_SensorConfig_g_tc._data._typePlugin =
    RTI_SENSOR_SensorConfig_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_SENSOR_SensorConfig_g_tc;
}

#define TSeq RTI_SENSOR_SensorConfigSeq
#define T RTI_SENSOR_SensorConfig
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_SENSOR_SensorConfig_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_SENSOR_SensorConfig_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_SENSOR_SensorConfigSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_SENSOR_SensorConfigSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_SENSOR_SensorConfig_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_SENSOR_SensorConfig_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    RTI_SENSOR_SensorConfig *sample;

    static RTIXCdrMemberAccessInfo RTI_SENSOR_SensorConfig_g_memberAccessInfos[3] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_SENSOR_SensorConfig_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_SENSOR_SensorConfig_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        RTI_SENSOR_SensorConfig);
    if (sample == NULL) {
        return NULL;
    }

    RTI_SENSOR_SensorConfig_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->id - (char *)sample);

    RTI_SENSOR_SensorConfig_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->units - (char *)sample);

    RTI_SENSOR_SensorConfig_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->calibrationFactors - (char *)sample);

    RTI_SENSOR_SensorConfig_g_sampleAccessInfo.memberAccessInfos = 
    RTI_SENSOR_SensorConfig_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_SENSOR_SensorConfig);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_SENSOR_SensorConfig_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_SENSOR_SensorConfig_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_SENSOR_SensorConfig_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_SENSOR_SensorConfig_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_SENSOR_SensorConfig_get_member_value_pointer;

    RTI_SENSOR_SensorConfig_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_SENSOR_SensorConfig_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_SENSOR_SensorConfig_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_SENSOR_SensorConfig_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_SENSOR_SensorConfig_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_SENSOR_SensorConfig_finalize_w_return,
        NULL
    };

    return &RTI_SENSOR_SensorConfig_g_typePlugin;
}
#endif

RTIBool RTI_SENSOR_SensorConfig_initialize(
    RTI_SENSOR_SensorConfig* sample) {
    return RTI_SENSOR_SensorConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_SENSOR_SensorConfig_initialize_ex(
    RTI_SENSOR_SensorConfig* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_SENSOR_SensorConfig_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_SENSOR_SensorConfig_initialize_w_params(
    RTI_SENSOR_SensorConfig* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_SENSOR__sensor_id_t_initialize_w_params(&sample->id,
    allocParams)) {
        return RTI_FALSE;
    }
    sample->units = DEGREES_C;
    if (allocParams->allocate_memory) {
        if(!DDS_FloatSeq_initialize(&sample->calibrationFactors  )){
            return RTI_FALSE;
        }
        if(!DDS_FloatSeq_set_absolute_maximum(&sample->calibrationFactors , (3))){
            return RTI_FALSE;
        }
        if (!DDS_FloatSeq_set_maximum(&sample->calibrationFactors , (3))) {
            return RTI_FALSE;
        }
    } else { 
        if(!DDS_FloatSeq_set_length(&sample->calibrationFactors, 0)){
            return RTI_FALSE;
        }    
    }
    return RTI_TRUE;
}

RTIBool RTI_SENSOR_SensorConfig_finalize_w_return(
    RTI_SENSOR_SensorConfig* sample)
{
    RTI_SENSOR_SensorConfig_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_SENSOR_SensorConfig_finalize(
    RTI_SENSOR_SensorConfig* sample)
{

    RTI_SENSOR_SensorConfig_finalize_ex(sample,RTI_TRUE);
}

void RTI_SENSOR_SensorConfig_finalize_ex(
    RTI_SENSOR_SensorConfig* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_SENSOR_SensorConfig_finalize_w_params(
        sample,&deallocParams);
}

void RTI_SENSOR_SensorConfig_finalize_w_params(
    RTI_SENSOR_SensorConfig* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTI_SENSOR__sensor_id_t_finalize_w_params(&sample->id,deallocParams);

    RTI_TYPES_Temperature_Units_t_finalize_w_params(&sample->units,deallocParams);

    if(!DDS_FloatSeq_finalize(&sample->calibrationFactors)){
        return;
    }

}

void RTI_SENSOR_SensorConfig_finalize_optional_members(
    RTI_SENSOR_SensorConfig* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_SENSOR_SensorConfig_copy(
    RTI_SENSOR_SensorConfig* dst,
    const RTI_SENSOR_SensorConfig* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTI_SENSOR__sensor_id_t_copy(
            &dst->id,(const RTI_SENSOR__sensor_id_t*)&src->id)) {
            return RTI_FALSE;
        } 
        if (!RTI_TYPES_Temperature_Units_t_copy(
            &dst->units,(const RTI_TYPES_Temperature_Units_t*)&src->units)) {
            return RTI_FALSE;
        } 
        if (!DDS_FloatSeq_copy(&dst->calibrationFactors ,
        &src->calibrationFactors )) {
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_SENSOR_SensorConfig' sequence class.
*/
#define T RTI_SENSOR_SensorConfig
#define TSeq RTI_SENSOR_SensorConfigSeq

#define T_initialize_w_params RTI_SENSOR_SensorConfig_initialize_w_params

#define T_finalize_w_params   RTI_SENSOR_SensorConfig_finalize_w_params
#define T_copy       RTI_SENSOR_SensorConfig_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_PATIENT_PATIENT_ALARM_TYPETYPENAME = "RTI::PATIENT::PATIENT_ALARM_TYPE";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_PATIENT_PATIENT_ALARM_TYPE_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RTI_PATIENT_PATIENT_ALARM_TYPE_g_tc_members[4]=
    {

        {
            (char *)"NO_ALARM",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            NO_ALARM, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"PULSE_LOW",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            PULSE_LOW, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"PULSE_HIGH",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            PULSE_HIGH, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"PULSE_SENSOR_ERROR",/* Member name */
            {
                0, /* Ignored */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            PULSE_SENSOR_ERROR, 
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PRIVATE_MEMBER,/* Member visibility */ 

            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_PATIENT_PATIENT_ALARM_TYPE_g_tc =
    {{
            DDS_TK_ENUM, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::PATIENT::PATIENT_ALARM_TYPE", /* Name */
            NULL,     /* Base class type code is assigned later */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            RTI_PATIENT_PATIENT_ALARM_TYPE_g_tc_members, /* Members */
            DDS_VM_NONE, /* Type Modifier */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_PATIENT_PATIENT_ALARM_TYPE*/

    if (is_initialized) {
        return &RTI_PATIENT_PATIENT_ALARM_TYPE_g_tc;
    }

    RTI_PATIENT_PATIENT_ALARM_TYPE_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    /* Initialize the values for annotations. */
    RTI_PATIENT_PATIENT_ALARM_TYPE_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
    RTI_PATIENT_PATIENT_ALARM_TYPE_g_tc._data._annotations._defaultValue._u.long_value = 0;

    RTI_PATIENT_PATIENT_ALARM_TYPE_g_tc._data._sampleAccessInfo =
    RTI_PATIENT_PATIENT_ALARM_TYPE_get_sample_access_info();
    RTI_PATIENT_PATIENT_ALARM_TYPE_g_tc._data._typePlugin =
    RTI_PATIENT_PATIENT_ALARM_TYPE_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_PATIENT_PATIENT_ALARM_TYPE_g_tc;
}

#define TSeq RTI_PATIENT_PATIENT_ALARM_TYPESeq
#define T RTI_PATIENT_PATIENT_ALARM_TYPE
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_PATIENT_PATIENT_ALARM_TYPE_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_PATIENT_PATIENT_ALARM_TYPE_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_PATIENT_PATIENT_ALARM_TYPESeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_PATIENT_PATIENT_ALARM_TYPESeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_PATIENT_PATIENT_ALARM_TYPE_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_PATIENT_PATIENT_ALARM_TYPE_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_PATIENT_PATIENT_ALARM_TYPE_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_PATIENT_PATIENT_ALARM_TYPE_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_PATIENT_PATIENT_ALARM_TYPE_g_sampleAccessInfo;
    }

    RTI_PATIENT_PATIENT_ALARM_TYPE_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    RTI_PATIENT_PATIENT_ALARM_TYPE_g_sampleAccessInfo.memberAccessInfos = 
    RTI_PATIENT_PATIENT_ALARM_TYPE_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_PATIENT_PATIENT_ALARM_TYPE);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_PATIENT_PATIENT_ALARM_TYPE_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_PATIENT_PATIENT_ALARM_TYPE_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_PATIENT_PATIENT_ALARM_TYPE_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_PATIENT_PATIENT_ALARM_TYPE_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_PATIENT_PATIENT_ALARM_TYPE_get_member_value_pointer;

    RTI_PATIENT_PATIENT_ALARM_TYPE_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_PATIENT_PATIENT_ALARM_TYPE_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_PATIENT_PATIENT_ALARM_TYPE_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_PATIENT_PATIENT_ALARM_TYPE_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_PATIENT_PATIENT_ALARM_TYPE_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_PATIENT_PATIENT_ALARM_TYPE_finalize_w_return,
        NULL
    };

    return &RTI_PATIENT_PATIENT_ALARM_TYPE_g_typePlugin;
}
#endif

RTIBool RTI_PATIENT_PATIENT_ALARM_TYPE_initialize(
    RTI_PATIENT_PATIENT_ALARM_TYPE* sample) {
    *sample = NO_ALARM;
    return RTI_TRUE;
}

RTIBool RTI_PATIENT_PATIENT_ALARM_TYPE_initialize_ex(
    RTI_PATIENT_PATIENT_ALARM_TYPE* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_PATIENT_PATIENT_ALARM_TYPE_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_PATIENT_PATIENT_ALARM_TYPE_initialize_w_params(
    RTI_PATIENT_PATIENT_ALARM_TYPE* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }
    *sample = NO_ALARM;
    return RTI_TRUE;
}

RTIBool RTI_PATIENT_PATIENT_ALARM_TYPE_finalize_w_return(
    RTI_PATIENT_PATIENT_ALARM_TYPE* sample)
{
    if (sample) {} /* To avoid warnings */

    return RTI_TRUE;
}

void RTI_PATIENT_PATIENT_ALARM_TYPE_finalize(
    RTI_PATIENT_PATIENT_ALARM_TYPE* sample)
{

    if (sample==NULL) {
        return;
    }
}

void RTI_PATIENT_PATIENT_ALARM_TYPE_finalize_ex(
    RTI_PATIENT_PATIENT_ALARM_TYPE* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_PATIENT_PATIENT_ALARM_TYPE_finalize_w_params(
        sample,&deallocParams);
}

void RTI_PATIENT_PATIENT_ALARM_TYPE_finalize_w_params(
    RTI_PATIENT_PATIENT_ALARM_TYPE* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void RTI_PATIENT_PATIENT_ALARM_TYPE_finalize_optional_members(
    RTI_PATIENT_PATIENT_ALARM_TYPE* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_PATIENT_PATIENT_ALARM_TYPE_copy(
    RTI_PATIENT_PATIENT_ALARM_TYPE* dst,
    const RTI_PATIENT_PATIENT_ALARM_TYPE* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        return RTICdrType_copyEnum((RTICdrEnum *)dst, (RTICdrEnum *)src);

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_PATIENT_PATIENT_ALARM_TYPE' sequence class.
*/
#define T RTI_PATIENT_PATIENT_ALARM_TYPE
#define TSeq RTI_PATIENT_PATIENT_ALARM_TYPESeq

#define T_initialize_w_params RTI_PATIENT_PATIENT_ALARM_TYPE_initialize_w_params

#define T_finalize_w_params   RTI_PATIENT_PATIENT_ALARM_TYPE_finalize_w_params
#define T_copy       RTI_PATIENT_PATIENT_ALARM_TYPE_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_PATIENT__patient_id_tTYPENAME = "RTI::PATIENT::_patient_id_t";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_PATIENT__patient_id_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTI_PATIENT__patient_id_t_g_tc_Id_string = DDS_INITIALIZE_STRING_TYPECODE((32));

    static DDS_TypeCode_Member RTI_PATIENT__patient_id_t_g_tc_members[1]=
    {

        {
            (char *)"Id",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_PATIENT__patient_id_t_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::PATIENT::_patient_id_t", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            RTI_PATIENT__patient_id_t_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_PATIENT__patient_id_t*/

    if (is_initialized) {
        return &RTI_PATIENT__patient_id_t_g_tc;
    }

    RTI_PATIENT__patient_id_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_PATIENT__patient_id_t_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&RTI_PATIENT__patient_id_t_g_tc_Id_string;

    /* Initialize the values for member annotations. */
    RTI_PATIENT__patient_id_t_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    RTI_PATIENT__patient_id_t_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    RTI_PATIENT__patient_id_t_g_tc._data._sampleAccessInfo =
    RTI_PATIENT__patient_id_t_get_sample_access_info();
    RTI_PATIENT__patient_id_t_g_tc._data._typePlugin =
    RTI_PATIENT__patient_id_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_PATIENT__patient_id_t_g_tc;
}

#define TSeq RTI_PATIENT__patient_id_tSeq
#define T RTI_PATIENT__patient_id_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_PATIENT__patient_id_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_PATIENT__patient_id_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_PATIENT__patient_id_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_PATIENT__patient_id_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_PATIENT__patient_id_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_PATIENT__patient_id_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    RTI_PATIENT__patient_id_t *sample;

    static RTIXCdrMemberAccessInfo RTI_PATIENT__patient_id_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_PATIENT__patient_id_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_PATIENT__patient_id_t_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        RTI_PATIENT__patient_id_t);
    if (sample == NULL) {
        return NULL;
    }

    RTI_PATIENT__patient_id_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->Id - (char *)sample);

    RTI_PATIENT__patient_id_t_g_sampleAccessInfo.memberAccessInfos = 
    RTI_PATIENT__patient_id_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_PATIENT__patient_id_t);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_PATIENT__patient_id_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_PATIENT__patient_id_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_PATIENT__patient_id_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_PATIENT__patient_id_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_PATIENT__patient_id_t_get_member_value_pointer;

    RTI_PATIENT__patient_id_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_PATIENT__patient_id_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_PATIENT__patient_id_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_PATIENT__patient_id_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_PATIENT__patient_id_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_PATIENT__patient_id_t_finalize_w_return,
        NULL
    };

    return &RTI_PATIENT__patient_id_t_g_typePlugin;
}
#endif

RTIBool RTI_PATIENT__patient_id_t_initialize(
    RTI_PATIENT__patient_id_t* sample) {
    return RTI_PATIENT__patient_id_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_PATIENT__patient_id_t_initialize_ex(
    RTI_PATIENT__patient_id_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_PATIENT__patient_id_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_PATIENT__patient_id_t_initialize_w_params(
    RTI_PATIENT__patient_id_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        sample->Id = DDS_String_alloc((32));
        RTICdrType_copyStringEx(
            &sample->Id,
            "",
            (32),
            RTI_FALSE);
        if (sample->Id == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->Id != NULL) {
            RTICdrType_copyStringEx(
                &sample->Id,
                "",
                (32),
                RTI_FALSE);
            if (sample->Id == NULL) {
                return RTI_FALSE;
            }
        }
    }

    return RTI_TRUE;
}

RTIBool RTI_PATIENT__patient_id_t_finalize_w_return(
    RTI_PATIENT__patient_id_t* sample)
{
    RTI_PATIENT__patient_id_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_PATIENT__patient_id_t_finalize(
    RTI_PATIENT__patient_id_t* sample)
{

    RTI_PATIENT__patient_id_t_finalize_ex(sample,RTI_TRUE);
}

void RTI_PATIENT__patient_id_t_finalize_ex(
    RTI_PATIENT__patient_id_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_PATIENT__patient_id_t_finalize_w_params(
        sample,&deallocParams);
}

void RTI_PATIENT__patient_id_t_finalize_w_params(
    RTI_PATIENT__patient_id_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (sample->Id != NULL) {
        DDS_String_free(sample->Id);
        sample->Id=NULL;

    }
}

void RTI_PATIENT__patient_id_t_finalize_optional_members(
    RTI_PATIENT__patient_id_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_PATIENT__patient_id_t_copy(
    RTI_PATIENT__patient_id_t* dst,
    const RTI_PATIENT__patient_id_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyStringEx (
            &dst->Id, src->Id, 
            (32) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_PATIENT__patient_id_t' sequence class.
*/
#define T RTI_PATIENT__patient_id_t
#define TSeq RTI_PATIENT__patient_id_tSeq

#define T_initialize_w_params RTI_PATIENT__patient_id_t_initialize_w_params

#define T_finalize_w_params   RTI_PATIENT__patient_id_t_finalize_w_params
#define T_copy       RTI_PATIENT__patient_id_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_PATIENT_Patient_ID_t_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTI_PATIENT_Patient_ID_t_g_tc =
    {{
            DDS_TK_ALIAS, /* Kind*/
            DDS_BOOLEAN_FALSE,/* Is a pointer? */
            -1, /* Ignored */
            (char *)"RTI::PATIENT::Patient_ID_t", /* Name */
            NULL, /* Content type code is assigned later */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for  RTI_PATIENT_Patient_ID_t */

    if (is_initialized) {
        return &RTI_PATIENT_Patient_ID_t_g_tc;
    }

    RTI_PATIENT_Patient_ID_t_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_PATIENT_Patient_ID_t_g_tc._data._typeCode =  (RTICdrTypeCode *)RTI_PATIENT__patient_id_t_get_typecode();

    /* Initialize the values for member annotations. */

    RTI_PATIENT_Patient_ID_t_g_tc._data._sampleAccessInfo =
    RTI_PATIENT_Patient_ID_t_get_sample_access_info();
    RTI_PATIENT_Patient_ID_t_g_tc._data._typePlugin =
    RTI_PATIENT_Patient_ID_t_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_PATIENT_Patient_ID_t_g_tc;
}

#define TSeq RTI_PATIENT_Patient_ID_tSeq
#define T RTI_PATIENT_Patient_ID_t
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_PATIENT_Patient_ID_t_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_PATIENT_Patient_ID_t_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_PATIENT_Patient_ID_tSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_PATIENT_Patient_ID_tSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_PATIENT_Patient_ID_t_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_PATIENT_Patient_ID_t_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    static RTIXCdrMemberAccessInfo RTI_PATIENT_Patient_ID_t_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_PATIENT_Patient_ID_t_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_PATIENT_Patient_ID_t_g_sampleAccessInfo;
    }

    RTI_PATIENT_Patient_ID_t_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

    RTI_PATIENT_Patient_ID_t_g_sampleAccessInfo.memberAccessInfos = 
    RTI_PATIENT_Patient_ID_t_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_PATIENT_Patient_ID_t);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_PATIENT_Patient_ID_t_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_PATIENT_Patient_ID_t_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_PATIENT_Patient_ID_t_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_PATIENT_Patient_ID_t_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_PATIENT_Patient_ID_t_get_member_value_pointer;

    RTI_PATIENT_Patient_ID_t_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_PATIENT_Patient_ID_t_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_PATIENT_Patient_ID_t_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_PATIENT_Patient_ID_t_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_PATIENT_Patient_ID_t_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_PATIENT_Patient_ID_t_finalize_w_return,
        NULL
    };

    return &RTI_PATIENT_Patient_ID_t_g_typePlugin;
}
#endif

RTIBool RTI_PATIENT_Patient_ID_t_initialize(
    RTI_PATIENT_Patient_ID_t* sample) {
    return RTI_PATIENT_Patient_ID_t_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_PATIENT_Patient_ID_t_initialize_ex(
    RTI_PATIENT_Patient_ID_t* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_PATIENT_Patient_ID_t_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_PATIENT_Patient_ID_t_initialize_w_params(
    RTI_PATIENT_Patient_ID_t* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_PATIENT__patient_id_t_initialize_w_params(sample,
    allocParams)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool RTI_PATIENT_Patient_ID_t_finalize_w_return(
    RTI_PATIENT_Patient_ID_t* sample)
{
    RTI_PATIENT_Patient_ID_t_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_PATIENT_Patient_ID_t_finalize(
    RTI_PATIENT_Patient_ID_t* sample)
{

    RTI_PATIENT_Patient_ID_t_finalize_ex(sample,RTI_TRUE);
}

void RTI_PATIENT_Patient_ID_t_finalize_ex(
    RTI_PATIENT_Patient_ID_t* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_PATIENT_Patient_ID_t_finalize_w_params(
        sample,&deallocParams);
}

void RTI_PATIENT_Patient_ID_t_finalize_w_params(
    RTI_PATIENT_Patient_ID_t* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTI_PATIENT__patient_id_t_finalize_w_params(sample,deallocParams);

}

void RTI_PATIENT_Patient_ID_t_finalize_optional_members(
    RTI_PATIENT_Patient_ID_t* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_PATIENT_Patient_ID_t_copy(
    RTI_PATIENT_Patient_ID_t* dst,
    const RTI_PATIENT_Patient_ID_t* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTI_PATIENT__patient_id_t_copy(
            dst,(const RTI_PATIENT__patient_id_t*)src)) {
            return RTI_FALSE;
        } 

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_PATIENT_Patient_ID_t' sequence class.
*/
#define T RTI_PATIENT_Patient_ID_t
#define TSeq RTI_PATIENT_Patient_ID_tSeq

#define T_initialize_w_params RTI_PATIENT_Patient_ID_t_initialize_w_params

#define T_finalize_w_params   RTI_PATIENT_Patient_ID_t_finalize_w_params
#define T_copy       RTI_PATIENT_Patient_ID_t_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_PATIENT_PatientPulseTYPENAME = "RTI::PATIENT::PatientPulse";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_PATIENT_PatientPulse_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTI_PATIENT_PatientPulse_g_tc_readings_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((100),NULL);

    static DDS_TypeCode_Member RTI_PATIENT_PatientPulse_g_tc_members[4]=
    {

        {
            (char *)"Id",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"timestamp",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"readings",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"bpm",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_PATIENT_PatientPulse_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::PATIENT::PatientPulse", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            RTI_PATIENT_PatientPulse_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_PATIENT_PatientPulse*/

    if (is_initialized) {
        return &RTI_PATIENT_PatientPulse_g_tc;
    }

    RTI_PATIENT_PatientPulse_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_PATIENT_PatientPulse_g_tc_readings_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong_w_new;
    RTI_PATIENT_PatientPulse_g_tc_readings_sequence._data._sampleAccessInfo = &DDS_g_sai_ulong_seq;
    RTI_PATIENT_PatientPulse_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RTI_PATIENT__patient_id_t_get_typecode();
    RTI_PATIENT_PatientPulse_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)RTI_TYPES_TimeStamp_t_get_typecode();
    RTI_PATIENT_PatientPulse_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& RTI_PATIENT_PatientPulse_g_tc_readings_sequence;
    RTI_PATIENT_PatientPulse_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet_w_new;

    /* Initialize the values for member annotations. */

    RTI_PATIENT_PatientPulse_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONGLONG;
    RTI_PATIENT_PatientPulse_g_tc_members[1]._annotations._defaultValue._u.long_long_value = 0ll;
    RTI_PATIENT_PatientPulse_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONGLONG;
    RTI_PATIENT_PatientPulse_g_tc_members[1]._annotations._minValue._u.long_long_value = RTIXCdrLongLong_MIN;
    RTI_PATIENT_PatientPulse_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONGLONG;
    RTI_PATIENT_PatientPulse_g_tc_members[1]._annotations._maxValue._u.long_long_value = RTIXCdrLongLong_MAX;

    RTI_PATIENT_PatientPulse_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_OCTET;
    RTI_PATIENT_PatientPulse_g_tc_members[3]._annotations._defaultValue._u.octet_value = 0;
    RTI_PATIENT_PatientPulse_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_OCTET;
    RTI_PATIENT_PatientPulse_g_tc_members[3]._annotations._minValue._u.octet_value = RTIXCdrOctet_MIN;
    RTI_PATIENT_PatientPulse_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_OCTET;
    RTI_PATIENT_PatientPulse_g_tc_members[3]._annotations._maxValue._u.octet_value = RTIXCdrOctet_MAX;

    RTI_PATIENT_PatientPulse_g_tc._data._sampleAccessInfo =
    RTI_PATIENT_PatientPulse_get_sample_access_info();
    RTI_PATIENT_PatientPulse_g_tc._data._typePlugin =
    RTI_PATIENT_PatientPulse_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_PATIENT_PatientPulse_g_tc;
}

#define TSeq RTI_PATIENT_PatientPulseSeq
#define T RTI_PATIENT_PatientPulse
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_PATIENT_PatientPulse_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_PATIENT_PatientPulse_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_PATIENT_PatientPulseSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_PATIENT_PatientPulseSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_PATIENT_PatientPulse_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_PATIENT_PatientPulse_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    RTI_PATIENT_PatientPulse *sample;

    static RTIXCdrMemberAccessInfo RTI_PATIENT_PatientPulse_g_memberAccessInfos[4] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_PATIENT_PatientPulse_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_PATIENT_PatientPulse_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        RTI_PATIENT_PatientPulse);
    if (sample == NULL) {
        return NULL;
    }

    RTI_PATIENT_PatientPulse_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->Id - (char *)sample);

    RTI_PATIENT_PatientPulse_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->timestamp - (char *)sample);

    RTI_PATIENT_PatientPulse_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->readings - (char *)sample);

    RTI_PATIENT_PatientPulse_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->bpm - (char *)sample);

    RTI_PATIENT_PatientPulse_g_sampleAccessInfo.memberAccessInfos = 
    RTI_PATIENT_PatientPulse_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_PATIENT_PatientPulse);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_PATIENT_PatientPulse_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_PATIENT_PatientPulse_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_PATIENT_PatientPulse_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_PATIENT_PatientPulse_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_PATIENT_PatientPulse_get_member_value_pointer;

    RTI_PATIENT_PatientPulse_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_PATIENT_PatientPulse_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_PATIENT_PatientPulse_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_PATIENT_PatientPulse_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_PATIENT_PatientPulse_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_PATIENT_PatientPulse_finalize_w_return,
        NULL
    };

    return &RTI_PATIENT_PatientPulse_g_typePlugin;
}
#endif

RTIBool RTI_PATIENT_PatientPulse_initialize(
    RTI_PATIENT_PatientPulse* sample) {
    return RTI_PATIENT_PatientPulse_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_PATIENT_PatientPulse_initialize_ex(
    RTI_PATIENT_PatientPulse* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_PATIENT_PatientPulse_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_PATIENT_PatientPulse_initialize_w_params(
    RTI_PATIENT_PatientPulse* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_PATIENT__patient_id_t_initialize_w_params(&sample->Id,
    allocParams)) {
        return RTI_FALSE;
    }

    sample->timestamp = 0ll;

    if (allocParams->allocate_memory) {
        if(!DDS_UnsignedLongSeq_initialize(&sample->readings  )){
            return RTI_FALSE;
        }
        if(!DDS_UnsignedLongSeq_set_absolute_maximum(&sample->readings , (100))){
            return RTI_FALSE;
        }
        if (!DDS_UnsignedLongSeq_set_maximum(&sample->readings , (100))) {
            return RTI_FALSE;
        }
    } else { 
        if(!DDS_UnsignedLongSeq_set_length(&sample->readings, 0)){
            return RTI_FALSE;
        }    
    }

    sample->bpm = 0;

    return RTI_TRUE;
}

RTIBool RTI_PATIENT_PatientPulse_finalize_w_return(
    RTI_PATIENT_PatientPulse* sample)
{
    RTI_PATIENT_PatientPulse_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_PATIENT_PatientPulse_finalize(
    RTI_PATIENT_PatientPulse* sample)
{

    RTI_PATIENT_PatientPulse_finalize_ex(sample,RTI_TRUE);
}

void RTI_PATIENT_PatientPulse_finalize_ex(
    RTI_PATIENT_PatientPulse* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_PATIENT_PatientPulse_finalize_w_params(
        sample,&deallocParams);
}

void RTI_PATIENT_PatientPulse_finalize_w_params(
    RTI_PATIENT_PatientPulse* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTI_PATIENT__patient_id_t_finalize_w_params(&sample->Id,deallocParams);

    if(!DDS_UnsignedLongSeq_finalize(&sample->readings)){
        return;
    }

}

void RTI_PATIENT_PatientPulse_finalize_optional_members(
    RTI_PATIENT_PatientPulse* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_PATIENT_PatientPulse_copy(
    RTI_PATIENT_PatientPulse* dst,
    const RTI_PATIENT_PatientPulse* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTI_PATIENT__patient_id_t_copy(
            &dst->Id,(const RTI_PATIENT__patient_id_t*)&src->Id)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyLongLong (
            &dst->timestamp, &src->timestamp)) { 
            return RTI_FALSE;
        }
        if (!DDS_UnsignedLongSeq_copy(&dst->readings ,
        &src->readings )) {
            return RTI_FALSE;
        }
        if (!RTICdrType_copyOctet (
            &dst->bpm, &src->bpm)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_PATIENT_PatientPulse' sequence class.
*/
#define T RTI_PATIENT_PatientPulse
#define TSeq RTI_PATIENT_PatientPulseSeq

#define T_initialize_w_params RTI_PATIENT_PatientPulse_initialize_w_params

#define T_finalize_w_params   RTI_PATIENT_PatientPulse_finalize_w_params
#define T_copy       RTI_PATIENT_PatientPulse_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_PATIENT_PatientInfoTYPENAME = "RTI::PATIENT::PatientInfo";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_PATIENT_PatientInfo_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode RTI_PATIENT_PatientInfo_g_tc_FirstName_string = DDS_INITIALIZE_STRING_TYPECODE((32));
    static DDS_TypeCode RTI_PATIENT_PatientInfo_g_tc_LastName_string = DDS_INITIALIZE_STRING_TYPECODE((32));
    static DDS_TypeCode RTI_PATIENT_PatientInfo_g_tc_Sex_string = DDS_INITIALIZE_STRING_TYPECODE((32));

    static DDS_TypeCode_Member RTI_PATIENT_PatientInfo_g_tc_members[7]=
    {

        {
            (char *)"Id",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"FirstName",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"LastName",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"Age",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"HeightCm",/* Member name */
            {
                4,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"WeightKg",/* Member name */
            {
                5,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"Sex",/* Member name */
            {
                6,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_PATIENT_PatientInfo_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::PATIENT::PatientInfo", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            7, /* Number of members */
            RTI_PATIENT_PatientInfo_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_PATIENT_PatientInfo*/

    if (is_initialized) {
        return &RTI_PATIENT_PatientInfo_g_tc;
    }

    RTI_PATIENT_PatientInfo_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_PATIENT_PatientInfo_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RTI_PATIENT__patient_id_t_get_typecode();
    RTI_PATIENT_PatientInfo_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&RTI_PATIENT_PatientInfo_g_tc_FirstName_string;
    RTI_PATIENT_PatientInfo_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&RTI_PATIENT_PatientInfo_g_tc_LastName_string;
    RTI_PATIENT_PatientInfo_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong_w_new;
    RTI_PATIENT_PatientInfo_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong_w_new;
    RTI_PATIENT_PatientInfo_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong_w_new;
    RTI_PATIENT_PatientInfo_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&RTI_PATIENT_PatientInfo_g_tc_Sex_string;

    /* Initialize the values for member annotations. */

    RTI_PATIENT_PatientInfo_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    RTI_PATIENT_PatientInfo_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    RTI_PATIENT_PatientInfo_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    RTI_PATIENT_PatientInfo_g_tc_members[2]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    RTI_PATIENT_PatientInfo_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
    RTI_PATIENT_PatientInfo_g_tc_members[3]._annotations._defaultValue._u.ulong_value = 0u;
    RTI_PATIENT_PatientInfo_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
    RTI_PATIENT_PatientInfo_g_tc_members[3]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
    RTI_PATIENT_PatientInfo_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
    RTI_PATIENT_PatientInfo_g_tc_members[3]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

    RTI_PATIENT_PatientInfo_g_tc_members[4]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
    RTI_PATIENT_PatientInfo_g_tc_members[4]._annotations._defaultValue._u.ulong_value = 0u;
    RTI_PATIENT_PatientInfo_g_tc_members[4]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
    RTI_PATIENT_PatientInfo_g_tc_members[4]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
    RTI_PATIENT_PatientInfo_g_tc_members[4]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
    RTI_PATIENT_PatientInfo_g_tc_members[4]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

    RTI_PATIENT_PatientInfo_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
    RTI_PATIENT_PatientInfo_g_tc_members[5]._annotations._defaultValue._u.ulong_value = 0u;
    RTI_PATIENT_PatientInfo_g_tc_members[5]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
    RTI_PATIENT_PatientInfo_g_tc_members[5]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
    RTI_PATIENT_PatientInfo_g_tc_members[5]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
    RTI_PATIENT_PatientInfo_g_tc_members[5]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

    RTI_PATIENT_PatientInfo_g_tc_members[6]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    RTI_PATIENT_PatientInfo_g_tc_members[6]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    RTI_PATIENT_PatientInfo_g_tc._data._sampleAccessInfo =
    RTI_PATIENT_PatientInfo_get_sample_access_info();
    RTI_PATIENT_PatientInfo_g_tc._data._typePlugin =
    RTI_PATIENT_PatientInfo_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_PATIENT_PatientInfo_g_tc;
}

#define TSeq RTI_PATIENT_PatientInfoSeq
#define T RTI_PATIENT_PatientInfo
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_PATIENT_PatientInfo_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_PATIENT_PatientInfo_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_PATIENT_PatientInfoSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_PATIENT_PatientInfoSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_PATIENT_PatientInfo_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_PATIENT_PatientInfo_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    RTI_PATIENT_PatientInfo *sample;

    static RTIXCdrMemberAccessInfo RTI_PATIENT_PatientInfo_g_memberAccessInfos[7] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_PATIENT_PatientInfo_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_PATIENT_PatientInfo_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        RTI_PATIENT_PatientInfo);
    if (sample == NULL) {
        return NULL;
    }

    RTI_PATIENT_PatientInfo_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->Id - (char *)sample);

    RTI_PATIENT_PatientInfo_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->FirstName - (char *)sample);

    RTI_PATIENT_PatientInfo_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->LastName - (char *)sample);

    RTI_PATIENT_PatientInfo_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->Age - (char *)sample);

    RTI_PATIENT_PatientInfo_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->HeightCm - (char *)sample);

    RTI_PATIENT_PatientInfo_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->WeightKg - (char *)sample);

    RTI_PATIENT_PatientInfo_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->Sex - (char *)sample);

    RTI_PATIENT_PatientInfo_g_sampleAccessInfo.memberAccessInfos = 
    RTI_PATIENT_PatientInfo_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_PATIENT_PatientInfo);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_PATIENT_PatientInfo_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_PATIENT_PatientInfo_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_PATIENT_PatientInfo_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_PATIENT_PatientInfo_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_PATIENT_PatientInfo_get_member_value_pointer;

    RTI_PATIENT_PatientInfo_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_PATIENT_PatientInfo_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_PATIENT_PatientInfo_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_PATIENT_PatientInfo_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_PATIENT_PatientInfo_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_PATIENT_PatientInfo_finalize_w_return,
        NULL
    };

    return &RTI_PATIENT_PatientInfo_g_typePlugin;
}
#endif

RTIBool RTI_PATIENT_PatientInfo_initialize(
    RTI_PATIENT_PatientInfo* sample) {
    return RTI_PATIENT_PatientInfo_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_PATIENT_PatientInfo_initialize_ex(
    RTI_PATIENT_PatientInfo* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_PATIENT_PatientInfo_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_PATIENT_PatientInfo_initialize_w_params(
    RTI_PATIENT_PatientInfo* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_PATIENT__patient_id_t_initialize_w_params(&sample->Id,
    allocParams)) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        sample->FirstName = DDS_String_alloc((32));
        RTICdrType_copyStringEx(
            &sample->FirstName,
            "",
            (32),
            RTI_FALSE);
        if (sample->FirstName == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->FirstName != NULL) {
            RTICdrType_copyStringEx(
                &sample->FirstName,
                "",
                (32),
                RTI_FALSE);
            if (sample->FirstName == NULL) {
                return RTI_FALSE;
            }
        }
    }

    if (allocParams->allocate_memory) {
        sample->LastName = DDS_String_alloc((32));
        RTICdrType_copyStringEx(
            &sample->LastName,
            "",
            (32),
            RTI_FALSE);
        if (sample->LastName == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->LastName != NULL) {
            RTICdrType_copyStringEx(
                &sample->LastName,
                "",
                (32),
                RTI_FALSE);
            if (sample->LastName == NULL) {
                return RTI_FALSE;
            }
        }
    }

    sample->Age = 0u;

    sample->HeightCm = 0u;

    sample->WeightKg = 0u;

    if (allocParams->allocate_memory) {
        sample->Sex = DDS_String_alloc((32));
        RTICdrType_copyStringEx(
            &sample->Sex,
            "",
            (32),
            RTI_FALSE);
        if (sample->Sex == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->Sex != NULL) {
            RTICdrType_copyStringEx(
                &sample->Sex,
                "",
                (32),
                RTI_FALSE);
            if (sample->Sex == NULL) {
                return RTI_FALSE;
            }
        }
    }

    return RTI_TRUE;
}

RTIBool RTI_PATIENT_PatientInfo_finalize_w_return(
    RTI_PATIENT_PatientInfo* sample)
{
    RTI_PATIENT_PatientInfo_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_PATIENT_PatientInfo_finalize(
    RTI_PATIENT_PatientInfo* sample)
{

    RTI_PATIENT_PatientInfo_finalize_ex(sample,RTI_TRUE);
}

void RTI_PATIENT_PatientInfo_finalize_ex(
    RTI_PATIENT_PatientInfo* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_PATIENT_PatientInfo_finalize_w_params(
        sample,&deallocParams);
}

void RTI_PATIENT_PatientInfo_finalize_w_params(
    RTI_PATIENT_PatientInfo* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTI_PATIENT__patient_id_t_finalize_w_params(&sample->Id,deallocParams);

    if (sample->FirstName != NULL) {
        DDS_String_free(sample->FirstName);
        sample->FirstName=NULL;

    }
    if (sample->LastName != NULL) {
        DDS_String_free(sample->LastName);
        sample->LastName=NULL;

    }

    if (sample->Sex != NULL) {
        DDS_String_free(sample->Sex);
        sample->Sex=NULL;

    }
}

void RTI_PATIENT_PatientInfo_finalize_optional_members(
    RTI_PATIENT_PatientInfo* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_PATIENT_PatientInfo_copy(
    RTI_PATIENT_PatientInfo* dst,
    const RTI_PATIENT_PatientInfo* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTI_PATIENT__patient_id_t_copy(
            &dst->Id,(const RTI_PATIENT__patient_id_t*)&src->Id)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyStringEx (
            &dst->FirstName, src->FirstName, 
            (32) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!RTICdrType_copyStringEx (
            &dst->LastName, src->LastName, 
            (32) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!RTICdrType_copyUnsignedLong (
            &dst->Age, &src->Age)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyUnsignedLong (
            &dst->HeightCm, &src->HeightCm)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyUnsignedLong (
            &dst->WeightKg, &src->WeightKg)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyStringEx (
            &dst->Sex, src->Sex, 
            (32) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_PATIENT_PatientInfo' sequence class.
*/
#define T RTI_PATIENT_PatientInfo
#define TSeq RTI_PATIENT_PatientInfoSeq

#define T_initialize_w_params RTI_PATIENT_PatientInfo_initialize_w_params

#define T_finalize_w_params   RTI_PATIENT_PatientInfo_finalize_w_params
#define T_copy       RTI_PATIENT_PatientInfo_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

/* ========================================================================= */
const char *RTI_PATIENT_PatientConfigTYPENAME = "RTI::PATIENT::PatientConfig";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* RTI_PATIENT_PatientConfig_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode_Member RTI_PATIENT_PatientConfig_g_tc_members[3]=
    {

        {
            (char *)"Id",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"PulseHighThreshold",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"PulseLowThreshold",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode RTI_PATIENT_PatientConfig_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"RTI::PATIENT::PatientConfig", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            RTI_PATIENT_PatientConfig_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for RTI_PATIENT_PatientConfig*/

    if (is_initialized) {
        return &RTI_PATIENT_PatientConfig_g_tc;
    }

    RTI_PATIENT_PatientConfig_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    RTI_PATIENT_PatientConfig_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)RTI_PATIENT__patient_id_t_get_typecode();
    RTI_PATIENT_PatientConfig_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong_w_new;
    RTI_PATIENT_PatientConfig_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong_w_new;

    /* Initialize the values for member annotations. */

    RTI_PATIENT_PatientConfig_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
    RTI_PATIENT_PatientConfig_g_tc_members[1]._annotations._defaultValue._u.ulong_value = 200;
    RTI_PATIENT_PatientConfig_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
    RTI_PATIENT_PatientConfig_g_tc_members[1]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
    RTI_PATIENT_PatientConfig_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
    RTI_PATIENT_PatientConfig_g_tc_members[1]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

    RTI_PATIENT_PatientConfig_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
    RTI_PATIENT_PatientConfig_g_tc_members[2]._annotations._defaultValue._u.ulong_value = 0;
    RTI_PATIENT_PatientConfig_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
    RTI_PATIENT_PatientConfig_g_tc_members[2]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
    RTI_PATIENT_PatientConfig_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
    RTI_PATIENT_PatientConfig_g_tc_members[2]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

    RTI_PATIENT_PatientConfig_g_tc._data._sampleAccessInfo =
    RTI_PATIENT_PatientConfig_get_sample_access_info();
    RTI_PATIENT_PatientConfig_g_tc._data._typePlugin =
    RTI_PATIENT_PatientConfig_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &RTI_PATIENT_PatientConfig_g_tc;
}

#define TSeq RTI_PATIENT_PatientConfigSeq
#define T RTI_PATIENT_PatientConfig
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *RTI_PATIENT_PatientConfig_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo RTI_PATIENT_PatientConfig_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(RTI_PATIENT_PatientConfigSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        RTI_PATIENT_PatientConfigSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &RTI_PATIENT_PatientConfig_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *RTI_PATIENT_PatientConfig_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    RTI_PATIENT_PatientConfig *sample;

    static RTIXCdrMemberAccessInfo RTI_PATIENT_PatientConfig_g_memberAccessInfos[3] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo RTI_PATIENT_PatientConfig_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &RTI_PATIENT_PatientConfig_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        RTI_PATIENT_PatientConfig);
    if (sample == NULL) {
        return NULL;
    }

    RTI_PATIENT_PatientConfig_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->Id - (char *)sample);

    RTI_PATIENT_PatientConfig_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->PulseHighThreshold - (char *)sample);

    RTI_PATIENT_PatientConfig_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->PulseLowThreshold - (char *)sample);

    RTI_PATIENT_PatientConfig_g_sampleAccessInfo.memberAccessInfos = 
    RTI_PATIENT_PatientConfig_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(RTI_PATIENT_PatientConfig);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            RTI_PATIENT_PatientConfig_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            RTI_PATIENT_PatientConfig_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    RTI_PATIENT_PatientConfig_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    RTI_PATIENT_PatientConfig_g_sampleAccessInfo.getMemberValuePointerFcn = 
    RTI_PATIENT_PatientConfig_get_member_value_pointer;

    RTI_PATIENT_PatientConfig_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &RTI_PATIENT_PatientConfig_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *RTI_PATIENT_PatientConfig_get_type_plugin_info()
{
    static RTIXCdrTypePlugin RTI_PATIENT_PatientConfig_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        RTI_PATIENT_PatientConfig_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        RTI_PATIENT_PatientConfig_finalize_w_return,
        NULL
    };

    return &RTI_PATIENT_PatientConfig_g_typePlugin;
}
#endif

RTIBool RTI_PATIENT_PatientConfig_initialize(
    RTI_PATIENT_PatientConfig* sample) {
    return RTI_PATIENT_PatientConfig_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool RTI_PATIENT_PatientConfig_initialize_ex(
    RTI_PATIENT_PatientConfig* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return RTI_PATIENT_PatientConfig_initialize_w_params(
        sample,&allocParams);

}

RTIBool RTI_PATIENT_PatientConfig_initialize_w_params(
    RTI_PATIENT_PatientConfig* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTI_PATIENT__patient_id_t_initialize_w_params(&sample->Id,
    allocParams)) {
        return RTI_FALSE;
    }

    sample->PulseHighThreshold = 200;

    sample->PulseLowThreshold = 0;

    return RTI_TRUE;
}

RTIBool RTI_PATIENT_PatientConfig_finalize_w_return(
    RTI_PATIENT_PatientConfig* sample)
{
    RTI_PATIENT_PatientConfig_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void RTI_PATIENT_PatientConfig_finalize(
    RTI_PATIENT_PatientConfig* sample)
{

    RTI_PATIENT_PatientConfig_finalize_ex(sample,RTI_TRUE);
}

void RTI_PATIENT_PatientConfig_finalize_ex(
    RTI_PATIENT_PatientConfig* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    RTI_PATIENT_PatientConfig_finalize_w_params(
        sample,&deallocParams);
}

void RTI_PATIENT_PatientConfig_finalize_w_params(
    RTI_PATIENT_PatientConfig* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    RTI_PATIENT__patient_id_t_finalize_w_params(&sample->Id,deallocParams);

}

void RTI_PATIENT_PatientConfig_finalize_optional_members(
    RTI_PATIENT_PatientConfig* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool RTI_PATIENT_PatientConfig_copy(
    RTI_PATIENT_PatientConfig* dst,
    const RTI_PATIENT_PatientConfig* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTI_PATIENT__patient_id_t_copy(
            &dst->Id,(const RTI_PATIENT__patient_id_t*)&src->Id)) {
            return RTI_FALSE;
        } 
        if (!RTICdrType_copyUnsignedLong (
            &dst->PulseHighThreshold, &src->PulseHighThreshold)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyUnsignedLong (
            &dst->PulseLowThreshold, &src->PulseLowThreshold)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'RTI_PATIENT_PatientConfig' sequence class.
*/
#define T RTI_PATIENT_PatientConfig
#define TSeq RTI_PATIENT_PatientConfigSeq

#define T_initialize_w_params RTI_PATIENT_PatientConfig_initialize_w_params

#define T_finalize_w_params   RTI_PATIENT_PatientConfig_finalize_w_params
#define T_copy       RTI_PATIENT_PatientConfig_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<RTI_TYPES_Duration_t>::get() 
        {
            return (const RTIXCdrTypeCode *) RTI_TYPES_Duration_t_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<RTI_SENSOR__sensor_id_t>::get() 
        {
            return (const RTIXCdrTypeCode *) RTI_SENSOR__sensor_id_t_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<RTI_SENSOR_SensorPeriodics>::get() 
        {
            return (const RTIXCdrTypeCode *) RTI_SENSOR_SensorPeriodics_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<RTI_SENSOR_SensorInfo>::get() 
        {
            return (const RTIXCdrTypeCode *) RTI_SENSOR_SensorInfo_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<RTI_SENSOR_SensorConfig>::get() 
        {
            return (const RTIXCdrTypeCode *) RTI_SENSOR_SensorConfig_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<RTI_PATIENT__patient_id_t>::get() 
        {
            return (const RTIXCdrTypeCode *) RTI_PATIENT__patient_id_t_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<RTI_PATIENT_PatientPulse>::get() 
        {
            return (const RTIXCdrTypeCode *) RTI_PATIENT_PatientPulse_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<RTI_PATIENT_PatientInfo>::get() 
        {
            return (const RTIXCdrTypeCode *) RTI_PATIENT_PatientInfo_get_typecode();
        }

        const RTIXCdrTypeCode * type_code<RTI_PATIENT_PatientConfig>::get() 
        {
            return (const RTIXCdrTypeCode *) RTI_PATIENT_PatientConfig_get_typecode();
        }

    } 
}
#endif
