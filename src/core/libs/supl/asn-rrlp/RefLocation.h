/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _RefLocation_H_
#define _RefLocation_H_

#include <asn_application.h>

/* Including external dependencies */
#include "Ext-GeographicalInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* RefLocation */
    typedef struct RefLocation
    {
        Ext_GeographicalInformation_t threeDLocation;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } RefLocation_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_RefLocation;

#ifdef __cplusplus
}
#endif

#endif /* _RefLocation_H_ */
#include <asn_internal.h>
