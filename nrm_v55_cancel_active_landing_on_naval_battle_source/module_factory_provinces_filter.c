#include "nrm_runtime.h"

typedef struct NrmU32Vector {
    nrm_u32 *begin;
    nrm_u32 *end;
    nrm_u32 *capacity;
} NrmU32Vector;

typedef struct NrmFactoryProvinceRule {
    void *factory_type;
    nrm_u32 *begin;
    nrm_u32 *end;
    nrm_u32 *capacity;
} NrmFactoryProvinceRule;

#define NRM_MAX_FACTORY_PROVINCE_RULES 512UL

static NrmFactoryProvinceRule g_factory_province_rules[NRM_MAX_FACTORY_PROVINCE_RULES];
static nrm_u32 g_factory_province_rule_count = 0;

static nrm_bool nrm_bytes_equal_local(const nrm_u8 *a, const nrm_u8 *b, nrm_u32 count)
{
    while (count--) {
        if (*a++ != *b++) return NRM_FALSE;
    }
    return NRM_TRUE;
}

static NrmFactoryProvinceRule *nrm_find_factory_rule(void *factory_type)
{
    nrm_u32 i;
    for (i = 0; i < g_factory_province_rule_count; ++i) {
        if (g_factory_province_rules[i].factory_type == factory_type)
            return &g_factory_province_rules[i];
    }
    return (NrmFactoryProvinceRule*)0;
}

static NrmFactoryProvinceRule *nrm_get_or_create_factory_rule(void *factory_type)
{
    NrmFactoryProvinceRule *r = nrm_find_factory_rule(factory_type);
    if (r) return r;
    if (g_factory_province_rule_count >= NRM_MAX_FACTORY_PROVINCE_RULES)
        return (NrmFactoryProvinceRule*)0;

    r = &g_factory_province_rules[g_factory_province_rule_count++];
    r->factory_type = factory_type;
    r->begin = (nrm_u32*)0;
    r->end = (nrm_u32*)0;
    r->capacity = (nrm_u32*)0;
    return r;
}

/* Victoria's native province-list parser. Its output is retained for process
   lifetime, exactly as in the proven v5 diagnostic prototype. */
typedef void (__stdcall *nrm_parse_province_list_fn)(void *parse_node,
                                                      NrmU32Vector *out_vector);

void __cdecl nrm_capture_factory_provinces(void *factory_type, void *parse_node)
{
    NrmU32Vector v;
    NrmFactoryProvinceRule *r;
    nrm_parse_province_list_fn parse_fn;

    if (!g_game_base || !factory_type || !parse_node) return;

    v.begin = (nrm_u32*)0;
    v.end = (nrm_u32*)0;
    v.capacity = (nrm_u32*)0;

    parse_fn = (nrm_parse_province_list_fn)((nrm_u8*)g_game_base +
                                             NRM_OFF_PARSE_PROVINCE_LIST);
    parse_fn(parse_node, &v);

    r = nrm_get_or_create_factory_rule(factory_type);
    if (!r) return;

    r->begin = v.begin;
    r->end = v.end;
    r->capacity = v.capacity;
}

/* No provinces field => unrestricted.
   Explicit provinces = { ... } => at least one listed province must belong
   to the selected state. CState's vanilla province array is [state+48, +4C). */
nrm_bool __cdecl nrm_factory_allowed_in_state(void *factory_type, void *state)
{
    NrmFactoryProvinceRule *r;
    nrm_u32 *wanted;
    nrm_u32 *wanted_end;
    nrm_u32 *state_it;
    nrm_u32 *state_end;

    if (!factory_type) return NRM_FALSE;
    r = nrm_find_factory_rule(factory_type);
    if (!r) return NRM_TRUE;
    if (!state) return NRM_FALSE;

    wanted = r->begin;
    wanted_end = r->end;
    if (!wanted || !wanted_end || wanted >= wanted_end)
        return NRM_FALSE; /* explicit empty list means nowhere */

    state_it = *(nrm_u32**)((nrm_u8*)state + NRM_STATE_PROVINCES_BEGIN_OFFSET);
    state_end = *(nrm_u32**)((nrm_u8*)state + NRM_STATE_PROVINCES_END_OFFSET);
    if (!state_it || !state_end || state_it >= state_end)
        return NRM_FALSE;

    while (wanted < wanted_end) {
        nrm_u32 *p = state_it;
        while (p < state_end) {
            if (*p == *wanted) return NRM_TRUE;
            ++p;
        }
        ++wanted;
    }
    return NRM_FALSE;
}

