#include "features/multiplayer/sync_check.h"

#include <cstdint>
#include <cstring>

#include "features/multiplayer/oos_log.h"
#include "features/multiplayer/oos_notice.h"
#include "features/multiplayer/state_checksum.h"
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

// Before the game's compare: keep a copy of the host vector for the resync and the report, then
// shorten both vectors to the game's own elements so that Vector_Equals only sees those.
void __cdecl before_compare(game::IntVector* local, game::IntVector* host) {
    g_local = local;
    g_host = host;
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

void install_sync_check(const Config& config) {
    if (config.state_checksum || config.oos_log) {
        if (hooks::chain_call_logged("sync_check", kEqualsCallRva, kEqualsRva,
                                     reinterpret_cast<uintptr_t>(&equals_thunk), g_original_equals)) {
            logf("sync_check: the game compares its two elements; the rest is compared and logged here");
        }
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
