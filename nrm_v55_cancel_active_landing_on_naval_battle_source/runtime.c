#include "nrm_runtime.h"

void *g_game_base = (void*)0;
volatile nrm_u32 g_nrm_feature_flags = 0;
volatile nrm_u8 g_nrm_factory_money_failure = 0;
volatile nrm_u8 g_nrm_factory_list_keep_gray = 0;

char g_mobilize_name[] = "mobilize_nrm_dec";
char g_unmobilize_name[] = "unmobilize_nrm_dec";

/* Long-lived storage. This mirrors the layout that the working vic2dlls
   FireDecision path expects, without depending on any vic2dlls code. */
__declspec(align(16)) static nrm_u8 g_fake_decisions[0x60];
static char g_decision_buffer_0[0x80];
static char g_decision_buffer_1[0x80];
static const char g_decision_prefix[] = "POLITICSVIEW_DECISION";

#pragma section(".nrmmeta", read)
__declspec(allocate(".nrmmeta"))
const char g_nrm_runtime_metadata[] =
    "NRM_RUNTIME\0ABI=1\0VERSION=4.6.11-cancel-active-landing-on-naval-battle\0MODULES=mobilization,reserved_decisions,mobilize_potential,regiment_guard,factory_provinces_filter,equivalent_owner_payout,equivalent_owner_bonus,no_owner_pop_sort,research_optimum_noncolonial,cancel_active_landing_on_naval_battle,manual_retreat_strict_adjacent\0";

static void nrm_zero(void *p, nrm_u32 count)
{
    nrm_u8 *d = (nrm_u8*)p;
    while (count--) *d++ = 0;
}

static void nrm_copy_text(char *dst, const char *src)
{
    char c;
    do {
        c = *src++;
        *dst++ = c;
    } while (c != 0);
}

static void nrm_build_reserved_decision(nrm_u32 slot, char *buffer, const char *name)
{
    nrm_u8 *obj = g_fake_decisions + slot * 0x30;
    char *d = buffer;
    const char *s = g_decision_prefix;
    nrm_u32 i;

    /* Prefix is exactly 21 bytes; no separator, matching Victoria's own UI key. */
    for (i = 0; i < 21; ++i) *d++ = *s++;
    nrm_copy_text(d, name);

    *(nrm_u32*)(obj + 0x14) = (nrm_u32)buffer;
    *(nrm_u32*)(obj + 0x28) = 0x7FUL;
}

static void nrm_init_reserved_decisions(void)
{
    nrm_zero(g_fake_decisions, (nrm_u32)sizeof(g_fake_decisions));
    nrm_zero(g_decision_buffer_0, (nrm_u32)sizeof(g_decision_buffer_0));
    nrm_zero(g_decision_buffer_1, (nrm_u32)sizeof(g_decision_buffer_1));
    nrm_build_reserved_decision(0, g_decision_buffer_0, g_mobilize_name);
    nrm_build_reserved_decision(1, g_decision_buffer_1, g_unmobilize_name);
    g_nrm_feature_flags |= NRM_FEATURE_RESERVED_DECISIONS;
}

typedef void (__stdcall *nrm_game_fire_decision_fn)(void *fake_button);

void __cdecl nrm_fire_reserved(nrm_u32 slot)
{
    nrm_game_fire_decision_fn fn;
    nrm_u8 *obj;

    if (!g_game_base || slot > 1) return;
    obj = g_fake_decisions + slot * 0x30;
    fn = (nrm_game_fire_decision_fn)((nrm_u8*)g_game_base + NRM_OFF_FIRE_DECISION);
    fn((void*)obj);
}

/* Module registry: future NRM features are added here as independent installers. */
typedef nrm_bool (__cdecl *nrm_module_installer)(void);
static nrm_module_installer const g_nrm_modules[] = {
    nrm_install_mobilization_module,
    nrm_install_mobilize_potential_module,
    nrm_install_regiment_guard_module,
    nrm_install_factory_provinces_filter_module,
    nrm_install_owner_equivalent_module,
    nrm_install_research_noncolonial_module,
    nrm_install_cancel_landing_on_naval_battle_module,
    nrm_install_manual_retreat_onehop_module,
    (nrm_module_installer)0
};

nrm_bool __cdecl nrm_install_modules(void)
{
    nrm_u32 i = 0;
    nrm_bool ok = NRM_TRUE;
    while (g_nrm_modules[i]) {
        if (!g_nrm_modules[i]()) ok = NRM_FALSE;
        ++i;
    }
    return ok;
}

/* Raw DLL entrypoint; no CRT is linked. Never fail process attach merely because
   a patch signature does not match: unsupported EXEs should still be able to start. */
int __stdcall DllMain(void *hinst, nrm_u32 reason, void *reserved)
{
    (void)hinst;
    (void)reserved;
    if (reason != 1) return 1; /* DLL_PROCESS_ATTACH */

    g_game_base = nrm_get_game_base();
    if (!g_game_base) return 1;

    nrm_init_reserved_decisions();
    (void)nrm_install_modules();
    return 1;
}
