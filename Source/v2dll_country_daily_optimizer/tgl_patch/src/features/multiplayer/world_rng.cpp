#include "features/multiplayer/world_rng.h"

#include <windows.h>

#include <cstdint>
#include <iterator>

#include "game/world.h"
#include "hooks/memory.h"
#include "log.h"

// v2game.exe 3.04 (docs/re/systems/multiplayer.md, "Random number generators"):
//
//   Rng_Next (0x009B7610): MT19937 step on the state whose address is in EAX (index at state+0x9C0).
//   World_ctor seeds world+0xB4 from the clock; the save key that could reseed it (token 0x7A4) is not
//   written, so two machines never share it (docs/re/log.md, 2026-10-13).
//
//   Twenty calls of Rng_Next pass world+0xB4 (every call of Rng_Next in the exe, classified by the
//   state it passes; docs/re/log.md, 2026-10-16). The state is loaded in four shapes:
//   `MOV EAX,[g_world]; ADD EAX,0xB4`, the same with other instructions in between,
//   `MOV ESI,[g_world]; LEA EAX,[ESI+0xB4]`, and `MOV EAX,ESI` / `MOV EAX,[ESP+0x20]` after ESI was
//   set to world+0xB4.
//     0x00820D18 FUN_00820760 (AI frame job, host)
//     0x00821ECF, 0x00821F32 FUN_00821DC0
//     0x0083381E FUN_008336F0
//     0x008387C2, 0x00838955 FUN_008386E0
//     0x0083B4B3, 0x0083B4C4, 0x0083B5CD, 0x0083C722 FUN_0083B3D0
//     0x0083DE11 FUN_0083DE00
//     0x0084401D FUN_00843B90 (AI accepts a diplomatic action: reached from Command_CanExecute_A/B/C
//                on every machine, and from the action tooltip locally)
//     0x00846408 FUN_00845AD0
//     0x0084D856 FUN_0084D1D0 (keeps XMM0 live across the call)
//     0x00853F74 FUN_00853F40, 0x00856971 FUN_00856960, 0x008595C4 FUN_00859590
//     0x0085599E FUN_00855980, 0x008569CF FUN_008569A0 (virtual)
//     0x0085CFBF AI_DailyRoll (every machine, every day)
//   A further reference, 0x008687E0 (`... JMP Rng_Next`), is the Lua binding GetAIRand registered by
//   FUN_0086A730; no Lua file of the game or of the mods calls it, so it is left alone.
//
// Rule: while the session manager executes a command (its +0x234 flag, set around every command
// including the hourly tick that runs DayTick), every machine runs the same code in the same order,
// so the draw comes from the global generator and is counted like the game's own draws (so the daily
// check covers it). Outside that (AI frame jobs, UI) the draw comes from a private MT19937.
//
// The rule is wrong for host-only code that runs inside a command: the host would draw and count
// where clients do not. Each site's first draw inside a command is logged, so the logs of a
// multiplayer game show, per machine, which sites drew in lockstep; a site that appears only in the
// host's log is such a case.

