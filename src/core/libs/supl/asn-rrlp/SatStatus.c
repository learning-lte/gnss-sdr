/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#include "SatStatus.h"

static asn_per_constraints_t ASN_PER_TYPE_SAT_STATUS_CONSTR_1 = {
    {APC_CONSTRAINED | APC_EXTENSIBLE, 2, 2, 0, 2} /* (0..2,...) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SatStatus_1[] = {
    {ATF_NOFLAGS, 0, offsetof(struct SatStatus, choice.newSatelliteAndModelUC),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_UncompressedEphemeris,
     0, /* Defer constraints checking to the member type */
     0, /* No PER visible constraints */
     0, "newSatelliteAndModelUC"},
    {ATF_NOFLAGS, 0, offsetof(struct SatStatus, choice.oldSatelliteAndModel),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_NULL, 0, /* Defer constraints checking to the member type */
     0,                /* No PER visible constraints */
     0, "oldSatelliteAndModel"},
    {ATF_NOFLAGS, 0, offsetof(struct SatStatus, choice.newNaviModelUC),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_UncompressedEphemeris,
     0, /* Defer constraints checking to the member type */
     0, /* No PER visible constraints */
     0, "newNaviModelUC"},
};
static asn_TYPE_tag2member_t asn_MAP_SatStatus_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0,
     0}, /* newSatelliteAndModelUC at 710 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0,
     0}, /* oldSatelliteAndModel at 713 */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0} /* newNaviModelUC at 716 */
};
static asn_CHOICE_specifics_t asn_SPC_SatStatus_specs_1 = {
    sizeof(struct SatStatus),
    offsetof(struct SatStatus, _asn_ctx),
    offsetof(struct SatStatus, present),
    sizeof(((struct SatStatus *)0)->present),
    asn_MAP_SatStatus_tag2el_1,
    3, /* Count of tags in the map */
    0,
    3 /* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SatStatus = {
    "SatStatus",
    "SatStatus",
    CHOICE_free,
    CHOICE_print,
    CHOICE_constraint,
    CHOICE_decode_ber,
    CHOICE_encode_der,
    CHOICE_decode_xer,
    CHOICE_encode_xer,
    CHOICE_decode_uper,
    CHOICE_encode_uper,
    CHOICE_outmost_tag,
    0, /* No effective tags (pointer) */
    0, /* No effective tags (count) */
    0, /* No tags (pointer) */
    0, /* No tags (count) */
    &ASN_PER_TYPE_SAT_STATUS_CONSTR_1,
    asn_MBR_SatStatus_1,
    3,                         /* Elements count */
    &asn_SPC_SatStatus_specs_1 /* Additional specs */
};
