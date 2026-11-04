#pragma once

namespace cp::hooks {

// Runs `fn` at the start of every game hour (before CHourlyTickCommand::Execute, 0x0072ECF0, on the
// game's main thread). The vtable slot is hooked once, on the first registration; later registrations
// only append. Returns false when the slot does not hold the expected function or the table is full.
bool on_hourly_tick(void (*fn)());

}  // namespace cp::hooks
