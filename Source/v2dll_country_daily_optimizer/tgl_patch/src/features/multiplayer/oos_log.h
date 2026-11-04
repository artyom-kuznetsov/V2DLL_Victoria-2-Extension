#pragma once

#include <cstddef>
#include <cstdint>

#include "config.h"

namespace cp::features {

// When the game's daily sync check runs, logs which elements of the sync vector differed, with the
// local and the host value. Also logs the game thread's floating-point control words once.
void install_oos_log(const Config& config);

// Called by sync_check before every comparison with both vectors; logs when they differ.
void report_sync_vectors(const uint32_t* local, size_t n_local, const uint32_t* host, size_t n_host);

}  // namespace cp::features
