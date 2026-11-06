// Relation/country-pair prefetch, indexed AI target lookup, pop-chain/identity prefetch,
// optional timing, and opt-in empty-country skips for Victoria II 3.04.
// Enable prefetch with V2DLL_PREFETCH_RELATION_HOTSPOTS=1; enable timing with
// V2DLL_PROFILE_COUNTRY_DAILY=1 in the game process environment. Optionally
// avoid the plugin's speculative relation prefetch for countries with no
// provinces using V2DLL_PREFETCH_LIVING_COUNTRIES_ONLY=1.
// The skip settings are separate INI options and default off. With them off,
// every hooked native routine is called once and game-state behavior is preserved.
// block_puppets_from_great_powers defaults on and prevents a country with an
// overlord from being promoted to Great Power, matching the one-province rule.
// great_nations_count_override values above 8 also clamp the Great Power window
// loops to the eight vanilla GUI controls, so the extra powers do not crash the
// diplomacy/production windows.
//
// Puppet / vassal diplomacy ([Puppets], all default 1; every player must use the
// same values in multiplayer):
//   allow_justify_puppets      a CB can be justified against a vassal or a substate
//   allow_puppet_justify       a vassal/substate can justify a CB against any country
//   allow_puppet_add_wargoal   a vassal/substate can add a war goal against any country
//   allow_puppet_declare       a vassal/substate can declare war on any country
//   allow_declare_puppets      war can be declared on a vassal or a substate
//   no_puppet_war_autocancel   the daily tick no longer removes a vassal/substate war leader
//   allow_peace_with_puppets   peace can be negotiated with a vassal or a substate
//   allow_puppet_peace         a vassal/substate can negotiate peace with any country
//   allow_puppet_occupations   a vassal/substate keeps the provinces it occupies
//   allow_puppet_ai_diplomacy  an AI vassal/substate can pick non-overlord CB/war targets
//
// The peace keys patch CPeaceAction's vtable, which is the same object used by
// the player UI, CDiplomaticActionCommand_Validate and the AI (AI_ManagePeace
// and AI_EvaluatePeaceOffer both call DiplomaticAction_CanPerform), so the AI
// uses them too instead of being player-only.

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <xmmintrin.h>
#include "V2ModAPI.h"
#include "config.h"
#include "features/multiplayer/oos_test.h"
#include "features/multiplayer/oos_notice.h"
#include "features/multiplayer/state_checksum.h"
#include "features/multiplayer/sync_check.h"
#include "features/multiplayer/world_rng.h"
#include "hooks/memory.h"
#include "log.h"

extern "C" void __cdecl v2dll_AiTargetMembershipThunk();
extern "C" void __cdecl v2dll_KeepPuppetRelationThunk();
extern "C" void __cdecl v2dll_JustifyPuppetSphereThunk();
extern "C" void __cdecl v2dll_GreatPowerMainEligibilityThunk();
extern "C" void __cdecl v2dll_GreatPowerCandidateEligibilityThunk();
extern "C" void __cdecl v2dll_GreatPowerVacancyEligibilityThunk();
extern "C" void __cdecl v2dll_GreatPowerCountLimitThunk();
extern "C" void __cdecl v2dll_GreatPowerFlagLoopEcxThunk();
extern "C" void __cdecl v2dll_GreatPowerFlagLoopEdxThunk();
extern "C" void __cdecl v2dll_GreatPowerCountEsiLimitThunk();
extern "C" void __cdecl v2dll_GreatPowerNonGpCountLimitThunk();
extern "C" void __cdecl v2dll_GreatPowerCountFloorThunk();
extern "C" uint32_t g_v2dllGreatNationsCountFloor;
extern "C" uintptr_t g_v2dllAiTargetFallbackAsm;
extern "C" uintptr_t g_v2dllAiTargetFoundAsm;
extern "C" uintptr_t g_v2dllAiTargetSearchAsm;
extern "C" volatile LONG g_v2dllKeepPuppetsWhenGreatPowerAsm;
extern "C" uintptr_t g_v2dllKeepPuppetsResumeAsm;
extern "C" uintptr_t g_v2dllJustifyPuppetAllowAsm;
extern "C" uintptr_t g_v2dllJustifyPuppetLoopAsm;

