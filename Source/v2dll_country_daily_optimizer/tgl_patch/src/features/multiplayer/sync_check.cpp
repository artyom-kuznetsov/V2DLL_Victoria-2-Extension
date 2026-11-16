#include "features/multiplayer/sync_check.h"

#include <cstdint>
#include <cstdio>
#include <cstring>

#include "features/multiplayer/oos_log.h"
#include "features/multiplayer/oos_notice.h"
#include "features/multiplayer/state_checksum.h"
#include "features/multiplayer/world_rng.h"
#include "game/world.h"
#include "hooks/memory.h"
#include "hooks/thunk.h"
#include "log.h"

// v2game.exe 3.04, Update_World_and_Advance_Time (docs/re/systems/multiplayer.md):
//
//   0x00683036  CALL Vector_Equals        EAX = &world->syncVector (+0xB74), ECX = &command->vector (+0x3C);
//                                         returns 1 when sizes or any element differ
//   ... mismatch path: log, g_rngCalls = host[0], g_mtSeed = host[1], g_rngCalls = 0,
//   0x0068364D  CALL Rng_Resync           reseeds g_mtState from g_mtSeed and advances g_rngCalls draws
//   ... OOS dialog once, CPauseGame
//
// Because of that `g_rngCalls = 0`, the game's realign restarts the generator from the seed; after the
// first mismatch the client's count reads 0 at every tick and its state diverges within a day
// (docs/re/log.md, 2026-10-13). The host's position when the client compares is the host's count after
// its DayTick of the previous day, which state_checksum sends as `rng_calls_end`.

