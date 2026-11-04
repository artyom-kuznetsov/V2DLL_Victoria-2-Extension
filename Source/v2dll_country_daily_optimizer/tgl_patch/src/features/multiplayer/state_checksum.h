#pragma once

#include <cstddef>

#include "config.h"

namespace cp::features {

// Elements of the sync vector written by the game itself: draw count and seed.
constexpr size_t kGameSyncElements = 2;

// Appends hashes of the game state to the world's daily sync vector after every DayTick. The game's
// own comparison stays limited to its two elements (sync_check.cpp); the appended ones are compared
// there and reported by oos_log.
void install_state_checksum(const Config& config);

// Name of an element of the sync vector, the game's own two first.
const char* sync_element_name(size_t index);

// Index of a named element in the sync vector, or (size_t)-1.
size_t sync_element_index(const char* name);

}  // namespace cp::features
