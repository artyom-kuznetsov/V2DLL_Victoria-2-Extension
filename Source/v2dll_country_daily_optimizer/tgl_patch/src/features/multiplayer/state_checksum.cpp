#include "features/multiplayer/state_checksum.h"

#include <xmmintrin.h>

#include <cstdint>
#include <cstring>
#include <iterator>

#include "game/world.h"
#include "hooks/memory.h"
#include "hooks/thunk.h"
#include "log.h"

// v2game.exe 3.04 (docs/re/systems/multiplayer.md):
//
//   Update_World_and_Advance_Time (0x00682EC0), on every machine, per hourly tick command:
//     compare world+0xB74 (vector<int>) with the vector the host put in the command
//     clear world+0xB74, push g_rngCalls, push the seed
//     PUSH ESI (world); CALL DayTick (0x006859C0)                                     at 0x00683AB1
//   ProcessGameTimeAdvance (0x00682BD0), host only: the next CHourlyTickCommand copies world+0xB74.
//
// Whatever is in the vector after DayTick travels with the next tick and is compared on every client
// against the client's own vector at the same point of its own day. The CALL DayTick is redirected to
// a thunk that runs DayTick and then appends: the global RNG position after the day (the host's
// position when a client compares, used by fix_rng_resync), hashes of provinces, countries and pops,
// and the date.
//
// The vector is a MSVC std::vector<int>: the game clears it with end = begin (capacity stays) and
// grows it with its own operator new / delete, as push_back here does.

