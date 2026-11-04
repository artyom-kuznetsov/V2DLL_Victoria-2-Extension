#pragma once

#include <cstddef>
#include <cstdint>
#include <cstdio>

#include "hooks/memory.h"

// v2game.exe 3.04 layout shared by the features (docs/re/systems/multiplayer.md, tick.md, events.md).
// RVAs are VA - 0x00400000.

namespace cp::game {

constexpr uint32_t kWorldPtrRva = 0xE588E8;           // DAT_012588E8: CWorld*
constexpr uint32_t kCountryManagerPtrRva = 0xE587E4;  // DAT_012587E4: +0 count, +4 CCountry* array
constexpr uint32_t kMtStateRva = 0xB0ECF0;            // g_mtState: the global MT19937, index at +0x9C0
constexpr uint32_t kRngCallsRva = 0xB20C14;           // g_rngCalls: draws on it since the seed
constexpr uint32_t kRngNextRva = 0x5B7610;            // Rng_Next: MT19937 step on the state in EAX
constexpr uint32_t kOperatorNewRva = 0x6AE9AF;        // cdecl (size), malloc or throw
constexpr uint32_t kOperatorDeleteRva = 0x6AE91B;     // cdecl (ptr), free
constexpr uint32_t kStringAssignRva = 0x8ED0;         // std::string::assign, thiscall (src*, pos, count), RET 0xC
constexpr uint32_t kInGameIdlerVtableRva = 0xA0A34C;  // CInGameIdler::vftable

// Calendar: hours since year -5000, 365-day years, no leap years.
constexpr int32_t kDateBaseHours = 0x029C55C0;
constexpr int32_t kHoursPerDay = 24;

// CWorld
constexpr uint32_t kWorldPlayers = 0x18;         // list head of the player entries (below)
constexpr uint32_t kWorldProvinces = 0xACC;      // vector<CProvince*> begin
constexpr uint32_t kWorldProvincesEnd = 0xAD0;
constexpr uint32_t kWorldLiving = 0xADC;         // vector<CCountry*> of the countries that exist
constexpr uint32_t kWorldHumanPlayers = 0xAEC;   // vector<u32> per country index: 0 = AI-controlled
constexpr uint32_t kWorldHumanPlayersEnd = 0xAF0;
constexpr uint32_t kWorldDate = 0xB0C;           // hours
constexpr uint32_t kWorldIdler = 0xB24;          // the active idler; CInGameIdler in a game
constexpr uint32_t kWorldSpeed = 0xB28;          // speed index 0..4
constexpr uint32_t kWorldWars = 0xB3C;           // list of ongoing wars: node {war +0, ?, next +8}
constexpr uint32_t kWorldPlayerCountry = 0xB60;  // the local player's country index
constexpr uint32_t kWorldSyncVector = 0xB74;     // vector<int> {begin +0, end +4, capacity +8}: the sync check
constexpr uint32_t kWorldOosShown = 0xBA8;       // u8: the OOS dialog and pause happened; never reset by the game

// Player entry of the world's list
constexpr uint32_t kPlayerId = 0x1C;    // -1 for an unused entry
constexpr uint32_t kPlayerDate = 0x34;  // hours, as last reported by that machine's ping
constexpr uint32_t kPlayerNext = 0x3C;

// CWar: two participant vectors of 8-byte entries, country index at entry+4
constexpr uint32_t kWarAttackers = 0x2C;  // begin; end at +0x30
constexpr uint32_t kWarDefenders = 0x3C;  // begin; end at +0x40

// CInGameIdler
constexpr uint32_t kIdlerSessionManagerSlot = 0x44;  // vt[17]() -> session manager

// Session manager
constexpr uint32_t kSessionManagerIsServer = 0x34;    // 1 in single player and for the host
constexpr uint32_t kSessionManagerExecuting = 0x234;  // 1 while a command (the hourly tick included) runs

// CProvince
constexpr uint32_t kProvinceOwner = 0x12C;       // country index
constexpr uint32_t kProvinceController = 0x134;  // country index
constexpr uint32_t kProvincePopLists = 0x194;    // vector of 16-byte entries (one per pop type): +0 first pop
constexpr uint32_t kProvincePopListsEnd = 0x198;

// CCountry
constexpr uint32_t kCountryTag = 0x1C;
constexpr uint32_t kCountryIndex = 0x20;
constexpr uint32_t kCountryAiObject = 0x208;      // 0 on machines that do not run this country's AI
constexpr uint32_t kCountryProvinces = 0x9D8;     // vector<int> begin
constexpr uint32_t kCountryProvincesEnd = 0x9DC;
constexpr uint32_t kCountryRelations = 0xBE8;     // array of relation objects, one per country index
constexpr uint32_t kCountryMoney = 0xE78;         // int64

// The country index inside the three AI objects the patch meets; each is a different class.
constexpr uint32_t kAiFrameJobCountry = 0x34;   // AI_DecisionUpdate's object (FUN_0081E9E0 ESI): tag +0x30
constexpr uint32_t kAiDailyCountry = 0x0C;      // AI_DailyUpdate / AI_DiplomacyUpdate's object (ESI)
constexpr uint32_t kAiCountryJobCountry = 0x38; // AI_CountryDailyJob / AI_TargetScan's object (ECX)

// CPop
constexpr uint32_t kPopId = 0x0C;
constexpr uint32_t kPopSize = 0x58;   // the size field (people), not the object's size
constexpr uint32_t kPopNext = 0x27C;  // next pop of the same type in the province

// MSVC std::vector<int> as laid out in the game.
struct IntVector {
    uint32_t begin, end, capacity;
    size_t size() const { return (end - begin) / 4; }
    uint32_t* data() const { return reinterpret_cast<uint32_t*>(begin); }
};

inline uint32_t read32(uintptr_t at) { return *reinterpret_cast<const uint32_t*>(at); }
inline uint8_t read8(uintptr_t at) { return *reinterpret_cast<const uint8_t*>(at); }
inline uintptr_t world() { return read32(hooks::exe_addr(kWorldPtrRva)); }
inline uintptr_t country_manager() { return read32(hooks::exe_addr(kCountryManagerPtrRva)); }
inline uint32_t& rng_calls() { return *reinterpret_cast<uint32_t*>(hooks::exe_addr(kRngCallsRva)); }

// Countries by index (index 0 is a placeholder); 0 / nullptr-safe when the manager is not built yet.
inline size_t country_count() {
    uintptr_t manager = country_manager();
    return manager ? read32(manager) : 0;
}
inline uintptr_t country(size_t index) { return read32(read32(country_manager() + 4) + index * 4); }

// The game's heap, for objects the game frees (or that hold memory the game frees).
inline void* allocate(size_t size) {
    return reinterpret_cast<void*(__cdecl*)(size_t)>(hooks::exe_addr(kOperatorNewRva))(size);
}
inline void release(void* p) { reinterpret_cast<void(__cdecl*)(void*)>(hooks::exe_addr(kOperatorDeleteRva))(p); }

// Game day of `world`, or -1 without a world.
inline int32_t day(uintptr_t world) {
    return world ? static_cast<int32_t>(read32(world + kWorldDate)) / kHoursPerDay : -1;
}
inline int32_t current_day() { return day(world()); }

// The country at `index`, or 0 when the manager is not built or the index is past its end.
inline uintptr_t country_or_null(size_t index) { return index < country_count() ? country(index) : 0; }

// "year.month.day" of a game day (as returned by day()), into `out`.
inline void format_date(int32_t day, char* out, size_t size) {
    static const int kMonthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (day < 0) {
        std::snprintf(out, size, "?");
        return;
    }
    int rest = day % 365;
    int month = 0;
    while (month < 11 && rest >= kMonthDays[month]) {
        rest -= kMonthDays[month++];
    }
    std::snprintf(out, size, "%d.%d.%d", day / 365 - 5000, month + 1, rest + 1);
}

// The session manager of a running game, or 0 (no world, or the active idler is not the in-game one,
// whose vtable is the only one with the accessor).
inline uintptr_t session_manager(uintptr_t world) {
    if (!world) {
        return 0;
    }
    uintptr_t idler = read32(world + kWorldIdler);
    if (!idler || read32(idler) != hooks::exe_addr(kInGameIdlerVtableRva)) {
        return 0;
    }
    using GetFn = uintptr_t(__thiscall*)(uintptr_t);
    return reinterpret_cast<GetFn>(read32(read32(idler) + kIdlerSessionManagerSlot))(idler);
}

// Entries of the player list (live ones have id != -1).
inline uintptr_t first_player(uintptr_t world) { return read32(world + kWorldPlayers); }
inline uintptr_t next_player(uintptr_t player) { return read32(player + kPlayerNext); }
inline int32_t player_id(uintptr_t player) { return static_cast<int32_t>(read32(player + kPlayerId)); }
inline uint32_t player_date(uintptr_t player) { return read32(player + kPlayerDate); }

}  // namespace cp::game
