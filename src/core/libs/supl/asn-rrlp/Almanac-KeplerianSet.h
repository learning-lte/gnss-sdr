/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _Almanac_KeplerianSet_H_
#define _Almanac_KeplerianSet_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Almanac-KeplerianSet */
    typedef struct Almanac_KeplerianSet
    {
        long kepAlmanacE;
        long kepAlmanacDeltaI;
        long kepAlmanacOmegaDot;
        long kepSVHealth;
        long kepAlmanacAPowerHalf;
        long kepAlmanacOmega0;
        long kepAlmanacW;
        long kepAlmanacM0;
        long kepAlmanacAF0;
        long kepAlmanacAF1;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } Almanac_KeplerianSet_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_Almanac_KeplerianSet;

#ifdef __cplusplus
}
#endif

#endif /* _Almanac_KeplerianSet_H_ */
#include <asn_internal.h>
