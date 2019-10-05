/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _ControlHeader_H_
#define _ControlHeader_H_

#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct ReferenceTime;
    struct RefLocation;
    struct DGPSCorrections;
    struct NavigationModel;
    struct IonosphericModel;
    struct UTCModel;
    struct Almanac;
    struct AcquisAssist;
    struct SeqOf_BadSatelliteSet;

    /* ControlHeader */
    typedef struct ControlHeader
    {
        struct ReferenceTime *referenceTime /* OPTIONAL */;
        struct RefLocation *refLocation /* OPTIONAL */;
        struct DGPSCorrections *dgpsCorrections /* OPTIONAL */;
        struct NavigationModel *navigationModel /* OPTIONAL */;
        struct IonosphericModel *ionosphericModel /* OPTIONAL */;
        struct UTCModel *utcModel /* OPTIONAL */;
        struct Almanac *almanac /* OPTIONAL */;
        struct AcquisAssist *acquisAssist /* OPTIONAL */;
        struct SeqOf_BadSatelliteSet *realTimeIntegrity /* OPTIONAL */;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } ControlHeader_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_ControlHeader;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ReferenceTime.h"
#include "RefLocation.h"
#include "DGPSCorrections.h"
#include "NavigationModel.h"
#include "IonosphericModel.h"
#include "UTCModel.h"
#include "Almanac.h"
#include "AcquisAssist.h"
#include "SeqOf-BadSatelliteSet.h"

#endif /* _ControlHeader_H_ */
#include <asn_internal.h>
