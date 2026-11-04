#include "features/multiplayer/oos_notice.h"

#include <cstdio>
#include <cstring>

#include "features/multiplayer/state_checksum.h"
#include "game/string.h"
#include "game/world.h"
#include "hooks/memory.h"
#include "log.h"

// The daily sync check compares the vector of this machine with the host's (docs/re/systems/
// multiplayer.md). Its first two elements are the game's own (draw count, seed); a difference makes the
// game realign the generator (fix_rng_resync: to the host's position), show the OOS dialog once and send
// CPauseGame, both behind the flag world+0xBA8. The elements after them, from state_checksum, hash the
// provinces, countries, pops and the date as of the end of the host's previous day.
//
// - draws differ, state hashes equal: the generator is realigned and the state matched, so the game
//   continues as one. The game's dialog and pause are skipped (the caller sets world+0xBA8 for that
//   comparison) and a chat line says so.
// - draws differ, state differs: the game reacts as usual; the chat line says what differs.
// - draws equal, state differs: nothing in the game reacts (a silent divergence); a chat line says so,
//   once per episode.
//
// The chat line goes the way of the host's "X is lagging behind" warning (CClientPingCommand execute
// 0x0072F1E0 at 0x0072F883..0x0072F909), so it shows in the same list on every player's screen:
//   ChatMessage_ctor (0x009F3290): ECX = parts list, EDX = sender name (std::string*), stack (message,
//     flag country, key string*, text string*, 1), RET 0x14. Text at +0x08, sender name at +0x28, flag
//     country at +0x54 (indexes the country list unchecked: must be valid), key text at +0x58.
//   The sender is empty: the line text (vt[0x20], 0x009F3550 -> 0x009F2FF0) is then the text alone; with
//     a sender and the last argument 1 it reads "sender*> text". The flag country: the local player's
//     country, world+0xB60.
//   ChatMessageCommand_ctor (0x009F4240, stdcall (command, message, channel, name string*), RET 0x10);
//     channel = ObjectRegistry_FindByTypeAndId (0x009C16D0, cdecl) of the chat channel key at
//     0x00F0D840/0x00F0D844; name = session manager + 0xBC.
//   Queued with session manager+0x38 -> vt[0x18](command), which sends it to every player; message and
//   command are allocated with the game's operator new (which throws rather than return null) and owned
//   by the game from there.

