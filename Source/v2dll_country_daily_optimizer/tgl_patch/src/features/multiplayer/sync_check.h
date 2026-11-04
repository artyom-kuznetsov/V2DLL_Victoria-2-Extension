#pragma once

#include "config.h"

namespace cp::features {

// Owns the two call sites of the game's daily sync check in Update_World_and_Advance_Time:
//   - CALL Vector_Equals: the local sync vector against the one in the host's tick command. The game
//     only gets to compare the two elements it wrote itself (draw count, seed); the elements appended
//     by state_checksum are compared here and reported through oos_log, without triggering the game's
//     reaction.
//   - CALL Rng_Resync in the mismatch path: the game zeroes the draw count first, so its realign
//     restarts the generator from the seed instead of reaching the host's position. With
//     fix_rng_resync the target is the host's count after its DayTick (state_checksum's
//     `rng_calls_end`), or at least the count the host sent.
void install_sync_check(const Config& config);

}  // namespace cp::features
