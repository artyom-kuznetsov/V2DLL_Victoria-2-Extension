#include "nrm_runtime.h"

/*
 * NRM v46: research_optimum uses only non-colonial states for COUNTRY-level
 * research calculations.
 *
 * Important: 0x96A2C0 is also used with Province+0x1A8 in other game paths
 * (ownership/conquest processing).  Therefore we do NOT hook the function
 * body.  We redirect only the confirmed country call at 0x5381BF and the four
 * country tooltip calls to wrappers below.
 *
 * Vanilla still performs all fixed-point math, research_optimum division,
 * clamp, research_points multiplication, modifiers, and formatting.  We only
 * supply a temporary demographics view whose total population and per-POP-type
 * counts contain unique non-colonial states owned by the country.
 */

#define NRM_RESEARCH_MAX_POPTYPES 512UL
#define NRM_RESEARCH_MAX_STATES   4096UL

#define NRM_COUNTRY_DEMOGRAPHICS_OFFSET        0x12E8UL
#define NRM_COUNTRY_PROVINCES_BEGIN_OFFSET     0x09D8UL
#define NRM_COUNTRY_PROVINCES_END_OFFSET       0x09DCUL
#define NRM_GAME_PROVINCE_TABLE_OFFSET         0x0ACCUL
#define NRM_PROVINCE_STATE_OFFSET              0x0188UL
#define NRM_STATE_TOTAL_POPULATION_OFFSET      0x00C8UL
#define NRM_STATE_POPTYPE_COUNTS_OFFSET        0x0118UL
#define NRM_POPTYPE_REGISTRY_PTR_OFFSET        0x00F1BB34UL
#define NRM_POPTYPE_REGISTRY_VECTOR_OFFSET     0x000CUL

/* Original functions relative to EXE base. */
#define NRM_OFF_RESEARCH_CALC_VANILLA          0x0056A2C0UL
#define NRM_OFF_RESEARCH_TOOLTIP_VANILLA       0x0056A4E0UL

/* Confirmed COUNTRY call sites only. */
#define NRM_OFF_RESEARCH_COUNTRY_CALL          0x001381BFUL /* VA 0x5381BF */
#define NRM_OFF_RESEARCH_TOOLTIP_CALL_1        0x002D6E16UL /* VA 0x6D6E16 */
#define NRM_OFF_RESEARCH_TOOLTIP_CALL_2        0x002D6E50UL /* VA 0x6D6E50 */
#define NRM_OFF_RESEARCH_TOOLTIP_CALL_3        0x003157C6UL /* VA 0x7157C6 */
#define NRM_OFF_RESEARCH_TOOLTIP_CALL_4        0x003157FAUL /* VA 0x7157FA */

/* Only +0 and +0x50 are read by the research routines for the POP-share part. */
typedef struct NrmResearchDemographicsView {
    nrm_u32 total_population;
    nrm_u8  pad04_to_4f[0x4C];
    nrm_u32 *poptype_counts;
} NrmResearchDemographicsView;

typedef void * (__stdcall *NrmResearchVanillaFn)(void *demographics,
                                                   void *output,
                                                   void *country_modifiers,
                                                   nrm_u32 extra_lo,
                                                   nrm_u32 extra_hi);

static NrmResearchDemographicsView g_research_view;
static nrm_u32 g_research_counts[NRM_RESEARCH_MAX_POPTYPES];
static void *g_research_seen_states[NRM_RESEARCH_MAX_STATES];

static void nrm_research_zero_counts(nrm_u32 count)
{
    nrm_u32 i;
    volatile nrm_u32 *p = g_research_counts;
    for (i = 0; i < count; ++i) p[i] = 0;
}