namespace cp::features {

namespace {

constexpr uint32_t kDayTickCallRva = 0x283AB1;  // CALL DayTick in Update_World_and_Advance_Time
constexpr uint32_t kDayTickRva = 0x2859C0;
constexpr size_t kMinCapacity = 16;
constexpr uint32_t kMaxDepth = 8;  // DayTick re-enters through the frames it renders from inside

const char* const kNames[] = {"rng_calls", "rng_seed", "rng_calls_end", "provinces", "countries", "pops", "date"};
constexpr size_t kAppended = std::size(kNames) - kGameSyncElements;

uintptr_t g_original_day_tick = 0;
uintptr_t g_saved_return[kMaxDepth];
uint32_t g_depth = 0;
bool g_logged_first = false;
bool g_logged_depth = false;

inline uint32_t fnv1a(uint32_t h, uint32_t v) {
    for (int i = 0; i < 4; i++) {
        h ^= (v >> (8 * i)) & 0xFF;
        h *= 16777619u;
    }
    return h;
}

uint32_t hash_provinces(uintptr_t world) {
    uint32_t h = 2166136261u;
    uintptr_t end = game::read32(world + game::kWorldProvincesEnd);
    for (uintptr_t it = game::read32(world + game::kWorldProvinces); it < end; it += 4) {
        uintptr_t p = game::read32(it);
        if (!p) {
            h = fnv1a(h, 0xFFFFFFFFu);
            continue;
        }
        h = fnv1a(h, game::read32(p + game::kProvinceOwner));
        h = fnv1a(h, game::read32(p + game::kProvinceController));
    }
    return h;
}

uint32_t hash_countries() {
    uint32_t h = 2166136261u;
    uintptr_t cm = game::country_manager();
    if (!cm) {
        return h;
    }
    uint32_t count = game::read32(cm);
    uintptr_t arr = game::read32(cm + 4);
    for (uint32_t i = 0; i < count; i++) {
        uintptr_t c = game::read32(arr + 4 * i);
        if (!c) {
            continue;
        }
        h = fnv1a(h, i);
        h = fnv1a(h, game::read32(c + game::kCountryMoney));
        h = fnv1a(h, game::read32(c + game::kCountryMoney + 4));
        h = fnv1a(h, (game::read32(c + game::kCountryProvincesEnd) - game::read32(c + game::kCountryProvinces)) / 4);
    }
    return h;
}

uint32_t hash_pops(uintptr_t world) {
    uint32_t h = 2166136261u;
    uintptr_t end = game::read32(world + game::kWorldProvincesEnd);
    for (uintptr_t it = game::read32(world + game::kWorldProvinces); it < end; it += 4) {
        uintptr_t p = game::read32(it);
        if (!p) {
            continue;
        }
        uintptr_t list_end = game::read32(p + game::kProvincePopListsEnd);
        for (uintptr_t list = game::read32(p + game::kProvincePopLists); list < list_end; list += 16) {
            for (uintptr_t pop = game::read32(list); pop;) {
                uintptr_t next = game::read32(pop + game::kPopNext);
                if (next) {
                    _mm_prefetch(reinterpret_cast<const char*>(next + game::kPopId), _MM_HINT_T0);
                }
                h = fnv1a(h, game::read32(pop + game::kPopId));
                h = fnv1a(h, game::read32(pop + game::kPopSize));
                pop = next;
            }
        }
    }
    return h;
}

void push_back(game::IntVector& vec, uint32_t value) {
    uint32_t* begin = vec.data();
    uint32_t* end = reinterpret_cast<uint32_t*>(vec.end);
    uint32_t* cap = reinterpret_cast<uint32_t*>(vec.capacity);
    if (end == cap) {
        size_t size = static_cast<size_t>(end - begin);
        size_t capacity = static_cast<size_t>(cap - begin);
        size_t wanted = capacity * 2 < kMinCapacity ? kMinCapacity : capacity * 2;
        uint32_t* fresh = static_cast<uint32_t*>(game::allocate(wanted * sizeof(uint32_t)));
        if (size) {
            std::memcpy(fresh, begin, size * sizeof(uint32_t));
        }
        if (begin) {
            game::release(begin);
        }
        begin = fresh;
        end = fresh + size;
        vec.begin = reinterpret_cast<uint32_t>(begin);
        vec.capacity = reinterpret_cast<uint32_t>(fresh + wanted);
    }
    *end++ = value;
    vec.end = reinterpret_cast<uint32_t>(end);
}

// Nobody compares the vector in single player: the hashing is skipped with fewer than two players.
bool multiplayer(uintptr_t world) {
    int players = 0;
    for (uintptr_t p = game::first_player(world); p; p = game::next_player(p)) {
        if (game::player_id(p) != -1 && ++players > 1) {
            return true;
        }
    }
    return false;
}

void after_day_tick() {
    uintptr_t world = game::world();
    if (!world || !multiplayer(world)) {
        return;
    }
    auto& vec = *reinterpret_cast<game::IntVector*>(world + game::kWorldSyncVector);
    const uint32_t values[] = {
        game::rng_calls(),
        hash_provinces(world),
        hash_countries(),
        hash_pops(world),
        game::read32(world + game::kWorldDate),
    };
    static_assert(std::size(values) == kAppended, "one value per appended element name");
    for (uint32_t v : values) {
        push_back(vec, v);
    }
    if (!g_logged_first) {
        g_logged_first = true;
        logf("state_checksum: first day hashed, the sync vector now has %u elements",
             static_cast<unsigned>(vec.size()));
    }
}

void __cdecl depth_exceeded() {
    if (!g_logged_depth) {
        g_logged_depth = true;
        logf("state_checksum: DayTick nested more than %u deep, not hashing this day", kMaxDepth);
    }
}

// Replaces the CALL DayTick. The site pushes the world and DayTick pops it (RET 4), so the return
// address is swapped for `after` and saved on a small stack of ours; `after` runs the hashing with
// every register, the flags and XMM0-7 preserved (CP_SAVE_ALL: the hashes and logf use SSE) and
// returns to the site. Past kMaxDepth the call is passed through untouched, after a logged note
// (same save around it). Stack at entry: [return to site][world]; at `after`: [return to site] (the
// world was popped by DayTick's RET 4, and the site's own return address was put back by the thunk
// from g_saved_return). Each restore leaves the stack exactly as before the matching save.
__declspec(naked) void day_tick_thunk() {
    __asm {
        // stack: [return to site][world]
        push eax
        push ecx
        mov ecx, g_depth
        cmp ecx, kMaxDepth
        jae too_deep
        mov eax, [esp + 8]                 // return address
        mov [g_saved_return + ecx * 4], eax
        inc ecx
        mov g_depth, ecx
        pop ecx
        pop eax
        mov dword ptr [esp], offset after  // DayTick returns here
        jmp dword ptr [g_original_day_tick]
    too_deep:
        pop ecx
        pop eax
    }
    CP_SAVE_ALL
    __asm call depth_exceeded
    CP_RESTORE_ALL
    __asm {
        jmp dword ptr [g_original_day_tick]
    after:
        // DayTick's RET 4 popped the world; the site's return address is on our stack. DayTick's EAX
        // and flags are restored as they were, below.
    }
    CP_SAVE_ALL
    __asm call after_day_tick
    CP_RESTORE_ALL
    __asm {
        push eax
        push ecx
        mov ecx, g_depth
        dec ecx
        mov g_depth, ecx
        mov eax, [g_saved_return + ecx * 4]
        pop ecx
        xchg eax, [esp]                    // restore eax, leave the site's return address on top
        ret
    }
}

}  // namespace

const char* sync_element_name(size_t index) {
    return index < std::size(kNames) ? kNames[index] : "extra";
}

size_t sync_element_index(const char* name) {
    for (size_t i = 0; i < std::size(kNames); i++) {
        if (std::strcmp(kNames[i], name) == 0) {
            return i;
        }
    }
    return static_cast<size_t>(-1);
}

void install_state_checksum(const Config& config) {
    if (!config.state_checksum) {
        logf("state_checksum: disabled");
        return;
    }
    if (!hooks::chain_call_logged("state_checksum", kDayTickCallRva, kDayTickRva,
                                  reinterpret_cast<uintptr_t>(&day_tick_thunk), g_original_day_tick)) {
        return;
    }
    logf("state_checksum: active, %u state elements appended to the daily sync vector",
         static_cast<unsigned>(kAppended));
}

}  // namespace cp::features
