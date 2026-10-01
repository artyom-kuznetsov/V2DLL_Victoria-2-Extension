#ifndef NRM_RUNTIME_H
#define NRM_RUNTIME_H

typedef unsigned char  nrm_u8;
typedef unsigned long  nrm_u32;
typedef int            nrm_bool;

#define NRM_TRUE 1
#define NRM_FALSE 0

/* Victoria II 3.04 / NRM supported executable offsets, relative to EXE base. */
#define NRM_OFF_FIRE_DECISION          0x002DCE10UL
#define NRM_OFF_MOBILIZE_CALLBACK      0x002AE4B0UL
#define NRM_OFF_DEMOBILIZE_CALLBACK    0x002AE540UL
#define NRM_OFF_MOBILIZE_CB_IMMEDIATE  0x002A8E0AUL
#define NRM_OFF_DEMOBILIZE_CB_IMMEDIATE 0x002A8E50UL
#define NRM_OFF_MOBILIZE_AVAIL_BYTE    0x002A9C73UL
#define NRM_OFF_DECISION_FILTER_PTR     0x00A29B6CUL
#define NRM_OFF_DECISION_FILTER_VANILLA 0x00631490UL
#define NRM_OFF_DECISION_UI_BEGIN      0x002DB2E0UL
#define NRM_OFF_DECISION_UI_END        0x002DC750UL

#define NRM_FEATURE_MOBILIZE_CALLBACK  0x00000001UL
#define NRM_FEATURE_DEMOB_CALLBACK     0x00000002UL
#define NRM_FEATURE_ZERO_BRIGADES      0x00000004UL
#define NRM_FEATURE_DECISION_FILTER    0x00000008UL
#define NRM_FEATURE_RESERVED_DECISIONS 0x00000010UL

extern void *g_game_base;
extern volatile nrm_u32 g_nrm_feature_flags;
extern volatile nrm_u8 g_nrm_factory_money_failure;
extern volatile nrm_u8 g_nrm_factory_list_keep_gray;
extern char g_mobilize_name[];
extern char g_unmobilize_name[];

/* x86 assembly bridge / patch manager */
void * __cdecl nrm_get_game_base(void);
nrm_bool __cdecl nrm_patch_memory(void *dst, const void *src, nrm_u32 size);
void __cdecl nrm_wrapper_mobilize(void);
void __cdecl nrm_wrapper_demobilize(void);
nrm_bool __cdecl nrm_decision_filter(void);

/* C runtime core */
void __cdecl nrm_fire_reserved(nrm_u32 slot);
nrm_bool __cdecl nrm_install_mobilization_module(void);
nrm_bool __cdecl nrm_install_modules(void);

/* Regiment guard: source POP/type layout confirmed in Victoria II 3.04. */
#define NRM_OFF_REGIMENT_GUARD_HOOK       0x001C8402UL
#define NRM_OFF_REGIMENT_GUARD_NORMAL     0x001C8414UL
#define NRM_OFF_REGIMENT_GUARD_NULL_POP   0x001C8409UL
#define NRM_OFF_REGIMENT_GUARD_DELETE     0x001C886CUL

#define NRM_REGIMENT_SOURCE_POP_OFFSET     0x30UL
#define NRM_POP_TYPE_OFFSET                0x68UL
#define NRM_POPTYPE_CAN_RECRUIT_OFFSET     0x42UL

#define NRM_FEATURE_REGIMENT_GUARD         0x00000020UL
#define NRM_FEATURE_MOBILIZE_POTENTIAL     0x00000040UL

void __cdecl nrm_regiment_guard_trampoline(void);
nrm_bool __cdecl nrm_install_regiment_guard_module(void);

/* Mobilize button state is driven solely by mobilize_nrm_dec::potential. */
#define NRM_OFF_MOBILIZE_STATE_CALL_ZERO    0x002A9C71UL
#define NRM_OFF_MOBILIZE_STATE_CALL_NONZERO 0x002A9CC4UL
#define NRM_OFF_DECISION_LOOKUP              0x001C2AD0UL
#define NRM_OFF_DECISION_REGISTRY_ENSURE     0x00475040UL
#define NRM_OFF_SCOPE_CTOR                   0x004A8650UL
#define NRM_OFF_DECISION_POTENTIAL_CHECK     0x00474C60UL
#define NRM_OFF_DECISION_REGISTRY_PTR        0x00F19730UL
#define NRM_OFF_GAME_CONTEXT_PTR             0x00E588E8UL

void __cdecl nrm_mobilize_button_state_wrapper(void);
nrm_bool __cdecl nrm_mobilize_potential_available(void);
nrm_bool __cdecl nrm_install_mobilize_potential_module(void);


/* Factory province restrictions parsed from buildings.txt. */
#define NRM_OFF_FACTORY_FIELD_PARSER       0x000D9310UL
#define NRM_OFF_FACTORY_FIELD_PARSER_BODY  0x000D9319UL
#define NRM_OFF_PARSE_PROVINCE_LIST        0x001E5A20UL
#define NRM_FACTORY_PROVINCES_TOKEN        0x00000285UL

