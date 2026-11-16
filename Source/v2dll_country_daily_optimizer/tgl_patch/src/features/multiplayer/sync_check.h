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

// Asks the next daily comparison to rebuild the global RNG from the host's vector (seed + draw count)
// before the game compares and advances the day. The automatic rehost calls it on the host when it
// starts the reloaded game and on every client when it reaches the lobby: after a save is loaded the
// draw counter is a runtime global that is not part of the save, so the host and the clients can enter
// the first day at different generator positions and the game reports an out-of-sync on day two.
void request_sync_realign();

}  // namespace cp::features