namespace cp::features {

namespace {

constexpr uint32_t kSiteRvas[] = {0x420D18, 0x421ECF, 0x421F32, 0x43381E, 0x4387C2, 0x438955, 0x43B4B3,
                                  0x43B4C4, 0x43B5CD, 0x43C722, 0x43DE11, 0x44401D, 0x446408, 0x44D856,
                                  0x453F74, 0x45599E, 0x456971, 0x4569CF, 0x4595C4, 0x45CFBF};
constexpr int kSiteCount = static_cast<int>(std::size(kSiteRvas));

uintptr_t g_rng_next = 0;
uintptr_t g_mt_state = 0;
uintptr_t g_site_returns[kSiteCount];  // address after each CALL: the return address of its draws
bool g_lockstep_logged[kSiteCount];

// Private MT19937, seeded from the clock once.
struct Mt {
    uint32_t state[624];
    int index = 625;
    void seed(uint32_t s) {
        state[0] = s;
        for (int i = 1; i < 624; i++) {
            state[i] = 1812433253u * (state[i - 1] ^ (state[i - 1] >> 30)) + static_cast<uint32_t>(i);
        }
        index = 624;
    }
    uint32_t next() {
        if (index >= 624) {
            if (index == 625) {
                seed(static_cast<uint32_t>(GetTickCount()) ^
                     static_cast<uint32_t>(GetCurrentProcessId()) * 2654435761u);
            }
            for (int i = 0; i < 624; i++) {
                uint32_t y = (state[i] & 0x80000000u) | (state[(i + 1) % 624] & 0x7fffffffu);
                state[i] = state[(i + 397) % 624] ^ (y >> 1) ^ ((y & 1u) ? 0x9908b0dfu : 0u);
            }
            index = 0;
        }
        // Rng_Next's tempering, not the reference one: its two right shifts are arithmetic, so bit 31
        // always cancels and every draw is in 0..2^31-1. The callers use the value as a signed int
        // (`r % 3 + 1` as an AI module's countdown, `r % n < chance`), so a draw must never be negative.
        uint32_t y = state[index++];
        y ^= static_cast<uint32_t>(static_cast<int32_t>(y) >> 11);
        y ^= (y << 7) & 0x9d2c5680u;
        y ^= (y << 15) & 0xefc60000u;
        return y ^ static_cast<uint32_t>(static_cast<int32_t>(y) >> 18);
    }
};
Mt g_private;

bool in_command_execution() {
    uintptr_t mgr = game::session_manager(game::world());
    return mgr && *reinterpret_cast<const uint8_t*>(mgr + game::kSessionManagerExecuting) != 0;
}

void note_lockstep_draw(uintptr_t return_address) {
    for (int i = 0; i < kSiteCount; i++) {
        if (g_site_returns[i] == return_address) {
            if (!g_lockstep_logged[i]) {
                g_lockstep_logged[i] = true;
                logf("sync_world_rng: site %08X drew inside a command on day %d (lockstep on this machine)",
                     hooks::listing_va(kSiteRvas[i]), game::day(game::world()));
            }
            return;
        }
    }
}

uint32_t __cdecl draw(uintptr_t return_address) {
    if (in_command_execution()) {
        note_lockstep_draw(return_address);
        game::rng_calls()++;
        uint32_t value;
        uintptr_t state = g_mt_state;
        uintptr_t fn = g_rng_next;
        // EBX/ESI/EDI are pinned around the game call (modifier_guard does the same): the compiler
        // assumes the asm block keeps them, and Rng_Next is LTCG code with no convention to rely on.
        __asm {
            push ebx
            push esi
            push edi
            mov eax, state
            call fn
            mov value, eax
            pop edi
            pop esi
            pop ebx
        }
        return value;
    }
    return g_private.next();
}

// Stands in for `CALL Rng_Next` at the sites: EAX (the world state) is ignored and the result goes
// back in EAX. Rng_Next touches only EAX, ECX and EDX and no SSE register, and the game's link-time
// code generation knows it: callers keep SSE values live across the call (0x0084D856 converts XMM0
// after it). Our C code may use SSE registers, so XMM0-7 are preserved, and ECX/EDX as well.
__declspec(naked) void draw_thunk() {
    __asm {
        push ecx
        push edx
        sub esp, 128
        movdqu [esp], xmm0
        movdqu [esp + 16], xmm1
        movdqu [esp + 32], xmm2
        movdqu [esp + 48], xmm3
        movdqu [esp + 64], xmm4
        movdqu [esp + 80], xmm5
        movdqu [esp + 96], xmm6
        movdqu [esp + 112], xmm7
        push dword ptr [esp + 136]  // the caller's return address: 128 (SSE) + 8 (ECX, EDX)
        call draw
        add esp, 4
        movdqu xmm0, [esp]
        movdqu xmm1, [esp + 16]
        movdqu xmm2, [esp + 32]
        movdqu xmm3, [esp + 48]
        movdqu xmm4, [esp + 64]
        movdqu xmm5, [esp + 80]
        movdqu xmm6, [esp + 96]
        movdqu xmm7, [esp + 112]
        add esp, 128
        pop edx
        pop ecx
        ret
    }
}

}  // namespace

void install_world_rng(const Config& config) {
    if (!config.sync_world_rng) {
        logf("sync_world_rng: disabled");
        return;
    }
    g_rng_next = hooks::exe_addr(game::kRngNextRva);
    g_mt_state = hooks::exe_addr(game::kMtStateRva);
    int sites = 0;
    for (int i = 0; i < kSiteCount; i++) {
        uintptr_t site = hooks::exe_addr(kSiteRvas[i]);
        g_site_returns[i] = site + 5;
        if (hooks::redirect_call(site, g_rng_next, reinterpret_cast<uintptr_t>(&draw_thunk))) {
            sites++;
        } else {
            logf("sync_world_rng: site %08X does not call Rng_Next as expected, left alone",
                 hooks::listing_va(kSiteRvas[i]));
        }
    }
    logf("sync_world_rng: active on %d of %d world-RNG draw sites (lockstep draws go to the global generator, counted)",
         sites, kSiteCount);
}

}  // namespace cp::features