/* Shared factory-build wrapper. Victoria calls 0x52C9B0 from exactly three
   relevant direct sites: the chooser row, the final Build button, and
   CConstructStateBuildingCommand::CanExecute. ABI: EAX=FactoryType*,
   ECX=country/actor, first stack argument=CState*. Each call is redirected to
   the same wrapper, which evaluates vanilla first and then the provinces sidecar. */
#define NRM_OFF_FACTORY_CAN_BUILD_VANILLA       0x0012C9B0UL
#define NRM_OFF_FACTORY_CAN_BUILD_CALL_LIST     0x002F9E76UL
#define NRM_OFF_FACTORY_CAN_BUILD_CALL_BUTTON   0x002FA1C6UL
#define NRM_OFF_FACTORY_CAN_BUILD_CALL_COMMAND  0x0017CB77UL
#define NRM_OFF_FACTORY_MONEY_FAIL_HOOK        0x0012CA1AUL
#define NRM_OFF_FACTORY_MONEY_FAIL_CONTINUE    0x0012CA1FUL

/* Build-factory list construction. After the common predicate returns AL,
   false rows are not constructed at all. */
#define NRM_OFF_FACTORY_LIST_FILTER_HOOK       0x002F9E7BUL

/* Colonial strategic exception. Victoria rejects colonies twice in the vanilla
   construction path: first in 0x52E960 and again at the start of 0x4D04B0.
   Hook only those two branch sites. strategic_factory=yes skips the colonial
   rejection; all subsequent vanilla checks remain untouched. */
#define NRM_OFF_FACTORY_STATE_GATE_VANILLA        0x0012E960UL
#define NRM_OFF_FACTORY_STATE_COLONY_HOOK          0x0012E970UL
#define NRM_OFF_FACTORY_STATE_COLONY_CONTINUE      0x0012E979UL
#define NRM_OFF_FACTORY_STATE_COLONY_REJECT        0x0012E9D8UL
#define NRM_OFF_FACTORY_TYPE_GATE_COLONY_HOOK      0x000D04BCUL
#define NRM_OFF_FACTORY_TYPE_GATE_COLONY_CONTINUE  0x000D04D3UL
#define NRM_OFF_FACTORY_TYPE_GATE_COLONY_REJECT    0x000D04C8UL
#define NRM_OFF_FACTORY_REGION_BUTTON_GATE_CALL   0x002E6B7EUL
#define NRM_OFF_FACTORY_STATE_PANEL_GATE_CALL     0x0033FEC0UL
#define NRM_OFF_FACTORY_INVEST_BUTTON_GATE_CALL   0x0034E0FFUL
#define NRM_OFF_FACTORY_TOOLTIP_COLONIAL_BOOL      0x0012FA49UL
#define NRM_OFF_FACTORY_REGISTRY_PTR              0x00E5CE80UL
#define NRM_FACTORY_REGISTRY_VECTOR_OFFSET         0x0CUL
#define NRM_STATE_COLONIAL_MARKER_OFFSET           0x84UL

/* UI-only stable ordering. Instead of remapping two separate read sites,
   build a DLL-owned shadow vector once at the chooser-loop setup and let the
   rest of the vanilla loop consume it unchanged. This keeps the global
   FactoryType registry untouched and avoids register/stack-sensitive hooks. */
#define NRM_OFF_FACTORY_UI_SORT_VECTOR_HOOK     0x002F9DAAUL
#define NRM_OFF_FACTORY_UI_SORT_VECTOR_CONTINUE 0x002F9DB6UL
#define NRM_FACTORY_STRATEGIC_OFFSET            0x13BUL
#define NRM_OFF_FACTORY_LIST_FILTER_NORMAL     0x002F9E82UL
#define NRM_OFF_FACTORY_LIST_FILTER_SKIP       0x002F9EB0UL
#define NRM_OFF_GAME_OPERATOR_DELETE           0x006AE91BUL

#define NRM_STATE_PROVINCES_BEGIN_OFFSET       0x48UL
#define NRM_STATE_PROVINCES_END_OFFSET         0x4CUL

#define NRM_FEATURE_FACTORY_PROVINCES_FILTER   0x00000100UL
#define NRM_FEATURE_FACTORY_COMMON_PREDICATE   0x00000200UL
#define NRM_FEATURE_FACTORY_STRATEGIC_SORT      0x00000400UL
#define NRM_FEATURE_FACTORY_COLONIAL_STRATEGIC   0x00000800UL
#define NRM_FEATURE_FACTORY_MONEY_GRAY            0x00001000UL