/* UI-only ordering helper. Build a temporary shadow std::vector-like view
   containing the same FactoryType* pointers as Victoria's chooser source,
   with strategic_factory=yes first. The original global vector is never
   modified. The chooser refresh is single-threaded, so one static shadow is
   sufficient for the duration of the vanilla enumeration. */
typedef struct NrmPtrVector {
    void **begin;
    void **end;
    void **capacity;
} NrmPtrVector;

#define NRM_MAX_FACTORY_UI_TYPES 512UL
static void *g_factory_ui_sorted_slots[NRM_MAX_FACTORY_UI_TYPES];
static NrmPtrVector g_factory_ui_sorted_view;

void * __cdecl nrm_factory_ui_build_sorted_vector(void *vector_obj)
{
    void **begin;
    void **end;
    void **slot;
    nrm_u32 count;
    nrm_u32 out = 0;

    if (!vector_obj) return vector_obj;
    begin = *(void***)vector_obj;
    end   = *(void***)((nrm_u8*)vector_obj + 4);
    if (!begin || !end || end < begin) return vector_obj;

    count = (nrm_u32)(end - begin);
    if (count == 0 || count > NRM_MAX_FACTORY_UI_TYPES)
        return vector_obj;

    for (slot = begin; slot < end; ++slot) {
        void *factory_type = *slot;
        if (factory_type && *((nrm_u8*)factory_type + NRM_FACTORY_STRATEGIC_OFFSET) != 0)
            g_factory_ui_sorted_slots[out++] = factory_type;
    }
    for (slot = begin; slot < end; ++slot) {
        void *factory_type = *slot;
        if (!factory_type || *((nrm_u8*)factory_type + NRM_FACTORY_STRATEGIC_OFFSET) == 0)
            g_factory_ui_sorted_slots[out++] = factory_type;
    }

    if (out != count) return vector_obj;
    g_factory_ui_sorted_view.begin = g_factory_ui_sorted_slots;
    g_factory_ui_sorted_view.end = g_factory_ui_sorted_slots + count;
    g_factory_ui_sorted_view.capacity = g_factory_ui_sorted_slots + count;
    return &g_factory_ui_sorted_view;
}


/* Return true iff the chooser would contain at least one actually buildable
   factory type for this state/actor. This deliberately mirrors only the
   vanilla chooser prefilters; the final yes/no decision is delegated to the
   same shared predicate used by the chooser row, final Build button and
   CConstructStateBuildingCommand::CanExecute. */
nrm_bool __cdecl nrm_factory_any_available(void *state, void *actor)
{
    void *registry;
    void **it;
    void **end;
    void *special_factory_group;

    if (!g_game_base || !state || !actor) return NRM_FALSE;

    registry = *(void**)((nrm_u8*)g_game_base + NRM_OFF_FACTORY_REGISTRY_PTR);
    if (!registry) return NRM_FALSE;
    it = *(void***)((nrm_u8*)registry + NRM_FACTORY_REGISTRY_VECTOR_OFFSET);
    end = *(void***)((nrm_u8*)registry + NRM_FACTORY_REGISTRY_VECTOR_OFFSET + 4);
    if (!it || !end || end < it) return NRM_FALSE;

    special_factory_group = *(void**)((nrm_u8*)g_game_base + 0x00E58734UL);

    while (it < end) {
        void *factory_type = *it++;
        void *group;
        void *country_data;
        nrm_u32 factory_index;
        nrm_u32 tech_offset;
        nrm_u8 tech_active;

        if (!factory_type) continue;

        /* Exact vanilla chooser prefilters at EXE+0x2F9DCF..0x2F9E3F. */
        group = *(void**)((nrm_u8*)factory_type + 0x12CUL);
        if (!special_factory_group || !group) continue;
        if (group == (void*)((nrm_u8*)special_factory_group + 0x10)) continue;
        if (*(nrm_u32*)((nrm_u8*)group + 0x138UL) != 1UL) continue;

        country_data = *(void**)((nrm_u8*)actor + 0x0BCCUL);
        if (!country_data) continue;
        factory_index = *(nrm_u32*)((nrm_u8*)factory_type + 0x58UL);
        tech_offset = *(nrm_u32*)((nrm_u8*)country_data + 0x2FCUL);
        tech_active = *((nrm_u8*)factory_index + tech_offset);

        if (*((nrm_u8*)factory_type + 0x130UL) == 0) {
            nrm_u32 *levels;
            if (tech_active == 0) continue;
            levels = *(nrm_u32**)((nrm_u8*)country_data + 0x08UL);
            if (!levels) continue;
            if (levels[factory_index] < 1UL) continue;
        }

        if (nrm_factory_can_build_full_cdecl(actor, state, factory_type))
            return NRM_TRUE;

        /* If vanilla rejected this type only at its final budget comparison,
           the chooser will keep it as a disabled/gray row. Such a row still
           makes the region-level Build Factory entry button useful. The NRM
           provinces sidecar must also allow the selected state. */
        if (g_nrm_factory_money_failure &&
            nrm_factory_allowed_in_state(factory_type, state))
            return NRM_TRUE;
    }

    return NRM_FALSE;
}

