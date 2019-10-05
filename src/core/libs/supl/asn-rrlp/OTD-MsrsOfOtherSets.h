/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _OTD_MsrsOfOtherSets_H_
#define _OTD_MsrsOfOtherSets_H_

#include <asn_application.h>

/* Including external dependencies */
#include "OTD-Measurement.h"
#include "OTD-MeasurementWithID.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Dependencies */
    typedef enum OTD_MsrsOfOtherSets_PR
    {
        OTD_MsrsOfOtherSets_PR_NOTHING, /* No components present */
        OTD_MsrsOfOtherSets_PR_identityNotPresent,
        OTD_MsrsOfOtherSets_PR_identityPresent
    } OTD_MsrsOfOtherSets_PR;

    /* OTD-MsrsOfOtherSets */
    typedef struct OTD_MsrsOfOtherSets
    {
        OTD_MsrsOfOtherSets_PR present;
        union OTD_MsrsOfOtherSets_u
        {
            OTD_Measurement_t identityNotPresent;
            OTD_MeasurementWithID_t identityPresent;
        } choice;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } OTD_MsrsOfOtherSets_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_OTD_MsrsOfOtherSets;

#ifdef __cplusplus
}
#endif

#endif /* _OTD_MsrsOfOtherSets_H_ */
#include <asn_internal.h>