static nrm_u32 nrm_research_poptype_count(void)
{
    void *registry;
    void **begin;
    void **end;

    if (!g_game_base) return 0;
    registry = *(void**)((nrm_u8*)g_game_base + NRM_POPTYPE_REGISTRY_PTR_OFFSET);
    if (!registry) return 0;
    begin = *(void***)((nrm_u8*)registry + NRM_POPTYPE_REGISTRY_VECTOR_OFFSET);
    end = *(void***)((nrm_u8*)registry + NRM_POPTYPE_REGISTRY_VECTOR_OFFSET + 4);
    if (!begin || !end || end < begin) return 0;
    return (nrm_u32)(end - begin);
}

static nrm_bool nrm_research_state_seen(void *state, nrm_u32 count)
{
    nrm_u32 i;
    for (i = 0; i < count; ++i) {
        if (g_research_seen_states[i] == state) return NRM_TRUE;
    }
    return NRM_FALSE;
}

/* Input MUST be CCountry demographics at country+0x12E8.  The wrappers are
 * installed only at call sites where this has been verified in disassembly. */
void * __cdecl nrm_research_prepare_noncolonial_demographics(void *demographics)
{
    nrm_u8 *country;
    nrm_u32 *province_it;
    nrm_u32 *province_end;
    void *game_context;
    void **province_table;
    nrm_u32 poptype_count;
    nrm_u32 seen_count = 0;

    if (!g_game_base || !demographics) return demographics;

    poptype_count = nrm_research_poptype_count();
    if (poptype_count == 0 || poptype_count > NRM_RESEARCH_MAX_POPTYPES)
        return demographics;

    country = (nrm_u8*)demographics - NRM_COUNTRY_DEMOGRAPHICS_OFFSET;
    province_it = *(nrm_u32**)(country + NRM_COUNTRY_PROVINCES_BEGIN_OFFSET);
    province_end = *(nrm_u32**)(country + NRM_COUNTRY_PROVINCES_END_OFFSET);
    if (!province_it || !province_end || province_end < province_it)
        return demographics;

    game_context = *(void**)((nrm_u8*)g_game_base + NRM_OFF_GAME_CONTEXT_PTR);
    if (!game_context) return demographics;
    province_table = *(void***)((nrm_u8*)game_context + NRM_GAME_PROVINCE_TABLE_OFFSET);
    if (!province_table) return demographics;

    nrm_research_zero_counts(poptype_count);
    g_research_view.total_population = 0;
    g_research_view.poptype_counts = g_research_counts;

    while (province_it < province_end) {
        nrm_u32 province_id = *province_it++;
        void *province = province_table[province_id];
        void *state;
        nrm_u32 *state_counts;
        nrm_u32 i;

        if (!province) continue;
        state = *(void**)((nrm_u8*)province + NRM_PROVINCE_STATE_OFFSET);
        if (!state) continue;

        /* CState+0x84 > 0 is the confirmed colonial marker. */
        if (*(nrm_u32*)((nrm_u8*)state + NRM_STATE_COLONIAL_MARKER_OFFSET) > 0)
            continue;

        /* Country vector has one entry per province; count a multi-province
         * state exactly once. */
        if (nrm_research_state_seen(state, seen_count)) continue;
        if (seen_count >= NRM_RESEARCH_MAX_STATES) return demographics;
        g_research_seen_states[seen_count++] = state;

        state_counts = *(nrm_u32**)((nrm_u8*)state + NRM_STATE_POPTYPE_COUNTS_OFFSET);
        if (!state_counts) continue;

        g_research_view.total_population +=
            *(nrm_u32*)((nrm_u8*)state + NRM_STATE_TOTAL_POPULATION_OFFSET);
        for (i = 0; i < poptype_count; ++i)
            g_research_counts[i] += state_counts[i];
    }

    return &g_research_view;
}

static void * __stdcall nrm_research_country_wrapper(void *demographics,
                                                       void *output,
                                                       void *country_modifiers,
                                                       nrm_u32 extra_lo,
                                                       nrm_u32 extra_hi)
{
    NrmResearchVanillaFn fn;
    void *view = nrm_research_prepare_noncolonial_demographics(demographics);
    fn = (NrmResearchVanillaFn)((nrm_u8*)g_game_base + NRM_OFF_RESEARCH_CALC_VANILLA);
    return fn(view, output, country_modifiers, extra_lo, extra_hi);
}

