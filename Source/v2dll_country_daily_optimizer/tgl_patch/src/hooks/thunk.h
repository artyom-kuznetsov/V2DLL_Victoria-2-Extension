#pragma once

// Register save for naked thunks that call C++ code from inside a game function.
//
// The game is built with link-time code generation: around calls to functions with register arguments
// (Rng_Next, Vector_Equals, ModifierRegistry_Find, ...) and in the middle of functions, callers keep
// values in any register, the SSE ones included (0x0084D856 converts the XMM0 it computed before a
// Rng_Next call). C++ code may use XMM0-7 (memcpy, vsnprintf), so a thunk that calls it saves them too.
//
// CP_SAVE_ALL pushes the eight general registers, the flags and XMM0-7: CP_SAVED_ALL_BYTES bytes, so the
// thunk's own return address is at [esp + CP_SAVED_ALL_BYTES] after it and the first stack argument of
// the hooked call at [esp + CP_SAVED_ALL_BYTES + 4]. The saved EAX is at [esp + CP_SAVED_EAX], where a
// thunk writes a result for the caller. CP_RESTORE_ALL undoes it in reverse.

#define CP_SAVED_ALL_BYTES 164  // 128 (XMM0-7) + 4 (EFLAGS) + 32 (PUSHAD)
#define CP_SAVED_EAX 160        // 128 + 4 + 28: EAX is pushed first by PUSHAD

#define CP_SAVE_ALL                       \
    __asm pushad                          \
    __asm pushfd                          \
    __asm sub esp, 128                    \
    __asm movdqu [esp], xmm0              \
    __asm movdqu [esp + 16], xmm1         \
    __asm movdqu [esp + 32], xmm2         \
    __asm movdqu [esp + 48], xmm3         \
    __asm movdqu [esp + 64], xmm4         \
    __asm movdqu [esp + 80], xmm5         \
    __asm movdqu [esp + 96], xmm6         \
    __asm movdqu [esp + 112], xmm7

#define CP_RESTORE_ALL                    \
    __asm movdqu xmm0, [esp]              \
    __asm movdqu xmm1, [esp + 16]         \
    __asm movdqu xmm2, [esp + 32]         \
    __asm movdqu xmm3, [esp + 48]         \
    __asm movdqu xmm4, [esp + 64]         \
    __asm movdqu xmm5, [esp + 80]         \
    __asm movdqu xmm6, [esp + 96]         \
    __asm movdqu xmm7, [esp + 112]        \
    __asm add esp, 128                    \
    __asm popfd                           \
    __asm popad
