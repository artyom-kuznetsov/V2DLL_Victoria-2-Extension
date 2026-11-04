#pragma once

#include "config.h"

namespace cp::features {

// Test aid: a small always-on-top "Force OOS" button over the top-right corner of the game window,
// and Ctrl+Shift+O. Either one corrupts this machine's sync vector before the next comparison, so
// the game takes its real out-of-sync path (log, RNG realign, dialog, pause).
void install_oos_test(const Config& config);

}  // namespace cp::features