static nrm_bool nrm_rel_call_targets(const nrm_u8 *site, const nrm_u8 *target)
{
    long rel;
    const nrm_u8 *actual;
    if (!site || site[0] != 0xE8) return NRM_FALSE;
    rel = *(const long*)(site + 1);
    actual = site + 5 + rel;
    return actual == target;
}

static nrm_bool nrm_patch_rel_call(nrm_u8 *site, void *replacement)
{
    nrm_u8 patch[5];
    nrm_u32 rel;
    rel = (nrm_u32)replacement - ((nrm_u32)site + 5UL);
    patch[0] = 0xE8;
    *(nrm_u32*)(patch + 1) = rel;
    return nrm_patch_memory(site, patch, 5);
}

nrm_bool __cdecl nrm_install_factory_provinces_filter_module(void)
{
    static const nrm_u8 parser_expected[9] = {
        0x55, 0x8B, 0xEC, 0x64, 0xA1, 0x00, 0x00, 0x00, 0x00
    };
    static const nrm_u8 money_fail_expected[5] = {0x33,0xC0,0x5F,0x5E,0x5B};
    static const nrm_u8 list_hook_expected[7] = {
        0x8B, 0x4C, 0x24, 0x24, 0x0F, 0xB6, 0xD0
    };
    static const nrm_u8 sort_vector_expected[12] = {
        0x89, 0x4C, 0x24, 0x14, 0x89, 0x74, 0x24, 0x18, 0x89, 0x44, 0x24, 0x24
    };
    /* 0x52E970: cmp [eax+84],0 / jg 0x52E9D8. */
    static const nrm_u8 state_colony_expected[9] = {
        0x83, 0xB8, 0x84, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x5F
    };
    /* 0x4D04BC: cmp [ecx+84],0 / push ebx,esi,edi / jle 0x4D04D3. */
    static const nrm_u8 type_colony_expected[12] = {
        0x83, 0xB9, 0x84, 0x00, 0x00, 0x00, 0x00, 0x53, 0x56, 0x57, 0x7E, 0x0B
    };
    static const nrm_u8 tooltip_colony_expected[11] = {
        0x0F, 0x9F, 0xC0, 0x3A, 0xC3, 0x0F, 0x94, 0xC0, 0x0F, 0xB6, 0xC8
    };
    static const nrm_u8 tooltip_colony_patch[11] = {
        0xB9, 0x01, 0x00, 0x00, 0x00, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90
    };
    nrm_u8 parser_patch[9];
    nrm_u8 list_patch[7];
    nrm_u8 money_fail_patch[5];
    nrm_u8 sort_vector_patch[12];
    nrm_u8 state_colony_patch[9];
    nrm_u8 type_colony_patch[12];
    nrm_u8 *base = (nrm_u8*)g_game_base;
    nrm_u8 *parser_site;
    nrm_u8 *list_site;
    nrm_u8 *vanilla_pred;
    nrm_u8 *call_list;
    nrm_u8 *call_button;
    nrm_u8 *call_command;
    nrm_u8 *money_fail_site;
    nrm_u8 *state_gate_vanilla;
    nrm_u8 *state_colony_site;
    nrm_u8 *type_colony_site;
    nrm_u8 *region_button_call;
    nrm_u8 *state_panel_button_call;
    nrm_u8 *invest_button_call;
    nrm_u8 *tooltip_colony_site;
    nrm_u8 *sort_vector_site;
    nrm_u32 rel;
    nrm_u32 i;

    if (!base) return NRM_FALSE;

    parser_site = base + NRM_OFF_FACTORY_FIELD_PARSER;
    list_site = base + NRM_OFF_FACTORY_LIST_FILTER_HOOK;
    vanilla_pred = base + NRM_OFF_FACTORY_CAN_BUILD_VANILLA;
    call_list = base + NRM_OFF_FACTORY_CAN_BUILD_CALL_LIST;
    call_button = base + NRM_OFF_FACTORY_CAN_BUILD_CALL_BUTTON;
    call_command = base + NRM_OFF_FACTORY_CAN_BUILD_CALL_COMMAND;
    money_fail_site = base + NRM_OFF_FACTORY_MONEY_FAIL_HOOK;
    state_gate_vanilla = base + NRM_OFF_FACTORY_STATE_GATE_VANILLA;
    state_colony_site = base + NRM_OFF_FACTORY_STATE_COLONY_HOOK;
    type_colony_site = base + NRM_OFF_FACTORY_TYPE_GATE_COLONY_HOOK;
    region_button_call = base + NRM_OFF_FACTORY_REGION_BUTTON_GATE_CALL;
    state_panel_button_call = base + NRM_OFF_FACTORY_STATE_PANEL_GATE_CALL;
    invest_button_call = base + NRM_OFF_FACTORY_INVEST_BUTTON_GATE_CALL;
    tooltip_colony_site = base + NRM_OFF_FACTORY_TOOLTIP_COLONIAL_BOOL;
    sort_vector_site = base + NRM_OFF_FACTORY_UI_SORT_VECTOR_HOOK;

    /* Validate all target bytes before writing anything. */
    if (!nrm_bytes_equal_local(parser_site, parser_expected, 9)) return NRM_FALSE;
    if (!nrm_bytes_equal_local(list_site, list_hook_expected, 7)) return NRM_FALSE;
    if (!nrm_rel_call_targets(call_list, vanilla_pred)) return NRM_FALSE;
    if (!nrm_rel_call_targets(call_button, vanilla_pred)) return NRM_FALSE;
    if (!nrm_rel_call_targets(call_command, vanilla_pred)) return NRM_FALSE;
    if (!nrm_bytes_equal_local(money_fail_site, money_fail_expected, 5)) return NRM_FALSE;
    if (!nrm_rel_call_targets(region_button_call, state_gate_vanilla)) return NRM_FALSE;
    if (!nrm_rel_call_targets(state_panel_button_call, state_gate_vanilla)) return NRM_FALSE;
    if (!nrm_rel_call_targets(invest_button_call, state_gate_vanilla)) return NRM_FALSE;
    if (!nrm_bytes_equal_local(state_colony_site, state_colony_expected, 9)) return NRM_FALSE;
    if (!nrm_bytes_equal_local(type_colony_site, type_colony_expected, 12)) return NRM_FALSE;
    if (!nrm_bytes_equal_local(tooltip_colony_site, tooltip_colony_expected, 11)) return NRM_FALSE;
    if (!nrm_bytes_equal_local(sort_vector_site, sort_vector_expected, 12)) return NRM_FALSE;

    /* Existing buildings.txt provinces parser extension. */
    rel = (nrm_u32)&nrm_factory_parser_hook - ((nrm_u32)parser_site + 5UL);
    parser_patch[0] = 0xE9;
    *(nrm_u32*)(parser_patch + 1) = rel;
    for (i = 5; i < 9; ++i) parser_patch[i] = 0x90;
    if (!nrm_patch_memory(parser_site, parser_patch, 9)) return NRM_FALSE;

    /* Vanilla has TWO independent colony rejects in the factory path.
       Replace only those exact branch regions with strategic-aware trampolines.
       All code after each colonial check remains byte-for-byte vanilla. */
    rel = (nrm_u32)&nrm_factory_state_colony_trampoline - ((nrm_u32)state_colony_site + 5UL);
    state_colony_patch[0] = 0xE9;
    *(nrm_u32*)(state_colony_patch + 1) = rel;
    for (i = 5; i < 9; ++i) state_colony_patch[i] = 0x90;
    if (!nrm_patch_memory(state_colony_site, state_colony_patch, 9)) return NRM_FALSE;

    rel = (nrm_u32)&nrm_factory_type_colony_trampoline - ((nrm_u32)type_colony_site + 5UL);
    type_colony_patch[0] = 0xE9;
    *(nrm_u32*)(type_colony_patch + 1) = rel;
    for (i = 5; i < 12; ++i) type_colony_patch[i] = 0x90;
    if (!nrm_patch_memory(type_colony_site, type_colony_patch, 12)) return NRM_FALSE;

    /* Coloniality is no longer an absolute UI requirement: for strategic
       factories it is legal. The actual button/list availability is decided
       by the shared per-type predicate below. */
    if (!nrm_patch_memory(tooltip_colony_site, tooltip_colony_patch, 11)) return NRM_FALSE;

    /* One authoritative per-type predicate everywhere. It first runs vanilla
       (now with only the two strategic colony exceptions above) and then adds
       the NRM provinces sidecar restriction. */
    if (!nrm_patch_rel_call(call_list, (void*)&nrm_factory_can_build_list_wrapper)) return NRM_FALSE;
    if (!nrm_patch_rel_call(call_button, (void*)&nrm_factory_can_build_wrapper)) return NRM_FALSE;
    if (!nrm_patch_rel_call(call_command, (void*)&nrm_factory_can_build_wrapper)) return NRM_FALSE;
    g_nrm_feature_flags |= NRM_FEATURE_FACTORY_COMMON_PREDICATE;

    /* Tag only the exact vanilla insufficient-budget exit. All earlier false
       paths remain indistinguishable from vanilla and therefore stay hidden. */
    rel = (nrm_u32)&nrm_factory_money_fail_trampoline - ((nrm_u32)money_fail_site + 5UL);
    money_fail_patch[0] = 0xE9;
    *(nrm_u32*)(money_fail_patch + 1) = rel;
    if (!nrm_patch_memory(money_fail_site, money_fail_patch, 5)) return NRM_FALSE;
    g_nrm_feature_flags |= NRM_FEATURE_FACTORY_MONEY_GRAY;

    /* Both own-country entry buttons use exactly one rule: enabled iff at
       least one factory type would actually appear in the chooser. */
    if (!nrm_patch_rel_call(region_button_call,
                            (void*)&nrm_factory_any_available_button_wrapper)) return NRM_FALSE;
    if (!nrm_patch_rel_call(state_panel_button_call,
                            (void*)&nrm_factory_any_available_button_wrapper)) return NRM_FALSE;

    /* Foreign-investment path stays completely vanilla. The 0x52E960
       trampoline rejects colonies for every caller except 0x52C9B0 with a
       strategic FactoryType, so this direct call needs no special wrapper. */
    g_nrm_feature_flags |= NRM_FEATURE_FACTORY_COLONIAL_STRATEGIC;

    /* Stable strategic-first chooser ordering from v12. */
    rel = (nrm_u32)&nrm_factory_ui_sort_vector_trampoline - ((nrm_u32)sort_vector_site + 5UL);
    sort_vector_patch[0] = 0xE9;
    *(nrm_u32*)(sort_vector_patch + 1) = rel;
    for (i = 5; i < 12; ++i) sort_vector_patch[i] = 0x90;
    if (!nrm_patch_memory(sort_vector_site, sort_vector_patch, 12)) return NRM_FALSE;
    g_nrm_feature_flags |= NRM_FEATURE_FACTORY_STRATEGIC_SORT;

    /* False rows are omitted except the exact insufficient-budget case,
       which is deliberately preserved as vanilla-disabled/gray. */
    rel = (nrm_u32)&nrm_factory_list_filter_trampoline - ((nrm_u32)list_site + 5UL);
    list_patch[0] = 0xE9;
    *(nrm_u32*)(list_patch + 1) = rel;
    list_patch[5] = 0x90;
    list_patch[6] = 0x90;
    if (!nrm_patch_memory(list_site, list_patch, 7)) return NRM_FALSE;

    g_nrm_feature_flags |= NRM_FEATURE_FACTORY_PROVINCES_FILTER;
    return NRM_TRUE;
}