namespace cp::features {

namespace {

constexpr uint32_t kMessageCtorRva = 0x5F3290;
constexpr uint32_t kCommandCtorRva = 0x5F4240;
constexpr uint32_t kFindByKeyRva = 0x5C16D0;
constexpr uint32_t kChatChannelKeyRva = 0xB0D840;  // (type, id)
constexpr uint32_t kSessionManagerName = 0xBC;
constexpr uint32_t kSessionManagerQueue = 0x38;
constexpr uint32_t kQueueSlot = 0x18;
constexpr size_t kMessageSize = 0x74;
constexpr size_t kCommandSize = 0x68;

enum class SyncResult { kInSync, kRecovered, kDiverged, kSilentDivergence };

bool g_enabled = false;
size_t g_draws_end_index = static_cast<size_t>(-1);  // "rng_calls_end": a draw count, not state
bool g_diverged = false;                              // the last comparison found the state different

// Sends `text` as a chat line to every player, like the lag warning.
bool send_chat_line(const char* text) {
    uintptr_t world = game::world();
    uintptr_t manager = game::session_manager(world);
    if (!manager) {
        return false;
    }
    auto find = reinterpret_cast<uintptr_t(__cdecl*)(uint32_t, uint32_t)>(hooks::exe_addr(kFindByKeyRva));
    uintptr_t channel = find(game::read32(hooks::exe_addr(kChatChannelKeyRva)),
                             game::read32(hooks::exe_addr(kChatChannelKeyRva + 4)));
    if (!channel) {
        return false;
    }

    void* message = game::allocate(kMessageSize);
    game::GameString text_string = game::view_of(text);
    game::GameString key_string = game::view_of("");
    game::GameString sender_string = game::view_of("");  // no sender: the line is the text alone
    game::GameString* sender = &sender_string;
    uint32_t parts[4] = {0, 0, 0, 0};  // empty list: head, tail, count, flag
    uint32_t country = game::read32(world + game::kWorldPlayerCountry);
    uintptr_t message_ctor = hooks::exe_addr(kMessageCtorRva);
    game::GameString* text_arg = &text_string;
    game::GameString* key_arg = &key_string;
    uint32_t* parts_arg = parts;
    // EBX/ESI/EDI are pinned around the game call (modifier_guard does the same): the compiler assumes
    // the asm block keeps them, and the game's LTCG code does not follow the callee-saved convention.
    __asm {
        push ebx
        push esi
        push edi
        push 1
        push text_arg
        push key_arg
        push country
        push message
        mov ecx, parts_arg
        mov edx, sender
        call message_ctor
        pop edi
        pop esi
        pop ebx
    }

    void* command = game::allocate(kCommandSize);
    auto command_ctor = reinterpret_cast<void*(__stdcall*)(void*, void*, uintptr_t, uintptr_t)>(
        hooks::exe_addr(kCommandCtorRva));
    command_ctor(command, message, channel, manager + kSessionManagerName);

    uintptr_t queue = game::read32(manager + kSessionManagerQueue);
    auto enqueue =
        reinterpret_cast<void(__thiscall*)(uintptr_t, void*)>(game::read32(game::read32(queue) + kQueueSlot));
    enqueue(queue, command);
    return true;
}

// Names of the state elements that differ, comma-separated, into `out`; returns how many state
// elements both vectors have.
size_t differing_state(const uint32_t* local, const uint32_t* host, size_t n, char* out, size_t size) {
    out[0] = '\0';
    size_t compared = 0;
    for (size_t i = kGameSyncElements; i < n; i++) {
        if (i == g_draws_end_index) {
            continue;
        }
        compared++;
        if (local[i] != host[i]) {
            size_t used = std::strlen(out);
            std::snprintf(out + used, size - used, "%s%s", used ? ", " : "", sync_element_name(i));
        }
    }
    return compared;
}

SyncResult classify(bool draws_differ, bool state_differs, size_t state_elements) {
    if (draws_differ) {
        return !state_differs && state_elements > 0 ? SyncResult::kRecovered : SyncResult::kDiverged;
    }
    return state_differs && !g_diverged ? SyncResult::kSilentDivergence : SyncResult::kInSync;
}

void announce(SyncResult result, const char* date, const char* differing) {
    char text[256];
    switch (result) {
        case SyncResult::kRecovered:
            std::snprintf(text, sizeof(text),
                          "Out of sync on %s, but resynced automatically.",
                          date);
            break;
        case SyncResult::kDiverged:
            std::snprintf(text, sizeof(text),
                          "Out of sync on %s: game state differs from the host (%s). Auto sync failed, save and reload to resync.",
                          date, differing[0] ? differing : "not checked");
            break;
        case SyncResult::kSilentDivergence:
            std::snprintf(text, sizeof(text),
                          "Game state differs from the host on %s (%s). Save and reload to resync.", date,
                          differing);
            break;
        case SyncResult::kInSync:
            return;
    }
    bool sent = send_chat_line(text);
    logf("oos_notice: %s%s", text, sent ? "" : " (chat line not sent: no session)");
}

}  // namespace

void install_oos_notice(const Config& config) {
    if (!config.oos_notice) {
        logf("oos_notice: disabled");
        return;
    }
    if (!config.state_checksum) {
        logf("oos_notice: needs state_checksum (the state hashes tell a recovery from a divergence), off");
        return;
    }
    g_draws_end_index = sync_element_index("rng_calls_end");
    g_enabled = true;
    logf("oos_notice: active, a recovered out-of-sync is announced in the chat instead of the dialog and pause");
}

bool oos_notice_on_compare(const uint32_t* local, size_t n_local, const uint32_t* host, size_t n_host) {
    if (!g_enabled || n_local < kGameSyncElements || n_host < kGameSyncElements) {
        return false;
    }
    bool draws_differ = local[0] != host[0] || local[1] != host[1];
    char differing[96];
    size_t state_elements = differing_state(local, host, n_local < n_host ? n_local : n_host, differing,
                                            sizeof(differing));
    bool state_differs = differing[0] != '\0';
    SyncResult result = classify(draws_differ, state_differs, state_elements);
    if (result != SyncResult::kInSync) {
        char date[24];
        game::format_date(game::day(game::world()), date, sizeof(date));
        announce(result, date, differing);
    }
    g_diverged = state_differs;
    return result == SyncResult::kRecovered;
}

}  // namespace cp::features
