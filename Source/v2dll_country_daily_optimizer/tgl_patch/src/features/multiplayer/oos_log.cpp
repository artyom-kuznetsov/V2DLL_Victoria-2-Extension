#include "features/multiplayer/oos_log.h"

#include <cstdint>

#include "features/multiplayer/state_checksum.h"
#include "game/world.h"
#include "hooks/fpu.h"
#include "log.h"

// Reporter for sync_check.cpp, which owns the hook on the game's comparison. The first
// kGameSyncElements are the game's own (draw count and seed): a difference there is what the game
// reacts to. The others come from state_checksum: a difference there is one the game does not see.

namespace cp::features {

namespace {

constexpr int kFullLogs = 20;       // mismatching ticks logged in full
constexpr int kThenEveryDays = 30;  // afterwards one line per this many days

bool g_enabled = false;
int g_mismatches = 0;
int32_t g_last_logged_day = -1000000;
bool g_fpu_logged = false;

void log_fpu_once() {
    if (g_fpu_logged) {
        return;
    }
    g_fpu_logged = true;
    uint16_t cw;
    uint32_t csr;
    hooks::read_fpu(cw, csr);
    logf("oos_log: game thread x87 control word %04X (%s precision), MXCSR %08X", cw,
         hooks::x87_precision_name(cw), csr);
}

}  // namespace

void report_sync_vectors(const uint32_t* a, size_t n_local, const uint32_t* b, size_t n_host) {
    if (!g_enabled) {
        return;
    }
    log_fpu_once();
    bool differ = n_local != n_host;
    for (size_t i = 0; !differ && i < n_local; i++) {
        differ = a[i] != b[i];
    }
    if (!differ) {
        return;
    }
    int32_t day = game::day(game::world());
    g_mismatches++;
    bool full = g_mismatches <= kFullLogs;
    if (!full && day - g_last_logged_day < kThenEveryDays) {
        return;
    }
    g_last_logged_day = day;
    if (n_local != n_host) {
        logf("oos_log: day %d: sync vector sizes differ, local %u elements, host %u: the host and this client do "
             "not run the same patch settings (state_checksum must be the same for everyone)",
             day, static_cast<unsigned>(n_local), static_cast<unsigned>(n_host));
        return;
    }
    bool game_sees_it = false;
    for (size_t i = 0; i < kGameSyncElements && i < n_local; i++) {
        game_sees_it = game_sees_it || a[i] != b[i];
    }
    logf("oos_log: day %d: %s (mismatch #%d)", day,
         game_sees_it ? "OUT OF SYNC (the game reacts: RNG realign, dialog, pause)"
                      : "SILENT DIVERGENCE (state differs, the game does not react)",
         g_mismatches);
    if (!full) {
        return;
    }
    for (size_t i = 0; i < n_local; i++) {
        if (a[i] != b[i]) {
            logf("oos_log:   %s: local %08X, host %08X", sync_element_name(i), a[i], b[i]);
        }
    }
}

void install_oos_log(const Config& config) {
    if (!config.oos_log) {
        logf("oos_log: disabled");
        return;
    }
    g_enabled = true;
    logf("oos_log: active (reports every differing element of the daily sync check)");
}

}  // namespace cp::features
