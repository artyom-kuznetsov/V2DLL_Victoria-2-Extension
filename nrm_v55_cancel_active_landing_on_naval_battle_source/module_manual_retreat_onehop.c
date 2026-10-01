#include "nrm_runtime.h"

/*
 * v53 strict-adjacent manual retreat.
 *
 * Hooks only the v49-proven ROUTE2 call in unitmove_ (EXE+0x1DEF2D).
 * Outside battle the call is vanilla.  After the vanilla retreat delay:
 *   - 0x5CF450 must report at least one legal automatic retreat exit;
 *   - the player's already path-found route must contain exactly one node.
 *
 * Unlike v52, this module NEVER truncates or edits the player's route.
 * A route with two or more nodes is rejected outright.  Therefore the player
 * can retreat only when the selected destination itself is one immediate
 * neighbor according to Victoria's own movement/pathfinding graph.
 */

#define NRM_OFF_ROUTE_APPLY                 0x001D1BB0UL
#define NRM_OFF_UNITMOVE_ROUTE_CALL_2       0x001DEF2DUL
#define NRM_OFF_AUTO_RETREAT_CHOOSER        0x001CF450UL

#define NRM_UNIT_BATTLE70_OFFSET            0x70UL
#define NRM_UNIT_BATTLE74_OFFSET            0x74UL

#define NRM_ROUTE_HEAD_OFFSET               0x00UL
#define NRM_ROUTE_NODE_NEXT_OFFSET          0x08UL

typedef void (__thiscall *NrmRouteApplyFn)(void *unit, void *route, nrm_u32 flag);
typedef void * (__stdcall *NrmAutoRetreatChooserFn)(void *unit);
typedef nrm_u8 (__thiscall *NrmBattleCanRouteFn)(void *battle);

static nrm_bool nrm_manual_retreat_delay_allows(void *battle74)
{
    void **vt;
    NrmBattleCanRouteFn fn;

    if (!battle74) return NRM_FALSE;
    vt = *(void***)battle74;
    if (!vt) return NRM_FALSE;
    fn = (NrmBattleCanRouteFn)vt[0x2CUL / 4UL];
    if (!fn) return NRM_FALSE;
    return fn(battle74) ? NRM_TRUE : NRM_FALSE;
}

void __fastcall nrm_manual_retreat_onehop_wrapper(void *unit,
                                                   void *unused_edx,
                                                   void *route,
                                                   nrm_u32 flag)
{
    void *battle70;
    void *battle74;
    void *chosen;
    void *head;
    void *next;
    NrmRouteApplyFn apply;
    NrmAutoRetreatChooserFn chooser;

    (void)unused_edx;
    if (!g_game_base) return;

    apply = (NrmRouteApplyFn)((nrm_u8*)g_game_base + NRM_OFF_ROUTE_APPLY);
    if (!unit) return;

    battle70 = *(void**)((nrm_u8*)unit + NRM_UNIT_BATTLE70_OFFSET);
    battle74 = *(void**)((nrm_u8*)unit + NRM_UNIT_BATTLE74_OFFSET);

    /* Ordinary movement remains vanilla. */
    if (!battle70 && !battle74) {
        apply(unit, route, flag);
        return;
    }

    /* Only modify the exact battle form proven by the v49 trace. */
    if (!battle74) {
        apply(unit, route, flag);
        return;
    }

    /* Preserve vanilla behavior before the retreat delay expires. */
    if (!nrm_manual_retreat_delay_allows(battle74)) {
        apply(unit, route, flag);
        return;
    }

    chooser = (NrmAutoRetreatChooserFn)((nrm_u8*)g_game_base + NRM_OFF_AUTO_RETREAT_CHOOSER);
    chosen = chooser(unit);

    /* No legal automatic retreat destination => surrounded. */
    if (!chosen) return;

    /* Strict adjacency rule:
       by this point Victoria has already path-found the player's selected
       destination.  0x5D1BB0 proves route[0] is the first path node and
       node+8 is the next node.  Therefore a retreat order is accepted only
       when the route contains exactly one node.  A two-or-more-node route is
       a non-adjacent destination and is rejected instead of being truncated. */
    if (!route) return;
    head = *(void**)((nrm_u8*)route + NRM_ROUTE_HEAD_OFFSET);
    if (!head) return;
    next = *(void**)((nrm_u8*)head + NRM_ROUTE_NODE_NEXT_OFFSET);
    if (next) return;

    /* Exactly one vanilla path node: the selected retreat province is an
       immediate neighbor according to Victoria's own movement graph. */
    apply(unit, route, flag);
}

static nrm_bool nrm_manual_retreat_call_matches(nrm_u8 *site)
{
    nrm_u32 rel, target;
    if (!site || !g_game_base || site[0] != 0xE8) return NRM_FALSE;
    rel = *(nrm_u32*)(site + 1);
    target = (nrm_u32)site + 5UL + rel;
    return target == (nrm_u32)g_game_base + NRM_OFF_ROUTE_APPLY;
}

static nrm_bool nrm_manual_retreat_patch_call(nrm_u8 *site, void *wrapper)
{
    nrm_u8 patch[5];
    nrm_u32 rel;
    patch[0] = 0xE8;
    rel = (nrm_u32)wrapper - ((nrm_u32)site + 5UL);
    *(nrm_u32*)(patch + 1) = rel;
    return nrm_patch_memory(site, patch, 5);
}

nrm_bool __cdecl nrm_install_manual_retreat_onehop_module(void)
{
    nrm_u8 *site;
    if (!g_game_base) return NRM_FALSE;
    site = (nrm_u8*)g_game_base + NRM_OFF_UNITMOVE_ROUTE_CALL_2;
    if (!nrm_manual_retreat_call_matches(site)) return NRM_FALSE;
    if (!nrm_manual_retreat_patch_call(site, (void*)nrm_manual_retreat_onehop_wrapper)) return NRM_FALSE;
    g_nrm_feature_flags |= NRM_FEATURE_MANUAL_RETREAT_ONEHOP;
    return NRM_TRUE;
}
