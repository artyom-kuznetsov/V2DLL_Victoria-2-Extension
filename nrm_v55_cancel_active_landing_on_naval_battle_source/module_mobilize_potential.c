#include "nrm_runtime.h"

static nrm_bool nrm_bytes_equal(const nrm_u8 *p, const nrm_u8 *q, nrm_u32 n)
{
    while (n--) {
        if (*p++ != *q++) return NRM_FALSE;
    }
    return NRM_TRUE;
}

static nrm_bool nrm_patch_state_callsite(nrm_u8 *site, const nrm_u8 expected[6])
{
    nrm_u8 patch[6];
    nrm_u32 target;

    if (!nrm_bytes_equal(site, expected, 6)) return NRM_FALSE;

    /* Replace "mov eax,[edx+slot]" with "mov eax,wrapper; nop".
       The following vanilla "call eax" stays untouched. */
    target = (nrm_u32)&nrm_mobilize_button_state_wrapper;
    patch[0] = 0xB8;
    *(nrm_u32*)(patch + 1) = target;
    patch[5] = 0x90;
    return nrm_patch_memory(site, patch, 6);
}

nrm_bool __cdecl nrm_install_mobilize_potential_module(void)
{
    static const nrm_u8 expected_zero[6] = {
        0x8B, 0x82, 0xBC, 0x00, 0x00, 0x00
    };
    static const nrm_u8 expected_nonzero[6] = {
        0x8B, 0x82, 0xB8, 0x00, 0x00, 0x00
    };
    nrm_u8 *base = (nrm_u8*)g_game_base;

    if (!base) return NRM_FALSE;

    if (!nrm_bytes_equal(base + NRM_OFF_MOBILIZE_STATE_CALL_ZERO, expected_zero, 6))
        return NRM_FALSE;
    if (!nrm_bytes_equal(base + NRM_OFF_MOBILIZE_STATE_CALL_NONZERO, expected_nonzero, 6))
        return NRM_FALSE;

    if (!nrm_patch_state_callsite(base + NRM_OFF_MOBILIZE_STATE_CALL_ZERO,
                                  expected_zero))
        return NRM_FALSE;
    if (!nrm_patch_state_callsite(base + NRM_OFF_MOBILIZE_STATE_CALL_NONZERO,
                                  expected_nonzero))
        return NRM_FALSE;

    g_nrm_feature_flags |= NRM_FEATURE_MOBILIZE_POTENTIAL;
    return NRM_TRUE;
}
