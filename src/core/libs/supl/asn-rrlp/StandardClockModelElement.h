/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _StandardClockModelElement_H_
#define _StandardClockModelElement_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* StandardClockModelElement */
    typedef struct StandardClockModelElement
    {
        long stanClockTocLSB;
        long stanClockAF2;
        long stanClockAF1;
        long stanClockAF0;
        long *stanClockTgd /* OPTIONAL */;
        long *stanModelID /* OPTIONAL */;
        /*
         * This type is extensible,
         * possible extensions are below.
         */

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } StandardClockModelElement_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_StandardClockModelElement;

#ifdef __cplusplus
}
#endif

#endif /* _StandardClockModelElement_H_ */
#include <asn_internal.h>
