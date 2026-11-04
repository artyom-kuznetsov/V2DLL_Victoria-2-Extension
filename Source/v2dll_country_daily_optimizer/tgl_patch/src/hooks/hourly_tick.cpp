#include "hooks/hourly_tick.h"

#include <cstddef>
#include <cstdint>

#include "hooks/memory.h"
#include "hooks/thunk.h"
#include "log.h"

namespace cp::hooks {

namespace {

// v2game.exe 3.04: CHourlyTickCommand::vftable 0x00E12414, slot 6 (+0x18) = Execute 0x0072ECF0.
constexpr uint32_t kSlotRva = 0xA12414 + 0x18;
constexpr uint32_t kExecuteRva = 0x32ECF0;
constexpr size_t kMaxCallbacks = 8;

void (*g_callbacks[kMaxCallbacks])() = {};
size_t g_count = 0;
uintptr_t g_original_execute = 0;

void dispatch() {
    for (size_t i = 0; i < g_count; i++) {
        g_callbacks[i]();
    }
}

// Replacement for the vtable slot: callbacks first, then the original with every register intact
// (the game's conventions pass arguments in registers; the callbacks run C++ that uses XMM registers,
// so CP_SAVE_ALL covers those too). Stack at entry: [ret][...] (Execute's own arguments, untouched);
// after CP_SAVE_ALL the return address is at [esp + CP_SAVED_ALL_BYTES]. The restore leaves the
// stack exactly as at entry before the jump to the original.
__declspec(naked) void thunk() {
    CP_SAVE_ALL
    __asm call dispatch
    CP_RESTORE_ALL
    __asm jmp dword ptr [g_original_execute]
}

}  // namespace

bool on_hourly_tick(void (*fn)()) {
    if (g_count >= kMaxCallbacks) {
        return false;
    }
    if (g_original_execute == 0) {
        uintptr_t slot = exe_addr(kSlotRva);
        uintptr_t current = *reinterpret_cast<const uintptr_t*>(slot);
        if (current != exe_addr(kExecuteRva) || !replace_pointer(slot, current, reinterpret_cast<uintptr_t>(&thunk))) {
            logf("hourly_tick: CHourlyTickCommand::Execute slot %08X not recognised (expected %08X, holds %08X)",
                 listing_va(kSlotRva), listing_va(kExecuteRva), listing_va_of(current));
            return false;
        }
        g_original_execute = current;
    }
    g_callbacks[g_count++] = fn;
    return true;
}

}  // namespace cp::hooks
