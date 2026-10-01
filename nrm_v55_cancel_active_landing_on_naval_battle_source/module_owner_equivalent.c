#include "nrm_runtime.h"

/*
   Equivalent-aware factory owner payout.

   Vanilla 0x4CFE20 receives one fixed owner-money pool, reads
   definition+0xF0 -> owner block, owner+0x28 -> poptype index, then:
     1) sums all POP sizes of exactly that type in the state;
     2) distributes the SAME pool proportionally across those POPs.

   We preserve that function as the actual payer.  This dispatcher only
   broadens the owner set to direct CPopType::equivalent matches, splits the
   original pool exactly between compatible pop types, then invokes vanilla
   once per type using a tiny temporary definition/owner block.

   No shared Victoria definition is ever modified.
*/

#define NRM_OWNER_BLOCK_OFFSET              0xF0UL
#define NRM_OWNER_POPTYPE_INDEX_OFFSET      0x28UL
#define NRM_OWNER_ACCOUNT_FIELD_OFFSET      0x3CUL

#define NRM_POPTYPE_INDEX_OFFSET            0x28UL
#define NRM_POPTYPE_EQUIVALENT_OFFSET       0x3D4UL

#define NRM_POPTYPE_REGISTRY_PTR_OFFSET     0x00F1BB34UL
#define NRM_REGISTRY_VECTOR_BEGIN_OFFSET    0x0CUL
#define NRM_REGISTRY_VECTOR_END_OFFSET      0x10UL

#define NRM_WORLD_CONTEXT_PTR_OFFSET        0x00E588E8UL
#define NRM_WORLD_PROVINCE_ARRAY_OFFSET     0x0ACCUL
#define NRM_PROVINCE_POP_BUCKETS_OFFSET     0x0194UL
#define NRM_POPTYPE_BUCKET_STRIDE           0x10UL
#define NRM_POP_SIZE_OFFSET                 0x58UL
#define NRM_POP_NEXT_SAME_TYPE_OFFSET       0x27CUL

#define NRM_STATE_PROVINCE_BEGIN_OFFSET     0x48UL
#define NRM_STATE_PROVINCE_END_OFFSET       0x4CUL

#define NRM_OFF_GAME_SIGNED_DIV64           0x006C02A0UL
#define NRM_OFF_GAME_MUL64                  0x006C9F20UL

/* The game helpers are MSVC's callee-cleanup 64-bit helpers.  All values here
   are non-negative, so signed division has the same result as unsigned. */
typedef __int64 nrm_i64;
typedef union NrmI64Parts {
    nrm_i64 value;
    struct {
        nrm_u32 lo;
        nrm_u32 hi;
    } part;
} NrmI64Parts;

typedef nrm_i64 (__stdcall *nrm_game_div64_fn)(nrm_i64 dividend,
                                                nrm_i64 divisor);
typedef nrm_i64 (__stdcall *nrm_game_mul64_fn)(nrm_i64 left,
                                                nrm_i64 right);

static void nrm_zero_local(void *p, nrm_u32 count)
{
    nrm_u8 *d = (nrm_u8*)p;
    while (count--) *d++ = 0;
}

static nrm_u32 nrm_owner_population_for_type(void *state, nrm_u32 poptype_index)
{
    nrm_u32 *province_it;
    nrm_u32 *province_end;
    void *world;
    void **province_array;
    nrm_u32 total = 0;

    if (!g_game_base || !state) return 0;

    world = *(void**)((nrm_u8*)g_game_base + NRM_WORLD_CONTEXT_PTR_OFFSET);
    if (!world) return 0;
    province_array = *(void***)((nrm_u8*)world + NRM_WORLD_PROVINCE_ARRAY_OFFSET);
    if (!province_array) return 0;

    province_it = *(nrm_u32**)((nrm_u8*)state + NRM_STATE_PROVINCE_BEGIN_OFFSET);
    province_end = *(nrm_u32**)((nrm_u8*)state + NRM_STATE_PROVINCE_END_OFFSET);
    if (!province_it || !province_end || province_it >= province_end) return 0;

    while (province_it < province_end) {
        void *province = province_array[*province_it++];
        nrm_u8 *buckets;
        void *pop;
        if (!province) continue;

        buckets = *(nrm_u8**)((nrm_u8*)province + NRM_PROVINCE_POP_BUCKETS_OFFSET);
        if (!buckets) continue;

        pop = *(void**)(buckets + poptype_index * NRM_POPTYPE_BUCKET_STRIDE);
        while (pop) {
            /* Match vanilla's 32-bit population accumulator exactly. */
            total += *(nrm_u32*)((nrm_u8*)pop + NRM_POP_SIZE_OFFSET);
            pop = *(void**)((nrm_u8*)pop + NRM_POP_NEXT_SAME_TYPE_OFFSET);
        }
    }

    return total;
}

