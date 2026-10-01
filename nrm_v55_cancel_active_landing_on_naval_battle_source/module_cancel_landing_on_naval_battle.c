#include "nrm_runtime.h"

/*
 * v55: cancel an already-started amphibious landing when the transport fleet
 * enters naval combat.
 *
 * This is deliberately NOT an order-start guard. Victoria already rejects a
 * new sea->land order while the transport fleet is in battle. The vanilla
 * loophole is that a route issued before combat continues after combat starts.
 *
 * Hook the common unit movement-update entry (EXE+0x1D25C0). Before vanilla
 * advances the route, inspect an army that already has route nodes:
 *   - it is a land army (vtable +0x38),
 *   - current province is sea,
 *   - CArmy transport fleet exists (+0x1B4 on the land-unit object returned by
 *     vtable +0x2C),
 *   - that fleet has an active CNavalCombat link at +0x74.
 * If all are true, destroy the army's current route list with the same node
 * layout/free routine used by vanilla and reset movement progress. The army
 * remains embarked; after the naval battle ends the player must issue a new
 * landing order.
 */

#define NRM_OFF_UNIT_MOVEMENT_UPDATE           0x001D25C0UL
#define NRM_OFF_UNIT_MOVEMENT_UPDATE_CONTINUE  0x001D25C6UL

#define NRM_UNIT_VT_SPECIAL_OBJECT_OFFSET       0x2CUL
#define NRM_UNIT_VT_IS_ARMY_OFFSET              0x38UL
#define NRM_UNIT_CURRENT_PROVINCE_OFFSET        0xDCUL
#define NRM_UNIT_ROUTE_HEAD_OFFSET              0xE4UL
#define NRM_UNIT_ROUTE_TAIL_OFFSET              0xE8UL
#define NRM_UNIT_ROUTE_COUNT_OFFSET             0xECUL
#define NRM_UNIT_MOVEMENT_PROGRESS_OFFSET       0xF8UL
#define NRM_UNIT_MOVEMENT_ACCUM_OFFSET          0x100UL
#define NRM_ARMY_TRANSPORT_FLEET_OFFSET         0x1B4UL
#define NRM_UNIT_BATTLE74_OFFSET                0x74UL
#define NRM_PROVINCE_DEFINITION_OFFSET          0x5CUL
#define NRM_PROVINCE_LAND_MARKER_OFFSET         0x2AUL
#define NRM_ROUTE_NODE_NEXT_OFFSET              0x08UL

typedef nrm_u8 (__thiscall *NrmUnitIsArmyFn)(void *unit);
typedef void * (__thiscall *NrmUnitSpecialObjectFn)(void *unit);

void __cdecl nrm_cancel_landing_if_naval_battle(void *unit)
{
    void **vt;
    NrmUnitIsArmyFn is_army;
    NrmUnitSpecialObjectFn get_special;
    void *army_obj;
    void *province;
    void *definition;
    void *fleet;

    if (!g_game_base || !unit) return;

    /* Fast path: most units have no movement route at all. */
    if (*(nrm_u32*)((nrm_u8*)unit + NRM_UNIT_ROUTE_COUNT_OFFSET) == 0)
        return;

    vt = *(void***)unit;
    if (!vt) return;

    is_army = (NrmUnitIsArmyFn)vt[NRM_UNIT_VT_IS_ARMY_OFFSET / 4UL];
    if (!is_army || !is_army(unit)) return;

    province = *(void**)((nrm_u8*)unit + NRM_UNIT_CURRENT_PROVINCE_OFFSET);
    if (!province) return;
    definition = *(void**)((nrm_u8*)province + NRM_PROVINCE_DEFINITION_OFFSET);
    if (!definition) return;

    /* Vanilla uses 0 for a sea province at definition+0x2A. */
    if (*(nrm_u8*)((nrm_u8*)definition + NRM_PROVINCE_LAND_MARKER_OFFSET) != 0)
        return;

    get_special = (NrmUnitSpecialObjectFn)vt[NRM_UNIT_VT_SPECIAL_OBJECT_OFFSET / 4UL];
    if (!get_special) return;
    army_obj = get_special(unit);
    if (!army_obj) return;

    fleet = *(void**)((nrm_u8*)army_obj + NRM_ARMY_TRANSPORT_FLEET_OFFSET);
    if (!fleet) return;

    /* +0x74 is the normal combat link; for a navy it points to CNavalCombat. */
    if (*(void**)((nrm_u8*)fleet + NRM_UNIT_BATTLE74_OFFSET) == (void*)0)
        return;

    /* Use Victoria's own route-list clear helper (0x9A63F0). It frees every
       node and zeros head/tail/count, so allocator semantics remain vanilla. */
    nrm_clear_unit_route_vanilla((nrm_u8*)unit + NRM_UNIT_ROUTE_HEAD_OFFSET);

    /* Match the no-active-route state used by vanilla movement processing. */
    *(nrm_u32*)((nrm_u8*)unit + NRM_UNIT_MOVEMENT_PROGRESS_OFFSET) = 0;
    *(nrm_u32*)((nrm_u8*)unit + NRM_UNIT_MOVEMENT_ACCUM_OFFSET) = 0;
}

nrm_bool __cdecl nrm_install_cancel_landing_on_naval_battle_module(void)
{
    nrm_u8 *site;
    nrm_u8 patch[6];
    nrm_u32 rel;
    static const nrm_u8 expected[6] = { 0x55, 0x8B, 0xEC, 0x83, 0xE4, 0xF8 };
    nrm_u32 i;

    if (!g_game_base) return NRM_FALSE;
    site = (nrm_u8*)g_game_base + NRM_OFF_UNIT_MOVEMENT_UPDATE;
    for (i = 0; i < 6; ++i) {
        if (site[i] != expected[i]) return NRM_FALSE;
    }

    patch[0] = 0xE9; /* JMP trampoline */
    rel = (nrm_u32)nrm_unit_movement_update_trampoline - ((nrm_u32)site + 5UL);
    *(nrm_u32*)(patch + 1) = rel;
    patch[5] = 0x90;

    if (!nrm_patch_memory(site, patch, 6)) return NRM_FALSE;
    g_nrm_feature_flags |= NRM_FEATURE_CANCEL_LANDING_NAVAL_BATTLE;
    return NRM_TRUE;
}