static void * __stdcall nrm_research_country_tooltip_wrapper(void *demographics,
                                                               void *output,
                                                               void *country_modifiers,
                                                               nrm_u32 extra_lo,
                                                               nrm_u32 extra_hi)
{
    NrmResearchVanillaFn fn;
    void *view = nrm_research_prepare_noncolonial_demographics(demographics);
    fn = (NrmResearchVanillaFn)((nrm_u8*)g_game_base + NRM_OFF_RESEARCH_TOOLTIP_VANILLA);
    return fn(view, output, country_modifiers, extra_lo, extra_hi);
}

static nrm_bool nrm_research_call_matches(nrm_u8 *site,
                                            nrm_u32 vanilla_target_offset)
{
    nrm_u32 original_rel;
    nrm_u32 target;
    if (!site || !g_game_base || site[0] != 0xE8) return NRM_FALSE;
    original_rel = *(nrm_u32*)(site + 1);
    target = (nrm_u32)site + 5UL + original_rel;
    return target == (nrm_u32)g_game_base + vanilla_target_offset;
}

static nrm_bool nrm_research_patch_call(nrm_u8 *site, void *wrapper)
{
    nrm_u8 patch[5];
    nrm_u32 rel;
    if (!site || !wrapper) return NRM_FALSE;
    patch[0] = 0xE8;
    rel = (nrm_u32)wrapper - ((nrm_u32)site + 5UL);
    *(nrm_u32*)(patch + 1) = rel;
    return nrm_patch_memory(site, patch, 5);
}

nrm_bool __cdecl nrm_install_research_noncolonial_module(void)
{
    nrm_u8 *country_call;
    nrm_u8 *tip1;
    nrm_u8 *tip2;
    nrm_u8 *tip3;
    nrm_u8 *tip4;

    if (!g_game_base) return NRM_FALSE;

    country_call = (nrm_u8*)g_game_base + NRM_OFF_RESEARCH_COUNTRY_CALL;
    tip1 = (nrm_u8*)g_game_base + NRM_OFF_RESEARCH_TOOLTIP_CALL_1;
    tip2 = (nrm_u8*)g_game_base + NRM_OFF_RESEARCH_TOOLTIP_CALL_2;
    tip3 = (nrm_u8*)g_game_base + NRM_OFF_RESEARCH_TOOLTIP_CALL_3;
    tip4 = (nrm_u8*)g_game_base + NRM_OFF_RESEARCH_TOOLTIP_CALL_4;

    /* Validate every direct call before changing any code. */
    if (!nrm_research_call_matches(country_call, NRM_OFF_RESEARCH_CALC_VANILLA))
        return NRM_FALSE;
    if (!nrm_research_call_matches(tip1, NRM_OFF_RESEARCH_TOOLTIP_VANILLA) ||
        !nrm_research_call_matches(tip2, NRM_OFF_RESEARCH_TOOLTIP_VANILLA) ||
        !nrm_research_call_matches(tip3, NRM_OFF_RESEARCH_TOOLTIP_VANILLA) ||
        !nrm_research_call_matches(tip4, NRM_OFF_RESEARCH_TOOLTIP_VANILLA))
        return NRM_FALSE;

    if (!nrm_research_patch_call(country_call, (void*)nrm_research_country_wrapper))
        return NRM_FALSE;
    if (!nrm_research_patch_call(tip1, (void*)nrm_research_country_tooltip_wrapper) ||
        !nrm_research_patch_call(tip2, (void*)nrm_research_country_tooltip_wrapper) ||
        !nrm_research_patch_call(tip3, (void*)nrm_research_country_tooltip_wrapper) ||
        !nrm_research_patch_call(tip4, (void*)nrm_research_country_tooltip_wrapper))
        return NRM_FALSE;

    g_nrm_feature_flags |= NRM_FEATURE_RESEARCH_NONCOLONIAL;
    return NRM_TRUE;
}