static nrm_bool nrm_poptype_matches_owner(void *poptype, nrm_u32 owner_index)
{
    void *equivalent;
    if (!poptype) return NRM_FALSE;

    if (*(nrm_u32*)((nrm_u8*)poptype + NRM_POPTYPE_INDEX_OFFSET) == owner_index)
        return NRM_TRUE;

    equivalent = *(void**)((nrm_u8*)poptype + NRM_POPTYPE_EQUIVALENT_OFFSET);
    if (!equivalent) return NRM_FALSE;

    return *(nrm_u32*)((nrm_u8*)equivalent + NRM_POPTYPE_INDEX_OFFSET) == owner_index
        ? NRM_TRUE : NRM_FALSE;
}


/* Return one combined owner population for production-bonus calculations.
   Vanilla reads state->poptype_counts[owner_index] exactly once.  We preserve
   that architecture and only broaden the one count to:

       canonical owner + every direct equivalent-to-owner pop type

   This is deliberately NOT a per-type effect loop: the original owner bonus
   formula runs once on this aggregate, so equivalent owner bonuses can never
   stack on top of the canonical owner's bonus. */
nrm_u32 __cdecl nrm_owner_equivalent_population_from_state(void *state,
                                                            void *definition)
{
    void *owner;
    nrm_u32 owner_index;
    nrm_u32 *counts;
    void *registry;
    void **begin;
    void **end;
    void **it;
    nrm_u32 total = 0;

    if (!g_game_base || !state || !definition) return 0;

    owner = *(void**)((nrm_u8*)definition + NRM_OWNER_BLOCK_OFFSET);
    if (!owner) return 0;
    owner_index = *(nrm_u32*)((nrm_u8*)owner + NRM_OWNER_POPTYPE_INDEX_OFFSET);

    counts = *(nrm_u32**)((nrm_u8*)state + 0x118UL);
    if (!counts) return 0;

    registry = *(void**)((nrm_u8*)g_game_base + NRM_POPTYPE_REGISTRY_PTR_OFFSET);
    if (!registry) return counts[owner_index];

    begin = *(void***)((nrm_u8*)registry + NRM_REGISTRY_VECTOR_BEGIN_OFFSET);
    end = *(void***)((nrm_u8*)registry + NRM_REGISTRY_VECTOR_END_OFFSET);
    if (!begin || !end || end < begin) return counts[owner_index];

    for (it = begin; it < end; ++it) {
        void *poptype = *it;
        nrm_u32 index;
        if (!nrm_poptype_matches_owner(poptype, owner_index)) continue;
        index = *(nrm_u32*)((nrm_u8*)poptype + NRM_POPTYPE_INDEX_OFFSET);
        total += counts[index];
    }
    return total;
}

/* Exact floor(total_money * type_population / total_population), without CRT
   arithmetic helpers and without risking a 64-bit multiplication overflow:

      total = q*D + r
      floor(total*P/D) = q*P + floor(r*P/D)

   q*P <= total because P <= D; r and P are 32-bit population values.
   Victoria's own _alldiv/_allmul helpers are reused so the DLL remains CRT-free. */
