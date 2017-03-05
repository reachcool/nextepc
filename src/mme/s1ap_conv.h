#ifndef _S1AP_CONV_H__
#define _S1AP_CONV_H__

#include "s1ap_message.h"
#include "context.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

CORE_DECLARE(void) s1ap_uint8_to_OCTET_STRING(
        c_uint8_t uint8, OCTET_STRING_t *octet_string);
CORE_DECLARE(void) s1ap_uint16_to_OCTET_STRING(
        c_uint16_t uint16, OCTET_STRING_t *octet_string);
CORE_DECLARE(void) s1ap_uint32_to_OCTET_STRING(
        c_uint32_t uint32, OCTET_STRING_t *octet_string);

CORE_DECLARE(void) s1ap_plmn_id_to_TBCD_STRING(
        plmn_id_t *plmn_id, S1ap_TBCD_STRING_t *tbcd_string);

CORE_DECLARE(void) s1ap_uint32_to_ENB_ID(
    S1ap_ENB_ID_PR present, c_uint32_t enb_id, S1ap_ENB_ID_t *eNB_ID);
CORE_DECLARE(void) s1ap_ENB_ID_to_uint32(
        S1ap_ENB_ID_t *eNB_ID, c_uint32_t *uint32);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
