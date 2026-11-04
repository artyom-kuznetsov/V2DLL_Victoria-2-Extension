#include "game/window.h"

namespace cp::game {

namespace {

BOOL CALLBACK match_main_window(HWND hwnd, LPARAM found) {
    DWORD pid = 0;
    GetWindowThreadProcessId(hwnd, &pid);
    if (pid != GetCurrentProcessId() || !IsWindowVisible(hwnd) || GetWindow(hwnd, GW_OWNER) != nullptr) {
        return TRUE;
    }
    RECT r;
    GetClientRect(hwnd, &r);
    if (r.right < 400 || r.bottom < 300) {
        return TRUE;
    }
    *reinterpret_cast<HWND*>(found) = hwnd;
    return FALSE;
}

}  // namespace

HWND find_main_window() {
    HWND found = nullptr;
    EnumWindows(&match_main_window, reinterpret_cast<LPARAM>(&found));
    return found;
}

}  // namespace cp::game