static nrm_i64 nrm_owner_compute_share(nrm_i64 total_money,
                                        nrm_u32 type_population,
                                        nrm_u32 total_population)
{
    nrm_game_div64_fn div64;
    nrm_game_mul64_fn mul64;
    nrm_i64 divisor;
    nrm_i64 pop;
    nrm_i64 q;
    nrm_i64 used;
    nrm_i64 remainder;
    nrm_i64 first;
    nrm_i64 second;

    if (!g_game_base || !type_population || !total_population)
        return (nrm_i64)0;

    div64 = (nrm_game_div64_fn)((nrm_u8*)g_game_base + NRM_OFF_GAME_SIGNED_DIV64);
    mul64 = (nrm_game_mul64_fn)((nrm_u8*)g_game_base + NRM_OFF_GAME_MUL64);
    divisor = (nrm_i64)(nrm_u32)total_population;
    pop = (nrm_i64)(nrm_u32)type_population;

    q = div64(total_money, divisor);
    used = mul64(q, divisor);
    remainder = total_money - used;

    first = mul64(q, pop);
    second = div64(mul64(remainder, pop), divisor);
    return first + second;
}

static nrm_bool nrm_call_vanilla_for_owner_type(void *state,
                                                 nrm_u32 owner_type_index,
                                                 nrm_u32 owner_account_field,
                                                 nrm_i64 money)
{
    nrm_u8 fake_definition[0xF4];
    nrm_u8 fake_owner[0x40];
    NrmI64Parts amount;

    nrm_zero_local(fake_definition, (nrm_u32)sizeof(fake_definition));
    nrm_zero_local(fake_owner, (nrm_u32)sizeof(fake_owner));

    *(void**)(fake_definition + NRM_OWNER_BLOCK_OFFSET) = fake_owner;
    *(nrm_u32*)(fake_owner + NRM_OWNER_POPTYPE_INDEX_OFFSET) = owner_type_index;
    *(nrm_u32*)(fake_owner + NRM_OWNER_ACCOUNT_FIELD_OFFSET) = owner_account_field;

    amount.value = money;
    return nrm_owner_payout_call_vanilla(fake_definition,
                                         state,
                                         amount.part.lo,
                                         amount.part.hi);
}