namespace cp::features {

namespace {

constexpr uint32_t kEqualsCallRva = 0x283036;
constexpr uint32_t kEqualsRva = 0x28F340;
constexpr uint32_t kResyncCallRva = 0x28364D;
constexpr uint32_t kResyncRva = 0x5B7C80;
constexpr size_t kHostCopyMax = 64;

uintptr_t g_original_equals = 0;
uintptr_t g_original_resync = 0;
uint32_t g_host_copy[kHostCopyMax];
size_t g_host_size = 0;
game::IntVector* g_local = nullptr;
game::IntVector* g_host = nullptr;
uint32_t g_saved_local_end = 0;
uint32_t g_saved_host_end = 0;
bool g_logged_overflow = false;
int g_restore_oos_flag = -1;  // world+0xBA8 before oos_notice set it for one comparison, or -1
volatile long g_realign_request = 0;

// The generator position (g_rngCalls) and the MT state are runtime globals, not part of the save. After
// a rehost every machine loads the same save but reaches the first day from a different position: the
// host draws a few hundred times while it reloads and starts the lobby, the clients do not. The sync
// vector the save carries only holds the count the last simulated day started with, so on the first
// comparison the two vectors still agree (11992/11992 in the test log) and the divergence only shows up
// on the second day, when the day simulated with a different generator position hashes differently.
//
// Fix: before the first comparison after a rehost, rebuild the generator on every machine from the seed
// and the count of that first vector (the same values on the host and on the clients, because they come
// from the save) and copy those two values into the local vector too, so the game's own comparison does
// not see a mismatch either. Every machine then simulates the reloaded day from the exact same position
// and the state hashes of the following days agree. It is the realign the game does on a mismatch
// (Rng_Resync), only early and without the dialog.

// The event manager (DAT_01319B80) keeps its own MT19937 state at +0x40 and is created with
// time(NULL) as the seed in four places (0x00687F2E and 0x00686194 in the world load paths,
// 0x004B1EAE and 0x008A76D9 in the creation helpers). Two machines that load the same save seconds
// apart therefore roll event probabilities differently and the day ticks diverge from the first
// simulated day, which is what the reload after a rehost does. Seed it from the world date (part of
// the save, identical on every machine) instead, and reseed it at the first comparison after a
// rehost as a safety net.
constexpr uint32_t kTimeSeedCallLoadRva = 0x287F2E;   // CALL 0x00AB231D (time), world load
constexpr uint32_t kTimeSeedCallLoad2Rva = 0x286194;  // the same, the path that replaces the manager
constexpr uint32_t kTimeSeedCallLoad3Rva = 0x0B1EAE;   // the same, the event candidate rebuild path
constexpr uint32_t kTimeSeedCallCtorRva = 0x4A76D9;   // CALL 0x00AB231D, manager constructor
constexpr uint32_t kSeedInitRva = 0x5B7670;           // seed_init(ECX = state, EAX = seed)
constexpr uint32_t kEventSeedMul = 1103515245;        // date * mul + add: same on every machine
constexpr uint32_t kEventSeedAdd = 12345;

uintptr_t g_seed_init = 0;
uintptr_t g_world_slot = 0;
bool g_event_seed_enabled = false;

// Same value on every machine: the world date is in the save (0 when there is no world).
uint32_t event_seed_value() {
    uintptr_t world = game::world();
    uint32_t date = world ? game::read32(world + game::kWorldDate) : 0;
    // seed_init treats 0 as "use the default table": keep the seed odd so it never is.
    return (date * kEventSeedMul + kEventSeedAdd) | 1u;
}

// Replaces `CALL time; ADD ESP,4` at a creation site with `CALL this; NOP NOP NOP`: drops the
// time(NULL) argument (`ret 4`), leaves the seed in EAX (seed_init reads it there) and returns to
// the LEA that loads the state pointer. One thunk serves every site because they all have the same
// shape.
__declspec(naked) void event_seed_thunk() {
    __asm {
        push ecx
        push edx
        mov ecx, [g_world_slot]          // address of DAT_012588E8
        mov ecx, [ecx]                   // the world pointer
        test ecx, ecx
        je no_world
        mov ecx, [ecx + 0xB0C]           // CWorld::date, hours
        jmp have_date
    no_world:
        xor ecx, ecx
    have_date:
        imul eax, ecx, 1103515245
        add eax, 12345
        or eax, 1
        pop edx
        pop ecx
        ret 4                            // return and drop the time(NULL) argument
    }
}

// seed_init(ECX = state, EAX = seed): the game's own MT19937 initialisation (0x009B7670).
__declspec(naked) void seed_mt_state(uintptr_t state, uint32_t seed) {
    __asm {
        push eax
        push ecx
        mov ecx, [esp + 12]
        mov eax, [esp + 16]
        call dword ptr [g_seed_init]
        pop ecx
        pop eax
        ret
    }
}

void reseed_event_rng(const char* reason) {
    uintptr_t manager = game::read32(hooks::exe_addr(game::kEventManagerPtrRva));
    if (!manager) {
        logf("event_rng: no event manager at %s, nothing to seed", reason);
        return;
    }
    uintptr_t state = manager + game::kEventManagerRng;
    uint32_t before = game::read32(state);
    uint32_t before_index = game::read32(state + game::kMtIndexOffset);
    uint32_t seed = event_seed_value();
    seed_mt_state(state, seed);
    *reinterpret_cast<uint32_t*>(state + game::kMtIndexOffset) = 0;  // seed_init leaves the index alone
    logf("event_rng: %s: seed %u, MT %08X/%u -> %08X/%u", reason, seed, before, before_index,
         game::read32(state), game::read32(state + game::kMtIndexOffset));
}

// The event manager is created with time(NULL) in four places; all of them become deterministic.
bool patch_event_seed_site(uint32_t site_rva, const unsigned char* expected) {
    uintptr_t site = hooks::exe_addr(site_rva);
    if (!hooks::expect_bytes(site, expected, 8)) {
        return false;
    }
    unsigned char code[8] = {0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90};
    hooks::encode_rel32(0xE8, site, reinterpret_cast<uintptr_t>(&event_seed_thunk), code);
    return hooks::write_bytes(site, code, 8);
}

void install_event_seed() {
    g_seed_init = hooks::exe_addr(kSeedInitRva);
    g_world_slot = hooks::exe_addr(game::kWorldPtrRva);
    g_event_seed_enabled = true;
    static const unsigned char kTimeCallLoad[8] = {0xE8, 0xEA, 0xA3, 0x42, 0x00, 0x83, 0xC4, 0x04};
    static const unsigned char kTimeCallLoad2[8] = {0xE8, 0x84, 0xC1, 0x42, 0x00, 0x83, 0xC4, 0x04};
    static const unsigned char kTimeCallLoad3[8] = {0xE8, 0x6A, 0x04, 0x60, 0x00, 0x83, 0xC4, 0x04};
    static const unsigned char kTimeCallCtor[8] = {0xE8, 0x3F, 0xAC, 0x20, 0x00, 0x83, 0xC4, 0x04};
    bool load = patch_event_seed_site(kTimeSeedCallLoadRva, kTimeCallLoad);
    bool load2 = patch_event_seed_site(kTimeSeedCallLoad2Rva, kTimeCallLoad2);
    bool load3 = patch_event_seed_site(kTimeSeedCallLoad3Rva, kTimeCallLoad3);
    bool ctor = patch_event_seed_site(kTimeSeedCallCtorRva, kTimeCallCtor);
    if (load && load2 && load3 && ctor) {
        logf("event_rng: the event manager is seeded from the world date, not from time(NULL)");
    } else {
        logf("event_rng: seed patch incomplete (load=%u load2=%u load3=%u ctor=%u)", load ? 1u : 0u,
             load2 ? 1u : 0u, load3 ? 1u : 0u, ctor ? 1u : 0u);
    }
}

// The value the generator must be at when the day that starts at this tick is simulated is the count
// the host had at the END of the previous day: that is `rng_calls_end` (index 2), which state_checksum
// appends after DayTick. `rng_calls` (index 0) is the count at the START of the previous day, so
// realigning to it replays a whole day of draws (2026-11-12 log: host 12139 vs saved 11963).
// Returns false when the vectors are not usable yet (the load may still be in progress).
bool realign_to_host(game::IntVector* local, game::IntVector* host, const char* reason) {
    size_t n_local = local->size();
    size_t n_host = host->size();
    if (n_local < 2 || n_host < 2) {
        hostjoin_logf("sync_realign: %s: vectors too short (local %u, host %u elements), retrying",
             reason, static_cast<unsigned>(n_local), static_cast<unsigned>(n_host));
        return false;
    }
    uint32_t* l = local->data();
    const uint32_t* h = host->data();
    uint32_t count = h[0];
    uint32_t seed = h[1];
    uint32_t end = n_host > 2 ? h[2] : h[0];
    uint32_t was = game::rng_calls();
    l[0] = count;
    l[1] = seed;
    game::rng_calls() = end;
    game::rng_seed() = seed;
    reinterpret_cast<void (*)()>(hooks::exe_addr(kResyncRva))();
    hostjoin_logf("sync_realign: %s: seed %u advanced %u draws (was %u, day-start count %u)", reason, seed,
         end, was, count);
    return true;
}

void realign_if_requested(game::IntVector* local, game::IntVector* host) {
    if (g_realign_request) {
        // Keep the request armed until a comparison has the saved vectors: on the host the first
        // comparison after Play can still see the world being torn down (too short), and consuming
        // the flag there left the host's counter at its pre-load value while the clients realigned
        // (2026-11-12 log: host 12139 vs client 11963 on the first day).
        if (realign_to_host(local, host, "requested after the rehost")) {
            g_realign_request = 0;
            if (g_event_seed_enabled) {
                reseed_event_rng("first comparison after the rehost");
            }
        }
        return;
    }
    // Safety net that does not depend on the rehost state machine: at the start of a day the runtime
    // counter must be the host's end-of-previous-day count (index 2). A save load restores the vector
    // with the count of the day the save was written at, and an idle Random() outside the tick moves
    // the counter by a few draws. Both leave the day a few draws away from the host, and the state
    // diverges from the first simulated day (2026-11-12 log: 4 draws at the start of 1836-01-11, 20 at
    // the end, real OOS on 01-12). The old threshold (64) let those small offsets through, so any
    // difference is realigned now: the day must always start from the host's position.
    if (host->size() >= 2) {
        const uint32_t* h = host->data();
        uint32_t end = host->size() > 2 ? h[2] : h[0];
        uint32_t now = game::rng_calls();
        uint32_t gap = now > end ? now - end : end - now;
        if (gap != 0 || game::rng_seed() != h[1]) {
            realign_to_host(local, host, "day start does not match the host's day end");
        }
    }
}

// Diagnostic dump for the days that follow a rehost: the host's and the clients' logs can then be
// diffed line by line to find the first country or province that differs. It prints what
// state_checksum hashes (money, owned provinces, pop sizes) plus the world's human/AI map
// (world+0xAEC, one entry per country index, 0 = AI) and whether each country has an AI object.
uint32_t g_dump_days = 0;
uint32_t g_dump_episodes = 0;  // divergence-triggered dumps, capped so a persistent one does not flood

void dump_world_state(uint32_t remaining) {
    uintptr_t world = game::world();
    uintptr_t cm = game::country_manager();
    if (!world || !cm) {
        return;
    }
    char date[32];
    game::format_date(game::day(world), date, sizeof(date));
    hostjoin_logf("sync_dump: ===== BEGIN day %s rng=%u seed=%u (dumps left %u) =====", date,
         game::rng_calls(), game::rng_seed(), remaining);
    // Both vectors element by element, so the host's and the client's logs can be aligned without
    // guessing which appended element is which.
    if (g_local && g_host) {
        char local_line[512];
        char host_line[512];
        size_t lu = 0;
        size_t hu = 0;
        local_line[0] = '\0';
        host_line[0] = '\0';
        size_t nl = g_local->size() < 16 ? g_local->size() : 16;
        size_t nh = g_host->size() < 16 ? g_host->size() : 16;
        for (size_t i = 0; i < nl && lu < sizeof(local_line); i++) {
            int w = std::snprintf(local_line + lu, sizeof(local_line) - lu, "%s%s=%08X",
                                  lu ? " " : "", sync_element_name(i), g_local->data()[i]);
            if (w > 0) {
                lu += static_cast<size_t>(w);
            }
        }
        for (size_t i = 0; i < nh && hu < sizeof(host_line); i++) {
            int w = std::snprintf(host_line + hu, sizeof(host_line) - hu, "%s%s=%08X",
                                  hu ? " " : "", sync_element_name(i), g_host->data()[i]);
            if (w > 0) {
                hu += static_cast<size_t>(w);
            }
        }
        hostjoin_logf("sync_dump: vector local[%u] %s", static_cast<unsigned>(g_local->size()),
                      local_line);
        hostjoin_logf("sync_dump: vector host [%u] %s", static_cast<unsigned>(g_host->size()),
                      host_line);
    }
    uintptr_t mt = hooks::exe_addr(game::kMtStateRva);
    uintptr_t event = game::read32(hooks::exe_addr(game::kEventManagerPtrRva));
    hostjoin_logf("sync_dump: global_mt=%08X/%u event_mt=%08X/%u event_ptr=%08X", game::read32(mt),
         game::read32(mt + game::kMtIndexOffset),
         event ? game::read32(event + game::kEventManagerRng) : 0,
         event ? game::read32(event + game::kEventManagerRng + game::kMtIndexOffset) : 0,
         static_cast<unsigned>(event));
    hostjoin_logf("sync_dump: world_mt=%08X/%u", game::read32(world + 0xB4),
         game::read32(world + 0xB4 + game::kMtIndexOffset));

    uintptr_t human_begin = game::read32(world + game::kWorldHumanPlayers);
    uintptr_t human_end = game::read32(world + game::kWorldHumanPlayersEnd);
    uint32_t human_count = (human_begin && human_end > human_begin)
                               ? static_cast<uint32_t>((human_end - human_begin) / 4)
                               : 0;
    char flags[512];
    uint32_t shown = human_count < sizeof(flags) - 1 ? human_count : sizeof(flags) - 1;
    uint32_t humans = 0;
    for (uint32_t i = 0; i < shown; i++) {
        uint32_t v = game::read32(human_begin + 4 * i);
        flags[i] = v ? '1' : '0';
        if (v) {
            humans++;
        }
    }
    flags[shown] = 0;
    hostjoin_logf("sync_dump: human %u/%u %s", humans, human_count, flags);

    uint32_t count = game::country_count();
    uintptr_t arr = game::read32(cm + 4);
    for (uint32_t i = 0; i < count; i++) {
        uintptr_t c = game::read32(arr + 4 * i);
        if (!c) {
            continue;
        }
        uint32_t tag = game::read32(c + game::kCountryTag);
        uint32_t provs = (game::read32(c + game::kCountryProvincesEnd) -
                          game::read32(c + game::kCountryProvinces)) / 4;
        uint32_t human = i < human_count ? game::read32(human_begin + 4 * i) : 0;
        uint32_t ai = game::read32(c + game::kCountryAiObject) ? 1 : 0;
        hostjoin_logf("sync_dump: c%u %c%c%c money=%08X%08X prov=%u human=%u ai=%u", i,
             static_cast<char>(tag & 0xFF), static_cast<char>((tag >> 8) & 0xFF),
             static_cast<char>((tag >> 16) & 0xFF),
             game::read32(c + game::kCountryMoney + 4), game::read32(c + game::kCountryMoney),
             provs, human, ai);
    }

    static uint32_t pops[512];
    static uint32_t pop_size[512];
    std::memset(pops, 0, sizeof(pops));
    std::memset(pop_size, 0, sizeof(pop_size));
    uintptr_t end = game::read32(world + game::kWorldProvincesEnd);
    for (uintptr_t it = game::read32(world + game::kWorldProvinces); it < end; it += 4) {
        uintptr_t p = game::read32(it);
        if (!p) {
            continue;
        }
        uint32_t owner = game::read32(p + game::kProvinceOwner);
        if (owner >= 512) {
            continue;
        }
        uintptr_t lists_end = game::read32(p + game::kProvincePopListsEnd);
        for (uintptr_t list = game::read32(p + game::kProvincePopLists); list < lists_end;
             list += 16) {
            for (uintptr_t pop = game::read32(list); pop;) {
                pops[owner]++;
                pop_size[owner] += game::read32(pop + game::kPopSize);
                pop = game::read32(pop + game::kPopNext);
            }
        }
    }
    for (uint32_t i = 0; i < count && i < 512; i++) {
        if (!pops[i] && !pop_size[i]) {
            continue;
        }
        hostjoin_logf("sync_dump: p%u pops=%u size=%u", i, pops[i], pop_size[i]);
    }
    hostjoin_logf("sync_dump: ===== END day %s =====", date);
}

// The state elements the game itself does not compare (everything after its draw count and seed).
// `rng_calls_end` is a generator position, not state: a difference there is realigned at the next day
// start, so it is not a divergence by itself. Returns the index of the first differing state element,
// or -1.
int first_differing_state(const uint32_t* local, size_t n_local, const uint32_t* host, size_t n_host) {
    size_t n = n_local < n_host ? n_local : n_host;
    size_t draws_end = sync_element_index("rng_calls_end");
    for (size_t i = kGameSyncElements; i < n; i++) {
        if (i == draws_end) {
            continue;
        }
        if (local[i] != host[i]) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

// Before the game's compare: keep a copy of the host vector for the resync and the report, then
// shorten both vectors to the game's own elements so that Vector_Equals only sees those.
void __cdecl before_compare(game::IntVector* local, game::IntVector* host) {
    realign_if_requested(local, host);
    // One line per day with the in-command draws of every redirected world-RNG site and the event
    // manager's MT state as the previous day left it (before the reseed below). The host's and the
    // client's logs are diffed directly: a site that draws on one machine and not on the other, or an
    // event MT that differs, is what shifts the shared generator inside the day (the day-start
    // realign cannot undo that).
    world_rng_day_report(game::day(game::world()));
    // The event manager's MT19937 is not in the save. A machine that reloads gets a fresh generator
    // seeded from the world date while the others keep the one they have been drawing from all game,
    // so the day's event rolls differ and the state diverges (this is the manual reload: it does not
    // arm request_sync_realign). Reseed it on every machine here, before DayTick, from the date that
    // all of them share: the day then rolls the same events everywhere.
    if (g_event_seed_enabled) {
        reseed_event_rng("day start");
    }
    g_local = local;
    g_host = host;
    // A local vector shorter than the host's means this machine has just loaded a save (the vector
    // comes from the file with only the two elements the game had written). Dump the next days so the
    // two logs can be diffed, and say so once.
    size_t n_local_now = local->size();
    size_t n_host_now = host->size();
    if (n_local_now < n_host_now && g_dump_days == 0) {
        g_dump_days = 2;
        logf("sync_check: local vector has %u elements, the host's %u (save load?); dumping the next days",
             static_cast<unsigned>(n_local_now), static_cast<unsigned>(n_host_now));
    }
    // A difference in the appended state hashes is the divergence the game does not react to. Dump
    // the world around it (this day and the next two) so the first differing country can be found by
    // diffing the host's and the client's logs, even when the divergence shows up during normal play
    // and not only after a rehost.
    int differing = first_differing_state(local->data(), n_local_now, host->data(), n_host_now);
    if (differing >= 0 && g_dump_days == 0 && g_dump_episodes < 3) {
        g_dump_days = 3;
        g_dump_episodes++;
        char date[32];
        game::format_date(game::day(game::world()), date, sizeof(date));
        hostjoin_logf("sync_dump: state differs on day %s (%s): dumping this day and the next two",
                      date, sync_element_name(static_cast<size_t>(differing)));
    }
    if (g_dump_days) {
        g_dump_days--;
        dump_world_state(g_dump_days + 1);
    }
    size_t n_host = host->size();
    if (n_host > kHostCopyMax && !g_logged_overflow) {
        g_logged_overflow = true;
        logf("sync_check: host vector has %u elements, only %u kept", static_cast<unsigned>(n_host),
             static_cast<unsigned>(kHostCopyMax));
    }
    g_host_size = n_host < kHostCopyMax ? n_host : kHostCopyMax;
    std::memcpy(g_host_copy, host->data(), g_host_size * 4);
    report_sync_vectors(local->data(), local->size(), host->data(), n_host);
    // The game never clears world+0xBA8 (dialog and pause shown); a value set to skip one reaction is put
    // back at the next comparison so a later divergence still gets it.
    auto* oos_flag = reinterpret_cast<uint8_t*>(game::world() + game::kWorldOosShown);
    if (g_restore_oos_flag >= 0) {
        *oos_flag = static_cast<uint8_t>(g_restore_oos_flag);
        g_restore_oos_flag = -1;
    }
    if (oos_notice_on_compare(local->data(), local->size(), host->data(), n_host)) {
        g_restore_oos_flag = *oos_flag;
        *oos_flag = 1;
    }
    g_saved_local_end = local->end;
    g_saved_host_end = host->end;
    if (local->size() >= kGameSyncElements && n_host >= kGameSyncElements) {
        local->end = local->begin + kGameSyncElements * 4;
        host->end = host->begin + kGameSyncElements * 4;
    }
}

void __cdecl after_compare() {
    if (g_local) {
        g_local->end = g_saved_local_end;
        g_host->end = g_saved_host_end;
    }
}

// Vector_Equals takes its vectors in EAX (local) and ECX (host) and returns in AL; with link-time code
// generation the caller may keep any other register live across it, so everything is saved.
__declspec(naked) void equals_thunk() {
    CP_SAVE_ALL
    __asm {
        push ecx
        push eax
        call before_compare
        add esp, 8
    }
    CP_RESTORE_ALL
    __asm call dword ptr [g_original_equals]
    CP_SAVE_ALL
    __asm call after_compare
    CP_RESTORE_ALL
    __asm ret
}

// In the mismatch path, right before Rng_Resync: the game has just set g_rngCalls = 0. Replace it with
// the host's position: `rng_calls_end` when the host runs state_checksum, else the count it sent
// (one day behind, but not zero).
void __cdecl before_resync() {
    uint32_t target = 0;
    const char* source = "nothing (vanilla: restart from the seed)";
    size_t end_index = sync_element_index("rng_calls_end");
    if (end_index < g_host_size) {
        target = g_host_copy[end_index];
        source = "host rng_calls_end";
    } else if (g_host_size > 0) {
        target = g_host_copy[0];
        source = "host rng_calls at its day start (no rng_calls_end in its vector)";
    }
    logf("fix_rng_resync: realigning the global RNG to %u draws from the seed (%s)", target, source);
    game::rng_calls() = target;
}

__declspec(naked) void resync_thunk() {
    CP_SAVE_ALL
    __asm call before_resync
    CP_RESTORE_ALL
    __asm jmp dword ptr [g_original_resync]
}

}  // namespace

void request_sync_realign() {
    g_realign_request = 1;
    // Long enough to cover the first divergence after a rehost (the reports are around the third
    // simulated day) on both the host and every client, which is what makes the two logs diffable.
    g_dump_days = 8;
}

void install_sync_check(const Config& config) {
    // The hook also carries the rehost realign (request_sync_realign), so it is installed even when the
    // state checksum and the OOS log are off; the report and the notice stay off with them.
    if (hooks::chain_call_logged("sync_check", kEqualsCallRva, kEqualsRva,
                                 reinterpret_cast<uintptr_t>(&equals_thunk), g_original_equals)) {
        logf("sync_check: the game compares its two elements; the rest is compared and logged here");
    }
    if (config.event_seed_sync) {
        install_event_seed();
    } else {
        logf("event_rng: disabled");
    }
    if (!config.fix_rng_resync) {
        logf("fix_rng_resync: disabled");
        return;
    }
    if (hooks::chain_call_logged("fix_rng_resync", kResyncCallRva, kResyncRva,
                                 reinterpret_cast<uintptr_t>(&resync_thunk), g_original_resync)) {
        logf("fix_rng_resync: active, a sync mismatch realigns the RNG to the host's position instead of the seed");
    }
}

}  // namespace cp::features
