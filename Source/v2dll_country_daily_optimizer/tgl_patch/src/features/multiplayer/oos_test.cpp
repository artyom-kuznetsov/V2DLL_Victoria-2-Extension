#include "features/multiplayer/oos_test.h"

#include <windows.h>

#include <cstdint>

#include "game/window.h"
#include "game/world.h"
#include "hooks/hourly_tick.h"
#include "log.h"

// The sync check compares world+0xB74 (written at the start of the previous tick) with the vector the
// host put in the current tick command (docs/re/systems/multiplayer.md). Flipping the first element of
// the local vector right before the comparison makes this machine report "out of sync" through the
// game's own path. The tick command was copied from the vector before the flip, so only the machine
// that pressed it fails its own comparison; the others still match the command. The game shows the
// dialog and sends the pause only once per session (world+0xBA8), so the flag is cleared before the
// flip to get the full reaction on every press.
//
// The button lives in a tiny topmost tool window owned by a thread of ours, moved over the game
// window's top-right corner four times a second. Exclusive fullscreen hides it; Ctrl+Shift+O, polled
// on the same timer while the game window has the focus, works everywhere, paused too; the request is
// carried out at the next tick. The thread is never stopped: the loader has no unload path, so the
// plugin lives as long as the process.

namespace cp::features {

namespace {

constexpr int kWidth = 96;
constexpr int kHeight = 24;
constexpr int kMargin = 6;
constexpr UINT kTimerId = 1;
constexpr int kButtonId = 100;

volatile LONG g_requested = 0;
HWND g_overlay = nullptr;
HWND g_game_window = nullptr;
bool g_thread_started = false;
bool g_hotkey_down = false;

void reposition() {
    if (!g_game_window || !IsWindow(g_game_window)) {
        g_game_window = game::find_main_window();
        if (!g_game_window) {
            ShowWindow(g_overlay, SW_HIDE);
            return;
        }
    }
    RECT client;
    GetClientRect(g_game_window, &client);
    POINT origin = {0, 0};
    ClientToScreen(g_game_window, &origin);
    bool visible = !IsIconic(g_game_window) && IsWindowVisible(g_game_window);
    SetWindowPos(g_overlay, HWND_TOPMOST, origin.x + client.right - kWidth - kMargin, origin.y + kMargin, kWidth,
                 kHeight, SWP_NOACTIVATE | (visible ? SWP_SHOWWINDOW : SWP_HIDEWINDOW));
}

// Ctrl+Shift+O while the game window has the focus, on its press.
void poll_hotkey() {
    DWORD foreground_pid = 0;
    GetWindowThreadProcessId(GetForegroundWindow(), &foreground_pid);
    bool down = foreground_pid == GetCurrentProcessId() && (GetAsyncKeyState(VK_CONTROL) & 0x8000) &&
                (GetAsyncKeyState(VK_SHIFT) & 0x8000) && (GetAsyncKeyState('O') & 0x8000);
    if (down && !g_hotkey_down) {
        InterlockedExchange(&g_requested, 1);
    }
    g_hotkey_down = down;
}

LRESULT CALLBACK overlay_proc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam) {
    switch (msg) {
        case WM_COMMAND:
            if (LOWORD(wparam) == kButtonId) {
                InterlockedExchange(&g_requested, 1);
            }
            return 0;
        case WM_TIMER:
            poll_hotkey();
            reposition();
            return 0;
        case WM_MOUSEACTIVATE:
            return MA_NOACTIVATE;
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
    }
    return DefWindowProcA(hwnd, msg, wparam, lparam);
}

DWORD WINAPI overlay_thread(void*) {
    WNDCLASSA wc = {};
    wc.lpfnWndProc = &overlay_proc;
    wc.hInstance = GetModuleHandleA(nullptr);
    wc.lpszClassName = "TGL_OosTestOverlay";
    wc.hbrBackground = reinterpret_cast<HBRUSH>(COLOR_BTNFACE + 1);
    RegisterClassA(&wc);
    g_overlay = CreateWindowExA(WS_EX_TOPMOST | WS_EX_TOOLWINDOW | WS_EX_NOACTIVATE, wc.lpszClassName, "oos",
                                WS_POPUP, 0, 0, kWidth, kHeight, nullptr, nullptr, wc.hInstance, nullptr);
    if (!g_overlay) {
        logf("oos_test_button: overlay window not created (%lu)", GetLastError());
        return 0;
    }
    auto id = reinterpret_cast<HMENU>(static_cast<uintptr_t>(kButtonId));
    HWND button = CreateWindowExA(0, "BUTTON", "Force OOS", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 0, 0, kWidth,
                                  kHeight, g_overlay, id, wc.hInstance, nullptr);
    SendMessageA(button, WM_SETFONT, reinterpret_cast<WPARAM>(GetStockObject(DEFAULT_GUI_FONT)), TRUE);
    SetTimer(g_overlay, kTimerId, 250, nullptr);
    reposition();
    MSG msg;
    while (GetMessageA(&msg, nullptr, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
    return 0;
}

void start_overlay_once() {
    if (g_thread_started) {
        return;
    }
    g_thread_started = true;  // the first tick: the game window exists by now
    if (HANDLE h = CreateThread(nullptr, 0, &overlay_thread, nullptr, 0, nullptr)) {
        CloseHandle(h);
    }
}

void force_mismatch(uintptr_t world) {
    auto& vec = *reinterpret_cast<game::IntVector*>(world + game::kWorldSyncVector);
    if (vec.size() == 0) {
        logf("oos_test_button: sync vector empty, nothing to corrupt (not in a game yet?)");
        return;
    }
    *reinterpret_cast<uint8_t*>(world + game::kWorldOosShown) = 0;
    vec.data()[0] ^= 1;
    char date[24];
    game::format_date(game::day(world), date, sizeof(date));
    logf("oos_test_button: forced: local sync element 0 flipped to %08X on %s; the next comparison fails on "
         "this machine",
         vec.data()[0], date);
}

void on_tick() {
    start_overlay_once();
    uintptr_t world = game::world();
    if (world && InterlockedExchange(&g_requested, 0) != 0) {
        force_mismatch(world);
    }
}

}  // namespace

void install_oos_test(const Config& config) {
    if (!config.oos_test_button) {
        logf("oos_test_button: disabled");
        return;
    }
    if (!hooks::on_hourly_tick(&on_tick)) {
        logf("oos_test_button: hourly tick hook unavailable, off");
        return;
    }
    logf("oos_test_button: active (button over the game window's top-right corner, or Ctrl+Shift+O)");
}

}  // namespace cp::features