nrm_bool __cdecl nrm_owner_payout_dispatch(void *definition,
                                           void *state,
                                           nrm_u32 money_lo,
                                           nrm_u32 money_hi)
{
    void *owner;
    nrm_u32 owner_index;
    nrm_u32 owner_account_field;
    void *registry;
    void **begin;
    void **end;
    void **it;
    nrm_u32 total_population = 0;
    nrm_u32 eligible_type_count = 0;
    nrm_u32 noncanonical_type_count = 0;
    NrmI64Parts total_money;
    nrm_i64 remaining_money;
    nrm_u32 types_left;
    nrm_bool any_paid = NRM_FALSE;

    if (!g_game_base || !definition || !state)
        return nrm_owner_payout_call_vanilla(definition, state, money_lo, money_hi);

    owner = *(void**)((nrm_u8*)definition + NRM_OWNER_BLOCK_OFFSET);
    if (!owner)
        return nrm_owner_payout_call_vanilla(definition, state, money_lo, money_hi);

    owner_index = *(nrm_u32*)((nrm_u8*)owner + NRM_OWNER_POPTYPE_INDEX_OFFSET);
    owner_account_field = *(nrm_u32*)((nrm_u8*)owner + NRM_OWNER_ACCOUNT_FIELD_OFFSET);

    total_money.part.lo = money_lo;
    total_money.part.hi = money_hi;

    /* 0x4CFE20 is called only with positive owner money in the normal paths.
       Preserve vanilla untouched if a future path ever supplies zero/negative. */
    if ((money_hi & 0x80000000UL) != 0 || (money_lo == 0 && money_hi == 0))
        return nrm_owner_payout_call_vanilla(definition, state, money_lo, money_hi);

    registry = *(void**)((nrm_u8*)g_game_base + NRM_POPTYPE_REGISTRY_PTR_OFFSET);
    if (!registry)
        return nrm_owner_payout_call_vanilla(definition, state, money_lo, money_hi);

    begin = *(void***)((nrm_u8*)registry + NRM_REGISTRY_VECTOR_BEGIN_OFFSET);
    end = *(void***)((nrm_u8*)registry + NRM_REGISTRY_VECTOR_END_OFFSET);
    if (!begin || !end || end < begin)
        return nrm_owner_payout_call_vanilla(definition, state, money_lo, money_hi);

    /* First pass: build the equivalent owner pool.  We do not store pointers;
       a second registry pass keeps the implementation allocation-free and
       thread-safe. */
    for (it = begin; it < end; ++it) {
        void *poptype = *it;
        nrm_u32 population;
        nrm_u32 index;
        if (!nrm_poptype_matches_owner(poptype, owner_index)) continue;

        index = *(nrm_u32*)((nrm_u8*)poptype + NRM_POPTYPE_INDEX_OFFSET);
        population = nrm_owner_population_for_type(state, index);
        if (!population) continue;

        total_population += population;
        ++eligible_type_count;
        if (index != owner_index) ++noncanonical_type_count;
    }

    if (!eligible_type_count || !total_population)
        return nrm_owner_payout_call_vanilla(definition, state, money_lo, money_hi);

    /* Fast path: the canonical owner is the only populated matching type.
       Keep the exact original call and all of its behavior byte-for-byte. */
    if (!noncanonical_type_count)
        return nrm_owner_payout_call_vanilla(definition, state, money_lo, money_hi);

    remaining_money = total_money.value;
    types_left = eligible_type_count;

    /* Second pass: exact proportional split of the one original owner pool.
       All but the final type get floor(total*P/totalP); the final type receives
       the exact remainder, so aggregate owner income cannot change. */
    for (it = begin; it < end; ++it) {
        void *poptype = *it;
        nrm_u32 population;
        nrm_u32 index;
        nrm_i64 share;

        if (!nrm_poptype_matches_owner(poptype, owner_index)) continue;
        index = *(nrm_u32*)((nrm_u8*)poptype + NRM_POPTYPE_INDEX_OFFSET);
        population = nrm_owner_population_for_type(state, index);
        if (!population) continue;

        if (types_left <= 1) {
            share = remaining_money;
        } else {
            share = nrm_owner_compute_share(total_money.value,
                                            population,
                                            total_population);
            if (share < 0 || share > remaining_money)
                share = remaining_money; /* defensive invariant fallback */
        }

        if (share > 0) {
            nrm_bool paid = nrm_call_vanilla_for_owner_type(state,
                                                            index,
                                                            owner_account_field,
                                                            share);
            if (paid) {
                any_paid = NRM_TRUE;
                remaining_money -= share;
            }
            /* If an unexpected vanilla per-type gate rejects a bucket that
               our province scan saw, keep its share in remaining_money.  The
               final successful owner type will receive that residue, so this
               wrapper itself can never silently destroy part of the pool. */
        }

        --types_left;
    }

    return any_paid;
}

static nrm_bool nrm_bytes_equal_owner(const nrm_u8 *a,
                                      const nrm_u8 *b,
                                      nrm_u32 count)
{
    while (count--) {
        if (*a++ != *b++) return NRM_FALSE;
    }
    return NRM_TRUE;
}

