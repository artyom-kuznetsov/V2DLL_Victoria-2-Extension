#pragma once

#include <cstdint>

#include "config.h"

namespace cp::features {

// The world's embedded random generator (world+0xB4) is seeded from each machine's clock and is read
// both by code that runs in lockstep (the AI's daily roll, the AI's acceptance of diplomatic commands)
// and by code that runs on one machine only (AI frame jobs on the host, tooltips). Every call site
// that draws from it is redirected to a dispatcher: inside command execution (ticks included) the
// draw comes from the global, counted, synchronised generator; outside it from a private one.
void install_world_rng(const Config& config);

// Logs (to hostjoin.log) how many in-command draws each redirected site made since the previous
// call, then resets the counters. Called at every day start so a host's and a client's logs can be
// diffed to find a code path that draws on one machine but not on the other.
void world_rng_day_report(int32_t day);

}  // namespace cp::features
