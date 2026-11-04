#pragma once

#include <windows.h>

namespace cp::game {

// The game's main window: a visible, unowned top-level window of this process with a client area of
// at least 400x300 (the overlays of the patch are smaller). nullptr before it exists.
HWND find_main_window();

}  // namespace cp::game
