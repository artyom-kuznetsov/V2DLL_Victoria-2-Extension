#include "nrm_runtime.h"

static nrm_bool nrm_bytes_equal(const nrm_u8 *p, const nrm_u8 *q, nrm_u32 n)
{
    while (n--) {
        if (*p++ != *q++) return NRM_FALSE;
    }
    return NRM_TRUE;
}

nrm_bool __cdecl nrm_install_regiment_guard_module(void)
{
    static const nrm_u8 expected[7] = {
        0x8B, 0x43, 0x30,       /* mov eax,[ebx+30h] */
        0x85, 0xC0,             /* test eax,eax      */
        0x75, 0x0B              /* jne 5C8414        */
    };
    nrm_u8 patch[7];
    nrm_u8 *base = (nrm_u8*)g_game_base;
    nrm_u8 *site;
    nrm_u32 rel;

    if (!base) return NRM_FALSE;
    site = base + NRM_OFF_REGIMENT_GUARD_HOOK;

    /* Refuse to patch an unsupported EXE rather than corrupting it. */
    if (!nrm_bytes_equal(site, expected, 7)) return NRM_FALSE;

    rel = (nrm_u32)&nrm_regiment_guard_trampoline - ((nrm_u32)site + 5UL);
    patch[0] = 0xE9;
    *(nrm_u32*)(patch + 1) = rel;
    patch[5] = 0x90;
    patch[6] = 0x90;

    if (!nrm_patch_memory(site, patch, 7)) return NRM_FALSE;
    g_nrm_feature_flags |= NRM_FEATURE_REGIMENT_GUARD;
    return NRM_TRUE;
}