namespace {

constexpr uint32_t kCallRva = 0x285ED1;       // VA 0x00685ED1
constexpr uint32_t kFunctionRva = 0x1091A0;   // VA 0x005091A0
constexpr uint32_t kPrePassCallRva = 0x285C2C; // VA 0x00685C2C
constexpr uint32_t kPrePassRva = 0x108590;     // VA 0x00508590
constexpr uint32_t kCapacityCallRva = 0x87483; // VA 0x00487483
constexpr uint32_t kCapacityRva = 0x122CF0;    // VA 0x00522CF0
constexpr uint32_t kCountryPairCallRva = 0x10B6B9; // VA 0x0050B6B9
constexpr uint32_t kCountryPairRva = 0x12FCD0;      // VA 0x0052FCD0
constexpr uint32_t kMapSceneCallRva = 0x2596B1; // VA 0x006596B1
constexpr uint32_t kMapSceneRva = 0x599BB0;     // VA 0x00999BB0
constexpr uint32_t kMapRenderCallRva = 0x2562C7; // VA 0x006562C7
constexpr uint32_t kMapRenderRva = 0x2592F0;     // VA 0x006592F0
constexpr uint32_t kWorldGlobalRva = 0xE588E8;
constexpr uint32_t kCountryManagerGlobalRva = 0xE587E4;
constexpr uint32_t kDailyTickCallRva = 0x283AB1; // VA 0x00683AB1
constexpr uint32_t kEconomyMonthlyTickRva = 0x2859C0; // VA 0x006859C0
constexpr uint32_t kDestroyArmyRva = 0x28AA10; // VA 0x0068AA10, native unlink + destroy
constexpr uint32_t kAiFrameUpdateRva = 0x2874C0; // VA 0x006874C0
constexpr uint32_t kAiTargetScanRva = 0x44B0F0; // VA 0x0084B0F0
constexpr uint32_t kAiTargetMembershipRva = 0x44B2CB; // VA 0x0084B2CB
constexpr uint32_t kAiTargetMembershipFallbackRva = 0x44B2EE; // VA 0x0084B2EE
constexpr uint32_t kAiTargetMembershipFoundRva = 0x44B303; // VA 0x0084B303
constexpr uint32_t kAiTargetMembershipSearchRva = 0x44B2D1; // VA 0x0084B2D1
constexpr uint32_t kGreatPowerPuppetCheckRva = 0x13D6A6; // VA 0x0053D6A6
constexpr uint32_t kGreatPowerMainEligibilityRva = 0x28D640; // VA 0x0068D640
constexpr uint32_t kGreatPowerCandidateEligibilityRva = 0x28C6C3; // VA 0x0068C6C3
constexpr uint32_t kGreatPowerVacancyEligibilityRva = 0x28D845; // VA 0x0068D845
// The vanilla interface defines only country_gp0..7, sort_by_gp0..7 and
// sort_by_gpflag0..7. With GREAT_NATIONS_COUNT above 8 the window builders
// still ask for index 8+, receive a NULL widget, and dereference it. Clamp the
// per-window loops to the eight controls that actually exist.
constexpr uint32_t kGreatPowerDisplayLimit = 8;
constexpr int kMaxGreatNationsCount = 32;
constexpr uint32_t kGreatPowerCountLimitRvas[] = {
    0x223589, // VA 0x00623589, FUN_00622270, sort_by_gp%d / diplomacy_greatpower_info
    0x227360, // VA 0x00627360, FUN_00625A50, country_gp%d
    0x2F6D0F, // VA 0x006F6D0F, FUN_006F53A0, country_gp%d
    0x2F3239, // VA 0x006F3239, FUN_006EFDB0, invest_non_gp_extra_info grid (first loop)
    0x2F3443, // VA 0x006F3443, FUN_006EFDB0, sort_by_gp%d (second loop, crash site)
    0x221DFF, // VA 0x00621DFF, FUN_00621C10, diplomacy country panel numeric widget loop
};
constexpr uint32_t kGreatPowerFlagLoopEcxRva = 0x2F3CA8; // VA 0x006F3CA8, FUN_006F3C70
constexpr uint32_t kGreatPowerFlagLoopEdxRva = 0x22503A; // VA 0x0062503A, FUN_00625000
// FUN_00627580 (the diplomacy_country_facts builder) keeps the scaled count in
// ECX, runs the native division and stores count/1000 in ESI. It does not use
// the generic count thunk, so patch only the seven-byte tail after the division
// and clamp ESI to the eight diplomacy_greatpower_info widgets that exist.
constexpr uint32_t kGreatPowerCountEsiLimitRva = 0x229540; // VA 0x00629540, FUN_00627580
// The non-Great-Power branch of FUN_00627580 (0x00629DB2) iterates the
// great_powers vector and looks up nongp_country_opinion%d for each entry. Its
// bound is (end-begin)/4, so a ninth Great Power reaches index 8, receives a
// NULL widget and crashes at 0x00629E36. Clamp the stored bound to eight.
constexpr uint32_t kGreatPowerNonGpCountLimitRva = 0x229DD8; // VA 0x00629DD8, FUN_00627580
// EconomyManager_RebuildEconomicLists (0x0068D250) is the only consumer of the
// scaled GREAT_NATIONS_COUNT that decides how many countries keep Great Power
// status: it divides the define by 1000 and stores the result at [esp+0x10].
// If the mod's defines.lua was not updated (or another mod overrides it), that
// value stays at 8 and the configured ninth power is demoted to a secondary
// power. Replace the four-byte store (plus the following three-byte
// MOV EAX,[EBX+4], which the five-byte CALL would otherwise split) with a CALL
// that raises the count to the configured floor. The thunk reproduces both
// instructions and returns onto the two trailing NOPs.
constexpr uint32_t kGreatPowerCountFloorRva = 0x28D287; // VA 0x0068D287, EconomyManager_RebuildEconomicLists
constexpr uint32_t kCountryOverlordOffset = 0x0CFC;
constexpr uint32_t kCountryProvinceCountOffset = 0x0E4C;
constexpr uint32_t kPopResetCallRva = 0x79C90; // VA 0x004B9C90
constexpr uint32_t kPopResetRva = 0x55EBF0; // VA 0x0095EBF0
constexpr uint32_t kEventScanGateRva = 0x4A7D33; // VA 0x008A7D33
constexpr uint32_t kCountryEventMultiplierRva = 0x4A7DF7; // VA 0x008A7DF7
constexpr uint32_t kProvinceEventMultiplierRva = 0x4A7FD8; // VA 0x008A7FD8
// Puppet / vassal diplomacy. Slots 29 (+0x74) and 30 (+0x78) of the generic
// CDiplomaticAction gate (DiplomaticAction_CanPerform, 0x00911760) are the
// "a vassal/substate actor may only act on its overlord" and "a vassal/substate
// recipient may only be acted on by its overlord" rules. The predicate in the
// slot returns true to enforce the rule; false skips it.
constexpr uint32_t kPuppetVtMakeCbRva = 0xA343D4;       // CMakeCBAction::vftable
constexpr uint32_t kPuppetVtAddWarGoalRva = 0xA34334;   // CAddWarGoalAction::vftable
constexpr uint32_t kPuppetVtDeclareWarRva = 0xA34294;   // CDeclareWarAction::vftable
constexpr uint32_t kPuppetVtPeaceRva = 0xA34474;        // CPeaceAction::vftable
constexpr uint32_t kPuppetPredicateTrueRva = 0x631490;  // 0x00A31490: mov al,1; ret
constexpr uint32_t kPuppetPredicateFalseRva = 0x18CFD0; // 0x0058CFD0: xor al,al; ret
constexpr uint32_t kJustifyPuppetVassalJumpRva = 0x5271A2;   // 75 DC, CMakeCBAction_CanPerform
constexpr uint32_t kJustifyPuppetSubstateJumpRva = 0x5271AB; // 75 D3, CMakeCBAction_CanPerform
// The sphere check starts at 0x00927163 (CMP EAX,EDX / JE allow / MOV EDI,[ESI+0x14]).
// 0x00927180 is NOT private to that check: several later rejection branches jump
// to it with different register state (ECX may be a CCountry, ESI may be null).
// Hook the start of the check, never the shared reject label.
constexpr uint32_t kJustifyPuppetSphereCheckRva = 0x527163;  // 3B C2 74 24 8B
constexpr uint32_t kJustifyPuppetSphereLoopRva = 0x527170;   // native sphere-member loop
constexpr uint32_t kJustifyPuppetSphereAllowRva = 0x52718B;  // continue after the sphere check
constexpr uint32_t kWarCanDeclarePuppetExitRva = 0x53AB18;   // 75 7D, War_CanDeclare
constexpr uint32_t kWarReasonSubstateRva = 0x53B074;         // 74 77, War_CannotDeclareReason
constexpr uint32_t kWarReasonVassalRva = 0x53B109;           // 74 77, War_CannotDeclareReason
// Occupation attribution: FUN_004B50A0 normally climbs from a vassal/substate
// besieger to its overlord before giving the province to the controller.
constexpr uint32_t kPuppetOccupationSiteRva = 0x0B50D4;     // 80 B8 F5 0C 00 00 00, CMP [EAX+0xCF5]
constexpr uint32_t kPuppetOccupationResumeRva = 0x0B515B;   // non-subject continuation
// AI diplomacy: a subject AI is redirected to its overlord for CB/war targets
// and gets a -1000 opinion cut-off against anyone else.
constexpr uint32_t kPuppetAiTargetJumpRva = 0x45E22D;       // 75 11, target is vassal -> overlord ascent
constexpr uint32_t kPuppetAiTargetExitRva = 0x45E236;       // 0F 84 AC 00 00 00, target not a subject
constexpr uint32_t kPuppetAiTargetNormalRva = 0x45E2E8;     // normal target scoring
constexpr uint32_t kPuppetAiOpinionExitRva = 0x43EF06;      // 0F 84 3A 02 00 00, other is the overlord
constexpr uint32_t kPuppetAiOpinionNormalRva = 0x43F146;    // normal opinion scoring
constexpr uint32_t kPuppetWarTickRemoveDefender1Rva = 0x2841A6; // CALL 0x00936070 (first defender)
constexpr uint32_t kPuppetWarTickRemoveDefender2Rva = 0x2841DF; // CALL 0x00936070 (first attacker)
constexpr uint32_t kWarRemoveDefenderRva = 0x536070; // War_RemoveDefender, stdcall 4 args
// cancel_wars_with_missing_countries: the daily war tick (FUN_006840F0) only
// cancels a war when one side is literally empty. A war created by an event
// against a tag with no owned provinces keeps a valid CCountry in the side
// vector, so the side is never empty and the war stays at 100% warscore
// forever. The call below runs before the native tick; it removes those dead
// participants with the same helpers Country_Annex uses, and the native tick
// then finds the empty side and cancels the war.
constexpr uint32_t kWarTickCallRva = 0x2859E9;   // VA 0x006859E9, CALL 0x006840F0
constexpr uint32_t kWarTickRva = 0x2840F0;       // VA 0x006840F0
constexpr uint32_t kWarRemoveAttackerRva = 0x5351C0; // VA 0x009351C0, stdcall 4 args
constexpr uint32_t kWarListOffset = 0x0B3C;      // world+0xB3C, linked list of CWar
constexpr uint32_t kWarAttackerBeginOffset = 0x2C;
constexpr uint32_t kWarAttackerEndOffset = 0x30;
constexpr uint32_t kWarDefenderBeginOffset = 0x3C;
constexpr uint32_t kWarDefenderEndOffset = 0x40;
constexpr uint32_t kWarParticipantEntrySize = 8; // {char tag[4]; u32 countryIndex}
// Non-zero blocks the native empty-side cancellation in FUN_006840F0; the
// release_vassal war path (FUN_004E7290) sets it to 1, so such a war never
// cancels even once a side is empty. The CWar constructor zeroes it.
constexpr uint32_t kWarAutoCancelBlockedOffset = 8;
// date trigger ([ScriptExtensions] date_trigger): TriggerBlock_AddChild
// (FUN_008B33E0) has no native date condition. The keyword "date" is registered
// with token 0x2A1 for bookmarks / ideologies / OOB history, and inside a
// trigger block that token falls into the "unknown trigger" default branch.
// The factory hook builds a has_country_flag trigger (token 0x40A) instead, so
// the parser stores the raw value text in the object's std::string, then swaps
// in a private vtable whose Evaluate compares the game day with the parsed date.
constexpr uint32_t kTriggerFactoryRva = 0x4B33E0;      // TriggerBlock_AddChild
constexpr uint32_t kFlagTriggerVtRva = 0xA307E8;       // has_country_flag vtable
constexpr uint32_t kFlagTriggerEvaluateRva = 0x4CCB90; // slot 6
constexpr uint32_t kFlagTriggerTooltipRva = 0x4CCBF0;  // slot 10
constexpr uint32_t kOperatorNewRva = 0x6AE9AF;         // FUN_00AAE9AF (cdecl size)
constexpr uint32_t kTriggerKeyTextOffset = 0x24;       // parser key text
constexpr uint32_t kFlagTriggerStringOffset = 0x1C;    // std::string value
constexpr uint32_t kFlagTriggerCacheOffset = 0x34;     // free 4 bytes: target game day
constexpr int kTokenDate = 0x2A1;
constexpr int kTokenHasCountryFlag = 0x40A;
constexpr uint32_t kWorldDateOffset = 0x0B0C;          // world date in hours
constexpr uint32_t kHoursPerDay = 24;
constexpr uint32_t kDaysPerYear = 365;
constexpr int32_t kYearBase = -5000;
// fire_on_time ([Events]): the monthly candidate rebuild (FUN_008A78D0)
// appends an event only when its trigger is already true at the month change,
// so an event whose trigger becomes true mid-month waits until the next month.
// Force time-gated events (date / year / month) into the candidate lists; the
// daily scan still evaluates the full trigger before firing, so this only
// changes when the event becomes eligible for the scan.
constexpr uint32_t kEventCountryGateRva = 0x4A79FA;  // JZ 0x008A7ABE
constexpr uint32_t kEventCountrySkipRva = 0x4A7ABE;  // loop increment
constexpr uint32_t kEventProvinceGateRva = 0x4A7BC3; // JZ 0x008A7C86
constexpr uint32_t kEventProvinceSkipRva = 0x4A7C86; // loop increment
constexpr uint32_t kEventTriggerOffset = 0x30;       // embedded CAndTrigger
constexpr uint32_t kVtAndTriggerRva = 0x9F9994;
constexpr uint32_t kVtOrTriggerRva = 0xA2FB70;
constexpr uint32_t kVtNotTriggerRva = 0xA2FBA8;
constexpr uint32_t kVtContextTriggerRva = 0xA2FBE0;
constexpr uint32_t kVtYearTriggerRva = 0xA2FC18;
constexpr uint32_t kVtMonthTriggerRva = 0xA2FC50;
// guard_missing_modifiers ([ScriptExtensions]): the native execute slots of the
// four modifier effects are already null-safe; only the tooltips dereference
// the missing modifier. Replace the tooltip slots with null-safe guards that
// show INVALID MODIFIERS. The two has_*_modifier triggers have the same
// problem in their tooltip.
constexpr uint32_t kOperatorDeleteRva = 0x6AE91B;       // FUN_00AAE91B (cdecl ptr)
constexpr uint32_t kEffectAddProvinceVtRva = 0xA2ABA8;
constexpr uint32_t kEffectAddCountryVtRva = 0xA2ABE0;
constexpr uint32_t kEffectRemoveProvinceVtRva = 0xA2AC18;
constexpr uint32_t kEffectRemoveCountryVtRva = 0xA2AC50;
constexpr uint32_t kEffectAddProvinceTooltipRva = 0x4814E0;
constexpr uint32_t kEffectAddCountryTooltipRva = 0x481B40;
constexpr uint32_t kEffectRemoveProvinceTooltipRva = 0x4822C0;
constexpr uint32_t kEffectRemoveCountryTooltipRva = 0x4826B0;
constexpr uint32_t kEffectTooltipSlot = 0x24;
constexpr uint32_t kEffectModifierAddOffset = 0x24;
constexpr uint32_t kEffectModifierRemoveOffset = 0x20;
constexpr uint32_t kTriggerHasCountryModifierVtRva = 0xA30858;
constexpr uint32_t kTriggerHasProvinceModifierVtRva = 0xA30890;
constexpr uint32_t kTriggerHasCountryModifierTooltipRva = 0x4CD930;
constexpr uint32_t kTriggerHasProvinceModifierTooltipRva = 0x4CE000;
constexpr uint32_t kTriggerTooltipSlot = 0x28;
constexpr uint32_t kTriggerModifierOffset = 0x1C;
constexpr uint32_t kRelationArrayOffset = 0x0BE8;
constexpr uint32_t kRelationCount = 683;
constexpr LONG kWindowSamples = 32;
constexpr char kProfileVariable[] = "V2DLL_PROFILE_COUNTRY_DAILY";
constexpr char kPrefetchVariable[] = "V2DLL_PREFETCH_RELATION_HOTSPOTS";
constexpr char kLivingOnlyVariable[] = "V2DLL_PREFETCH_LIVING_COUNTRIES_ONLY";
constexpr uint32_t kCountryIndexOffset = 0x20;
constexpr uint32_t kProvinceVectorBeginOffset = 0x09D8;
constexpr uint32_t kProvinceVectorEndOffset = 0x09DC;
constexpr uint32_t kMaxCountrySlots = 683;

using LogFn = void (__cdecl*)(const char*, ...);
using CountryDailyUpdateFn = void (__stdcall*)(uint32_t country, uint32_t context);
using CountryPrePassFn = void (__stdcall*)(uint32_t country);
using MarketCapacityFn = void (__stdcall*)(uint32_t country, uint32_t output);
using CountryPairUpdateFn = void (__stdcall*)(uint32_t country, uint32_t reset);
using EconomyMonthlyTickFn = void (__stdcall*)(uint32_t world);
using WarTickFn = void (__stdcall*)(uint32_t world);
using WarRemoveParticipantFn = void (__stdcall*)(void* war, uint32_t tag, uint32_t index,
                                                 uint32_t notify);
using DestroyArmyFn = void (__thiscall*)(void* world, void* army);
using MapRenderFn = void (__stdcall*)(uint32_t renderContext);
using AiFrameUpdateFn = void (__stdcall*)(void* queue);
using AiTargetScanFn = void (__fastcall*)(void* ai);
// TriggerBlock_AddChild: thiscall (block, parser, token), RET 8. The
// __fastcall form keeps the same stack layout (ECX=block, EDX=scratch,
// parser/token on the stack) so it can replace the native entry.
using TriggerFactoryFn = void (__fastcall*)(void* self, void* edx, void* ctx, int token);

CountryDailyUpdateFn g_original = nullptr;
CountryPrePassFn g_originalPrePass = nullptr;
MarketCapacityFn g_originalMarketCapacity = nullptr;
CountryPairUpdateFn g_originalCountryPairUpdate = nullptr;
EconomyMonthlyTickFn g_originalEconomyMonthlyTick = nullptr;
DestroyArmyFn g_destroyArmy = nullptr;
MapRenderFn g_originalMapRender = nullptr;
AiFrameUpdateFn g_originalAiFrameUpdate = nullptr;
AiTargetScanFn g_originalAiTargetScan = nullptr;
WarTickFn g_originalWarTick = nullptr;
WarRemoveParticipantFn g_removeWarAttacker = nullptr;
WarRemoveParticipantFn g_removeWarDefender = nullptr;
LogFn g_log = nullptr;
LARGE_INTEGER g_frequency = {};
uintptr_t g_worldGlobal = 0;
uintptr_t g_countryManagerGlobal = 0;
SRWLOCK g_statsLock = SRWLOCK_INIT;
LONG g_samples = 0;
uint64_t g_totalTicks = 0;
uint64_t g_minTicks = UINT64_MAX;
uint64_t g_maxTicks = 0;
uint64_t g_windowNumber = 0;
bool g_profileEnabled = false;
bool g_prefetchEnabled = false;
bool g_prefetchCountryRelationsFromIni = false;
bool g_optimizeAiTargetLookup = false;
bool g_livingOnlyPrefetch = false;
bool g_skipEmptyDailyUpdate = false;
bool g_skipEmptyPrePass = false;
bool g_disableMap3DSceneRender = false;
bool g_cleanupArmiesOfLandlessCountries = false;
bool g_disableLogging = false;
bool g_mpStateChecksum = true;
bool g_mpOosNotice = true;
bool g_mpFixRngResync = true;
bool g_mpSyncWorldRng = true;
bool g_mpOosTestButton = true;
bool g_allowJustifyPuppets = true;
bool g_allowPuppetJustify = true;
bool g_allowPuppetAddWargoal = true;
bool g_allowPuppetDeclare = true;
bool g_allowDeclarePuppets = true;
bool g_noPuppetWarAutocancel = true;
bool g_allowPeaceWithPuppets = true;
bool g_allowPuppetPeace = true;
bool g_allowPuppetOccupations = true;
bool g_allowPuppetAiDiplomacy = true;
bool g_keepPuppetsWhenGreatPowers = false;
bool g_blockPuppetsFromGreatPowers = false;
bool g_localConfig = true;
bool g_cancelWarsWithMissingCountries = true;
volatile LONG g_missingWarParticipantsRemoved = 0;
volatile LONG g_missingWarLogBudget = 200;
bool g_dateTrigger = true;
bool g_fireOnTime = true;
bool g_guardMissingModifiers = true;
TriggerFactoryFn g_nextTriggerFactory = nullptr;
void** g_dateTriggerVtable = nullptr;
void* g_dateTriggerVtableBuf[17] = {};
uintptr_t g_gameImageBase = 0;
__declspec(align(16)) unsigned char g_dateFactoryTrampoline[32] = {};
volatile LONG g_dateTriggersCreated = 0;
volatile LONG g_dateTriggerParseFailures = 0;
uint32_t g_greatNationsCountOverride = 0;
bool g_prefetchPopResetChain = false;
bool g_prefetchPopCulture = false;
bool g_prefetchPopReligion = false;
struct AiTargetLookupCache {
    uint32_t owner;
    uint32_t ids[(kRelationCount + 31) / 32];
    bool valid;
    bool disabled;
};
// The AI scan runs synchronously per worker. A per-thread snapshot avoids
// locking and is cleared at each AI_TargetScan entry.
__declspec(thread) AiTargetLookupCache g_aiTargetLookupCache = {};
uint32_t g_aiThreadCore = 0;
uint32_t g_renderThreadCore = 0;
uint32_t g_eventScanIntervalDays = 2;
DWORD_PTR g_renderAffinityMask = 0;
DWORD_PTR g_aiAffinityMask = 0;
HANDLE g_skipLogFile = INVALID_HANDLE_VALUE;
SRWLOCK g_skipLogLock = SRWLOCK_INIT;
volatile LONG g_skippedDailyCount = 0;
volatile LONG g_skippedPrePassCount = 0;
volatile LONG g_mapSceneSuppressedFrames = 0;
volatile LONG g_armiesCleanedTotal = 0;
volatile LONG g_renderAffinityFailureLogged = 0;
volatile LONG g_aiAffinityFailureLogged = 0;
volatile LONG g_loggedDailyCountry[kMaxCountrySlots] = {};
volatile LONG g_loggedPrePassCountry[kMaxCountrySlots] = {};

bool IsEnabled(const char* name) {
    char value[8] = {};
    return GetEnvironmentVariableA(name, value, sizeof(value)) != 0 && value[0] == '1';
}

void __cdecl DiscardPluginLog(const char*, ...) {
    // Used when disable_log=1 so hook status messages are also silenced.
}

// CCountry stores its province-pointer vector at +0x9D8..+0x9DC. This is only
// used to decide whether our optional speculative prefetch is worthwhile; it
// never suppresses or changes a native game call. On an implausible layout,
// fail open and allow prefetch so the option cannot change game behavior.
bool HasNoProvinceEntries(uint32_t country) {
    if (!country) return false;
    __try {
        uint32_t begin = 0, end = 0;
        const uintptr_t vector = static_cast<uintptr_t>(country) + kProvinceVectorBeginOffset;
        memcpy(&begin, reinterpret_cast<const void*>(vector), sizeof(begin));
        memcpy(&end, reinterpret_cast<const void*>(static_cast<uintptr_t>(country) +
                                                   kProvinceVectorEndOffset), sizeof(end));
        if (end < begin || ((end - begin) & 3u) != 0) return false;
        return end == begin;
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        return false;
    }
}

bool ShouldPrefetchCountry(uint32_t country) {
    return !g_livingOnlyPrefetch || !HasNoProvinceEntries(country);
}

void WriteSkipLogLine(const char* line) {
    if (g_skipLogFile == INVALID_HANDLE_VALUE || !line) return;
    AcquireSRWLockExclusive(&g_skipLogLock);
    DWORD written = 0;
    WriteFile(g_skipLogFile, line, static_cast<DWORD>(strlen(line)), &written, nullptr);
    // These messages are emitted from the simulation thread. Forcing a disk
    // flush for every newly observed country can stall the tick on slow disks,
    // especially in mods with hundreds of registered tags. The OS still
    // buffers the log writes; keep the hot path asynchronous.
    ReleaseSRWLockExclusive(&g_skipLogLock);
}

void LogSkippedCountry(const char* routine, uint32_t country, volatile LONG* seen,
                       volatile LONG* total) {
    const LONG count = InterlockedIncrement(total);
    uint32_t index = UINT32_MAX;
    uint32_t tag = 0;
    __try {
        memcpy(&index, reinterpret_cast<const void*>(static_cast<uintptr_t>(country) +
                                                     kCountryIndexOffset), sizeof(index));
        memcpy(&tag, reinterpret_cast<const void*>(static_cast<uintptr_t>(country) + 0x1C),
               sizeof(tag));
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        index = UINT32_MAX;
        tag = 0;
    }

    if (index < kMaxCountrySlots && InterlockedCompareExchange(&seen[index], 1, 0) == 0) {
        char line[256] = {};
        _snprintf_s(line, sizeof(line), _TRUNCATE,
                    "SKIP %s: country_index=%lu tag_raw=0x%08lX has no provinces (first occurrence)\r\n",
                    routine, static_cast<unsigned long>(index), static_cast<unsigned long>(tag));
        WriteSkipLogLine(line);
        if (g_log) g_log("v2dll_country_daily_optimizer: %s", line);
    }

    if ((count % 1000) == 0) {
        char line[192] = {};
        _snprintf_s(line, sizeof(line), _TRUNCATE,
                    "SUMMARY %s skipped_calls=%ld\r\n", routine, static_cast<long>(count));
        WriteSkipLogLine(line);
        if (g_log) g_log("v2dll_country_daily_optimizer: %s", line);
    }
}

// Country manager: global pointer -> {slot_count, country_pointer_array}.
// Country army list head is +0x7B4; the native destructor removes the army
// from every game-owned list before freeing it. Run only after the daily tick.
void CleanupLandlessCountryArmies(uint32_t world) {
    if (!world || !g_countryManagerGlobal || !g_destroyArmy) return;
    __try {
        uint32_t manager = 0;
        memcpy(&manager, reinterpret_cast<const void*>(g_countryManagerGlobal), 4);
        if (!manager) return;
        uint32_t count = 0, countries = 0;
        memcpy(&count, reinterpret_cast<const void*>(static_cast<uintptr_t>(manager)), 4);
        memcpy(&countries, reinterpret_cast<const void*>(static_cast<uintptr_t>(manager) + 4), 4);
        if (!countries || count == 0 || count > kMaxCountrySlots) {
            if (g_log) g_log("Landless army cleanup: invalid country manager (count=%lu); skipped",
                             static_cast<unsigned long>(count));
            return;
        }

        LONG removedThisTick = 0;
        for (uint32_t i = 0; i < count; ++i) {
            uint32_t country = 0, provinceBegin = 0, provinceEnd = 0;
            memcpy(&country, reinterpret_cast<const void*>(static_cast<uintptr_t>(countries) + i * 4), 4);
            if (!country) continue;
            memcpy(&provinceBegin, reinterpret_cast<const void*>(static_cast<uintptr_t>(country) + kProvinceVectorBeginOffset), 4);
            memcpy(&provinceEnd, reinterpret_cast<const void*>(static_cast<uintptr_t>(country) + kProvinceVectorEndOffset), 4);
            if (provinceEnd < provinceBegin || ((provinceEnd - provinceBegin) & 3u) || provinceEnd != provinceBegin)
                continue;

            uint32_t tag = 0;
            memcpy(&tag, reinterpret_cast<const void*>(static_cast<uintptr_t>(country) + 0x1C), 4);
            LONG removed = 0;
            while (removed < 4096) {
                uint32_t node = 0;
                memcpy(&node, reinterpret_cast<const void*>(static_cast<uintptr_t>(country) + 0x7B4), 4);
                if (!node) break;
                uint32_t army = 0;
                memcpy(&army, reinterpret_cast<const void*>(static_cast<uintptr_t>(node)), 4);
                if (!army) break;
                g_destroyArmy(reinterpret_cast<void*>(static_cast<uintptr_t>(world)),
                              reinterpret_cast<void*>(static_cast<uintptr_t>(army)));
                ++removed;
            }
            if (removed) {
                removedThisTick += removed;
                const LONG total = InterlockedExchangeAdd(&g_armiesCleanedTotal, removed) + removed;
                char line[224] = {};
                _snprintf_s(line, sizeof(line), _TRUNCATE,
                    "CLEAN landless_country slot=%lu tag_raw=0x%08lX armies=%ld total=%ld\r\n",
                    static_cast<unsigned long>(i), static_cast<unsigned long>(tag),
                    static_cast<long>(removed), static_cast<long>(total));
                WriteSkipLogLine(line);
                if (g_log) g_log("v2dll_country_daily_optimizer: %s", line);
            }
        }
        if (removedThisTick) {
            char line[128] = {};
            _snprintf_s(line, sizeof(line), _TRUNCATE,
                "SUMMARY landless_army_cleanup removed_this_tick=%ld\r\n",
                static_cast<long>(removedThisTick));
            WriteSkipLogLine(line);
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        if (g_log) g_log("Landless army cleanup: guarded memory/native call fault; remaining scan aborted");
    }
}

void __stdcall EconomyMonthlyTickCleanupThunk(uint32_t world) {
    g_originalEconomyMonthlyTick(world);
    if (g_cleanupArmiesOfLandlessCountries) CleanupLandlessCountryArmies(world);
}

// A country with an empty owned-province vector is dead (annexed or never
// existed); CCountry keeps the object, so the war side vector still names it.
// Only registered, non-null slots are removed: War_RemoveAttacker/Defender
// dereference the country by index, so an invalid slot must be left alone.
bool IsMissingWarCountry(uint32_t index) {
    if (!g_countryManagerGlobal) return false;
    uint32_t manager = 0, count = 0, countries = 0;
    memcpy(&manager, reinterpret_cast<const void*>(g_countryManagerGlobal), sizeof(manager));
    if (!manager) return false;
    memcpy(&count, reinterpret_cast<const void*>(static_cast<uintptr_t>(manager)), sizeof(count));
    memcpy(&countries, reinterpret_cast<const void*>(static_cast<uintptr_t>(manager) + 4),
           sizeof(countries));
    if (!countries || count == 0 || count > kMaxCountrySlots || index >= count) return false;
    uint32_t country = 0;
    memcpy(&country, reinterpret_cast<const void*>(static_cast<uintptr_t>(countries) + index * 4),
           sizeof(country));
    if (!country) return false;
    return HasNoProvinceEntries(country);
}

uint32_t RemoveMissingWarParticipantsFromSide(uint32_t war, bool defenderSide) {
    const uint32_t beginOffset =
        defenderSide ? kWarDefenderBeginOffset : kWarAttackerBeginOffset;
    const uint32_t endOffset =
        defenderSide ? kWarDefenderEndOffset : kWarAttackerEndOffset;
    uint32_t begin = 0, end = 0;
    memcpy(&begin, reinterpret_cast<const void*>(static_cast<uintptr_t>(war) + beginOffset),
           sizeof(begin));
    memcpy(&end, reinterpret_cast<const void*>(static_cast<uintptr_t>(war) + endOffset),
           sizeof(end));
    if (!begin || end < begin || ((end - begin) % kWarParticipantEntrySize) != 0) return 0;
    const uint32_t count = (end - begin) / kWarParticipantEntrySize;
    if (count == 0 || count > 256) return 0;

    struct MissingEntry { uint32_t tag; uint32_t index; };
    MissingEntry missing[256];
    uint32_t missingCount = 0;
    for (uint32_t i = 0; i < count; ++i) {
        const uintptr_t entry = static_cast<uintptr_t>(begin) + i * kWarParticipantEntrySize;
        uint32_t tag = 0, index = 0;
        memcpy(&tag, reinterpret_cast<const void*>(entry), sizeof(tag));
        memcpy(&index, reinterpret_cast<const void*>(entry + 4), sizeof(index));
        if (!IsMissingWarCountry(index)) continue;
        missing[missingCount].tag = tag;
        missing[missingCount].index = index;
        ++missingCount;
    }

    for (uint32_t i = 0; i < missingCount; ++i) {
        void* warPointer = reinterpret_cast<void*>(static_cast<uintptr_t>(war));
        if (defenderSide) {
            g_removeWarDefender(warPointer, missing[i].tag, missing[i].index, 0);
        } else {
            g_removeWarAttacker(warPointer, missing[i].tag, missing[i].index, 0);
        }
        InterlockedIncrement(&g_missingWarParticipantsRemoved);
        if (InterlockedDecrement(&g_missingWarLogBudget) >= 0 && g_log) {
            g_log("cancel_wars_with_missing_countries: removed %s tag=%c%c%c index=%lu from war 0x%08X",
                  defenderSide ? "defender" : "attacker",
                  static_cast<char>(missing[i].tag & 0xFF),
                  static_cast<char>((missing[i].tag >> 8) & 0xFF),
                  static_cast<char>((missing[i].tag >> 16) & 0xFF),
                  static_cast<unsigned long>(missing[i].index),
                  static_cast<unsigned>(war));
        }
    }
    return missingCount;
}

// Runs before FUN_006840F0. If a side ends up empty after the removals, the
// native tick's empty-side branch performs the actual cancellation (it also
// clears the war goals and moves the war to the ended list).
void RemoveMissingWarParticipants(uint32_t world) {
    if (!world || !g_countryManagerGlobal || !g_removeWarAttacker || !g_removeWarDefender) return;
    uint32_t node = 0;
    memcpy(&node, reinterpret_cast<const void*>(static_cast<uintptr_t>(world) + kWarListOffset),
           sizeof(node));
    uint32_t visited = 0;
    while (node && visited++ < 4096) {
        uint32_t war = 0, next = 0;
        memcpy(&war, reinterpret_cast<const void*>(node), sizeof(war));
        memcpy(&next, reinterpret_cast<const void*>(static_cast<uintptr_t>(node) + 8),
               sizeof(next));
        if (war) {
            uint32_t attackerBegin = 0, attackerEnd = 0, defenderBegin = 0, defenderEnd = 0;
            memcpy(&attackerBegin, reinterpret_cast<const void*>(static_cast<uintptr_t>(war) + kWarAttackerBeginOffset), sizeof(attackerBegin));
            memcpy(&attackerEnd, reinterpret_cast<const void*>(static_cast<uintptr_t>(war) + kWarAttackerEndOffset), sizeof(attackerEnd));
            memcpy(&defenderBegin, reinterpret_cast<const void*>(static_cast<uintptr_t>(war) + kWarDefenderBeginOffset), sizeof(defenderBegin));
            memcpy(&defenderEnd, reinterpret_cast<const void*>(static_cast<uintptr_t>(war) + kWarDefenderEndOffset), sizeof(defenderEnd));
            // An already-empty side is left to the native branch this same tick.
            if (attackerBegin != attackerEnd && defenderBegin != defenderEnd) {
                const uint32_t removedAttackers =
                    RemoveMissingWarParticipantsFromSide(war, false);
                const uint32_t removedDefenders =
                    RemoveMissingWarParticipantsFromSide(war, true);
                if (removedAttackers != 0 || removedDefenders != 0) {
                    // The removals changed the side bounds, so re-read them.
                    uint32_t newAttackerBegin = 0, newAttackerEnd = 0;
                    uint32_t newDefenderBegin = 0, newDefenderEnd = 0;
                    memcpy(&newAttackerBegin, reinterpret_cast<const void*>(static_cast<uintptr_t>(war) + kWarAttackerBeginOffset), sizeof(newAttackerBegin));
                    memcpy(&newAttackerEnd, reinterpret_cast<const void*>(static_cast<uintptr_t>(war) + kWarAttackerEndOffset), sizeof(newAttackerEnd));
                    memcpy(&newDefenderBegin, reinterpret_cast<const void*>(static_cast<uintptr_t>(war) + kWarDefenderBeginOffset), sizeof(newDefenderBegin));
                    memcpy(&newDefenderEnd, reinterpret_cast<const void*>(static_cast<uintptr_t>(war) + kWarDefenderEndOffset), sizeof(newDefenderEnd));
                    if (newAttackerBegin == newAttackerEnd || newDefenderBegin == newDefenderEnd) {
                        // A release_vassal war sets this flag and would stay stuck
                        // even with an empty side; clear it so the native tick
                        // performs the cancellation this same day.
                        const unsigned char autoCancelBlocked = 0;
                        memcpy(reinterpret_cast<void*>(static_cast<uintptr_t>(war) + kWarAutoCancelBlockedOffset),
                               &autoCancelBlocked, sizeof(autoCancelBlocked));
                        if (g_log) {
                            g_log("cancel_wars_with_missing_countries: war 0x%08X emptied (removed %lu+%lu); auto-cancel flag cleared",
                                  static_cast<unsigned>(war),
                                  static_cast<unsigned long>(removedAttackers),
                                  static_cast<unsigned long>(removedDefenders));
                        }
                    }
                }
            }
        }
        node = next;
    }
}

void __stdcall WarTickCancelMissingCountriesThunk(uint32_t world) {
    if (g_cancelWarsWithMissingCountries) {
        __try {
            RemoveMissingWarParticipants(world);
        } __except (EXCEPTION_EXECUTE_HANDLER) {
            if (g_log) g_log("cancel_wars_with_missing_countries: guarded fault; native war tick continues");
        }
    }
    if (g_originalWarTick) g_originalWarTick(world);
}

// ---------------------------------------------------------------
// date trigger ([ScriptExtensions] date_trigger)
// ---------------------------------------------------------------
static bool ParseDateNumber(const char*& cursor, int* value) {
    if (!cursor || !value) return false;
    while (*cursor == ' ' || *cursor == '\t') ++cursor;
    if (*cursor < '0' || *cursor > '9') return false;
    int result = 0;
    while (*cursor >= '0' && *cursor <= '9') {
        result = result * 10 + (*cursor - '0');
        if (result > 100000) return false;
        ++cursor;
    }
    *value = result;
    return true;
}

// MM/DD/YYYY is the requested form (01/21/1837). YYYY.MM.DD, YYYY/MM/DD,
// YYYY-MM-DD and DD/MM/YYYY (when the first component is greater than 12) are
// accepted too. The game calendar has 365-day years and no leap years, so the
// day number is (year + 5000) * 365 + day-of-year - 1.
static bool ParseGameDate(const char* text, int32_t* outDay) {
    if (!text || !outDay) return false;
    const char* cursor = text;
    int first = 0, second = 0, third = 0;
    if (!ParseDateNumber(cursor, &first)) return false;
    if (*cursor != '/' && *cursor != '.' && *cursor != '-') return false;
    const char separator = *cursor++;
    if (!ParseDateNumber(cursor, &second)) return false;
    if (*cursor != separator) return false;
    ++cursor;
    if (!ParseDateNumber(cursor, &third)) return false;
    while (*cursor == ' ' || *cursor == '\t') ++cursor;
    if (*cursor != '\0') return false;

    int year = 0, month = 0, day = 0;
    if (first >= 1000) {          // YYYY.MM.DD / YYYY/MM/DD / YYYY-MM-DD
        year = first; month = second; day = third;
    } else if (first > 12) {      // DD/MM/YYYY
        day = first; month = second; year = third;
    } else {                      // MM/DD/YYYY (requested)
        month = first; day = second; year = third;
    }
    if (year < kYearBase || year > 20000) return false;
    if (month < 1 || month > 12) return false;
    static const int kMonthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (day < 1 || day > kMonthDays[month - 1]) return false;
    int dayOfYear = day - 1;
    for (int i = 0; i < month - 1; ++i) dayOfYear += kMonthDays[i];
    *outDay = (year - kYearBase) * static_cast<int32_t>(kDaysPerYear) + dayOfYear;
    return true;
}

// std::string of the engine: 16-byte buffer / pointer, size at +0x10,
// capacity at +0x14 (the has_country_flag value string lives at object+0x1C).
static const char* EngineString(const void* stringObject) {
    if (!stringObject) return "";
    const unsigned char* bytes = static_cast<const unsigned char*>(stringObject);
    uint32_t capacity = 0;
    memcpy(&capacity, bytes + 0x14, sizeof(capacity));
    if (capacity >= 0x10) {
        const char* pointer = nullptr;
        memcpy(&pointer, bytes, sizeof(pointer));
        return pointer ? pointer : "";
    }
    return reinterpret_cast<const char*>(bytes);
}

static void ConstructEngineString(void* dest, const char* text) {
    if (!dest) return;
    unsigned char* bytes = static_cast<unsigned char*>(dest);
    const char* source = text ? text : "";
    const size_t length = strlen(source);
    if (length <= 15) {
        memcpy(bytes, source, length + 1);
        const uint32_t size = static_cast<uint32_t>(length);
        memcpy(bytes + 0x10, &size, sizeof(size));
        const uint32_t capacity = 15;
        memcpy(bytes + 0x14, &capacity, sizeof(capacity));
        return;
    }

    char* buffer = nullptr;
    if (g_gameImageBase) {
        typedef void* (__cdecl* OperatorNewFn)(unsigned);
        OperatorNewFn operatorNew =
            reinterpret_cast<OperatorNewFn>(g_gameImageBase + kOperatorNewRva);
        buffer = static_cast<char*>(operatorNew(static_cast<unsigned>(length + 1)));
    }
    if (!buffer) {
        bytes[0] = '\0';
        const uint32_t zero = 0;
        memcpy(bytes + 0x10, &zero, sizeof(zero));
        const uint32_t capacity = 15;
        memcpy(bytes + 0x14, &capacity, sizeof(capacity));
        return;
    }
    memcpy(buffer, source, length + 1);
    memcpy(bytes, &buffer, sizeof(buffer));
    const uint32_t size = static_cast<uint32_t>(length);
    memcpy(bytes + 0x10, &size, sizeof(size));
    const uint32_t capacity = static_cast<uint32_t>(length);
    memcpy(bytes + 0x14, &capacity, sizeof(capacity));
}

// Evaluate slot 6: thiscall (this, scope), RET 4. The cached target day is
// stored in the free four bytes at +0x34 when the trigger is created.
static BOOL __fastcall EvaluateDateTrigger(void* self, void* edx, void* ctx) {
    (void)edx;
    (void)ctx;
    BOOL result = FALSE;
    __try {
        int32_t targetDay = -1;
        memcpy(&targetDay, static_cast<const char*>(self) + kFlagTriggerCacheOffset,
               sizeof(targetDay));
        if (targetDay >= 0 && g_worldGlobal) {
            uint32_t world = 0;
            memcpy(&world, reinterpret_cast<const void*>(g_worldGlobal), sizeof(world));
            if (world) {
                uint32_t hours = 0;
                memcpy(&hours, reinterpret_cast<const void*>(
                                   static_cast<uintptr_t>(world) + kWorldDateOffset),
                       sizeof(hours));
                const int32_t currentDay = static_cast<int32_t>(hours / kHoursPerDay);
                result = (currentDay >= targetDay) ? TRUE : FALSE;
            }
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        result = FALSE;
    }
    return result;
}

// Tooltip slot 10: thiscall (this, dest, arg1, negate, arg3), RET 0x10.
// Prints the script syntax, so a decision shows "date = 01/21/1837".
static void* __fastcall DateTriggerTooltip(void* self, void* edx, void* dest, void* arg1,
                                           int negate, int arg3) {
    (void)edx;
    (void)arg1;
    (void)arg3;
    __try {
        char text[192] = {};
        const char* value = EngineString(static_cast<const char*>(self) + kFlagTriggerStringOffset);
        _snprintf_s(text, sizeof(text), _TRUNCATE, "%s\xA7" "Ydate = %s\xA7" "W\n",
                    (negate & 0xFF) ? "NOT " : "", value);
        ConstructEngineString(dest, text);
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        ConstructEngineString(dest, "date\n");
    }
    return dest;
}

// Entry hook on TriggerBlock_AddChild. Every token except "date" goes to the
// next factory (the core's province-flags hook when FIX_PROVINCE_FLAGS=1, or
// the local trampoline). For "date" the native has_country_flag class is built
// so the parser stores the raw value text, then the object gets the private
// vtable and the cached target day.
static void __fastcall HookDateTriggerFactory(void* self, void* edx, void* ctx, int token) {
    if (!g_nextTriggerFactory) return;
    if (token != kTokenDate || !ctx ||
        _stricmp(static_cast<const char*>(ctx) + kTriggerKeyTextOffset, "date") != 0) {
        g_nextTriggerFactory(self, edx, ctx, token);
        return;
    }

    void** beginBefore = *reinterpret_cast<void***>(static_cast<char*>(self) + 0x8);
    void** endBefore = *reinterpret_cast<void***>(static_cast<char*>(self) + 0xC);
    const uintptr_t countBefore =
        (beginBefore && endBefore > beginBefore)
            ? static_cast<uintptr_t>(endBefore - beginBefore)
            : 0;
    g_nextTriggerFactory(self, edx, ctx, kTokenHasCountryFlag);
    __try {
        void** begin = *reinterpret_cast<void***>(static_cast<char*>(self) + 0x8);
        void** end = *reinterpret_cast<void***>(static_cast<char*>(self) + 0xC);
        if (!begin || !end || end <= begin ||
            static_cast<uintptr_t>(end - begin) != countBefore + 1) {
            if (g_log) g_log("date trigger: the trigger block did not accept the value");
            return;
        }
        void* object = end[-1];
        if (!object ||
            *reinterpret_cast<uint32_t*>(object) !=
                static_cast<uint32_t>(g_gameImageBase + kFlagTriggerVtRva)) {
            if (g_log) g_log("date trigger: unexpected trigger class after parsing (%p)", object);
            return;
        }
        const char* value =
            EngineString(static_cast<const char*>(object) + kFlagTriggerStringOffset);
        int32_t targetDay = -1;
        if (!ParseGameDate(value, &targetDay)) {
            if (InterlockedIncrement(&g_dateTriggerParseFailures) <= 20 && g_log) {
                g_log("date trigger: invalid date '%s' (use MM/DD/YYYY, e.g. 01/21/1837); "
                      "the condition is always false", value);
            }
        }
        memcpy(static_cast<char*>(object) + kFlagTriggerCacheOffset, &targetDay,
               sizeof(targetDay));
        *reinterpret_cast<void**>(object) = g_dateTriggerVtable;
        if (InterlockedIncrement(&g_dateTriggersCreated) <= 20 && g_log) {
            g_log("date trigger: created '%s' -> game day %ld", value,
                  static_cast<long>(targetDay));
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        if (g_log) g_log("date trigger: exception while replacing the trigger class");
    }
}

bool InstallDateTrigger(uintptr_t imageBase) {
    if (!imageBase) return false;
    g_gameImageBase = imageBase;

    void** sourceVtable = reinterpret_cast<void**>(imageBase + kFlagTriggerVtRva);
    if (static_cast<uint32_t>(reinterpret_cast<uintptr_t>(sourceVtable[6])) !=
            static_cast<uint32_t>(imageBase + kFlagTriggerEvaluateRva) ||
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(sourceVtable[10])) !=
            static_cast<uint32_t>(imageBase + kFlagTriggerTooltipRva)) {
        if (g_log) {
            g_log("date trigger: has_country_flag vtable mismatch (slot6=0x%08X slot10=0x%08X); "
                  "not installed",
                  static_cast<unsigned>(reinterpret_cast<uintptr_t>(sourceVtable[6])),
                  static_cast<unsigned>(reinterpret_cast<uintptr_t>(sourceVtable[10])));
        }
        return false;
    }

    g_dateTriggerVtableBuf[0] = sourceVtable[-1];
    for (int i = 0; i < 16; ++i) g_dateTriggerVtableBuf[1 + i] = sourceVtable[i];
    g_dateTriggerVtable = &g_dateTriggerVtableBuf[1];
    g_dateTriggerVtable[6] = (void*)&EvaluateDateTrigger;
    g_dateTriggerVtable[10] = (void*)&DateTriggerTooltip;

    unsigned char* entry = reinterpret_cast<unsigned char*>(imageBase + kTriggerFactoryRva);
    static const unsigned char nativePrologue[6] = {0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8};

    if (entry[0] == 0xE9) {
        int32_t displacement = 0;
        memcpy(&displacement, entry + 1, sizeof(displacement));
        g_nextTriggerFactory =
            reinterpret_cast<TriggerFactoryFn>(entry + 5 + displacement);
    } else if (memcmp(entry, nativePrologue, sizeof(nativePrologue)) == 0) {
        DWORD oldTrampolineProtection = 0;
        if (!VirtualProtect(g_dateFactoryTrampoline, sizeof(g_dateFactoryTrampoline),
                            PAGE_EXECUTE_READWRITE, &oldTrampolineProtection)) {
            return false;
        }
        memcpy(g_dateFactoryTrampoline, entry, sizeof(nativePrologue));
        g_dateFactoryTrampoline[6] = 0xE9;
        const int32_t backDisplacement = static_cast<int32_t>(
            reinterpret_cast<uintptr_t>(entry) + sizeof(nativePrologue) -
            (reinterpret_cast<uintptr_t>(g_dateFactoryTrampoline) + 11));
        memcpy(g_dateFactoryTrampoline + 7, &backDisplacement, sizeof(backDisplacement));
        FlushInstructionCache(GetCurrentProcess(), g_dateFactoryTrampoline,
                              sizeof(g_dateFactoryTrampoline));
        g_nextTriggerFactory =
            reinterpret_cast<TriggerFactoryFn>(&g_dateFactoryTrampoline[0]);
    } else {
        if (g_log) {
            g_log("date trigger: unexpected trigger factory prologue "
                  "(%02X %02X %02X %02X); not installed",
                  entry[0], entry[1], entry[2], entry[3]);
        }
        return false;
    }

    if (g_nextTriggerFactory == reinterpret_cast<TriggerFactoryFn>(&HookDateTriggerFactory)) {
        return false;
    }

    DWORD oldProtection = 0;
    if (!VirtualProtect(entry, 6, PAGE_EXECUTE_READWRITE, &oldProtection)) return false;
    unsigned char jump[6] = {0xE9, 0, 0, 0, 0, 0x90};
    const int32_t displacement = static_cast<int32_t>(
        reinterpret_cast<uintptr_t>(&HookDateTriggerFactory) -
        (reinterpret_cast<uintptr_t>(entry) + 5));
    memcpy(jump + 1, &displacement, sizeof(displacement));
    memcpy(entry, jump, sizeof(jump));
    DWORD ignored = 0;
    const BOOL restored = VirtualProtect(entry, 6, oldProtection, &ignored);
    const BOOL flushed = FlushInstructionCache(GetCurrentProcess(), entry, 6);
    if (g_log && (!restored || !flushed)) {
        g_log("date trigger: factory hook installed with protection_restored=%u cache_flushed=%u",
              static_cast<unsigned>(restored), static_cast<unsigned>(flushed));
    }
    return true;
}

// fire_on_time: walk a trigger tree looking for a leaf that depends on the
// calendar (our date trigger, CYearTrigger or CMonthTrigger). The candidate
// rebuild only needs to know whether the event can become true without waiting
// for the next month change; the daily scan evaluates the full trigger again.
static bool EventTriggerHasTimeCondition(uint32_t trigger, int depth, int* budget) {
    if (!trigger || !budget || *budget <= 0 || depth > 64) return false;
    --*budget;
    uint32_t vtable = 0;
    memcpy(&vtable, reinterpret_cast<const void*>(static_cast<uintptr_t>(trigger)), sizeof(vtable));
    if (g_dateTriggerVtable &&
        vtable == static_cast<uint32_t>(reinterpret_cast<uintptr_t>(g_dateTriggerVtable))) {
        return true;
    }
    if (vtable == static_cast<uint32_t>(g_gameImageBase + kVtYearTriggerRva) ||
        vtable == static_cast<uint32_t>(g_gameImageBase + kVtMonthTriggerRva)) {
        return true;
    }
    if (vtable != static_cast<uint32_t>(g_gameImageBase + kVtAndTriggerRva) &&
        vtable != static_cast<uint32_t>(g_gameImageBase + kVtOrTriggerRva) &&
        vtable != static_cast<uint32_t>(g_gameImageBase + kVtNotTriggerRva) &&
        vtable != static_cast<uint32_t>(g_gameImageBase + kVtContextTriggerRva)) {
        return false;
    }
    uint32_t begin = 0, end = 0;
    memcpy(&begin, reinterpret_cast<const void*>(static_cast<uintptr_t>(trigger) + 0x8), sizeof(begin));
    memcpy(&end, reinterpret_cast<const void*>(static_cast<uintptr_t>(trigger) + 0xC), sizeof(end));
    if (!begin || end <= begin) return false;
    uint32_t count = (end - begin) / 4;
    if (count > 1024) count = 1024;
    for (uint32_t i = 0; i < count; ++i) {
        uint32_t child = 0;
        memcpy(&child, reinterpret_cast<const void*>(static_cast<uintptr_t>(begin) + i * 4), sizeof(child));
        if (EventTriggerHasTimeCondition(child, depth + 1, budget)) return true;
    }
    return false;
}

void __stdcall MapRenderAffinityThunk(uint32_t renderContext) {
    if (!g_renderAffinityMask || !g_originalMapRender) {
        if (g_originalMapRender) g_originalMapRender(renderContext);
        return;
    }

    const DWORD_PTR previousMask = SetThreadAffinityMask(GetCurrentThread(), g_renderAffinityMask);
    if (!previousMask) {
        if (InterlockedCompareExchange(&g_renderAffinityFailureLogged, 1, 0) == 0 && g_log)
            g_log("Map render affinity: SetThreadAffinityMask failed; continuing with Windows scheduling");
        g_originalMapRender(renderContext);
        return;
    }

    // Restore the game thread's previous affinity even if the native render
    // function raises a structured exception.
    __try {
        g_originalMapRender(renderContext);
    } __finally {
        if (!SetThreadAffinityMask(GetCurrentThread(), previousMask) &&
            InterlockedCompareExchange(&g_renderAffinityFailureLogged, 1, 0) == 0 && g_log) {
            g_log("Map render affinity: could not restore the game thread affinity mask");
        }
    }
}

void __stdcall AiFrameAffinityThunk(void* queue) {
    if (!g_originalAiFrameUpdate) return;
    if (!g_aiAffinityMask) {
        g_originalAiFrameUpdate(queue);
        return;
    }

    const DWORD incomingError = GetLastError();
    const DWORD_PTR previousMask = SetThreadAffinityMask(GetCurrentThread(), g_aiAffinityMask);
    if (!previousMask) {
        const DWORD affinityError = GetLastError();
        if (InterlockedCompareExchange(&g_aiAffinityFailureLogged, 1, 0) == 0 && g_log) {
            g_log("AI_FrameUpdate affinity failed (%lu); continuing with Windows scheduling",
                  static_cast<unsigned long>(affinityError));
        }
        SetLastError(incomingError);
        g_originalAiFrameUpdate(queue);
        return;
    }

    SetLastError(incomingError);
    __try {
        g_originalAiFrameUpdate(queue);
    } __finally {
        const DWORD nativeError = GetLastError();
        SetThreadAffinityMask(GetCurrentThread(), previousMask);
        SetLastError(nativeError);
    }
}

// GREAT_NATIONS_COUNT is supplied by common/defines.lua, but changing that
// script value does not resize every compiled/UI consumer. Values above eight
// are supported only together with InstallGreatPowerDisplayLimit, which clamps
// the window loops to the vanilla country_gp0..7/sort_by_gp0..7 controls.
// Apply it to the active mod's define file for the next launch; refuse malformed
// files and replace atomically.
bool ApplyGreatNationsCountOverride(const char* modFolder, uint32_t value,
                                    LogFn logFunction) {
    if (!modFolder || !modFolder[0] || value > static_cast<uint32_t>(kMaxGreatNationsCount)) {
        if (logFunction) logFunction("Great nations count override ignored: expected 0..%d and a valid mod folder",
                                     kMaxGreatNationsCount);
        return false;
    }

    char path[MAX_PATH] = {};
    char tempPath[MAX_PATH] = {};
    char backupPath[MAX_PATH] = {};
    if (_snprintf_s(path, sizeof(path), _TRUNCATE, "%s\\common\\defines.lua", modFolder) < 0 ||
        _snprintf_s(tempPath, sizeof(tempPath), _TRUNCATE, "%s\\common\\defines.lua.v2dll.tmp", modFolder) < 0 ||
        _snprintf_s(backupPath, sizeof(backupPath), _TRUNCATE, "%s\\common\\defines.lua.v2dll.bak", modFolder) < 0) {
        if (logFunction) logFunction("Great nations count override skipped: defines.lua path too long");
        return false;
    }

    // Zero means the optimizer does not override GREAT_NATIONS_COUNT. If an earlier
    // run created our original-file backup, restore it so the mod returns to its own
    // pre-override settings instead of keeping a stale count in defines.lua.
    if (value == 0) {
        if (GetFileAttributesA(backupPath) == INVALID_FILE_ATTRIBUTES) return true;
        if (!CopyFileA(backupPath, tempPath, FALSE) ||
            !MoveFileExA(tempPath, path, MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH)) {
            const DWORD error = GetLastError();
            DeleteFileA(tempPath);
            if (logFunction) logFunction("Great nations count override restore failed (%lu)",
                                         static_cast<unsigned long>(error));
            return false;
        }
        if (logFunction) logFunction("Restored the mod's original common\\defines.lua; GREAT_NATIONS_COUNT override is off");
        return true;
    }

    HANDLE input = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE,
                               nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (input == INVALID_HANDLE_VALUE) {
        if (logFunction) logFunction("Great nations count override skipped: cannot open active mod common\\defines.lua (%lu)",
                                     static_cast<unsigned long>(GetLastError()));
        return false;
    }
    LARGE_INTEGER length = {};
    if (!GetFileSizeEx(input, &length) || length.QuadPart <= 0 || length.QuadPart > 1024 * 1024) {
        CloseHandle(input);
        if (logFunction) logFunction("Great nations count override skipped: defines.lua has an invalid size");
        return false;
    }
    const size_t size = static_cast<size_t>(length.QuadPart);
    char* source = static_cast<char*>(HeapAlloc(GetProcessHeap(), 0, size + 1));
    char* output = static_cast<char*>(HeapAlloc(GetProcessHeap(), 0, size + 32));
    if (!source || !output) {
        if (source) HeapFree(GetProcessHeap(), 0, source);
        if (output) HeapFree(GetProcessHeap(), 0, output);
        CloseHandle(input);
        return false;
    }
    DWORD bytesRead = 0;
    const BOOL readOk = ReadFile(input, source, static_cast<DWORD>(size), &bytesRead, nullptr);
    CloseHandle(input);
    if (!readOk || bytesRead != size) {
        HeapFree(GetProcessHeap(), 0, source);
        HeapFree(GetProcessHeap(), 0, output);
        if (logFunction) logFunction("Great nations count override skipped: failed reading defines.lua");
        return false;
    }
    source[size] = '\0';

    const char key[] = "GREAT_NATIONS_COUNT";
    char* match = nullptr;
    unsigned matches = 0;
    for (char* p = source; (p = strstr(p, key)) != nullptr; ++p) {
        char* lineStart = p;
        while (lineStart > source && lineStart[-1] != '\n' && lineStart[-1] != '\r') --lineStart;
        bool statementStart = true;
        for (char* q = lineStart; q < p; ++q) {
            if (*q != ' ' && *q != '\t') { statementStart = false; break; }
        }
        if (statementStart) { match = p; ++matches; }
    }
    if (matches != 1) {
        HeapFree(GetProcessHeap(), 0, source);
        HeapFree(GetProcessHeap(), 0, output);
        if (logFunction) logFunction("Great nations count override skipped: expected one GREAT_NATIONS_COUNT assignment, found %u", matches);
        return false;
    }

    char* cursor = match + sizeof(key) - 1;
    while (*cursor == ' ' || *cursor == '\t') ++cursor;
    if (*cursor++ != '=') {
        HeapFree(GetProcessHeap(), 0, source);
        HeapFree(GetProcessHeap(), 0, output);
        if (logFunction) logFunction("Great nations count override skipped: malformed GREAT_NATIONS_COUNT assignment");
        return false;
    }
    while (*cursor == ' ' || *cursor == '\t') ++cursor;
    char* numberEnd = cursor;
    while (*numberEnd >= '0' && *numberEnd <= '9') ++numberEnd;
    if (numberEnd == cursor || (*numberEnd != ',' && *numberEnd != ' ' && *numberEnd != '\t' &&
                                *numberEnd != '\r' && *numberEnd != '\n' && *numberEnd != '-' &&
                                *numberEnd != '\0')) {
        HeapFree(GetProcessHeap(), 0, source);
        HeapFree(GetProcessHeap(), 0, output);
        if (logFunction) logFunction("Great nations count override skipped: value is not a plain integer");
        return false;
    }

    char replacement[16] = {};
    const int replacementLength = _snprintf_s(replacement, sizeof(replacement), _TRUNCATE, "%lu",
                                               static_cast<unsigned long>(value));
    if (replacementLength <= 0) {
        HeapFree(GetProcessHeap(), 0, source);
        HeapFree(GetProcessHeap(), 0, output);
        return false;
    }
    const size_t prefixLength = static_cast<size_t>(cursor - source);
    const size_t suffixLength = size - static_cast<size_t>(numberEnd - source);
    memcpy(output, source, prefixLength);
    memcpy(output + prefixLength, replacement, static_cast<size_t>(replacementLength));
    memcpy(output + prefixLength + replacementLength, numberEnd, suffixLength);
    const size_t outputSize = prefixLength + static_cast<size_t>(replacementLength) + suffixLength;
    HeapFree(GetProcessHeap(), 0, source);

    // Keep the initial file so the user can restore it manually if desired.
    if (!CopyFileA(path, backupPath, TRUE) && GetLastError() != ERROR_FILE_EXISTS) {
        HeapFree(GetProcessHeap(), 0, output);
        if (logFunction) logFunction("Great nations count override skipped: could not create defines.lua.v2dll.bak (%lu)",
                                     static_cast<unsigned long>(GetLastError()));
        return false;
    }

    HANDLE temp = CreateFileA(tempPath, GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS,
                              FILE_ATTRIBUTE_NORMAL, nullptr);
    if (temp == INVALID_HANDLE_VALUE) {
        HeapFree(GetProcessHeap(), 0, output);
        if (logFunction) logFunction("Great nations count override skipped: cannot create temporary defines file (%lu)",
                                     static_cast<unsigned long>(GetLastError()));
        return false;
    }
    DWORD bytesWritten = 0;
    const BOOL writeOk = WriteFile(temp, output, static_cast<DWORD>(outputSize), &bytesWritten, nullptr);
    FlushFileBuffers(temp);
    CloseHandle(temp);
    HeapFree(GetProcessHeap(), 0, output);
    if (!writeOk || bytesWritten != outputSize ||
        !MoveFileExA(tempPath, path, MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH)) {
        const DWORD error = GetLastError();
        DeleteFileA(tempPath);
        if (logFunction) logFunction("Great nations count override failed to replace defines.lua (%lu)",
                                     static_cast<unsigned long>(error));
        return false;
    }
    if (logFunction) logFunction("Set GREAT_NATIONS_COUNT=%lu in active mod defines.lua; restart the game to apply it",
                                 static_cast<unsigned long>(value));
    return true;
}

// Reads every option from one ini file. Missing files are created with the
// built-in defaults and missing keys are appended, so the user can see every
// option. The caller decides which file is authoritative.
static void ReadTextOptionsFromIni(const char* iniPath, LogFn logFunction) {
    const DWORD attributes = GetFileAttributesA(iniPath);
    if (attributes == INVALID_FILE_ATTRIBUTES) {
        static const char defaults[] =
            "; Country Daily Optimizer options. Skipping empty countries can change simulation behavior.\r\n"
            "[CountryDailyOptimizer]\r\n"
            "local_config=1\r\n"
            "skip_empty_country_daily_update=0\r\n"
            "skip_empty_country_prepass=0\r\n"
            "cleanup_armies_of_landless_countries=0\r\n"
            "render_thread_core=0\r\n"
            "ai_thread_core=0\r\n"
            "prefetch_country_relations=0\r\n"
            "optimize_ai_target_lookup=0\r\n"
            "great_nations_count_override=0\r\n"
            "keep_puppets_when_great_powers=0\r\n"
            "block_puppets_from_great_powers=1\r\n"
            "prefetch_pop_reset_chain=0\r\n"
            "prefetch_pop_culture=0\r\n"
            "prefetch_pop_religion=0\r\n"
            "event_scan_interval_days=2\r\n"
            "disable_log=0\r\n"
            "disable_map_3d_scene_render=0\r\n"
            "\r\n[Multiplayer]\r\n"
            "state_checksum=1\r\n"
            "oos_notice=1\r\n"
            "fix_rng_resync=1\r\n"
            "sync_world_rng=1\r\n"
            "oos_test_button=1\r\n"
            "\r\n[Puppets]\r\n"
            "allow_justify_puppets=1\r\n"
            "allow_puppet_justify=1\r\n"
            "allow_puppet_add_wargoal=1\r\n"
            "allow_puppet_declare=1\r\n"
            "allow_declare_puppets=1\r\n"
            "no_puppet_war_autocancel=1\r\n"
            "allow_peace_with_puppets=1\r\n"
            "allow_puppet_peace=1\r\n"
            "allow_puppet_occupations=1\r\n"
            "allow_puppet_ai_diplomacy=1\r\n"
            "\r\n[Wars]\r\n"
            "cancel_wars_with_missing_countries=1\r\n"
            "\r\n[Events]\r\n"
            "fire_on_time=1\r\n"
            "\r\n[ScriptExtensions]\r\n"
            "date_trigger=1\r\n"
            "guard_missing_modifiers=1\r\n";
        HANDLE file = CreateFileA(iniPath, GENERIC_WRITE, FILE_SHARE_READ, nullptr, CREATE_NEW,
                                  FILE_ATTRIBUTE_NORMAL, nullptr);
        if (file != INVALID_HANDLE_VALUE) {
            DWORD written = 0;
            WriteFile(file, defaults, static_cast<DWORD>(sizeof(defaults) - 1), &written, nullptr);
            CloseHandle(file);
        }
    }

    const struct { const char* key; const char* value; } mpDefaults[] = {
        {"state_checksum", "1"}, {"oos_notice", "1"}, {"fix_rng_resync", "1"},
        {"sync_world_rng", "1"}, {"oos_test_button", "1"},
    };
    for (const auto& option : mpDefaults) {
        char value[16] = {};
        if (GetPrivateProfileStringA("Multiplayer", option.key, "__missing__", value,
                                     sizeof(value), iniPath) == 0 || strcmp(value, "__missing__") == 0) {
            WritePrivateProfileStringA("Multiplayer", option.key, option.value, iniPath);
        }
    }

    const struct { const char* key; const char* value; } puppetDefaults[] = {
        {"allow_justify_puppets", "1"}, {"allow_puppet_justify", "1"},
        {"allow_puppet_add_wargoal", "1"}, {"allow_puppet_declare", "1"},
        {"allow_declare_puppets", "1"}, {"no_puppet_war_autocancel", "1"},
        {"allow_peace_with_puppets", "1"}, {"allow_puppet_peace", "1"},
        {"allow_puppet_occupations", "1"}, {"allow_puppet_ai_diplomacy", "1"},
    };
    for (const auto& option : puppetDefaults) {
        char value[16] = {};
        if (GetPrivateProfileStringA("Puppets", option.key, "__missing__", value,
                                     sizeof(value), iniPath) == 0 || strcmp(value, "__missing__") == 0) {
            WritePrivateProfileStringA("Puppets", option.key, option.value, iniPath);
        }
    }

    const struct { const char* key; const char* value; } warDefaults[] = {
        {"cancel_wars_with_missing_countries", "1"},
    };
    for (const auto& option : warDefaults) {
        char value[16] = {};
        if (GetPrivateProfileStringA("Wars", option.key, "__missing__", value,
                                     sizeof(value), iniPath) == 0 || strcmp(value, "__missing__") == 0) {
            WritePrivateProfileStringA("Wars", option.key, option.value, iniPath);
        }
    }

    const struct { const char* key; const char* value; } eventDefaults[] = {
        {"fire_on_time", "1"},
    };
    for (const auto& option : eventDefaults) {
        char value[16] = {};
        if (GetPrivateProfileStringA("Events", option.key, "__missing__", value,
                                     sizeof(value), iniPath) == 0 || strcmp(value, "__missing__") == 0) {
            WritePrivateProfileStringA("Events", option.key, option.value, iniPath);
        }
    }

    const struct { const char* key; const char* value; } scriptDefaults[] = {
        {"date_trigger", "1"}, {"guard_missing_modifiers", "1"},
    };
    for (const auto& option : scriptDefaults) {
        char value[16] = {};
        if (GetPrivateProfileStringA("ScriptExtensions", option.key, "__missing__", value,
                                     sizeof(value), iniPath) == 0 || strcmp(value, "__missing__") == 0) {
            WritePrivateProfileStringA("ScriptExtensions", option.key, option.value, iniPath);
        }
    }

    char optionValue[32] = {};
    if (GetPrivateProfileStringA("CountryDailyOptimizer", "local_config",
                                  "__missing__", optionValue, sizeof(optionValue), iniPath) == 0 ||
        strcmp(optionValue, "__missing__") == 0) {
        WritePrivateProfileStringA("CountryDailyOptimizer", "local_config", "1", iniPath);
    }
    if (GetPrivateProfileStringA("CountryDailyOptimizer", "disable_map_3d_scene_render",
                                  "__missing__", optionValue, sizeof(optionValue), iniPath) == 0 ||
        strcmp(optionValue, "__missing__") == 0) {
        WritePrivateProfileStringA("CountryDailyOptimizer", "disable_map_3d_scene_render", "0", iniPath);
    }

    g_skipEmptyDailyUpdate = GetPrivateProfileIntA("CountryDailyOptimizer",
        "skip_empty_country_daily_update", 0, iniPath) == 1;
    g_skipEmptyPrePass = GetPrivateProfileIntA("CountryDailyOptimizer",
        "skip_empty_country_prepass", 0, iniPath) == 1;
    if (GetPrivateProfileStringA("CountryDailyOptimizer", "cleanup_armies_of_landless_countries",
                                  "__missing__", optionValue, sizeof(optionValue), iniPath) == 0 ||
        strcmp(optionValue, "__missing__") == 0) {
        WritePrivateProfileStringA("CountryDailyOptimizer", "cleanup_armies_of_landless_countries", "0", iniPath);
    }
    if (GetPrivateProfileStringA("CountryDailyOptimizer", "render_thread_core",
                                  "__missing__", optionValue, sizeof(optionValue), iniPath) == 0 ||
        strcmp(optionValue, "__missing__") == 0) {
        WritePrivateProfileStringA("CountryDailyOptimizer", "render_thread_core", "0", iniPath);
    }
    if (GetPrivateProfileStringA("CountryDailyOptimizer", "ai_thread_core",
                                  "__missing__", optionValue, sizeof(optionValue), iniPath) == 0 ||
        strcmp(optionValue, "__missing__") == 0) {
        WritePrivateProfileStringA("CountryDailyOptimizer", "ai_thread_core", "0", iniPath);
    }
    if (GetPrivateProfileStringA("CountryDailyOptimizer", "prefetch_country_relations",
                                  "__missing__", optionValue, sizeof(optionValue), iniPath) == 0 ||
        strcmp(optionValue, "__missing__") == 0) {
        WritePrivateProfileStringA("CountryDailyOptimizer", "prefetch_country_relations", "0", iniPath);
    }
    if (GetPrivateProfileStringA("CountryDailyOptimizer", "optimize_ai_target_lookup",
                                  "__missing__", optionValue, sizeof(optionValue), iniPath) == 0 ||
        strcmp(optionValue, "__missing__") == 0) {
        WritePrivateProfileStringA("CountryDailyOptimizer", "optimize_ai_target_lookup", "0", iniPath);
    }
    if (GetPrivateProfileStringA("CountryDailyOptimizer", "great_nations_count_override",
                                  "__missing__", optionValue, sizeof(optionValue), iniPath) == 0 ||
        strcmp(optionValue, "__missing__") == 0) {
        WritePrivateProfileStringA("CountryDailyOptimizer", "great_nations_count_override", "0", iniPath);
    }
    if (GetPrivateProfileStringA("CountryDailyOptimizer", "keep_puppets_when_great_powers",
                                  "__missing__", optionValue, sizeof(optionValue), iniPath) == 0 ||
        strcmp(optionValue, "__missing__") == 0) {
        WritePrivateProfileStringA("CountryDailyOptimizer", "keep_puppets_when_great_powers", "0", iniPath);
    }
    if (GetPrivateProfileStringA("CountryDailyOptimizer", "block_puppets_from_great_powers",
                                  "__missing__", optionValue, sizeof(optionValue), iniPath) == 0 ||
        strcmp(optionValue, "__missing__") == 0) {
        WritePrivateProfileStringA("CountryDailyOptimizer", "block_puppets_from_great_powers", "1", iniPath);
    }
    if (GetPrivateProfileStringA("CountryDailyOptimizer", "event_scan_interval_days",
                                  "__missing__", optionValue, sizeof(optionValue), iniPath) == 0 ||
        strcmp(optionValue, "__missing__") == 0) {
        WritePrivateProfileStringA("CountryDailyOptimizer", "event_scan_interval_days", "2", iniPath);
    }
    if (GetPrivateProfileStringA("CountryDailyOptimizer", "prefetch_pop_reset_chain",
                                  "__missing__", optionValue, sizeof(optionValue), iniPath) == 0 ||
        strcmp(optionValue, "__missing__") == 0) {
        WritePrivateProfileStringA("CountryDailyOptimizer", "prefetch_pop_reset_chain", "0", iniPath);
    }
    if (GetPrivateProfileStringA("CountryDailyOptimizer", "prefetch_pop_culture",
                                  "__missing__", optionValue, sizeof(optionValue), iniPath) == 0 ||
        strcmp(optionValue, "__missing__") == 0) {
        WritePrivateProfileStringA("CountryDailyOptimizer", "prefetch_pop_culture", "0", iniPath);
    }
    if (GetPrivateProfileStringA("CountryDailyOptimizer", "prefetch_pop_religion",
                                  "__missing__", optionValue, sizeof(optionValue), iniPath) == 0 ||
        strcmp(optionValue, "__missing__") == 0) {
        WritePrivateProfileStringA("CountryDailyOptimizer", "prefetch_pop_religion", "0", iniPath);
    }
    if (GetPrivateProfileStringA("CountryDailyOptimizer", "disable_log",
                                  "__missing__", optionValue, sizeof(optionValue), iniPath) == 0 ||
        strcmp(optionValue, "__missing__") == 0) {
        WritePrivateProfileStringA("CountryDailyOptimizer", "disable_log", "0", iniPath);
    }
    g_disableMap3DSceneRender = GetPrivateProfileIntA("CountryDailyOptimizer",
        "disable_map_3d_scene_render", 0, iniPath) == 1;
    g_cleanupArmiesOfLandlessCountries = GetPrivateProfileIntA("CountryDailyOptimizer",
        "cleanup_armies_of_landless_countries", 0, iniPath) == 1;
    g_renderThreadCore = static_cast<uint32_t>(GetPrivateProfileIntA(
        "CountryDailyOptimizer", "render_thread_core", 0, iniPath));
    g_aiThreadCore = static_cast<uint32_t>(GetPrivateProfileIntA(
        "CountryDailyOptimizer", "ai_thread_core", 0, iniPath));
    if (g_aiThreadCore > sizeof(DWORD_PTR) * 8) g_aiThreadCore = 0;
    g_prefetchCountryRelationsFromIni = GetPrivateProfileIntA(
        "CountryDailyOptimizer", "prefetch_country_relations", 0, iniPath) == 1;
    g_optimizeAiTargetLookup = GetPrivateProfileIntA(
        "CountryDailyOptimizer", "optimize_ai_target_lookup", 0, iniPath) == 1;
    const int configuredGreatNationsCount = GetPrivateProfileIntA(
        "CountryDailyOptimizer", "great_nations_count_override", 0, iniPath);
    if (configuredGreatNationsCount > kMaxGreatNationsCount) {
        char maxValue[16] = {};
        _snprintf_s(maxValue, sizeof(maxValue), _TRUNCATE, "%d", kMaxGreatNationsCount);
        g_greatNationsCountOverride = static_cast<uint32_t>(kMaxGreatNationsCount);
        WritePrivateProfileStringA("CountryDailyOptimizer", "great_nations_count_override", maxValue, iniPath);
        if (logFunction) logFunction("Great nations count override %d is above the supported maximum: resetting the INI value to %d",
                                     configuredGreatNationsCount, kMaxGreatNationsCount);
    } else if (configuredGreatNationsCount < 0) {
        g_greatNationsCountOverride = 0;
        WritePrivateProfileStringA("CountryDailyOptimizer", "great_nations_count_override", "0", iniPath);
        if (logFunction) logFunction("Negative great nations count override ignored; reset to 0");
    } else {
        g_greatNationsCountOverride = static_cast<uint32_t>(configuredGreatNationsCount);
    }
    g_keepPuppetsWhenGreatPowers = GetPrivateProfileIntA(
        "CountryDailyOptimizer", "keep_puppets_when_great_powers", 0, iniPath) == 1;
    g_blockPuppetsFromGreatPowers = GetPrivateProfileIntA(
        "CountryDailyOptimizer", "block_puppets_from_great_powers", 1, iniPath) == 1;
    g_eventScanIntervalDays = static_cast<uint32_t>(GetPrivateProfileIntA(
        "CountryDailyOptimizer", "event_scan_interval_days", 2, iniPath));
    if (g_eventScanIntervalDays != 4) g_eventScanIntervalDays = 2;
    g_prefetchPopResetChain = GetPrivateProfileIntA(
        "CountryDailyOptimizer", "prefetch_pop_reset_chain", 0, iniPath) == 1;
    g_prefetchPopCulture = GetPrivateProfileIntA(
        "CountryDailyOptimizer", "prefetch_pop_culture", 0, iniPath) == 1;
    g_prefetchPopReligion = GetPrivateProfileIntA(
        "CountryDailyOptimizer", "prefetch_pop_religion", 0, iniPath) == 1;
    g_disableLogging = GetPrivateProfileIntA("CountryDailyOptimizer", "disable_log", 0, iniPath) == 1;
    g_mpStateChecksum = GetPrivateProfileIntA("Multiplayer", "state_checksum", 1, iniPath) == 1;
    g_mpOosNotice = GetPrivateProfileIntA("Multiplayer", "oos_notice", 1, iniPath) == 1;
    g_mpFixRngResync = GetPrivateProfileIntA("Multiplayer", "fix_rng_resync", 1, iniPath) == 1;
    g_mpSyncWorldRng = GetPrivateProfileIntA("Multiplayer", "sync_world_rng", 1, iniPath) == 1;
    g_mpOosTestButton = GetPrivateProfileIntA("Multiplayer", "oos_test_button", 1, iniPath) == 1;
    g_allowJustifyPuppets = GetPrivateProfileIntA("Puppets", "allow_justify_puppets", 1, iniPath) == 1;
    g_allowPuppetJustify = GetPrivateProfileIntA("Puppets", "allow_puppet_justify", 1, iniPath) == 1;
    g_allowPuppetAddWargoal = GetPrivateProfileIntA("Puppets", "allow_puppet_add_wargoal", 1, iniPath) == 1;
    g_allowPuppetDeclare = GetPrivateProfileIntA("Puppets", "allow_puppet_declare", 1, iniPath) == 1;
    g_allowDeclarePuppets = GetPrivateProfileIntA("Puppets", "allow_declare_puppets", 1, iniPath) == 1;
    g_noPuppetWarAutocancel = GetPrivateProfileIntA("Puppets", "no_puppet_war_autocancel", 1, iniPath) == 1;
    g_allowPeaceWithPuppets = GetPrivateProfileIntA("Puppets", "allow_peace_with_puppets", 1, iniPath) == 1;
    g_allowPuppetPeace = GetPrivateProfileIntA("Puppets", "allow_puppet_peace", 1, iniPath) == 1;
    g_allowPuppetOccupations = GetPrivateProfileIntA("Puppets", "allow_puppet_occupations", 1, iniPath) == 1;
    g_allowPuppetAiDiplomacy = GetPrivateProfileIntA("Puppets", "allow_puppet_ai_diplomacy", 1, iniPath) == 1;
    g_cancelWarsWithMissingCountries = GetPrivateProfileIntA(
        "Wars", "cancel_wars_with_missing_countries", 1, iniPath) == 1;
    g_dateTrigger = GetPrivateProfileIntA(
        "ScriptExtensions", "date_trigger", 1, iniPath) == 1;
    g_fireOnTime = GetPrivateProfileIntA("Events", "fire_on_time", 1, iniPath) == 1;
    g_guardMissingModifiers = GetPrivateProfileIntA(
        "ScriptExtensions", "guard_missing_modifiers", 1, iniPath) == 1;
}

static bool LoadTextOptions(const char* modFolder, LogFn logFunction) {
    char modIniPath[MAX_PATH] = {};
    char iniPath[MAX_PATH] = {};
    char logPath[MAX_PATH] = {};
    if (!modFolder || !modFolder[0] ||
        _snprintf_s(modIniPath, sizeof(modIniPath), _TRUNCATE,
                    "%s\\v2dll_country_daily_optimizer.ini", modFolder) < 0) {
        if (logFunction) logFunction("Country optimizer options unavailable: invalid or too-long active mod folder");
        return false;
    }

    const DWORD modIniAttributes = GetFileAttributesA(modIniPath);
    const bool hasModIni = modIniAttributes != INVALID_FILE_ATTRIBUTES &&
                           (modIniAttributes & FILE_ATTRIBUTE_DIRECTORY) == 0;
    // The API exposes the active mod folder. Use its INI only when it already
    // exists; otherwise keep the shared/default configuration as the fallback.
    g_localConfig = hasModIni
        ? GetPrivateProfileIntA("CountryDailyOptimizer", "local_config", 1, modIniPath) == 1
        : true;
    const char* selectedFolder = (hasModIni && g_localConfig) ? modFolder : nullptr;
    if (selectedFolder) {
        if (_snprintf_s(iniPath, sizeof(iniPath), _TRUNCATE,
                        "%s\\v2dll_country_daily_optimizer.ini", selectedFolder) < 0 ||
            _snprintf_s(logPath, sizeof(logPath), _TRUNCATE,
                        "%s\\v2dll_country_daily_optimizer.log", selectedFolder) < 0) {
            if (logFunction) logFunction("Country optimizer options unavailable: mod config path is too long");
            return false;
        }
    } else {
        char gamePath[MAX_PATH] = {};
        const DWORD gamePathLength = GetModuleFileNameA(nullptr, gamePath, MAX_PATH);
        if (gamePathLength == 0 || gamePathLength >= MAX_PATH) {
            if (logFunction) logFunction("Country optimizer options unavailable: cannot locate game folder for default config");
            return false;
        }
        char* separator = strrchr(gamePath, '\\');
        if (!separator) separator = strrchr(gamePath, '/');
        if (!separator) {
            if (logFunction) logFunction("Country optimizer options unavailable: invalid game executable path");
            return false;
        }
        *separator = '\0';
        if (_snprintf_s(iniPath, sizeof(iniPath), _TRUNCATE,
                        "%s\\v2dll_country_daily_optimizer.ini", gamePath) < 0 ||
            _snprintf_s(logPath, sizeof(logPath), _TRUNCATE,
                        "%s\\v2dll_country_daily_optimizer.log", gamePath) < 0) {
            if (logFunction) logFunction("Country optimizer options unavailable: default config path is too long");
            return false;
        }
    }
    ReadTextOptionsFromIni(iniPath, logFunction);
    if (g_disableLogging) {
        logFunction = nullptr;
        g_log = nullptr;
    } else {
        g_skipLogFile = CreateFileA(logPath, FILE_APPEND_DATA,
                                    FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, OPEN_ALWAYS,
                                    FILE_ATTRIBUTE_NORMAL, nullptr);
    }
    ApplyGreatNationsCountOverride(modFolder, g_greatNationsCountOverride, logFunction);
    if (logFunction) {
        logFunction("Country optimizer options: skip_empty_country_daily_update=%u skip_empty_country_prepass=%u cleanup_armies_of_landless_countries=%u render_thread_core=%lu ai_thread_core=%lu prefetch_country_relations=%u optimize_ai_target_lookup=%u great_nations_count_override=%lu keep_puppets_when_great_powers=%u block_puppets_from_great_powers=%u prefetch_pop_reset_chain=%u prefetch_pop_culture=%u prefetch_pop_religion=%u event_scan_interval_days=%lu disable_map_3d_scene_render=%u cancel_wars_with_missing_countries=%u date_trigger=%u fire_on_time=%u guard_missing_modifiers=%u; config=%s log=%s",
                    static_cast<unsigned>(g_skipEmptyDailyUpdate),
                    static_cast<unsigned>(g_skipEmptyPrePass),
                    static_cast<unsigned>(g_cleanupArmiesOfLandlessCountries),
                    static_cast<unsigned long>(g_renderThreadCore),
                    static_cast<unsigned long>(g_aiThreadCore),
                    static_cast<unsigned>(g_prefetchCountryRelationsFromIni),
                    static_cast<unsigned>(g_optimizeAiTargetLookup),
                    static_cast<unsigned long>(g_greatNationsCountOverride),
                    static_cast<unsigned>(g_keepPuppetsWhenGreatPowers),
                    static_cast<unsigned>(g_blockPuppetsFromGreatPowers),
                    static_cast<unsigned>(g_prefetchPopResetChain),
                    static_cast<unsigned>(g_prefetchPopCulture),
                    static_cast<unsigned>(g_prefetchPopReligion),
                    static_cast<unsigned long>(g_eventScanIntervalDays),
                    static_cast<unsigned>(g_disableMap3DSceneRender),
                    static_cast<unsigned>(g_cancelWarsWithMissingCountries),
                    static_cast<unsigned>(g_dateTrigger),
                    static_cast<unsigned>(g_fireOnTime),
                    static_cast<unsigned>(g_guardMissingModifiers), iniPath, logPath);
    }
    if (g_skipLogFile != INVALID_HANDLE_VALUE && (g_skipEmptyDailyUpdate || g_skipEmptyPrePass)) {
        WriteSkipLogLine("\r\n--- Country optimizer session: empty-country skipping enabled; simulation behavior may change ---\r\n");
    }
    return true;
}

// FUN_0095EBF0 resets per-pop accumulators inside FUN_004B9C60's linked-pop
// walk. The reset-chain, culture, and religion cache hints are independently
// controlled; none changes game data or traversal order.
void __cdecl PrefetchNextPopResetData(uint32_t pop) {
    if (!pop) return;
    __try {
        uint32_t next = 0;
        memcpy(&next, reinterpret_cast<const void*>(static_cast<uintptr_t>(pop) + 0x27C), 4);
        if (!next) return;
        const char* object = reinterpret_cast<const char*>(static_cast<uintptr_t>(next));
        if (g_prefetchPopResetChain) {
            _mm_prefetch(object, _MM_HINT_T0);
            _mm_prefetch(object + 0x140, _MM_HINT_T0);
            _mm_prefetch(object + 0x1C0, _MM_HINT_T0);
            _mm_prefetch(object + 0x200, _MM_HINT_T0);
        }
        if (g_prefetchPopCulture) {
            uint32_t culture = 0;
            memcpy(&culture, object + 0x6C, 4);
            _mm_prefetch(object + 0x6C, _MM_HINT_T0);
            if (culture) _mm_prefetch(reinterpret_cast<const char*>(static_cast<uintptr_t>(culture)), _MM_HINT_T0);
        }
        if (g_prefetchPopReligion) {
            uint32_t religion = 0;
            memcpy(&religion, object + 0x70, 4);
            _mm_prefetch(object + 0x70, _MM_HINT_T0);
            if (religion) _mm_prefetch(reinterpret_cast<const char*>(static_cast<uintptr_t>(religion)), _MM_HINT_T0);
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        // Continue the native loop if the speculative read faults.
    }
}

// AI_TargetScan repeatedly asks whether each candidate ID appears in the
// owner's +0x4A4 linked list. Snapshot that read-only list once per invocation
// into a 683-bit set; unsafe snapshots fall back to the native search.
int AiTargetMembershipLookup(uint32_t owner, uint32_t targetIndex) {
    AiTargetLookupCache& cache = g_aiTargetLookupCache;
    if (!owner || targetIndex >= kRelationCount || cache.disabled) return -1;
    if (cache.valid && cache.owner == owner) {
        return (cache.ids[targetIndex >> 5] & (1u << (targetIndex & 31))) != 0 ? 1 : 0;
    }

    uint32_t ids[(kRelationCount + 31) / 32] = {};
    __try {
        uint32_t node = 0;
        memcpy(&node, reinterpret_cast<const void*>(static_cast<uintptr_t>(owner) + 0x4A4), 4);
        uint32_t visited = 0;
        while (node) {
            // A corrupt/cyclic list falls back to the original native scan.
            if (visited++ >= 4096) {
                cache.disabled = true;
                return -1;
            }
            uint32_t item = 0, next = 0, id = 0;
            memcpy(&item, reinterpret_cast<const void*>(static_cast<uintptr_t>(node)), 4);
            memcpy(&next, reinterpret_cast<const void*>(static_cast<uintptr_t>(node) + 8), 4);
            if (!item) {
                cache.disabled = true;
                return -1;
            }
            memcpy(&id, reinterpret_cast<const void*>(static_cast<uintptr_t>(item) + 0x0C), 4);
            if (id < kRelationCount) ids[id >> 5] |= 1u << (id & 31);
            node = next;
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        cache.disabled = true;
        return -1;
    }

    cache.owner = owner;
    memcpy(cache.ids, ids, sizeof(ids));
    cache.valid = true;
    return (cache.ids[targetIndex >> 5] & (1u << (targetIndex & 31))) != 0 ? 1 : 0;
}

void __fastcall AiTargetScanLookupThunk(void* ai) {
    if (!g_originalAiTargetScan) return;
    g_aiTargetLookupCache.owner = 0;
    g_aiTargetLookupCache.valid = false;
    g_aiTargetLookupCache.disabled = false;
    g_originalAiTargetScan(ai);
}

void PrefetchCountryRelations(uint32_t country) {
    if (!country) return;
    __try {
        const uintptr_t slots = static_cast<uintptr_t>(country) + kRelationArrayOffset;
        for (uint32_t i = 0; i < kRelationCount; ++i) {
            uint32_t relation = 0;
            memcpy(&relation, reinterpret_cast<const void*>(slots + i * sizeof(uint32_t)),
                   sizeof(relation));
            if (!relation) continue;
            const char* object = reinterpret_cast<const char*>(static_cast<uintptr_t>(relation));
            _mm_prefetch(object + 0x20, _MM_HINT_T0); // fields +0x20..+0x50
            _mm_prefetch(object + 0x50, _MM_HINT_T0);
            _mm_prefetch(object + 0x70, _MM_HINT_T0); // Country_Recalculate
            _mm_prefetch(object + 0xA8, _MM_HINT_T0); // CountryRelation_DailyPurge
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        // A failed speculative read must never prevent the native function.
    }
}

// Country_PrePass reads relation fields +0x2C and +0x30. Avoid warming the
// other relation lines used by Country_Recalculate and DailyPurge here; those
// routines run under the separate Country_DailyUpdate hook below.
void PrefetchCountryPrePassRelations(uint32_t country) {
    if (!country) return;
    __try {
        const uintptr_t slots = static_cast<uintptr_t>(country) + kRelationArrayOffset;
        for (uint32_t i = 0; i < kRelationCount; ++i) {
            uint32_t relation = 0;
            memcpy(&relation, reinterpret_cast<const void*>(slots + i * sizeof(uint32_t)),
                   sizeof(relation));
            if (!relation) continue;
            const char* object = reinterpret_cast<const char*>(static_cast<uintptr_t>(relation));
            _mm_prefetch(object + 0x2C, _MM_HINT_T0);
            _mm_prefetch(object + 0x30, _MM_HINT_T0);
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        // Keep the native calculation authoritative if speculative reads fail.
    }
}

void PrefetchMarketCapacityRelations(uint32_t country) {
    if (!country || !g_worldGlobal) return;
    __try {
        uint32_t world = 0;
        memcpy(&world, reinterpret_cast<const void*>(g_worldGlobal), sizeof(world));
        if (!world) return;

        uint32_t begin = 0, end = 0;
        memcpy(&begin, reinterpret_cast<const void*>(static_cast<uintptr_t>(world) + 0x0ADC), sizeof(begin));
        memcpy(&end, reinterpret_cast<const void*>(static_cast<uintptr_t>(world) + 0x0AE0), sizeof(end));
        if (end < begin || ((end - begin) & 3u)) return;
        const uint32_t count = (end - begin) / sizeof(uint32_t);
        if (count > kRelationCount) return;

        const uintptr_t relations = static_cast<uintptr_t>(country) + kRelationArrayOffset;
        for (uint32_t i = 0; i < count; ++i) {
            uint32_t other = 0, tag = 0, relation = 0;
            memcpy(&other, reinterpret_cast<const void*>(static_cast<uintptr_t>(begin) + i * 4), 4);
            if (!other) continue;
            memcpy(&tag, reinterpret_cast<const void*>(static_cast<uintptr_t>(other) + 0x20), 4);
            if (tag >= kRelationCount) continue;
            memcpy(&relation, reinterpret_cast<const void*>(relations + tag * 4), 4);
            if (relation) {
                _mm_prefetch(reinterpret_cast<const char*>(static_cast<uintptr_t>(relation) + 0x34),
                             _MM_HINT_T0);
            }
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        // The market's native calculation still runs if the speculative walk fails.
    }
}

// FUN_0052FCD0 reads otherCountry+0x1580[selfIndex] while walking the living
// country vector. Prime those exact 8-byte entries without copying their values.
void PrefetchCountryPairEntries(uint32_t country) {
    if (!country || !g_worldGlobal) return;
    __try {
        uint32_t selfIndex = 0, world = 0;
        memcpy(&selfIndex, reinterpret_cast<const void*>(static_cast<uintptr_t>(country) + 0x20), 4);
        if (selfIndex >= kRelationCount) return;
        memcpy(&world, reinterpret_cast<const void*>(g_worldGlobal), 4);
        if (!world) return;

        uint32_t begin = 0, end = 0;
        memcpy(&begin, reinterpret_cast<const void*>(static_cast<uintptr_t>(world) + 0x0ADC), 4);
        memcpy(&end, reinterpret_cast<const void*>(static_cast<uintptr_t>(world) + 0x0AE0), 4);
        if (end < begin || ((end - begin) & 3u)) return;
        const uint32_t count = (end - begin) / sizeof(uint32_t);
        if (count > kRelationCount) return;

        for (uint32_t i = 0; i < count; ++i) {
            uint32_t other = 0, pairArray = 0;
            memcpy(&other, reinterpret_cast<const void*>(static_cast<uintptr_t>(begin) + i * 4), 4);
            if (!other) continue;
            uint32_t otherIndex = 0;
            memcpy(&otherIndex, reinterpret_cast<const void*>(static_cast<uintptr_t>(other) + 0x20), 4);
            if (otherIndex == selfIndex) continue;
            memcpy(&pairArray, reinterpret_cast<const void*>(static_cast<uintptr_t>(other) + 0x1580), 4);
            if (pairArray) {
                const uintptr_t entry = static_cast<uintptr_t>(pairArray) +
                                        static_cast<uintptr_t>(selfIndex) * 8;
                _mm_prefetch(reinterpret_cast<const char*>(entry), _MM_HINT_T0);
            }
        }
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        // Do not let a speculative prefetch walk block the native calculation.
    }
}

void __stdcall CountryPrePassPrefetchThunk(uint32_t country) {
    if (g_skipEmptyPrePass && HasNoProvinceEntries(country)) {
        LogSkippedCountry("Country_PrePass", country, g_loggedPrePassCountry, &g_skippedPrePassCount);
        return;
    }
    if (g_prefetchEnabled && ShouldPrefetchCountry(country)) PrefetchCountryPrePassRelations(country);
    g_originalPrePass(country);
}

void __stdcall MarketCapacityPrefetchThunk(uint32_t country, uint32_t output) {
    if (g_prefetchEnabled) PrefetchMarketCapacityRelations(country);
    g_originalMarketCapacity(country, output);
}

void __stdcall CountryPairPrefetchThunk(uint32_t country, uint32_t reset) {
    if (g_prefetchEnabled) PrefetchCountryPairEntries(country);
    g_originalCountryPairUpdate(country, reset);
}

uint64_t ToMicroseconds(uint64_t ticks) {
    return static_cast<uint64_t>(
        (static_cast<double>(ticks) * 1000000.0) /
        static_cast<double>(g_frequency.QuadPart));
}

void __stdcall CountryDailyUpdateProfileThunk(uint32_t country, uint32_t context) {
    if (g_skipEmptyDailyUpdate && HasNoProvinceEntries(country)) {
        LogSkippedCountry("Country_DailyUpdate", country, g_loggedDailyCountry, &g_skippedDailyCount);
        return;
    }
    if (!g_profileEnabled) {
        if (g_prefetchEnabled && ShouldPrefetchCountry(country)) PrefetchCountryRelations(country);
        g_original(country, context);
        return;
    }

    LARGE_INTEGER before = {};
    LARGE_INTEGER after = {};

    DWORD savedError = GetLastError();
    const BOOL haveStart = QueryPerformanceCounter(&before);
    SetLastError(savedError);

    if (g_prefetchEnabled && ShouldPrefetchCountry(country)) PrefetchCountryRelations(country);
    g_original(country, context);

    // Preserve the game's last-error value around profiler-only Win32 calls.
    savedError = GetLastError();
    const BOOL haveEnd = QueryPerformanceCounter(&after);
    SetLastError(savedError);

    if (!haveStart || !haveEnd || after.QuadPart < before.QuadPart) return;

    const uint64_t elapsed = static_cast<uint64_t>(after.QuadPart - before.QuadPart);
    uint64_t reportTotal = 0;
    uint64_t reportMin = 0;
    uint64_t reportMax = 0;
    uint64_t reportWindow = 0;
    bool report = false;

    AcquireSRWLockExclusive(&g_statsLock);
    ++g_samples;
    g_totalTicks += elapsed;
    if (elapsed < g_minTicks) g_minTicks = elapsed;
    if (elapsed > g_maxTicks) g_maxTicks = elapsed;
    if (g_samples >= kWindowSamples) {
        report = true;
        reportTotal = g_totalTicks;
        reportMin = g_minTicks;
        reportMax = g_maxTicks;
        reportWindow = ++g_windowNumber;
        g_samples = 0;
        g_totalTicks = 0;
        g_minTicks = UINT64_MAX;
        g_maxTicks = 0;
    }
    ReleaseSRWLockExclusive(&g_statsLock);

    if (report && g_log) {
        const DWORD errorBeforeLog = GetLastError();
        g_log("Country_DailyUpdate%s window=%llu samples=%u avg_us=%llu min_us=%llu max_us=%llu",
              g_prefetchEnabled ? "+relation-prefetch" : " profile",
              static_cast<unsigned long long>(reportWindow),
              static_cast<unsigned>(kWindowSamples),
              static_cast<unsigned long long>(ToMicroseconds(reportTotal) / kWindowSamples),
              static_cast<unsigned long long>(ToMicroseconds(reportMin)),
              static_cast<unsigned long long>(ToMicroseconds(reportMax)));
        SetLastError(errorBeforeLog);
    }
}

bool PatchCall(uintptr_t imageBase, uint32_t callRva, uint32_t expectedTargetRva,
               const unsigned char expected[5], uintptr_t replacement, uintptr_t* original) {
    if (!imageBase || !replacement || !original) return false;
    auto* call = reinterpret_cast<unsigned char*>(imageBase + callRva);
    if (memcmp(call, expected, 5) != 0) return false;

    int32_t displacement = 0;
    memcpy(&displacement, call + 1, sizeof(displacement));
    const int64_t resolvedRva = static_cast<int64_t>(callRva) + 5 + displacement;
    if (resolvedRva != expectedTargetRva) return false;

    const int64_t newDisplacement64 = static_cast<int64_t>(replacement) -
                                      static_cast<int64_t>(reinterpret_cast<uintptr_t>(call + 5));
    if (newDisplacement64 < INT32_MIN || newDisplacement64 > INT32_MAX) return false;
    const int32_t newDisplacement = static_cast<int32_t>(newDisplacement64);

    DWORD oldProtection = 0;
    if (!VirtualProtect(call + 1, sizeof(newDisplacement), PAGE_EXECUTE_READWRITE, &oldProtection)) {
        return false;
    }
    if (memcmp(call, expected, 5) != 0) {
        DWORD ignored = 0;
        VirtualProtect(call + 1, sizeof(newDisplacement), oldProtection, &ignored);
        return false;
    }

    memcpy(call + 1, &newDisplacement, sizeof(newDisplacement));
    DWORD ignored = 0;
    const BOOL protectionRestored = VirtualProtect(call + 1, sizeof(newDisplacement),
                                                   oldProtection, &ignored);
    const BOOL cacheFlushed = FlushInstructionCache(GetCurrentProcess(), call, 5);
    *original = imageBase + expectedTargetRva;
    if (g_log && (!protectionRestored || !cacheFlushed)) {
        g_log("CALL hook RVA 0x%06X installed with protection_restored=%u cache_flushed=%u",
              callRva, static_cast<unsigned>(protectionRestored),
              static_cast<unsigned>(cacheFlushed));
    }
    return true;
}

// ---------------------------------------------------------------
// puppet / vassal diplomacy (independent [Puppets] switches)
// ---------------------------------------------------------------
// Guarded byte patch: replaces `size` bytes at `rva` only when they still
// match `expected`, so a different game build leaves the native code intact.
bool PatchBytes(uintptr_t imageBase, uint32_t rva, const unsigned char* expected,
                const unsigned char* replacement, size_t size, const char* tag) {
    if (!imageBase || !expected || !replacement || size == 0) return false;
    auto* site = reinterpret_cast<unsigned char*>(imageBase + rva);
    if (memcmp(site, expected, size) != 0) {
        if (g_log) g_log("%s: guarded bytes differ at RVA 0x%06X; native behavior retained", tag, rva);
        return false;
    }
    DWORD oldProtection = 0;
    if (!VirtualProtect(site, size, PAGE_EXECUTE_READWRITE, &oldProtection)) return false;
    if (memcmp(site, expected, size) != 0) {
        DWORD ignored = 0;
        VirtualProtect(site, size, oldProtection, &ignored);
        return false;
    }
    memcpy(site, replacement, size);
    DWORD ignored = 0;
    const BOOL restored = VirtualProtect(site, size, oldProtection, &ignored);
    const BOOL flushed = FlushInstructionCache(GetCurrentProcess(), site, size);
    if (g_log && (!restored || !flushed)) {
        g_log("%s: patch at RVA 0x%06X installed with protection_restored=%u cache_flushed=%u",
              tag, rva, static_cast<unsigned>(restored), static_cast<unsigned>(flushed));
    }
    return true;
}

// Replaces one dword of a vtable when it still points at `expectedRva`.
bool PatchVtableDword(uintptr_t imageBase, uint32_t slotRva, uint32_t expectedRva,
                      uint32_t replacementRva, const char* tag) {
    if (!imageBase) return false;
    auto* slot = reinterpret_cast<uint32_t*>(imageBase + slotRva);
    const uint32_t expected = static_cast<uint32_t>(imageBase + expectedRva);
    if (*slot != expected) {
        if (g_log) g_log("%s: vtable slot 0x%06X holds 0x%08X, expected 0x%08X; native behavior retained",
                         tag, slotRva, *slot, expected);
        return false;
    }
    DWORD oldProtection = 0;
    if (!VirtualProtect(slot, sizeof(*slot), PAGE_EXECUTE_READWRITE, &oldProtection)) return false;
    if (*slot != expected) {
        DWORD ignored = 0;
        VirtualProtect(slot, sizeof(*slot), oldProtection, &ignored);
        return false;
    }
    *slot = static_cast<uint32_t>(imageBase + replacementRva);
    DWORD ignored = 0;
    const BOOL restored = VirtualProtect(slot, sizeof(*slot), oldProtection, &ignored);
    const BOOL flushed = FlushInstructionCache(GetCurrentProcess(), slot, sizeof(*slot));
    if (g_log && (!restored || !flushed)) {
        g_log("%s: vtable patch at RVA 0x%06X installed with protection_restored=%u cache_flushed=%u",
              tag, slotRva, static_cast<unsigned>(restored), static_cast<unsigned>(flushed));
    }
    return true;
}

// Replaces one dword of a vtable with a pointer that lives outside the game
// image (our DLL thunk). PatchVtableDword only accepts image-relative targets.
bool PatchVtableAbsolute(uintptr_t imageBase, uint32_t slotRva, uintptr_t expectedVa,
                         uintptr_t replacementVa, const char* tag) {
    if (!imageBase || !replacementVa) return false;
    auto* slot = reinterpret_cast<uint32_t*>(imageBase + slotRva);
    const uint32_t expected = static_cast<uint32_t>(expectedVa);
    if (*slot != expected) {
        if (g_log) g_log("%s: vtable slot 0x%06X holds 0x%08X, expected 0x%08X; native behavior retained",
                         tag, slotRva, *slot, expected);
        return false;
    }
    DWORD oldProtection = 0;
    if (!VirtualProtect(slot, sizeof(*slot), PAGE_EXECUTE_READWRITE, &oldProtection)) return false;
    if (*slot != expected) {
        DWORD ignored = 0;
        VirtualProtect(slot, sizeof(*slot), oldProtection, &ignored);
        return false;
    }
    *slot = static_cast<uint32_t>(replacementVa);
    DWORD ignored = 0;
    const BOOL restored = VirtualProtect(slot, sizeof(*slot), oldProtection, &ignored);
    const BOOL flushed = FlushInstructionCache(GetCurrentProcess(), slot, sizeof(*slot));
    if (g_log && (!restored || !flushed)) {
        g_log("%s: vtable patch at RVA 0x%06X installed with protection_restored=%u cache_flushed=%u",
              tag, slotRva, static_cast<unsigned>(restored), static_cast<unsigned>(flushed));
    }
    return true;
}

// ALLOW_JUSTIFY_PUPPETS: CMakeCBAction_CanPerform (0x00927130) returns false for
// a vassal (+0xCF5) or a substate (+0xCF4) recipient through two short jumps.
// The same function also rejects a recipient that belongs to the actor's sphere.
// That check runs before the vassal test, so a puppet in the actor's own sphere
// would still be rejected. The thunk below keeps the sphere rejection for
// ordinary countries and lets a vassal/substate through. It hooks the start of
// the sphere check (0x00927163), not the shared reject label at 0x00927180,
// because that label is also reached from later checks with different registers.
bool InstallAllowJustifyPuppets(uintptr_t imageBase) {
    static const unsigned char nop2[2] = {0x90, 0x90};
    static const unsigned char vassalJump[2] = {0x75, 0xDC};   // 0x009271A2
    static const unsigned char substateJump[2] = {0x75, 0xD3}; // 0x009271AB
    const bool vassal = PatchBytes(imageBase, kJustifyPuppetVassalJumpRva,
                                   vassalJump, nop2, sizeof(nop2), "allow_justify_puppets");
    const bool substate = PatchBytes(imageBase, kJustifyPuppetSubstateJumpRva,
                                     substateJump, nop2, sizeof(nop2), "allow_justify_puppets");
    if (!vassal || !substate) {
        // The sphere bypass only makes sense together with the two subject
        // jumps: without them the allow path still returns false at 0x009271A2
        // or 0x009271AB. Keep the whole key atomic.
        return false;
    }

    // 3B C2          cmp eax,edx
    // 74 24          je  0x0092718B   (empty sphere: allow)
    // 8B 7E 14       mov edi,[esi+0x14]
    static const unsigned char sphereCheck[5] = {0x3B, 0xC2, 0x74, 0x24, 0x8B};
    unsigned char sphereJump[5] = {0xE9, 0x00, 0x00, 0x00, 0x00};
    const int64_t sphereDelta64 =
        static_cast<int64_t>(reinterpret_cast<uintptr_t>(&v2dll_JustifyPuppetSphereThunk)) -
        static_cast<int64_t>(reinterpret_cast<uintptr_t>(
            imageBase + kJustifyPuppetSphereCheckRva + sizeof(sphereJump)));
    if (sphereDelta64 < INT32_MIN || sphereDelta64 > INT32_MAX) {
        if (g_log) g_log("allow_justify_puppets: sphere bypass not installed (jump out of range); a subject inside the actor's sphere stays native");
        return true;
    }
    const int32_t sphereDelta = static_cast<int32_t>(sphereDelta64);
    memcpy(sphereJump + 1, &sphereDelta, sizeof(sphereDelta));
    g_v2dllJustifyPuppetAllowAsm = imageBase + kJustifyPuppetSphereAllowRva;
    g_v2dllJustifyPuppetLoopAsm = imageBase + kJustifyPuppetSphereLoopRva;
    if (!PatchBytes(imageBase, kJustifyPuppetSphereCheckRva, sphereCheck,
                    sphereJump, sizeof(sphereJump), "allow_justify_puppets")) {
        if (g_log) g_log("allow_justify_puppets: sphere bypass not installed; a subject inside the actor's sphere stays native");
    }
    // The two NOPs are the core of the key; the sphere bypass is an extra for
    // subjects that also belong to the actor's sphere.
    return true;
}

// ALLOW_PUPPET_JUSTIFY: a vassal/substate actor may justify a CB against anyone.
bool InstallAllowPuppetJustify(uintptr_t imageBase) {
    return PatchVtableDword(imageBase, kPuppetVtMakeCbRva + 0x74,
                            kPuppetPredicateTrueRva, kPuppetPredicateFalseRva,
                            "allow_puppet_justify");
}

// ALLOW_PUPPET_ADD_WARGOAL: a vassal/substate may add a war goal against anyone.
bool InstallAllowPuppetAddWargoal(uintptr_t imageBase) {
    return PatchVtableDword(imageBase, kPuppetVtAddWarGoalRva + 0x74,
                            kPuppetPredicateTrueRva, kPuppetPredicateFalseRva,
                            "allow_puppet_add_wargoal");
}

// ALLOW_PUPPET_DECLARE: a vassal/substate may declare war on anyone.
bool InstallAllowPuppetDeclare(uintptr_t imageBase) {
    return PatchVtableDword(imageBase, kPuppetVtDeclareWarRva + 0x74,
                            kPuppetPredicateTrueRva, kPuppetPredicateFalseRva,
                            "allow_puppet_declare");
}

// ALLOW_DECLARE_PUPPETS: war can be declared on a vassal/substate.
bool InstallAllowDeclarePuppets(uintptr_t imageBase) {
    static const unsigned char nop2[2] = {0x90, 0x90};
    static const unsigned char jneTarget[2] = {0x75, 0x7D}; // 0x0093AB18 -> return false
    static const unsigned char jeReason[2] = {0x74, 0x77};  // skip when the target is not a subject
    static const unsigned char jmpReason[2] = {0xEB, 0x77}; // always skip the subject reason
    const bool slot = PatchVtableDword(imageBase, kPuppetVtDeclareWarRva + 0x78,
                                       kPuppetPredicateTrueRva, kPuppetPredicateFalseRva,
                                       "allow_declare_puppets");
    const bool can = PatchBytes(imageBase, kWarCanDeclarePuppetExitRva,
                                jneTarget, nop2, sizeof(nop2), "allow_declare_puppets");
    const bool substateReason = PatchBytes(imageBase, kWarReasonSubstateRva,
                                           jeReason, jmpReason, sizeof(jmpReason), "allow_declare_puppets");
    const bool vassalReason = PatchBytes(imageBase, kWarReasonVassalRva,
                                         jeReason, jmpReason, sizeof(jmpReason), "allow_declare_puppets");
    return slot && can && substateReason && vassalReason;
}

// ALLOW_PEACE_WITH_PUPPETS: peace can be offered to a vassal/substate recipient.
// Slot 30 (+0x78) of CPeaceAction's vtable is the "a vassal/substate recipient
// may only be acted on by its overlord" rule in DiplomaticAction_CanPerform.
bool InstallAllowPeaceWithPuppets(uintptr_t imageBase) {
    return PatchVtableDword(imageBase, kPuppetVtPeaceRva + 0x78,
                            kPuppetPredicateTrueRva, kPuppetPredicateFalseRva,
                            "allow_peace_with_puppets");
}

// ALLOW_PUPPET_PEACE: a vassal/substate can offer peace to any country.
// Slot 29 (+0x74) of CPeaceAction's vtable is the matching actor rule.
bool InstallAllowPuppetPeace(uintptr_t imageBase) {
    return PatchVtableDword(imageBase, kPuppetVtPeaceRva + 0x74,
                            kPuppetPredicateTrueRva, kPuppetPredicateFalseRva,
                            "allow_puppet_peace");
}

// ALLOW_PUPPET_OCCUPATIONS: when a vassal/substate wins a siege, FUN_004B50A0
// climbs to its overlord and hands the occupied province to the overlord. The
// first test in that function only distinguishes subjects from ordinary
// countries, so jumping straight to the non-subject continuation keeps the
// province with the country that actually occupies it. Ordinary countries
// already take that continuation, so their behavior does not change.
bool InstallAllowPuppetOccupations(uintptr_t imageBase) {
    static const unsigned char expected[7] = {0x80, 0xB8, 0xF5, 0x0C, 0x00, 0x00, 0x00};
    unsigned char replacement[7] = {0xE9, 0x00, 0x00, 0x00, 0x00, 0x90, 0x90};
    const int64_t delta64 =
        static_cast<int64_t>(kPuppetOccupationResumeRva) -
        static_cast<int64_t>(kPuppetOccupationSiteRva + 5);
    if (delta64 < INT32_MIN || delta64 > INT32_MAX) return false;
    const int32_t delta = static_cast<int32_t>(delta64);
    memcpy(replacement + 1, &delta, sizeof(delta));
    return PatchBytes(imageBase, kPuppetOccupationSiteRva, expected,
                      replacement, sizeof(replacement), "allow_puppet_occupations");
}

// ALLOW_PUPPET_AI_DIPLOMACY: the AI uses the same native rules as a human, so a
// subject AI is normally steered away from non-overlord targets in two places.
// AI_ScoreDiplomaticTargets (0x0085E0E0) ascends from a subject target to its
// overlord; skipping the ascent lets a subject AI consider the real target.
// AI_GetOpinionScore (0x0083EC10) cuts a subject's opinion of a non-overlord to
// -1000; forcing the normal continuation removes that cut. Both sites are only
// reached when the actor or the target is a subject, so other countries are
// untouched.
bool InstallAllowPuppetAiDiplomacy(uintptr_t imageBase) {
    static const unsigned char nop2[2] = {0x90, 0x90};
    static const unsigned char targetJump[2] = {0x75, 0x11};                    // 0x0085E22D
    static const unsigned char targetExit[6] = {0x0F, 0x84, 0xAC, 0x00, 0x00, 0x00}; // 0x0085E236
    static const unsigned char opinionExit[6] = {0x0F, 0x84, 0x3A, 0x02, 0x00, 0x00}; // 0x0083EF06

    // Vassal target: fall through to the forced exit instead of ascending.
    const bool targetSubject = PatchBytes(imageBase, kPuppetAiTargetJumpRva,
                                          targetJump, nop2, sizeof(nop2),
                                          "allow_puppet_ai_diplomacy");

    // Subject target (vassal or substate): always take the normal branch.
    unsigned char targetJmp[6] = {0xE9, 0x00, 0x00, 0x00, 0x00, 0x90};
    const int64_t targetDelta64 =
        static_cast<int64_t>(kPuppetAiTargetNormalRva) -
        static_cast<int64_t>(kPuppetAiTargetExitRva + 5);
    if (targetDelta64 < INT32_MIN || targetDelta64 > INT32_MAX) return false;
    const int32_t targetDelta = static_cast<int32_t>(targetDelta64);
    memcpy(targetJmp + 1, &targetDelta, sizeof(targetDelta));
    const bool targetNormal = PatchBytes(imageBase, kPuppetAiTargetExitRva,
                                         targetExit, targetJmp, sizeof(targetJmp),
                                         "allow_puppet_ai_diplomacy");

    // Subject actor: skip the -1000 cut against a non-overlord.
    unsigned char opinionJmp[6] = {0xE9, 0x00, 0x00, 0x00, 0x00, 0x90};
    const int64_t opinionDelta64 =
        static_cast<int64_t>(kPuppetAiOpinionNormalRva) -
        static_cast<int64_t>(kPuppetAiOpinionExitRva + 5);
    if (opinionDelta64 < INT32_MIN || opinionDelta64 > INT32_MAX) return false;
    const int32_t opinionDelta = static_cast<int32_t>(opinionDelta64);
    memcpy(opinionJmp + 1, &opinionDelta, sizeof(opinionDelta));
    const bool opinion = PatchBytes(imageBase, kPuppetAiOpinionExitRva,
                                    opinionExit, opinionJmp, sizeof(opinionJmp),
                                    "allow_puppet_ai_diplomacy");

    return targetSubject && targetNormal && opinion;
}

// NO_PUPPET_WAR_AUTOCANCEL: the daily tick (FUN_006840F0) calls War_RemoveDefender
// for the first defender and the first attacker when it is a vassal/substate.
// The original is stdcall with four dwords (RET 0x10); this stub only returns.
__declspec(naked) void PuppetKeepWarLeader() {
    __asm ret 0x10
}

bool InstallNoPuppetWarAutocancel(uintptr_t imageBase) {
    static const unsigned char firstCall[5] = {0xE8, 0xC5, 0x1E, 0x2B, 0x00};  // 0x002841A6
    static const unsigned char secondCall[5] = {0xE8, 0x8C, 0x1E, 0x2B, 0x00}; // 0x002841DF
    uintptr_t originalFirst = 0;
    uintptr_t originalSecond = 0;
    const bool first = PatchCall(imageBase, kPuppetWarTickRemoveDefender1Rva, kWarRemoveDefenderRva,
                                 firstCall, reinterpret_cast<uintptr_t>(&PuppetKeepWarLeader),
                                 &originalFirst);
    const bool second = PatchCall(imageBase, kPuppetWarTickRemoveDefender2Rva, kWarRemoveDefenderRva,
                                  secondCall, reinterpret_cast<uintptr_t>(&PuppetKeepWarLeader),
                                  &originalSecond);
    return first && second;
}

bool InstallPuppets(uintptr_t imageBase) {
    bool installed = false;
    if (g_allowJustifyPuppets) {
        if (InstallAllowJustifyPuppets(imageBase)) {
            installed = true;
            if (g_log) g_log("allow_justify_puppets: active (a CB can be justified against a vassal/substate)");
        } else if (g_log) {
            g_log("allow_justify_puppets: rejected by guarded-byte check; native behavior retained");
        }
    }
    if (g_allowPuppetJustify) {
        if (InstallAllowPuppetJustify(imageBase)) {
            installed = true;
            if (g_log) g_log("allow_puppet_justify: active (a vassal/substate can justify a CB against any country)");
        } else if (g_log) {
            g_log("allow_puppet_justify: rejected by guarded-vtable check; native behavior retained");
        }
    }
    if (g_allowPuppetAddWargoal) {
        if (InstallAllowPuppetAddWargoal(imageBase)) {
            installed = true;
            if (g_log) g_log("allow_puppet_add_wargoal: active (a vassal/substate can add a war goal against any country)");
        } else if (g_log) {
            g_log("allow_puppet_add_wargoal: rejected by guarded-vtable check; native behavior retained");
        }
    }
    if (g_allowPuppetDeclare) {
        if (InstallAllowPuppetDeclare(imageBase)) {
            installed = true;
            if (g_log) g_log("allow_puppet_declare: active (a vassal/substate can declare war on any country)");
        } else if (g_log) {
            g_log("allow_puppet_declare: rejected by guarded-vtable check; native behavior retained");
        }
    }
    if (g_allowDeclarePuppets) {
        if (InstallAllowDeclarePuppets(imageBase)) {
            installed = true;
            if (g_log) g_log("allow_declare_puppets: active (war can be declared on a vassal/substate)");
        } else if (g_log) {
            g_log("allow_declare_puppets: rejected by guarded-byte/vtable check; native behavior retained");
        }
    }
    if (g_noPuppetWarAutocancel) {
        if (InstallNoPuppetWarAutocancel(imageBase)) {
            installed = true;
            if (g_log) g_log("no_puppet_war_autocancel: active (the daily tick keeps a vassal/substate war leader)");
        } else if (g_log) {
            g_log("no_puppet_war_autocancel: rejected by guarded CALL check; native behavior retained");
        }
    }
    if (g_allowPeaceWithPuppets) {
        if (InstallAllowPeaceWithPuppets(imageBase)) {
            installed = true;
            if (g_log) g_log("allow_peace_with_puppets: active (peace can be negotiated with a vassal/substate)");
        } else if (g_log) {
            g_log("allow_peace_with_puppets: rejected by guarded-vtable check; native behavior retained");
        }
    }
    if (g_allowPuppetPeace) {
        if (InstallAllowPuppetPeace(imageBase)) {
            installed = true;
            if (g_log) g_log("allow_puppet_peace: active (a vassal/substate can negotiate peace with any country)");
        } else if (g_log) {
            g_log("allow_puppet_peace: rejected by guarded-vtable check; native behavior retained");
        }
    }
    if (g_allowPuppetOccupations) {
        if (InstallAllowPuppetOccupations(imageBase)) {
            installed = true;
            if (g_log) g_log("allow_puppet_occupations: active (a vassal/substate keeps the provinces it occupies)");
        } else if (g_log) {
            g_log("allow_puppet_occupations: rejected by guarded-byte check; native behavior retained");
        }
    }
    if (g_allowPuppetAiDiplomacy) {
        if (InstallAllowPuppetAiDiplomacy(imageBase)) {
            installed = true;
            if (g_log) g_log("allow_puppet_ai_diplomacy: active (a subject AI can pick non-overlord CB/war targets)");
        } else if (g_log) {
            g_log("allow_puppet_ai_diplomacy: rejected by guarded-byte check; native behavior retained");
        }
    }
    return installed;
}

bool InstallKeepPuppetsWhenGreatPowers(uintptr_t imageBase) {
    // FUN_0053D680 sets the GP flag, then at VA 0x0053D6A6 reads country+0xCFC
    // (its overlord). A nonzero value enters the native satellite-removal path.
    static const unsigned char expected[6] = {0x8B,0x83,0xFC,0x0C,0x00,0x00};
    if (!imageBase) return false;
    auto* site = reinterpret_cast<unsigned char*>(imageBase + kGreatPowerPuppetCheckRva);
    if (memcmp(site, expected, sizeof(expected)) != 0) return false;
    const int64_t displacement64 = static_cast<int64_t>(reinterpret_cast<uintptr_t>(&v2dll_KeepPuppetRelationThunk)) -
        static_cast<int64_t>(reinterpret_cast<uintptr_t>(site + 5));
    if (displacement64 < INT32_MIN || displacement64 > INT32_MAX) return false;
    const int32_t displacement = static_cast<int32_t>(displacement64);
    DWORD oldProtection = 0;
    if (!VirtualProtect(site, sizeof(expected), PAGE_EXECUTE_READWRITE, &oldProtection)) return false;
    if (memcmp(site, expected, sizeof(expected)) != 0) {
        DWORD ignored = 0;
        VirtualProtect(site, sizeof(expected), oldProtection, &ignored);
        return false;
    }
    g_v2dllKeepPuppetsResumeAsm = reinterpret_cast<uintptr_t>(site + sizeof(expected));
    InterlockedExchange(&g_v2dllKeepPuppetsWhenGreatPowerAsm, 1);
    site[0] = 0xE9;
    memcpy(site + 1, &displacement, sizeof(displacement));
    site[5] = 0x90;
    DWORD ignored = 0;
    const BOOL restored = VirtualProtect(site, sizeof(expected), oldProtection, &ignored);
    const BOOL flushed = FlushInstructionCache(GetCurrentProcess(), site, sizeof(expected));
    if (g_log && (!restored || !flushed))
        g_log("Puppet/Great Power hook installed; protection_restored=%u cache_flushed=%u",
              static_cast<unsigned>(restored), static_cast<unsigned>(flushed));
    return true;
}

bool InstallBlockPuppetsFromGreatPowers(uintptr_t imageBase) {
    // Three native sites compare country+0xE4C (province/state count) with 1
    // before a country can be promoted to Great Power. Replace each CMP with a
    // CALL to a thunk that also requires country+0xCFC (overlord) to be zero,
    // so a subject is treated exactly like a one-province country. The load-time
    // promotion path is intentionally not patched: the next economic-list
    // rebuild demotes a subject already marked as Great Power, which is how the
    // native one-province rule handles a save that already contains such a GP.
    static const unsigned char mainExpected[6] = {0x39,0x8F,0x4C,0x0E,0x00,0x00};
    static const unsigned char candidateExpected[6] = {0x39,0xBE,0x4C,0x0E,0x00,0x00};
    static const unsigned char vacancyExpected[7] = {0x83,0xB8,0x4C,0x0E,0x00,0x00,0x01};
    struct PatchSite {
        uint32_t rva;
        const unsigned char* expected;
        size_t size;
        uintptr_t thunk;
        int32_t displacement;
    };
    PatchSite sites[3] = {
        {kGreatPowerMainEligibilityRva, mainExpected, sizeof(mainExpected),
         reinterpret_cast<uintptr_t>(&v2dll_GreatPowerMainEligibilityThunk), 0},
        {kGreatPowerCandidateEligibilityRva, candidateExpected, sizeof(candidateExpected),
         reinterpret_cast<uintptr_t>(&v2dll_GreatPowerCandidateEligibilityThunk), 0},
        {kGreatPowerVacancyEligibilityRva, vacancyExpected, sizeof(vacancyExpected),
         reinterpret_cast<uintptr_t>(&v2dll_GreatPowerVacancyEligibilityThunk), 0},
    };
    if (!imageBase) return false;

    for (size_t i = 0; i < 3; ++i) {
        auto* site = reinterpret_cast<unsigned char*>(imageBase + sites[i].rva);
        if (memcmp(site, sites[i].expected, sites[i].size) != 0) return false;
        const int64_t displacement64 = static_cast<int64_t>(sites[i].thunk) -
            static_cast<int64_t>(reinterpret_cast<uintptr_t>(site + 5));
        if (displacement64 < INT32_MIN || displacement64 > INT32_MAX) return false;
        sites[i].displacement = static_cast<int32_t>(displacement64);
    }

    const uintptr_t first = imageBase + kGreatPowerCandidateEligibilityRva;
    const uintptr_t last = imageBase + kGreatPowerVacancyEligibilityRva + sizeof(vacancyExpected);
    DWORD oldProtection = 0;
    if (!VirtualProtect(reinterpret_cast<void*>(first), last - first, PAGE_EXECUTE_READWRITE,
                        &oldProtection)) {
        return false;
    }

    // Revalidate after changing protection, following the guarded-patch style.
    for (size_t i = 0; i < 3; ++i) {
        auto* site = reinterpret_cast<unsigned char*>(imageBase + sites[i].rva);
        if (memcmp(site, sites[i].expected, sites[i].size) != 0) {
            DWORD ignored = 0;
            VirtualProtect(reinterpret_cast<void*>(first), last - first, oldProtection, &ignored);
            return false;
        }
    }

    for (size_t i = 0; i < 3; ++i) {
        auto* site = reinterpret_cast<unsigned char*>(imageBase + sites[i].rva);
        site[0] = 0xE8;
        memcpy(site + 1, &sites[i].displacement, sizeof(sites[i].displacement));
        for (size_t j = 5; j < sites[i].size; ++j) site[j] = 0x90;
    }

    DWORD ignored = 0;
    const BOOL restored = VirtualProtect(reinterpret_cast<void*>(first), last - first,
                                         oldProtection, &ignored);
    BOOL flushed = TRUE;
    for (size_t i = 0; i < 3; ++i) {
        auto* site = reinterpret_cast<unsigned char*>(imageBase + sites[i].rva);
        if (!FlushInstructionCache(GetCurrentProcess(), site, sites[i].size)) flushed = FALSE;
    }
    if (g_log && (!restored || !flushed)) {
        g_log("Great Power puppet exclusion installed; protection_restored=%u cache_flushed=%u",
              static_cast<unsigned>(restored), static_cast<unsigned>(flushed));
    }
    return true;
}

bool InstallGreatPowerDisplayLimit(uintptr_t imageBase) {
    // Window builders divide the scaled GREAT_NATIONS_COUNT by 1000 and then
    // loop that many times, looking up country_gp%d, sort_by_gp%d,
    // diplomacy_greatpower_info%d or instantiating invest_non_gp_extra_info
    // cells. Six replace the 17-byte signed-division sequence with a CALL that
    // returns min(count, 8); FUN_00627580 keeps the native division and only its
    // seven-byte ESI tail is redirected. Two further builders loop over the
    // Great Power vector and look up sort_by_gpflag%d; their bound is clamped at
    // the prologue instead. Finally, FUN_00627580's non-Great-Power branch loops
    // over that same vector looking up nongp_country_opinion%d; the stored vector
    // bound is clamped so a ninth power cannot reach a missing widget. Great
    // Powers 9+ remain active in the simulation and in the backend
    // great_powers_list, but are not shown in these windows.
    static const unsigned char countExpected[17] = {
        0xB8,0xD3,0x4D,0x62,0x10,0xF7,0xE9,0xC1,0xFA,0x06,0x8B,0xC2,0xC1,0xE8,0x1F,0x03,0xC2
    };
    static const unsigned char countEsiExpected[7] = {0x8B,0xF2,0xC1,0xEE,0x1F,0x03,0xF2};
    static const unsigned char nonGpCountExpected[7] = {0x89,0x84,0x24,0x80,0x00,0x00,0x00};
    static const unsigned char loopEcxExpected[5] = {0x56,0x33,0xDB,0x33,0xF6};
    static const unsigned char loopEdxExpected[5] = {0xC1,0xFA,0x02,0x33,0xDB};
    struct PatchSite {
        uint32_t rva;
        const unsigned char* expected;
        size_t size;
        uintptr_t thunk;
        int32_t displacement;
        DWORD oldProtection;
        bool allowPrepatched;
        bool alreadyPatched;
    };
    PatchSite sites[10] = {
        {kGreatPowerCountLimitRvas[0], countExpected, sizeof(countExpected),
         reinterpret_cast<uintptr_t>(&v2dll_GreatPowerCountLimitThunk), 0, 0, false, false},
        {kGreatPowerCountLimitRvas[1], countExpected, sizeof(countExpected),
         reinterpret_cast<uintptr_t>(&v2dll_GreatPowerCountLimitThunk), 0, 0, false, false},
        {kGreatPowerCountLimitRvas[2], countExpected, sizeof(countExpected),
         reinterpret_cast<uintptr_t>(&v2dll_GreatPowerCountLimitThunk), 0, 0, false, false},
        {kGreatPowerCountLimitRvas[3], countExpected, sizeof(countExpected),
         reinterpret_cast<uintptr_t>(&v2dll_GreatPowerCountLimitThunk), 0, 0, false, false},
        {kGreatPowerCountLimitRvas[4], countExpected, sizeof(countExpected),
         reinterpret_cast<uintptr_t>(&v2dll_GreatPowerCountLimitThunk), 0, 0, false, false},
        {kGreatPowerCountLimitRvas[5], countExpected, sizeof(countExpected),
         reinterpret_cast<uintptr_t>(&v2dll_GreatPowerCountLimitThunk), 0, 0, false, false},
        {kGreatPowerCountEsiLimitRva, countEsiExpected, sizeof(countEsiExpected),
         reinterpret_cast<uintptr_t>(&v2dll_GreatPowerCountEsiLimitThunk), 0, 0, false, false},
        {kGreatPowerFlagLoopEcxRva, loopEcxExpected, sizeof(loopEcxExpected),
         reinterpret_cast<uintptr_t>(&v2dll_GreatPowerFlagLoopEcxThunk), 0, 0, false, false},
        {kGreatPowerFlagLoopEdxRva, loopEdxExpected, sizeof(loopEdxExpected),
         reinterpret_cast<uintptr_t>(&v2dll_GreatPowerFlagLoopEdxThunk), 0, 0, false, false},
        {kGreatPowerNonGpCountLimitRva, nonGpCountExpected, sizeof(nonGpCountExpected),
         reinterpret_cast<uintptr_t>(&v2dll_GreatPowerNonGpCountLimitThunk), 0, 0, true, false},
    };
    if (!imageBase) return false;

    // v2game.exe may already carry the offline pre-patch for the non-GP opinion
    // list: E8 <rel32> 90 90 pointing at an in-image clamp thunk. Detect that
    // exact shape so recompiled DLLs can run against both a clean and a
    // pre-patched executable without overwriting the call.
    auto isPrepatchedSite = [](const unsigned char* address, size_t size) -> bool {
        if (size < 7 || address[0] != 0xE8 || address[5] != 0x90 || address[6] != 0x90) {
            return false;
        }
        int32_t relative = 0;
        memcpy(&relative, address + 1, sizeof(relative));
        auto* target = reinterpret_cast<const unsigned char*>(
            reinterpret_cast<uintptr_t>(address) + 5 + static_cast<intptr_t>(relative));
        MEMORY_BASIC_INFORMATION info = {};
        if (!VirtualQuery(target, &info, sizeof(info))) return false;
        if (info.State != MEM_COMMIT) return false;
        const DWORD baseProtect = info.Protect & 0xFF;
        constexpr DWORD kReadableExecutable = PAGE_EXECUTE_READ |
            PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY;
        if ((baseProtect & kReadableExecutable) == 0) return false;
        static const unsigned char prepatchedThunk[18] = {
            0x83,0xF8,0x08,0x7E,0x05,0xB8,0x08,0x00,0x00,0x00,
            0x89,0x84,0x24,0x84,0x00,0x00,0x00,0xC3
        };
        return memcmp(target, prepatchedThunk, sizeof(prepatchedThunk)) == 0;
    };

    for (auto& site : sites) {
        auto* address = reinterpret_cast<unsigned char*>(imageBase + site.rva);
        if (memcmp(address, site.expected, site.size) == 0) {
            const int64_t displacement64 = static_cast<int64_t>(site.thunk) -
                static_cast<int64_t>(reinterpret_cast<uintptr_t>(address + 5));
            if (displacement64 < INT32_MIN || displacement64 > INT32_MAX) return false;
            site.displacement = static_cast<int32_t>(displacement64);
            continue;
        }
        if (site.allowPrepatched && isPrepatchedSite(address, site.size)) {
            site.alreadyPatched = true;
            if (g_log) {
                g_log("Great Power display limit: site RVA 0x%06X is already pre-patched in the executable; leaving it untouched",
                      site.rva);
            }
            continue;
        }
        if (g_log) {
            g_log("Great Power display limit: byte pattern mismatch at RVA 0x%06X (image base 0x%08X)",
                  site.rva, static_cast<unsigned>(imageBase));
        }
        return false;
    }

    for (auto& site : sites) {
        if (site.alreadyPatched) continue;
        auto* address = reinterpret_cast<void*>(imageBase + site.rva);
        if (!VirtualProtect(address, site.size, PAGE_EXECUTE_READWRITE, &site.oldProtection)) {
            for (auto& restore : sites) {
                if (restore.alreadyPatched || !restore.oldProtection) continue;
                DWORD ignored = 0;
                VirtualProtect(reinterpret_cast<void*>(imageBase + restore.rva),
                               restore.size, restore.oldProtection, &ignored);
            }
            return false;
        }
    }

    // Revalidate after changing protection, following the guarded-patch style.
    for (auto& site : sites) {
        if (site.alreadyPatched) continue;
        auto* address = reinterpret_cast<unsigned char*>(imageBase + site.rva);
        if (memcmp(address, site.expected, site.size) != 0) {
            if (g_log) {
                g_log("Great Power display limit: byte pattern changed at RVA 0x%06X after protection change; no bytes written",
                      site.rva);
            }
            for (auto& restore : sites) {
                if (restore.alreadyPatched || !restore.oldProtection) continue;
                DWORD ignored = 0;
                VirtualProtect(reinterpret_cast<void*>(imageBase + restore.rva),
                               restore.size, restore.oldProtection, &ignored);
            }
            return false;
        }
    }

    for (auto& site : sites) {
        if (site.alreadyPatched) continue;
        auto* address = reinterpret_cast<unsigned char*>(imageBase + site.rva);
        address[0] = 0xE8;
        memcpy(address + 1, &site.displacement, sizeof(site.displacement));
        for (size_t j = 5; j < site.size; ++j) address[j] = 0x90;
    }

    bool restored = true;
    for (auto& site : sites) {
        if (site.alreadyPatched) continue;
        DWORD ignored = 0;
        restored = VirtualProtect(reinterpret_cast<void*>(imageBase + site.rva),
                                  site.size, site.oldProtection, &ignored) && restored;
    }
    bool flushed = true;
    for (auto& site : sites) {
        if (site.alreadyPatched) continue;
        auto* address = reinterpret_cast<unsigned char*>(imageBase + site.rva);
        if (!FlushInstructionCache(GetCurrentProcess(), address, site.size)) flushed = false;
    }
    if (g_log && (!restored || !flushed)) {
        g_log("Great Power display limit installed; protection_restored=%u cache_flushed=%u",
              static_cast<unsigned>(restored), static_cast<unsigned>(flushed));
    }
    return true;
}

bool InstallGreatPowerCountFloor(uintptr_t imageBase) {
    // The native rebuild reads the scaled GREAT_NATIONS_COUNT, divides it by
    // 1000 and stores the result as the number of Great Powers to retain. When
    // the mod defines.lua could not be updated, that number stays at 8 and the
    // configured ninth power is demoted. Replace the four-byte store and the
    // three-byte MOV EAX,[EBX+4] that follows it with a CALL that raises the
    // count to the configured floor. The thunk reproduces both instructions and
    // returns to the two NOPs that pad the seven-byte patch.
    static const unsigned char expected[7] = {0x89,0x44,0x24,0x10,0x8B,0x43,0x04};
    if (!imageBase) return false;
    auto* site = reinterpret_cast<unsigned char*>(imageBase + kGreatPowerCountFloorRva);
    if (memcmp(site, expected, sizeof(expected)) != 0) return false;

    g_v2dllGreatNationsCountFloor = g_greatNationsCountOverride;
    const int64_t displacement64 =
        static_cast<int64_t>(reinterpret_cast<uintptr_t>(&v2dll_GreatPowerCountFloorThunk)) -
        static_cast<int64_t>(reinterpret_cast<uintptr_t>(site + 5));
    if (displacement64 < INT32_MIN || displacement64 > INT32_MAX) return false;
    const int32_t displacement = static_cast<int32_t>(displacement64);

    DWORD oldProtection = 0;
    if (!VirtualProtect(site, sizeof(expected), PAGE_EXECUTE_READWRITE, &oldProtection)) {
        return false;
    }
    if (memcmp(site, expected, sizeof(expected)) != 0) {
        DWORD ignored = 0;
        VirtualProtect(site, sizeof(expected), oldProtection, &ignored);
        return false;
    }

    site[0] = 0xE8;
    memcpy(site + 1, &displacement, sizeof(displacement));
    site[5] = 0x90;
    site[6] = 0x90;
    DWORD ignored = 0;
    const BOOL restored = VirtualProtect(site, sizeof(expected), oldProtection, &ignored);
    const BOOL flushed = FlushInstructionCache(GetCurrentProcess(), site, sizeof(expected));
    if (g_log && (!restored || !flushed)) {
        g_log("Great Power count floor installed; protection_restored=%u cache_flushed=%u",
              static_cast<unsigned>(restored), static_cast<unsigned>(flushed));
    }
    return true;
}

bool InstallAiFrameAffinityHook(uintptr_t imageBase) {
    static const unsigned char expected[6] = {0x55,0x8B,0xEC,0x83,0xEC,0x18};
    constexpr SIZE_T kCopiedBytes = sizeof(expected);
    auto* entry = reinterpret_cast<unsigned char*>(imageBase + kAiFrameUpdateRva);
    if (!imageBase || memcmp(entry, expected, kCopiedBytes) != 0) return false;

    auto* trampoline = static_cast<unsigned char*>(VirtualAlloc(
        nullptr, kCopiedBytes + 5, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE));
    if (!trampoline) return false;
    memcpy(trampoline, expected, kCopiedBytes);
    trampoline[kCopiedBytes] = 0xE9;
    const int64_t returnDisplacement = static_cast<int64_t>(reinterpret_cast<uintptr_t>(entry + kCopiedBytes)) -
        static_cast<int64_t>(reinterpret_cast<uintptr_t>(trampoline + kCopiedBytes + 5));
    if (returnDisplacement < INT32_MIN || returnDisplacement > INT32_MAX) {
        VirtualFree(trampoline, 0, MEM_RELEASE);
        return false;
    }
    const int32_t returnRel32 = static_cast<int32_t>(returnDisplacement);
    memcpy(trampoline + kCopiedBytes + 1, &returnRel32, sizeof(returnRel32));
    DWORD trampolineProtection = 0;
    if (!VirtualProtect(trampoline, kCopiedBytes + 5, PAGE_EXECUTE_READ, &trampolineProtection)) {
        VirtualFree(trampoline, 0, MEM_RELEASE);
        return false;
    }
    FlushInstructionCache(GetCurrentProcess(), trampoline, kCopiedBytes + 5);

    const int64_t hookDisplacement = static_cast<int64_t>(reinterpret_cast<uintptr_t>(&AiFrameAffinityThunk)) -
        static_cast<int64_t>(reinterpret_cast<uintptr_t>(entry + 5));
    if (hookDisplacement < INT32_MIN || hookDisplacement > INT32_MAX) {
        VirtualFree(trampoline, 0, MEM_RELEASE);
        return false;
    }
    const int32_t hookRel32 = static_cast<int32_t>(hookDisplacement);

    DWORD oldProtection = 0;
    if (!VirtualProtect(entry, kCopiedBytes, PAGE_EXECUTE_READWRITE, &oldProtection)) {
        VirtualFree(trampoline, 0, MEM_RELEASE);
        return false;
    }
    if (memcmp(entry, expected, kCopiedBytes) != 0) {
        DWORD ignored = 0;
        VirtualProtect(entry, kCopiedBytes, oldProtection, &ignored);
        VirtualFree(trampoline, 0, MEM_RELEASE);
        return false;
    }
    entry[0] = 0xE9;
    memcpy(entry + 1, &hookRel32, sizeof(hookRel32));
    entry[5] = 0x90;
    DWORD ignored = 0;
    const BOOL protectionRestored = VirtualProtect(entry, kCopiedBytes, oldProtection, &ignored);
    const BOOL cacheFlushed = FlushInstructionCache(GetCurrentProcess(), entry, kCopiedBytes);
    g_originalAiFrameUpdate = reinterpret_cast<AiFrameUpdateFn>(trampoline);
    if (g_log && (!protectionRestored || !cacheFlushed)) {
        g_log("AI_FrameUpdate affinity hook installed with protection_restored=%u cache_flushed=%u",
              static_cast<unsigned>(protectionRestored), static_cast<unsigned>(cacheFlushed));
    }
    return true;
}

bool InstallAiTargetLookupOptimization(uintptr_t imageBase) {
    // Guard both patch sites. The target's linked-list walk is replaced with
    // a per-call bitset lookup; all other candidate logic remains native.
    static const unsigned char entryExpected[6] = {0x55,0x8B,0xEC,0x83,0xE4,0xF8};
    static const unsigned char lookupExpected[6] = {0x8B,0x83,0xA4,0x04,0x00,0x00};
    constexpr SIZE_T kEntryBytes = sizeof(entryExpected);
    constexpr SIZE_T kLookupBytes = sizeof(lookupExpected);
    if (!imageBase) return false;
    auto* entry = reinterpret_cast<unsigned char*>(imageBase + kAiTargetScanRva);
    auto* lookup = reinterpret_cast<unsigned char*>(imageBase + kAiTargetMembershipRva);
    if ((reinterpret_cast<uintptr_t>(entry) & ~uintptr_t(0xFFF)) !=
        (reinterpret_cast<uintptr_t>(lookup) & ~uintptr_t(0xFFF)) ||
        memcmp(entry, entryExpected, kEntryBytes) != 0 ||
        memcmp(lookup, lookupExpected, kLookupBytes) != 0) return false;

    auto* trampoline = static_cast<unsigned char*>(VirtualAlloc(
        nullptr, kEntryBytes + 5, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE));
    if (!trampoline) return false;
    memcpy(trampoline, entryExpected, kEntryBytes);
    trampoline[kEntryBytes] = 0xE9;
    const int64_t returnDisplacement = static_cast<int64_t>(reinterpret_cast<uintptr_t>(entry + kEntryBytes)) -
        static_cast<int64_t>(reinterpret_cast<uintptr_t>(trampoline + kEntryBytes + 5));
    if (returnDisplacement < INT32_MIN || returnDisplacement > INT32_MAX) {
        VirtualFree(trampoline, 0, MEM_RELEASE);
        return false;
    }
    const int32_t returnRel32 = static_cast<int32_t>(returnDisplacement);
    memcpy(trampoline + kEntryBytes + 1, &returnRel32, sizeof(returnRel32));
    DWORD trampolineProtection = 0;
    if (!VirtualProtect(trampoline, kEntryBytes + 5, PAGE_EXECUTE_READ, &trampolineProtection)) {
        VirtualFree(trampoline, 0, MEM_RELEASE);
        return false;
    }
    FlushInstructionCache(GetCurrentProcess(), trampoline, kEntryBytes + 5);

    const int64_t entryHookDisplacement = static_cast<int64_t>(reinterpret_cast<uintptr_t>(&AiTargetScanLookupThunk)) -
        static_cast<int64_t>(reinterpret_cast<uintptr_t>(entry + 5));
    const int64_t lookupHookDisplacement = static_cast<int64_t>(reinterpret_cast<uintptr_t>(&v2dll_AiTargetMembershipThunk)) -
        static_cast<int64_t>(reinterpret_cast<uintptr_t>(lookup + 5));
    if (entryHookDisplacement < INT32_MIN || entryHookDisplacement > INT32_MAX ||
        lookupHookDisplacement < INT32_MIN || lookupHookDisplacement > INT32_MAX) {
        VirtualFree(trampoline, 0, MEM_RELEASE);
        return false;
    }
    const int32_t entryHookRel32 = static_cast<int32_t>(entryHookDisplacement);
    const int32_t lookupHookRel32 = static_cast<int32_t>(lookupHookDisplacement);

    const SIZE_T protectedLength = static_cast<SIZE_T>(
        reinterpret_cast<uintptr_t>(lookup + kLookupBytes) - reinterpret_cast<uintptr_t>(entry));
    DWORD oldProtection = 0;
    if (!VirtualProtect(entry, protectedLength, PAGE_EXECUTE_READWRITE, &oldProtection)) {
        VirtualFree(trampoline, 0, MEM_RELEASE);
        return false;
    }
    if (memcmp(entry, entryExpected, kEntryBytes) != 0 ||
        memcmp(lookup, lookupExpected, kLookupBytes) != 0) {
        DWORD ignored = 0;
        VirtualProtect(entry, protectedLength, oldProtection, &ignored);
        VirtualFree(trampoline, 0, MEM_RELEASE);
        return false;
    }

    g_v2dllAiTargetFallbackAsm = imageBase + kAiTargetMembershipFallbackRva;
    g_v2dllAiTargetFoundAsm = imageBase + kAiTargetMembershipFoundRva;
    g_v2dllAiTargetSearchAsm = imageBase + kAiTargetMembershipSearchRva;
    g_originalAiTargetScan = reinterpret_cast<AiTargetScanFn>(trampoline);
    entry[0] = 0xE9;
    memcpy(entry + 1, &entryHookRel32, sizeof(entryHookRel32));
    entry[5] = 0x90;
    lookup[0] = 0xE9;
    memcpy(lookup + 1, &lookupHookRel32, sizeof(lookupHookRel32));
    lookup[5] = 0x90;
    const BOOL cacheFlushed = FlushInstructionCache(GetCurrentProcess(), entry, protectedLength);
    DWORD ignored = 0;
    const BOOL protectionRestored = VirtualProtect(entry, protectedLength, oldProtection, &ignored);
    if (g_log && (!protectionRestored || !cacheFlushed)) {
        g_log("AI_TargetScan lookup optimization installed with protection_restored=%u cache_flushed=%u",
              static_cast<unsigned>(protectionRestored), static_cast<unsigned>(cacheFlushed));
    }
    return true;
}

bool InstallFourDayEventScan(uintptr_t imageBase) {
    struct CodePatch {
        uint32_t rva;
        const unsigned char* expected;
        const unsigned char* replacement;
        SIZE_T length;
        DWORD oldProtection;
    };
    static const unsigned char gateExpected[21] = {
        0x25,0x01,0x00,0x00,0x80,0x79,0x05,0x48,0x83,0xC8,0xFE,
        0x40,0x83,0xF8,0x01,0x0F,0x85,0xFA,0x01,0x00,0x00
    };
    // day%4==2 enters the province branch; day%4==1 enters country branch;
    // the other two residues leave the scanner without traversing candidates.
    static const unsigned char gateFourDay[21] = {
        0x83,0xE0,0x03,0x83,0xF8,0x02,0x0F,0x84,0x03,0x02,0x00,
        0x00,0x83,0xF8,0x01,0x0F,0x85,0xC0,0x03,0x00,0x00
    };
    static const unsigned char countryModeExpected[2] = {0x6A,0x01};
    static const unsigned char countryModeFourDay[2] = {0x6A,0x02};
    static const unsigned char provinceModeExpected[2] = {0x6A,0x02};
    static const unsigned char provinceModeFourDay[2] = {0x6A,0x04};
    CodePatch patches[] = {
        {kEventScanGateRva, gateExpected, gateFourDay, sizeof(gateExpected), 0},
        {kCountryEventMultiplierRva, countryModeExpected, countryModeFourDay, sizeof(countryModeExpected), 0},
        {kProvinceEventMultiplierRva, provinceModeExpected, provinceModeFourDay, sizeof(provinceModeExpected), 0}
    };

    if (!imageBase) return false;
    for (auto& patch : patches) {
        auto* address = reinterpret_cast<unsigned char*>(imageBase + patch.rva);
        if (memcmp(address, patch.expected, patch.length) != 0) return false;
    }
    size_t protectedCount = 0;
    for (auto& patch : patches) {
        auto* address = reinterpret_cast<void*>(imageBase + patch.rva);
        if (!VirtualProtect(address, patch.length, PAGE_EXECUTE_READWRITE, &patch.oldProtection)) {
            for (size_t i = 0; i < protectedCount; ++i) {
                DWORD ignored = 0;
                VirtualProtect(reinterpret_cast<void*>(imageBase + patches[i].rva),
                               patches[i].length, patches[i].oldProtection, &ignored);
            }
            return false;
        }
        ++protectedCount;
    }
    for (auto& patch : patches) {
        auto* address = reinterpret_cast<unsigned char*>(imageBase + patch.rva);
        memcpy(address, patch.replacement, patch.length);
        FlushInstructionCache(GetCurrentProcess(), address, patch.length);
    }
    bool restored = true;
    for (auto& patch : patches) {
        DWORD ignored = 0;
        restored = VirtualProtect(reinterpret_cast<void*>(imageBase + patch.rva),
                                  patch.length, patch.oldProtection, &ignored) && restored;
    }
    if (!restored && g_log) {
        g_log("Four-day event scan patched, but executable page protection could not be fully restored");
    }
    return true;
}

} // namespace

extern "C" {
volatile LONG g_v2dllSkipMapSceneAsm = 0;
volatile LONG g_v2dllKeepPuppetsWhenGreatPowerAsm = 0;
uint32_t g_v2dllGreatNationsCountFloor = 0;
uintptr_t g_v2dllKeepPuppetsResumeAsm = 0;
uintptr_t g_v2dllJustifyPuppetAllowAsm = 0;
uintptr_t g_v2dllJustifyPuppetLoopAsm = 0;
uintptr_t g_v2dllMapSceneOriginalAsm = 0;
uintptr_t g_v2dllPopResetOriginalAsm = 0;
uintptr_t g_v2dllAiTargetFallbackAsm = 0;
uintptr_t g_v2dllAiTargetFoundAsm = 0;
uintptr_t g_v2dllAiTargetSearchAsm = 0;
void (__cdecl* g_v2dllPopResetPrefetchHelperAsm)(uint32_t) = &PrefetchNextPopResetData;
uintptr_t g_v2dllEventCountrySkipAsm = 0;
uintptr_t g_v2dllEventProvinceSkipAsm = 0;
uintptr_t g_v2dllModifierDeleteAsm = 0;
uintptr_t g_v2dllAddProvinceTooltipOriginal = 0;
uintptr_t g_v2dllAddCountryTooltipOriginal = 0;
uintptr_t g_v2dllRemoveProvinceTooltipOriginal = 0;
uintptr_t g_v2dllRemoveCountryTooltipOriginal = 0;
uintptr_t g_v2dllCountryModifierTriggerTooltipOriginal = 0;
uintptr_t g_v2dllProvinceModifierTriggerTooltipOriginal = 0;
volatile LONG g_v2dllInvalidModifierTooltips = 0;

// fire_on_time gate helper: called with the event in EDI and the native trigger
// result in AL. Return 1 to append the event to the monthly candidate list (the
// daily scan evaluates the trigger again), 0 to keep the native skip.
int __cdecl v2dll_EventCandidateShouldAppend(uint32_t event, uint32_t triggerTrue) {
    if (triggerTrue) return 1;
    if (!g_fireOnTime || !event) return 0;
    int budget = 4096;
    bool found = false;
    __try {
        found = EventTriggerHasTimeCondition(event + kEventTriggerOffset, 0, &budget);
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        found = false;
    }
    return found ? 1 : 0;
}

// guard_missing_modifiers tooltip helper: build the visible replacement text.
void __cdecl v2dll_WriteInvalidModifiers(void* out) {
    ConstructEngineString(out, "INVALID MODIFIERS");
    const LONG count = InterlockedIncrement(&g_v2dllInvalidModifierTooltips);
    if (count <= 20 && g_log) {
        g_log("guard_missing_modifiers: a modifier set that does not exist was referenced; "
              "showing INVALID MODIFIERS and ignoring it");
    }
}

__declspec(naked) void __cdecl v2dll_KeepPuppetRelationThunk() {
    // Preserve the native country+0xCFC read except when an overlord exists
    // and this opt-in is active. Returning EAX=0 makes the following native
    // TEST/JZ skip only the satellite-removal branch; GP promotion continues.
    __asm {
        mov eax, dword ptr [ebx + 0CFCh]
        cmp dword ptr [g_v2dllKeepPuppetsWhenGreatPowerAsm], 0
        je keep_puppet_resume
        test eax, eax
        jz keep_puppet_resume
        xor eax, eax
    keep_puppet_resume:
        jmp dword ptr [g_v2dllKeepPuppetsResumeAsm]
    }
}

__declspec(naked) void __cdecl v2dll_JustifyPuppetSphereThunk() {
    // Entry is the native sphere check at 0x00927163:
    //   EAX = sphere list begin, EDX = sphere list end
    //   ECX = country array base, ESI = CMakeCBAction, [ESI+0x14] = target index
    // Let a vassal/substate through. For every other country run the native
    // loop at 0x00927170 and let it decide (including its own rejection).
    // The shared reject label 0x00927180 must not be hooked: later branches
    // reach it with ECX holding a CCountry and, at 0x009271FA, with ESI = 0.
    __asm {
        cmp eax, edx
        je justify_puppet_sphere_allow
        push eax
        mov eax, dword ptr [esi + 14h]
        mov eax, dword ptr [ecx + eax*4]
        test eax, eax
        je justify_puppet_sphere_native
        cmp byte ptr [eax + 0CF5h], 0
        jne justify_puppet_sphere_allow_pop
        cmp byte ptr [eax + 0CF4h], 0
        jne justify_puppet_sphere_allow_pop
    justify_puppet_sphere_native:
        pop eax
        mov edi, dword ptr [esi + 14h]
        jmp dword ptr [g_v2dllJustifyPuppetLoopAsm]
    justify_puppet_sphere_allow_pop:
        pop eax
    justify_puppet_sphere_allow:
        jmp dword ptr [g_v2dllJustifyPuppetAllowAsm]
    }
}

// The three Great Power eligibility thunks replace native CMP instructions.
// They return flags for the existing JLE/JG: EAX=1 means eligible, EAX=0 means
// ineligible. EAX (and ECX for the vacancy site) are preserved so the native
// code that follows still sees its original registers.
__declspec(naked) void __cdecl v2dll_GreatPowerMainEligibilityThunk() {
    // VA 0x0068D640: country in EDI, native CMP country+0xE4C, ECX (=1).
    __asm {
        push eax
        cmp dword ptr [edi + 0CFCh], 0
        jne gp_main_ineligible
        cmp dword ptr [edi + 0E4Ch], 1
        jle gp_main_ineligible
        mov eax, 1
        jmp gp_main_set_flags
    gp_main_ineligible:
        xor eax, eax
    gp_main_set_flags:
        cmp eax, 0
        pop eax
        ret
    }
}

__declspec(naked) void __cdecl v2dll_GreatPowerCandidateEligibilityThunk() {
    // VA 0x0068C6C3: country in ESI, native CMP country+0xE4C, EDI (=1).
    __asm {
        push eax
        cmp dword ptr [esi + 0CFCh], 0
        jne gp_candidate_ineligible
        cmp dword ptr [esi + 0E4Ch], 1
        jle gp_candidate_ineligible
        mov eax, 1
        jmp gp_candidate_set_flags
    gp_candidate_ineligible:
        xor eax, eax
    gp_candidate_set_flags:
        cmp eax, 0
        pop eax
        ret
    }
}

__declspec(naked) void __cdecl v2dll_GreatPowerVacancyEligibilityThunk() {
    // VA 0x0068D845: country in EAX, native CMP country+0xE4C, 1.
    __asm {
        push ecx
        push eax
        mov ecx, eax
        cmp dword ptr [ecx + 0CFCh], 0
        jne gp_vacancy_ineligible
        cmp dword ptr [ecx + 0E4Ch], 1
        jle gp_vacancy_ineligible
        mov eax, 1
        jmp gp_vacancy_set_flags
    gp_vacancy_ineligible:
        xor eax, eax
    gp_vacancy_set_flags:
        cmp eax, 0
        pop eax
        pop ecx
        ret
    }
}

// The five window builders enter with the scaled GREAT_NATIONS_COUNT in ECX and
// expect the native signed-division sequence to leave EAX=EDX=count/1000. Return
// min(count/1000, 8) in EAX while preserving ECX and the native EDX value.
__declspec(naked) void __cdecl v2dll_GreatPowerCountLimitThunk() {
    __asm {
        push ecx
        mov eax, ecx
        cdq
        mov ecx, 1000
        idiv ecx
        mov ecx, eax
        cmp eax, 8
        jle gp_count_limit_done
        mov eax, 8
    gp_count_limit_done:
        mov edx, ecx
        pop ecx
        ret
    }
}

// FUN_00627580 runs the native division first and leaves count/1000 in EDX. This
// thunk replaces only the seven-byte ESI tail (MOV ESI,EDX; SHR ESI,31; ADD
// ESI,EDX), reproducing it and then clamping ESI to the eight controls that
// exist. Only ESI is touched; the following instruction overwrites the flags.
__declspec(naked) void __cdecl v2dll_GreatPowerCountEsiLimitThunk() {
    __asm {
        mov esi, edx
        shr esi, 31
        add esi, edx
        cmp esi, 8
        jle gp_count_esi_limit_done
        mov esi, 8
    gp_count_esi_limit_done:
        ret
    }
}

// FUN_00627580 non-Great-Power branch: the seven-byte store of the vector size
// to [esp+80h] is replaced by a CALL. The CALL pushes the return address, so the
// original slot is [esp+84h] inside this thunk. Clamp EAX (and therefore the
// stored bound) to the eight nongp_country_opinion controls that exist.
__declspec(naked) void __cdecl v2dll_GreatPowerNonGpCountLimitThunk() {
    __asm {
        cmp eax, 8
        jle gp_nongp_count_limit_done
        mov eax, 8
    gp_nongp_count_limit_done:
        mov dword ptr [esp + 84h], eax
        ret
    }
}

// EconomyManager_RebuildEconomicLists stores count/1000 at [esp+10h] and then
// loads the Great Power vector end from [EBX+4]. The seven-byte patch replaces
// both instructions, so this thunk reproduces the store at [esp+14h] (the CALL
// pushed a return address) and the MOV from [EBX+4], then returns onto the two
// NOPs that precede the native CMP ESI,EAX. Raise the count to the configured
// floor but never lower a larger native value.
__declspec(naked) void __cdecl v2dll_GreatPowerCountFloorThunk() {
    __asm {
        cmp eax, dword ptr [g_v2dllGreatNationsCountFloor]
        jae gp_count_floor_done
        mov eax, dword ptr [g_v2dllGreatNationsCountFloor]
    gp_count_floor_done:
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [ebx + 4]
        ret
    }
}

// FUN_006F3C70 prologue: PUSH ESI; XOR EBX,EBX; XOR ESI,ESI, then use ECX as
// the sort_by_gpflag loop bound. Keep the original three instructions and clamp
// ECX to eight before the bound is stored.
//
// The native PUSH ESI is a real prologue save that the function later pops, so
// the thunk cannot simply push ESI and RET: the RET would pop ESI instead of
// the call return address. Reuse EDX (dead at this site until it is reloaded
// from [EBP+8] later) to hold the return address while the saved ESI is placed
// in the call's return-address slot:
//   pop edx            ; edx = return address, esp = S
//   push esi           ; esp = S-4, [S-4] = original ESI (prologue save)
//   xor ebx, ebx
//   xor esi, esi
//   clamp ecx
//   push edx           ; esp = S-8, [S-8] = return address
//   ret                ; esp = S-4, [S-4] = saved ESI, return to caller
__declspec(naked) void __cdecl v2dll_GreatPowerFlagLoopEcxThunk() {
    __asm {
        pop edx
        push esi
        xor ebx, ebx
        xor esi, esi
        cmp ecx, 8
        jle gp_flag_ecx_limit_done
        mov ecx, 8
    gp_flag_ecx_limit_done:
        push edx
        ret
    }
}

// FUN_00625000 prologue: SAR EDX,2; XOR EBX,EBX, then use EDX as the
// sort_by_gpflag loop bound. Keep the original instructions and clamp EDX.
__declspec(naked) void __cdecl v2dll_GreatPowerFlagLoopEdxThunk() {
    __asm {
        sar edx, 2
        xor ebx, ebx
        cmp edx, 8
        jle gp_flag_edx_limit_done
        mov edx, 8
    gp_flag_edx_limit_done:
        ret
    }
}

int __cdecl v2dll_AiTargetMembershipLookup(uint32_t owner, uint32_t targetIndex) {
    return AiTargetMembershipLookup(owner, targetIndex);
}

__declspec(naked) void __cdecl v2dll_AiTargetMembershipThunk() {
    // At 0x84B2CB: EBX is the owner country, EDI the candidate index, ECX its tag.
    // Return 1 (present), 0 (absent), or -1 (unsafe snapshot; use vanilla search).
    __asm {
        mov dword ptr [esp + 28h], ecx
        pushfd
        pushad
        push edi
        push ebx
        call v2dll_AiTargetMembershipLookup
        add esp, 8
        mov dword ptr [esp + 1Ch], eax
        popad
        popfd
        cmp eax, -1
        je membership_fallback_search
        test eax, eax
        jnz membership_found
        jmp dword ptr [g_v2dllAiTargetFallbackAsm]
    membership_fallback_search:
        mov eax, dword ptr [ebx + 4A4h]
        jmp dword ptr [g_v2dllAiTargetSearchAsm]
    membership_found:
        mov edx, edi
        jmp dword ptr [g_v2dllAiTargetFoundAsm]
    }
}

__declspec(naked) void __cdecl v2dll_PopResetPrefetchThunk() {
    // The native routine receives the pop pointer in EAX and returns it there.
    // Preserve all registers/flags around the optional hint, then tail-call it.
    __asm {
        pushfd
        pushad
        push eax
        call dword ptr [g_v2dllPopResetPrefetchHelperAsm]
        add esp, 4
        popad
        popfd
        jmp dword ptr [g_v2dllPopResetOriginalAsm]
    }
}

void __cdecl v2dll_LogSuppressedMapScene() {
    const LONG count = InterlockedIncrement(&g_mapSceneSuppressedFrames);
    if (count == 1 || (count % 5000) == 0) {
        char line[192] = {};
        _snprintf_s(line, sizeof(line), _TRUNCATE,
                    "SKIP Render_MapFrame scene batch pass; suppressed_frames=%ld\r\n",
                    static_cast<long>(count));
        WriteSkipLogLine(line);
        if (g_log) g_log("v2dll_country_daily_optimizer: %s", line);
    }
}

__declspec(naked) void __cdecl v2dll_MapSceneCallThunk() {
    // This native call carries its renderer context in volatile registers.
    // Preserve flags/registers exactly and tail-jump to the original when on.
    __asm {
        pushfd
        cmp dword ptr [g_v2dllSkipMapSceneAsm], 0
        jne skip_map_scene
        popfd
        jmp dword ptr [g_v2dllMapSceneOriginalAsm]
    skip_map_scene:
        pushad
        call v2dll_LogSuppressedMapScene
        popad
        popfd
        ret
    }
}

// fire_on_time candidate-gate thunks. Entry is the replaced JZ in
// FUN_008A78D0: EDI = event, AL = trigger result. Returning with `ret` lands on
// the NOP and then on the native append path; the skip label is the loop
// increment. Every register and flag is preserved around the helper.
__declspec(naked) void __cdecl v2dll_EventCountryCandidateThunk() {
    __asm {
        pushfd
        pushad
        movzx eax, al
        push eax
        push edi
        call v2dll_EventCandidateShouldAppend
        add esp, 8
        mov dword ptr [esp + 1Ch], eax
        popad
        popfd
        test eax, eax
        jz event_country_candidate_skip
        ret
    event_country_candidate_skip:
        add esp, 4
        jmp dword ptr [g_v2dllEventCountrySkipAsm]
    }
}

__declspec(naked) void __cdecl v2dll_EventProvinceCandidateThunk() {
    __asm {
        pushfd
        pushad
        movzx eax, al
        push eax
        push edi
        call v2dll_EventCandidateShouldAppend
        add esp, 8
        mov dword ptr [esp + 1Ch], eax
        popad
        popfd
        test eax, eax
        jz event_province_candidate_skip
        ret
    event_province_candidate_skip:
        add esp, 4
        jmp dword ptr [g_v2dllEventProvinceSkipAsm]
    }
}

// guard_missing_modifiers effect tooltips. The native tooltip dereferences the
// modifier to print its name; when the set does not exist the pointer is null.
// The guard writes INVALID MODIFIERS, frees the by-value std::string argument
// exactly as the native "nothing to say" path does, and returns the out string.
// The native execute slots are already null-safe, so they are left untouched.
__declspec(naked) void __cdecl v2dll_AddProvinceModifierTooltipGuard() {
    __asm {
        cmp dword ptr [ecx + 24h], 0
        jne add_province_modifier_tooltip_pass
        pushfd
        pushad
        push dword ptr [esp + 28h]
        call v2dll_WriteInvalidModifiers
        add esp, 4
        popad
        popfd
        cmp dword ptr [esp + 20h], 16
        jb add_province_modifier_tooltip_done
        push dword ptr [esp + 0Ch]
        call dword ptr [g_v2dllModifierDeleteAsm]
        add esp, 4
    add_province_modifier_tooltip_done:
        mov eax, dword ptr [esp + 4]
        ret 28h
    add_province_modifier_tooltip_pass:
        jmp dword ptr [g_v2dllAddProvinceTooltipOriginal]
    }
}

__declspec(naked) void __cdecl v2dll_AddCountryModifierTooltipGuard() {
    __asm {
        cmp dword ptr [ecx + 24h], 0
        jne add_country_modifier_tooltip_pass
        pushfd
        pushad
        push dword ptr [esp + 28h]
        call v2dll_WriteInvalidModifiers
        add esp, 4
        popad
        popfd
        cmp dword ptr [esp + 20h], 16
        jb add_country_modifier_tooltip_done
        push dword ptr [esp + 0Ch]
        call dword ptr [g_v2dllModifierDeleteAsm]
        add esp, 4
    add_country_modifier_tooltip_done:
        mov eax, dword ptr [esp + 4]
        ret 28h
    add_country_modifier_tooltip_pass:
        jmp dword ptr [g_v2dllAddCountryTooltipOriginal]
    }
}

__declspec(naked) void __cdecl v2dll_RemoveProvinceModifierTooltipGuard() {
    __asm {
        cmp dword ptr [ecx + 20h], 0
        jne remove_province_modifier_tooltip_pass
        pushfd
        pushad
        push dword ptr [esp + 28h]
        call v2dll_WriteInvalidModifiers
        add esp, 4
        popad
        popfd
        cmp dword ptr [esp + 20h], 16
        jb remove_province_modifier_tooltip_done
        push dword ptr [esp + 0Ch]
        call dword ptr [g_v2dllModifierDeleteAsm]
        add esp, 4
    remove_province_modifier_tooltip_done:
        mov eax, dword ptr [esp + 4]
        ret 28h
    remove_province_modifier_tooltip_pass:
        jmp dword ptr [g_v2dllRemoveProvinceTooltipOriginal]
    }
}

__declspec(naked) void __cdecl v2dll_RemoveCountryModifierTooltipGuard() {
    __asm {
        cmp dword ptr [ecx + 20h], 0
        jne remove_country_modifier_tooltip_pass
        pushfd
        pushad
        push dword ptr [esp + 28h]
        call v2dll_WriteInvalidModifiers
        add esp, 4
        popad
        popfd
        cmp dword ptr [esp + 20h], 16
        jb remove_country_modifier_tooltip_done
        push dword ptr [esp + 0Ch]
        call dword ptr [g_v2dllModifierDeleteAsm]
        add esp, 4
    remove_country_modifier_tooltip_done:
        mov eax, dword ptr [esp + 4]
        ret 28h
    remove_country_modifier_tooltip_pass:
        jmp dword ptr [g_v2dllRemoveCountryTooltipOriginal]
    }
}

// The two trigger tooltips have no by-value string; they just return the out
// string with RET 0x10.
__declspec(naked) void __cdecl v2dll_CountryModifierTriggerTooltipGuard() {
    __asm {
        cmp dword ptr [ecx + 1Ch], 0
        jne country_modifier_trigger_tooltip_pass
        pushfd
        pushad
        push dword ptr [esp + 28h]
        call v2dll_WriteInvalidModifiers
        add esp, 4
        popad
        popfd
        mov eax, dword ptr [esp + 4]
        ret 10h
    country_modifier_trigger_tooltip_pass:
        jmp dword ptr [g_v2dllCountryModifierTriggerTooltipOriginal]
    }
}

__declspec(naked) void __cdecl v2dll_ProvinceModifierTriggerTooltipGuard() {
    __asm {
        cmp dword ptr [ecx + 1Ch], 0
        jne province_modifier_trigger_tooltip_pass
        pushfd
        pushad
        push dword ptr [esp + 28h]
        call v2dll_WriteInvalidModifiers
        add esp, 4
        popad
        popfd
        mov eax, dword ptr [esp + 4]
        ret 10h
    province_modifier_trigger_tooltip_pass:
        jmp dword ptr [g_v2dllProvinceModifierTriggerTooltipOriginal]
    }
}

bool InstallEventFireOnTime(uintptr_t imageBase) {
    if (!imageBase) return false;
    static const unsigned char countryExpected[6] = {0x0F, 0x84, 0xBE, 0x00, 0x00, 0x00};
    static const unsigned char provinceExpected[6] = {0x0F, 0x84, 0xBD, 0x00, 0x00, 0x00};
    g_v2dllEventCountrySkipAsm = imageBase + kEventCountrySkipRva;
    g_v2dllEventProvinceSkipAsm = imageBase + kEventProvinceSkipRva;

    const int64_t countryDelta =
        static_cast<int64_t>(reinterpret_cast<uintptr_t>(&v2dll_EventCountryCandidateThunk)) -
        static_cast<int64_t>(imageBase + kEventCountryGateRva + 5);
    const int64_t provinceDelta =
        static_cast<int64_t>(reinterpret_cast<uintptr_t>(&v2dll_EventProvinceCandidateThunk)) -
        static_cast<int64_t>(imageBase + kEventProvinceGateRva + 5);
    if (countryDelta < INT32_MIN || countryDelta > INT32_MAX ||
        provinceDelta < INT32_MIN || provinceDelta > INT32_MAX) {
        if (g_log) {
            g_log("fire_on_time: candidate gate jump out of range; native monthly candidate rebuild retained");
        }
        return false;
    }

    unsigned char countryReplacement[6] = {0xE8, 0, 0, 0, 0, 0x90};
    unsigned char provinceReplacement[6] = {0xE8, 0, 0, 0, 0, 0x90};
    const int32_t country32 = static_cast<int32_t>(countryDelta);
    const int32_t province32 = static_cast<int32_t>(provinceDelta);
    memcpy(countryReplacement + 1, &country32, sizeof(country32));
    memcpy(provinceReplacement + 1, &province32, sizeof(province32));

    const bool country = PatchBytes(imageBase, kEventCountryGateRva, countryExpected,
                                    countryReplacement, sizeof(countryReplacement), "fire_on_time");
    const bool province = PatchBytes(imageBase, kEventProvinceGateRva, provinceExpected,
                                     provinceReplacement, sizeof(provinceReplacement), "fire_on_time");
    if (country != province && g_log) {
        g_log("fire_on_time: partial install (country=%u province=%u); the native gate stays on the failed side",
              static_cast<unsigned>(country), static_cast<unsigned>(province));
    }
    return country || province;
}

bool InstallMissingModifierGuard(uintptr_t imageBase) {
    if (!imageBase) return false;
    g_gameImageBase = imageBase;
    g_v2dllModifierDeleteAsm = imageBase + kOperatorDeleteRva;
    g_v2dllAddProvinceTooltipOriginal = imageBase + kEffectAddProvinceTooltipRva;
    g_v2dllAddCountryTooltipOriginal = imageBase + kEffectAddCountryTooltipRva;
    g_v2dllRemoveProvinceTooltipOriginal = imageBase + kEffectRemoveProvinceTooltipRva;
    g_v2dllRemoveCountryTooltipOriginal = imageBase + kEffectRemoveCountryTooltipRva;
    g_v2dllCountryModifierTriggerTooltipOriginal = imageBase + kTriggerHasCountryModifierTooltipRva;
    g_v2dllProvinceModifierTriggerTooltipOriginal = imageBase + kTriggerHasProvinceModifierTooltipRva;

    const bool addProvince = PatchVtableAbsolute(
        imageBase, kEffectAddProvinceVtRva + kEffectTooltipSlot, g_v2dllAddProvinceTooltipOriginal,
        reinterpret_cast<uintptr_t>(&v2dll_AddProvinceModifierTooltipGuard), "add_province_modifier");
    const bool addCountry = PatchVtableAbsolute(
        imageBase, kEffectAddCountryVtRva + kEffectTooltipSlot, g_v2dllAddCountryTooltipOriginal,
        reinterpret_cast<uintptr_t>(&v2dll_AddCountryModifierTooltipGuard), "add_country_modifier");
    const bool removeProvince = PatchVtableAbsolute(
        imageBase, kEffectRemoveProvinceVtRva + kEffectTooltipSlot, g_v2dllRemoveProvinceTooltipOriginal,
        reinterpret_cast<uintptr_t>(&v2dll_RemoveProvinceModifierTooltipGuard), "remove_province_modifier");
    const bool removeCountry = PatchVtableAbsolute(
        imageBase, kEffectRemoveCountryVtRva + kEffectTooltipSlot, g_v2dllRemoveCountryTooltipOriginal,
        reinterpret_cast<uintptr_t>(&v2dll_RemoveCountryModifierTooltipGuard), "remove_country_modifier");
    const bool hasCountry = PatchVtableAbsolute(
        imageBase, kTriggerHasCountryModifierVtRva + kTriggerTooltipSlot,
        g_v2dllCountryModifierTriggerTooltipOriginal,
        reinterpret_cast<uintptr_t>(&v2dll_CountryModifierTriggerTooltipGuard), "has_country_modifier");
    const bool hasProvince = PatchVtableAbsolute(
        imageBase, kTriggerHasProvinceModifierVtRva + kTriggerTooltipSlot,
        g_v2dllProvinceModifierTriggerTooltipOriginal,
        reinterpret_cast<uintptr_t>(&v2dll_ProvinceModifierTriggerTooltipGuard), "has_province_modifier");
    if (g_log) {
        g_log("guard_missing_modifiers: slots add_province=%u add_country=%u remove_province=%u "
              "remove_country=%u has_country=%u has_province=%u",
              static_cast<unsigned>(addProvince), static_cast<unsigned>(addCountry),
              static_cast<unsigned>(removeProvince), static_cast<unsigned>(removeCountry),
              static_cast<unsigned>(hasCountry), static_cast<unsigned>(hasProvince));
    }
    return addProvince || addCountry || removeProvince || removeCountry || hasCountry || hasProvince;
}
}

static bool InstallDailyHotspotHooks(
    uintptr_t imageBase, const char* modFolder, void (__cdecl* logFunction)(const char*, ...)) {
    const bool profileEnabled = IsEnabled(kProfileVariable);
    const bool prefetchEnvironmentEnabled = IsEnabled(kPrefetchVariable);
    const bool livingOnlyPrefetch = IsEnabled(kLivingOnlyVariable);
    if (!imageBase || !logFunction) {
        return false;
    }

    g_log = logFunction;
    if (!LoadTextOptions(modFolder, logFunction)) {
        return false;
    }
    if (g_disableLogging) {
        g_log = nullptr;
        logFunction = &DiscardPluginLog;
    }
    const bool prefetchEnabled = prefetchEnvironmentEnabled || g_prefetchCountryRelationsFromIni;
    if (!profileEnabled && !prefetchEnabled && !g_skipEmptyDailyUpdate && !g_skipEmptyPrePass &&
        !g_cleanupArmiesOfLandlessCountries &&
        g_renderThreadCore == 0 &&
        g_aiThreadCore == 0 &&
        !g_prefetchPopResetChain &&
        !g_prefetchPopCulture &&
        !g_prefetchPopReligion &&
        !g_prefetchCountryRelationsFromIni &&
        !g_optimizeAiTargetLookup &&
        !g_keepPuppetsWhenGreatPowers &&
        !g_blockPuppetsFromGreatPowers &&
        !g_cancelWarsWithMissingCountries &&
        !g_dateTrigger &&
        !g_fireOnTime &&
        !g_guardMissingModifiers &&
        g_greatNationsCountOverride <= 8 &&
        g_eventScanIntervalDays == 2 &&
        !g_disableMap3DSceneRender) {
        logFunction("v2dll_country_daily_optimizer: hooks disabled by config/environment");
        return true;
    }
    if (profileEnabled &&
        (!QueryPerformanceFrequency(&g_frequency) || g_frequency.QuadPart <= 0)) {
        logFunction("Country_DailyUpdate profiler unavailable: QueryPerformanceFrequency failed");
        return false;
    }

    g_profileEnabled = profileEnabled;
    g_prefetchEnabled = prefetchEnabled;
    g_livingOnlyPrefetch = livingOnlyPrefetch;
    g_worldGlobal = imageBase + kWorldGlobalRva;
    g_countryManagerGlobal = imageBase + kCountryManagerGlobalRva;
    g_gameImageBase = imageBase;

    bool installed = false;
    if (g_keepPuppetsWhenGreatPowers) {
        if (InstallKeepPuppetsWhenGreatPowers(imageBase)) {
            installed = true;
            logFunction("Great Power satellite retention installed at VA 0x%08X; GP status is retained and the overlord relation is preserved",
                        static_cast<unsigned>(imageBase + kGreatPowerPuppetCheckRva));
            WriteSkipLogLine("--- keep_puppets_when_great_powers enabled (opt-in); retains the satellite relation during Great Power promotion ---\r\n");
        } else {
            logFunction("Great Power satellite retention rejected by guarded-byte/protection check; native behavior retained");
        }
    }
    if (g_blockPuppetsFromGreatPowers) {
        if (InstallBlockPuppetsFromGreatPowers(imageBase)) {
            installed = true;
            logFunction("Great Power puppet exclusion installed at RVAs 0x%06X/0x%06X/0x%06X; overlord offset=0x%X province-count offset=0x%X; subjects cannot become Great Powers",
                        kGreatPowerMainEligibilityRva, kGreatPowerCandidateEligibilityRva,
                        kGreatPowerVacancyEligibilityRva, kCountryOverlordOffset,
                        kCountryProvinceCountOffset);
            WriteSkipLogLine("--- block_puppets_from_great_powers enabled; subjects with an overlord cannot become Great Powers ---\r\n");
        } else {
            logFunction("Great Power puppet exclusion rejected by guarded-byte/protection check; native behavior retained");
        }
    }
    if (g_greatNationsCountOverride > 8) {
        if (InstallGreatPowerDisplayLimit(imageBase)) {
            installed = true;
            logFunction("Great Power display limit installed for GREAT_NATIONS_COUNT=%lu (window limit=%u); GP 9+ stay active but are hidden in the diplomacy/production Great Power lists",
                        static_cast<unsigned long>(g_greatNationsCountOverride), kGreatPowerDisplayLimit);
            WriteSkipLogLine("--- great_nations_count_override > 8; diplomacy/production windows show only the first 8 Great Powers ---\r\n");
            if (InstallGreatPowerCountFloor(imageBase)) {
                installed = true;
                logFunction("Great Power count floor installed at RVA 0x%06X; the economic rebuild retains at least %lu Great Powers even if defines.lua is not updated",
                            kGreatPowerCountFloorRva, static_cast<unsigned long>(g_greatNationsCountOverride));
                WriteSkipLogLine("--- Great Power count floor enabled; the economic rebuild keeps at least the configured number of Great Powers ---\r\n");
            } else {
                logFunction("Great Power count floor rejected by guarded-byte/protection check; native GREAT_NATIONS_COUNT retained");
            }
        } else {
            logFunction("Great Power display limit rejected by guarded-byte/protection check; set great_nations_count_override to 8 or lower to avoid the window crash");
        }
    }
    if (g_eventScanIntervalDays == 4) {
        if (InstallFourDayEventScan(imageBase)) {
            installed = true;
            logFunction("EventManager_DailyScan interval set to 4 days; event mean-time multipliers compensated");
            WriteSkipLogLine("--- EventManager_DailyScan interval=4 days (opt-in); some non-MTTH events can be delayed and RNG order changes ---\r\n");
        } else {
            logFunction("Four-day event scan rejected before writing: guarded bytes/protection check failed; native 2-day scan retained");
        }
    }
    if (g_prefetchPopResetChain || g_prefetchPopCulture || g_prefetchPopReligion) {
        static const unsigned char popResetCallBytes[5] = {0xE8, 0x5B, 0x4F, 0x4A, 0x00};
        uintptr_t originalPopReset = 0;
        if (PatchCall(imageBase, kPopResetCallRva, kPopResetRva, popResetCallBytes,
                      reinterpret_cast<uintptr_t>(&v2dll_PopResetPrefetchThunk),
                      &originalPopReset)) {
            g_v2dllPopResetOriginalAsm = originalPopReset;
            installed = true;
            logFunction("Pop cache prefetch installed at FUN_004B9C60: reset_chain=%u culture=%u religion=%u",
                        static_cast<unsigned>(g_prefetchPopResetChain),
                        static_cast<unsigned>(g_prefetchPopCulture),
                        static_cast<unsigned>(g_prefetchPopReligion));
            WriteSkipLogLine("--- Pop cache prefetch enabled (opt-in; reset/culture/religion settings are independent) ---\r\n");
        } else {
            logFunction("Pop reset chain prefetch rejected by guarded CALL check; native pop traversal retained");
        }
    }
    if (g_optimizeAiTargetLookup) {
        if (InstallAiTargetLookupOptimization(imageBase)) {
            installed = true;
            logFunction("AI_TargetScan indexed membership lookup installed at VA 0x%08X; native candidate logic retained",
                        static_cast<unsigned>(imageBase + kAiTargetScanRva));
            WriteSkipLogLine("--- AI_TargetScan indexed membership lookup enabled (opt-in; native candidate logic retained) ---\r\n");
        } else {
            g_originalAiTargetScan = nullptr;
            logFunction("AI_TargetScan lookup optimization rejected by guarded-byte check; native AI scan retained");
        }
    }
    if (g_aiThreadCore > 0) {
        const DWORD_PTR requestedMask = static_cast<DWORD_PTR>(1) << (g_aiThreadCore - 1);
        DWORD_PTR processMask = 0, systemMask = 0;
        if (!GetProcessAffinityMask(GetCurrentProcess(), &processMask, &systemMask) ||
            (processMask & requestedMask) == 0) {
            g_aiAffinityMask = 0;
            logFunction("AI_FrameUpdate logical processor %lu is unavailable in the process affinity mask; native scheduling retained",
                        static_cast<unsigned long>(g_aiThreadCore));
        } else {
            g_aiAffinityMask = requestedMask;
            if (InstallAiFrameAffinityHook(imageBase)) {
                installed = true;
                logFunction("AI_FrameUpdate pinned temporarily to logical processor %lu; the game thread affinity is restored after each call",
                            static_cast<unsigned long>(g_aiThreadCore));
                WriteSkipLogLine("--- AI_FrameUpdate temporary thread affinity enabled; simulation remains on the game thread ---\r\n");
            } else {
                g_aiAffinityMask = 0;
                logFunction("AI_FrameUpdate affinity hook rejected by guarded prologue check; native scheduling retained");
            }
        }
    }
    if (g_renderThreadCore > 0) {
        const uint32_t maxLogicalProcessors = static_cast<uint32_t>(sizeof(DWORD_PTR) * 8);
        DWORD_PTR processMask = 0, systemMask = 0;
        bool affinityReady = false;
        if (g_renderThreadCore <= maxLogicalProcessors &&
            GetProcessAffinityMask(GetCurrentProcess(), &processMask, &systemMask)) {
            const DWORD_PTR requestedMask = static_cast<DWORD_PTR>(1) << (g_renderThreadCore - 1);
            if ((processMask & requestedMask) != 0) {
                g_renderAffinityMask = requestedMask;
                g_originalMapRender = reinterpret_cast<MapRenderFn>(imageBase + kMapRenderRva);
                static const unsigned char mapRenderBytes[5] = {0xE8, 0x24, 0x30, 0x00, 0x00};
                uintptr_t originalRender = 0;
                if (PatchCall(imageBase, kMapRenderCallRva, kMapRenderRva, mapRenderBytes,
                              reinterpret_cast<uintptr_t>(&MapRenderAffinityThunk), &originalRender)) {
                    affinityReady = true;
                    installed = true;
                    logFunction("Render_MapFrame thread affinity enabled for logical processor %lu; only the native map-render call is pinned temporarily",
                                static_cast<unsigned long>(g_renderThreadCore));
                    WriteSkipLogLine("--- Render_MapFrame temporary thread affinity enabled; simulation thread affinity is restored after rendering ---\r\n");
                } else {
                    g_originalMapRender = nullptr;
                    g_renderAffinityMask = 0;
                    logFunction("Render thread affinity hook rejected by guarded CALL check at RVA 0x%06X",
                                kMapRenderCallRva);
                }
            }
        }
        if (!affinityReady) {
            g_originalMapRender = nullptr;
            g_renderAffinityMask = 0;
            logFunction("Render thread affinity unavailable for logical processor %lu (not in process affinity mask, invalid index, or query failed); native scheduling retained",
                        static_cast<unsigned long>(g_renderThreadCore));
        }
    }

    if (g_cleanupArmiesOfLandlessCountries) {
        static const unsigned char monthlyTickBytes[5] = {0xE8, 0x0A, 0x1F, 0x00, 0x00};
        uintptr_t originalTick = 0;
        g_originalEconomyMonthlyTick = reinterpret_cast<EconomyMonthlyTickFn>(imageBase + kEconomyMonthlyTickRva);
        g_destroyArmy = reinterpret_cast<DestroyArmyFn>(imageBase + kDestroyArmyRva);
        if (PatchCall(imageBase, kDailyTickCallRva, kEconomyMonthlyTickRva, monthlyTickBytes,
                      reinterpret_cast<uintptr_t>(&EconomyMonthlyTickCleanupThunk), &originalTick)) {
            installed = true;
            logFunction("Landless-country army cleanup enabled after daily Economy_ProcessMonthlyTick; native army destructor=0x%08X",
                        static_cast<unsigned>(imageBase + kDestroyArmyRva));
            WriteSkipLogLine("--- Landless-country army cleanup enabled (opt-in); removes armies for registered countries with no provinces ---\r\n");
        } else {
            g_originalEconomyMonthlyTick = nullptr;
            g_destroyArmy = nullptr;
            logFunction("Landless army cleanup hook rejected by guarded CALL check at RVA 0x%06X",
                        kDailyTickCallRva);
        }
    }
    if (g_cancelWarsWithMissingCountries) {
        static const unsigned char warTickBytes[5] = {0xE8, 0x02, 0xE7, 0xFF, 0xFF};
        uintptr_t originalWarTick = 0;
        g_originalWarTick = reinterpret_cast<WarTickFn>(imageBase + kWarTickRva);
        g_removeWarAttacker = reinterpret_cast<WarRemoveParticipantFn>(imageBase + kWarRemoveAttackerRva);
        g_removeWarDefender = reinterpret_cast<WarRemoveParticipantFn>(imageBase + kWarRemoveDefenderRva);
        if (PatchCall(imageBase, kWarTickCallRva, kWarTickRva, warTickBytes,
                      reinterpret_cast<uintptr_t>(&WarTickCancelMissingCountriesThunk), &originalWarTick)) {
            installed = true;
            logFunction("cancel_wars_with_missing_countries: active (dead war participants are removed before the daily war tick; a war left with an empty side is cancelled by the native tick)");
            WriteSkipLogLine("--- cancel_wars_with_missing_countries enabled; wars whose side only names annexed/never-existing countries are cancelled ---\r\n");
        } else {
            g_originalWarTick = nullptr;
            g_removeWarAttacker = nullptr;
            g_removeWarDefender = nullptr;
            logFunction("cancel_wars_with_missing_countries: rejected by guarded CALL check at RVA 0x%06X; native behavior retained",
                        kWarTickCallRva);
        }
    }
    if (g_dateTrigger) {
        if (InstallDateTrigger(imageBase)) {
            installed = true;
            logFunction("date trigger active at trigger factory RVA 0x%06X; date = MM/DD/YYYY is true from that day onward",
                        kTriggerFactoryRva);
            WriteSkipLogLine("--- date trigger enabled; use date = MM/DD/YYYY in potential/allow blocks ---\r\n");
        } else {
            logFunction("date trigger rejected by guarded trigger-factory check; native behavior retained");
        }
    }
    if (g_fireOnTime) {
        if (InstallEventFireOnTime(imageBase)) {
            installed = true;
            logFunction("fire_on_time active at candidate gates RVA 0x%06X/0x%06X; date/year/month events are scanned daily instead of waiting for the next month",
                        kEventCountryGateRva, kEventProvinceGateRva);
            WriteSkipLogLine("--- fire_on_time enabled; time-gated events become eligible as soon as their date/year/month condition is reached ---\r\n");
        } else {
            logFunction("fire_on_time rejected by guarded candidate-gate check; native monthly candidate rebuild retained");
        }
    }
    if (g_guardMissingModifiers) {
        if (InstallMissingModifierGuard(imageBase)) {
            installed = true;
            logFunction("guard_missing_modifiers active; unknown modifier sets show INVALID MODIFIERS and are ignored instead of crashing the tooltip");
            WriteSkipLogLine("--- guard_missing_modifiers enabled; add/remove country/province modifier effects and has_*_modifier triggers with unknown sets are shown as INVALID MODIFIERS ---\r\n");
        } else {
            logFunction("guard_missing_modifiers rejected by vtable check; native tooltips retained");
        }
    }
    if (g_disableMap3DSceneRender) {
        // Ghidra: Render_MapFrame VA 0x006592F0 calls FUN_00999BB0 at
        // 0x006596B1. It sets an orthographic projection and submits renderer
        // batches. This suppresses the whole pass; it is NOT camera/frustum
        // culling and may remove visible map layers/effects. Keep opt-in.
        static const unsigned char mapSceneBytes[5] = {0xE8, 0xFA, 0x04, 0x34, 0x00};
        uintptr_t original = 0;
        if (PatchCall(imageBase, kMapSceneCallRva, kMapSceneRva, mapSceneBytes,
                      reinterpret_cast<uintptr_t>(&v2dll_MapSceneCallThunk), &original)) {
            g_v2dllMapSceneOriginalAsm = original;
            InterlockedExchange(&g_v2dllSkipMapSceneAsm, 1);
            installed = true;
            logFunction("Map scene batch suppression installed at CALL RVA 0x%06X; this is not camera culling",
                        kMapSceneCallRva);
            WriteSkipLogLine("--- Map scene batch suppression enabled; this is not camera culling ---\r\n");
        } else {
            logFunction("Map scene batch suppression rejected by guarded CALL check at RVA 0x%06X",
                        kMapSceneCallRva);
        }
    }

    uintptr_t original = 0;
    if (prefetchEnabled || g_skipEmptyPrePass) {
        static const unsigned char prePassBytes[5] = {0xE8, 0x5F, 0x29, 0xE8, 0xFF};
        g_originalPrePass = reinterpret_cast<CountryPrePassFn>(imageBase + kPrePassRva);
        if (PatchCall(imageBase, kPrePassCallRva, kPrePassRva, prePassBytes,
                      reinterpret_cast<uintptr_t>(&CountryPrePassPrefetchThunk), &original)) {
            installed = true;
            logFunction("Country_PrePass hook installed at CALL RVA 0x%06X; skip_empty=%u relation_prefetch=%u",
                        kPrePassCallRva, static_cast<unsigned>(g_skipEmptyPrePass),
                        static_cast<unsigned>(prefetchEnabled));
        } else {
            g_originalPrePass = nullptr;
            logFunction("Country_PrePass hook rejected by guarded CALL check at RVA 0x%06X",
                        kPrePassCallRva);
        }

    }

    if (prefetchEnabled) {
        static const unsigned char capacityBytes[5] = {0xE8, 0x68, 0xB8, 0x09, 0x00};
        original = 0;
        g_originalMarketCapacity = reinterpret_cast<MarketCapacityFn>(imageBase + kCapacityRva);
        if (PatchCall(imageBase, kCapacityCallRva, kCapacityRva, capacityBytes,
                      reinterpret_cast<uintptr_t>(&MarketCapacityPrefetchThunk), &original)) {
            installed = true;
            logFunction("FUN_00522CF0 relation prefetch installed at CALL RVA 0x%06X",
                        kCapacityCallRva);
        } else {
            g_originalMarketCapacity = nullptr;
            logFunction("Relation prefetch skipped FUN_00522CF0: guarded CALL patch rejected");
        }

        static const unsigned char countryPairBytes[5] = {0xE8, 0x12, 0x46, 0x02, 0x00};
        original = 0;
        g_originalCountryPairUpdate = reinterpret_cast<CountryPairUpdateFn>(imageBase + kCountryPairRva);
        if (PatchCall(imageBase, kCountryPairCallRva, kCountryPairRva, countryPairBytes,
                      reinterpret_cast<uintptr_t>(&CountryPairPrefetchThunk), &original)) {
            installed = true;
            logFunction("FUN_0052FCD0 country-pair prefetch installed at CALL RVA 0x%06X",
                        kCountryPairCallRva);
        } else {
            g_originalCountryPairUpdate = nullptr;
            logFunction("Country-pair prefetch skipped FUN_0052FCD0: guarded CALL patch rejected");
        }
    }

    if (prefetchEnabled || profileEnabled || g_skipEmptyDailyUpdate) {
        static const unsigned char dailyBytes[5] = {0xE8, 0xCA, 0x32, 0xE8, 0xFF};
        uintptr_t dailyOriginal = 0;
        g_original = reinterpret_cast<CountryDailyUpdateFn>(imageBase + kFunctionRva);
        if (PatchCall(imageBase, kCallRva, kFunctionRva, dailyBytes,
                      reinterpret_cast<uintptr_t>(&CountryDailyUpdateProfileThunk), &dailyOriginal)) {
            installed = true;
            logFunction("Country_DailyUpdate hook installed at CALL RVA 0x%06X; profile=%u relation_prefetch=%u living_only_prefetch=%u skip_empty=%u; report every %u calls",
                        kCallRva, static_cast<unsigned>(profileEnabled), static_cast<unsigned>(prefetchEnabled),
                        static_cast<unsigned>(livingOnlyPrefetch),
                        static_cast<unsigned>(g_skipEmptyDailyUpdate),
                        static_cast<unsigned>(kWindowSamples));
        } else {
            g_original = nullptr;
            logFunction("Country_DailyUpdate hook skipped: guarded CALL patch rejected at RVA 0x%06X",
                        kCallRva);
        }
    }
    // A version-guard rejection leaves the native game untouched; it should
    // not make the plugin loader treat initialization itself as a failure.
    return installed || g_eventScanIntervalDays == 4 || g_prefetchPopResetChain ||
           g_prefetchPopCulture || g_prefetchPopReligion ||
           g_prefetchCountryRelationsFromIni || g_optimizeAiTargetLookup ||
           g_keepPuppetsWhenGreatPowers || g_blockPuppetsFromGreatPowers ||
           g_cancelWarsWithMissingCountries || g_aiThreadCore > 0 || g_dateTrigger ||
           g_fireOnTime || g_guardMissingModifiers;
}

extern "C" __declspec(dllexport) int __cdecl V2Mod_Init(const V2ModAPI* api) {
    if (!api || api->size < sizeof(V2ModAPI) || api->apiVersion != V2MOD_API_VERSION || !api->gameBase) {
        return 0;
    }
    const bool optimizerInitialized = InstallDailyHotspotHooks(api->gameBase, api->modFolder, api->Log);

    // Install the multiplayer features from The Grand Loader in this V2DLL plugin.
    // state_checksum chains the existing daily-tick call, so the optional landless-army
    // cleanup hook above remains in the chain and still runs before the state is hashed.
    cp::hooks::set_exe_base(reinterpret_cast<const void*>(api->gameBase));
    cp::set_log(g_disableLogging ? nullptr : api->Log);
    cp::Config multiplayer = {};
    multiplayer.state_checksum = g_mpStateChecksum;
    multiplayer.oos_notice = g_mpOosNotice;
    multiplayer.fix_rng_resync = g_mpFixRngResync;
    multiplayer.sync_world_rng = g_mpSyncWorldRng;
    multiplayer.oos_test_button = g_mpOosTestButton;
    cp::features::install_state_checksum(multiplayer);
    cp::features::install_sync_check(multiplayer);
    cp::features::install_oos_notice(multiplayer);
    cp::features::install_world_rng(multiplayer);
    cp::features::install_oos_test(multiplayer);
    if (api->Log && !g_disableLogging) {
        api->Log("Multiplayer patch settings: state_checksum=%u oos_notice=%u fix_rng_resync=%u sync_world_rng=%u oos_test_button=%u",
                 static_cast<unsigned>(multiplayer.state_checksum),
                 static_cast<unsigned>(multiplayer.oos_notice),
                 static_cast<unsigned>(multiplayer.fix_rng_resync),
                 static_cast<unsigned>(multiplayer.sync_world_rng),
                 static_cast<unsigned>(multiplayer.oos_test_button));
    }

    const bool multiplayerInitialized = g_mpStateChecksum || g_mpOosNotice || g_mpFixRngResync ||
                                        g_mpSyncWorldRng || g_mpOosTestButton;

    // Puppet / vassal diplomacy. Independent of the optimizer and multiplayer
    // blocks; each [Puppets] key installs only its own guarded sites.
    const bool puppetsInitialized = InstallPuppets(api->gameBase);
    if (api->Log && !g_disableLogging) {
        api->Log("Puppet patch settings: allow_justify_puppets=%u allow_puppet_justify=%u allow_puppet_add_wargoal=%u allow_puppet_declare=%u allow_declare_puppets=%u no_puppet_war_autocancel=%u allow_peace_with_puppets=%u allow_puppet_peace=%u allow_puppet_occupations=%u allow_puppet_ai_diplomacy=%u",
                 static_cast<unsigned>(g_allowJustifyPuppets),
                 static_cast<unsigned>(g_allowPuppetJustify),
                 static_cast<unsigned>(g_allowPuppetAddWargoal),
                 static_cast<unsigned>(g_allowPuppetDeclare),
                 static_cast<unsigned>(g_allowDeclarePuppets),
                 static_cast<unsigned>(g_noPuppetWarAutocancel),
                 static_cast<unsigned>(g_allowPeaceWithPuppets),
                 static_cast<unsigned>(g_allowPuppetPeace),
                 static_cast<unsigned>(g_allowPuppetOccupations),
                 static_cast<unsigned>(g_allowPuppetAiDiplomacy));
    }
    return optimizerInitialized || multiplayerInitialized || puppetsInitialized ? 1 : 0;
}
