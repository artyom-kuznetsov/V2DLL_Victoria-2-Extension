#include "nrm_runtime.h"

static nrm_u32 nrm_read_u32(const void *p)
{
    return *(const volatile nrm_u32*)p;
}

static nrm_bool nrm_patch_u32(void *p, nrm_u32 v)
{
    return nrm_patch_memory(p, &v, 4);
}

nrm_bool __cdecl nrm_install_mobilization_module(void)
{
    nrm_u8 *base = (nrm_u8*)g_game_base;
    nrm_bool all_ok = NRM_TRUE;
    nrm_u32 expected;
    nrm_u32 replacement;

    if (!base) return NRM_FALSE;

    /* Replace the callback pointer embedded by the vanilla UI constructor.
       This is deliberately NOT a detour in the callback body. */
    expected = (nrm_u32)(base + NRM_OFF_MOBILIZE_CALLBACK);
    if (nrm_read_u32(base + NRM_OFF_MOBILIZE_CB_IMMEDIATE) == expected) {
        replacement = (nrm_u32)&nrm_wrapper_mobilize;
        if (nrm_patch_u32(base + NRM_OFF_MOBILIZE_CB_IMMEDIATE, replacement))
            g_nrm_feature_flags |= NRM_FEATURE_MOBILIZE_CALLBACK;
        else
            all_ok = NRM_FALSE;
    } else {
        all_ok = NRM_FALSE;
    }

    expected = (nrm_u32)(base + NRM_OFF_DEMOBILIZE_CALLBACK);
    if (nrm_read_u32(base + NRM_OFF_DEMOBILIZE_CB_IMMEDIATE) == expected) {
        replacement = (nrm_u32)&nrm_wrapper_demobilize;
        if (nrm_patch_u32(base + NRM_OFF_DEMOBILIZE_CB_IMMEDIATE, replacement))
            g_nrm_feature_flags |= NRM_FEATURE_DEMOB_CALLBACK;
        else
            all_ok = NRM_FALSE;
    } else {
        all_ok = NRM_FALSE;
    }

    /* Mobilize enabled/disabled state is now owned by the
       mobilize_potential module. The old one-byte +0xBC -> +0xB8
       override is intentionally no longer installed here. */

    /* Default pointer is the tiny vanilla predicate at EXE+0x631490: mov al,1; ret. */
    expected = (nrm_u32)(base + NRM_OFF_DECISION_FILTER_VANILLA);
    replacement = nrm_read_u32(base + NRM_OFF_DECISION_FILTER_PTR);
    if (replacement == expected || replacement == (nrm_u32)&nrm_decision_filter) {
        if (replacement != (nrm_u32)&nrm_decision_filter) {
            replacement = (nrm_u32)&nrm_decision_filter;
            if (!nrm_patch_u32(base + NRM_OFF_DECISION_FILTER_PTR, replacement)) all_ok = NRM_FALSE;
        }
        if (nrm_read_u32(base + NRM_OFF_DECISION_FILTER_PTR) == (nrm_u32)&nrm_decision_filter)
            g_nrm_feature_flags |= NRM_FEATURE_DECISION_FILTER;
    } else {
        all_ok = NRM_FALSE;
    }

    return all_ok;
}