void __cdecl nrm_factory_parser_hook(void);
void __cdecl nrm_factory_parser_trampoline(void);
void __cdecl nrm_factory_list_filter_trampoline(void);
void __cdecl nrm_factory_can_build_wrapper(void);
void __cdecl nrm_factory_can_build_list_wrapper(void);
void __cdecl nrm_factory_money_fail_trampoline(void);
void __cdecl nrm_factory_ui_sort_vector_trampoline(void);
void __cdecl nrm_factory_any_available_button_wrapper(void);
void __cdecl nrm_factory_force_enabled_wrapper(void);
void __cdecl nrm_factory_state_colony_trampoline(void);
void __cdecl nrm_factory_type_colony_trampoline(void);
nrm_bool __cdecl nrm_factory_can_build_full_cdecl(void *actor, void *state, void *factory_type);
nrm_bool __cdecl nrm_factory_any_available(void *state, void *actor);
void __cdecl nrm_capture_factory_provinces(void *factory_type, void *parse_node);
nrm_bool __cdecl nrm_factory_allowed_in_state(void *factory_type, void *state);
void * __cdecl nrm_factory_ui_build_sorted_vector(void *vector_obj);
nrm_bool __cdecl nrm_install_factory_provinces_filter_module(void);

/* Equivalent-aware factory owner payout. */
#define NRM_OFF_OWNER_PAYOUT                    0x000CFE20UL
#define NRM_OFF_OWNER_PAYOUT_CONTINUE           0x000CFE26UL
#define NRM_OFF_OWNER_BONUS_PRIMARY_HOOK        0x000EEA14UL
#define NRM_OFF_OWNER_BONUS_PRIMARY_CONTINUE    0x000EEA26UL
#define NRM_OFF_OWNER_BONUS_SECONDARY_HOOK      0x000EEF47UL
#define NRM_OFF_OWNER_BONUS_SECONDARY_CONTINUE  0x000EEF53UL
#define NRM_OFF_OWNER_BONUS_TOOLTIP_HOOK        0x00344EE4UL
#define NRM_OFF_OWNER_BONUS_TOOLTIP_CONTINUE    0x00344EF6UL
#define NRM_OFF_PRODUCTION_POP_SORT_DOMESTIC_HOOK     0x002F2395UL
#define NRM_OFF_PRODUCTION_POP_SORT_DOMESTIC_CONTINUE 0x002F239CUL
#define NRM_OFF_PRODUCTION_POP_SORT_DOMESTIC_LOOP     0x002F2290UL
#define NRM_OFF_PRODUCTION_POP_SORT_DOMESTIC_DONE     0x002F26C0UL
#define NRM_OFF_PRODUCTION_POP_SORT_FOREIGN_HOOK      0x002F2872UL
#define NRM_OFF_PRODUCTION_POP_SORT_FOREIGN_CONTINUE  0x002F2879UL
#define NRM_OFF_PRODUCTION_POP_SORT_FOREIGN_LOOP      0x002F2782UL
#define NRM_OFF_PRODUCTION_POP_SORT_FOREIGN_DONE      0x002F2BD4UL
#define NRM_FEATURE_OWNER_EQUIVALENT_PAYOUT     0x00002000UL
#define NRM_FEATURE_OWNER_EQUIVALENT_BONUS      0x00004000UL
#define NRM_FEATURE_PRODUCTION_NO_OWNER_SORT    0x00008000UL

void __cdecl nrm_owner_payout_hook(void);
void __cdecl nrm_owner_bonus_primary_hook(void);
void __cdecl nrm_owner_bonus_secondary_hook(void);
void __cdecl nrm_owner_bonus_tooltip_hook(void);
void __cdecl nrm_production_pop_sort_domestic_hook(void);
void __cdecl nrm_production_pop_sort_foreign_hook(void);
nrm_u32 __cdecl nrm_owner_equivalent_population_from_state(void *state,
                                                            void *definition);
void __cdecl nrm_owner_payout_vanilla_trampoline(void);
nrm_bool __cdecl nrm_owner_payout_call_vanilla(void *definition,
                                                void *state,
                                                nrm_u32 money_lo,
                                                nrm_u32 money_hi);
nrm_bool __cdecl nrm_owner_payout_dispatch(void *definition,
                                            void *state,
                                            nrm_u32 money_lo,
                                            nrm_u32 money_hi);
nrm_bool __cdecl nrm_install_owner_equivalent_module(void);

/* Research optimum: COUNTRY-level demographic share excludes colonial states. */
#define NRM_FEATURE_RESEARCH_NONCOLONIAL 0x00010000UL

void * __cdecl nrm_research_prepare_noncolonial_demographics(void *demographics);
nrm_bool __cdecl nrm_install_research_noncolonial_module(void);

/* Manual retreat v52: block surrounded route-retreat and limit allowed
   manual retreat to the first route node (one adjacent province). */
#define NRM_FEATURE_MANUAL_RETREAT_ONEHOP 0x00020000UL
void __fastcall nrm_manual_retreat_onehop_wrapper(void *unit, void *unused_edx,
                                                   void *route, nrm_u32 flag);
nrm_bool __cdecl nrm_install_manual_retreat_onehop_module(void);

/* Cancel a pre-existing amphibious landing when its transport fleet enters naval combat. */
#define NRM_FEATURE_CANCEL_LANDING_NAVAL_BATTLE 0x00040000UL
void __cdecl nrm_cancel_landing_if_naval_battle(void *unit);
void __cdecl nrm_unit_movement_update_trampoline(void);
void __cdecl nrm_clear_unit_route_vanilla(void *route_container);
nrm_bool __cdecl nrm_install_cancel_landing_on_naval_battle_module(void);

#endif