nrm_bool __cdecl nrm_install_owner_equivalent_module(void)
{
    static const nrm_u8 expected_payout[6] = {0x55,0x8B,0xEC,0x83,0xEC,0x48};
    static const nrm_u8 expected_bonus_primary[6] = {0x8B,0x97,0xF0,0x00,0x00,0x00};
    static const nrm_u8 expected_bonus_secondary[6] = {0x8B,0xBF,0xF0,0x00,0x00,0x00};
    static const nrm_u8 expected_bonus_tooltip[6] = {0x8B,0xB2,0xF0,0x00,0x00,0x00};
    static const nrm_u8 expected_sort_template[7] = {0x8D,0x8C,0x24,0xC0,0x00,0x00,0x00};
    nrm_u8 patch6[6];
    nrm_u8 patch7[7];
    nrm_u8 *site_payout;
    nrm_u8 *site_bonus_primary;
    nrm_u8 *site_bonus_secondary;
    nrm_u8 *site_bonus_tooltip;
    nrm_u8 *site_sort_domestic;
    nrm_u8 *site_sort_foreign;
    nrm_u32 rel;

    if (!g_game_base) return NRM_FALSE;

    site_payout = (nrm_u8*)g_game_base + NRM_OFF_OWNER_PAYOUT;
    site_bonus_primary = (nrm_u8*)g_game_base + NRM_OFF_OWNER_BONUS_PRIMARY_HOOK;
    site_bonus_secondary = (nrm_u8*)g_game_base + NRM_OFF_OWNER_BONUS_SECONDARY_HOOK;
    site_bonus_tooltip = (nrm_u8*)g_game_base + NRM_OFF_OWNER_BONUS_TOOLTIP_HOOK;
    site_sort_domestic = (nrm_u8*)g_game_base + NRM_OFF_PRODUCTION_POP_SORT_DOMESTIC_HOOK;
    site_sort_foreign = (nrm_u8*)g_game_base + NRM_OFF_PRODUCTION_POP_SORT_FOREIGN_HOOK;

    /* Validate every site before writing any of them.  An unsupported EXE
       therefore cannot be left with only half of the owner semantics patched. */
    if (!nrm_bytes_equal_owner(site_payout, expected_payout, 6)) return NRM_FALSE;
    if (!nrm_bytes_equal_owner(site_bonus_primary, expected_bonus_primary, 6)) return NRM_FALSE;
    if (!nrm_bytes_equal_owner(site_bonus_secondary, expected_bonus_secondary, 6)) return NRM_FALSE;
    if (!nrm_bytes_equal_owner(site_bonus_tooltip, expected_bonus_tooltip, 6)) return NRM_FALSE;
    if (!nrm_bytes_equal_owner(site_sort_domestic, expected_sort_template, 7)) return NRM_FALSE;
    if (!nrm_bytes_equal_owner(site_sort_foreign, expected_sort_template, 7)) return NRM_FALSE;

#define NRM_WRITE_JMP6(site, target) do { \
        rel = (nrm_u32)(target) - ((nrm_u32)(site) + 5UL); \
        patch6[0] = 0xE9; \
        *(nrm_u32*)(patch6 + 1) = rel; \
        patch6[5] = 0x90; \
        if (!nrm_patch_memory((site), patch6, 6)) return NRM_FALSE; \
    } while (0)

#define NRM_WRITE_JMP7(site, target) do { \
        rel = (nrm_u32)(target) - ((nrm_u32)(site) + 5UL); \
        patch7[0] = 0xE9; \
        *(nrm_u32*)(patch7 + 1) = rel; \
        patch7[5] = 0x90; \
        patch7[6] = 0x90; \
        if (!nrm_patch_memory((site), patch7, 7)) return NRM_FALSE; \
    } while (0)

    NRM_WRITE_JMP6(site_payout, nrm_owner_payout_hook);
    NRM_WRITE_JMP6(site_bonus_primary, nrm_owner_bonus_primary_hook);
    NRM_WRITE_JMP6(site_bonus_secondary, nrm_owner_bonus_secondary_hook);
    NRM_WRITE_JMP6(site_bonus_tooltip, nrm_owner_bonus_tooltip_hook);
    NRM_WRITE_JMP7(site_sort_domestic, nrm_production_pop_sort_domestic_hook);
    NRM_WRITE_JMP7(site_sort_foreign, nrm_production_pop_sort_foreign_hook);

#undef NRM_WRITE_JMP6
#undef NRM_WRITE_JMP7

    g_nrm_feature_flags |= NRM_FEATURE_OWNER_EQUIVALENT_PAYOUT;
    g_nrm_feature_flags |= NRM_FEATURE_OWNER_EQUIVALENT_BONUS;
    g_nrm_feature_flags |= NRM_FEATURE_PRODUCTION_NO_OWNER_SORT;
    return NRM_TRUE;
}
