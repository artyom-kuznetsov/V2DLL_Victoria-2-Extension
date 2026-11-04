#pragma once

#include <cstddef>
#include <cstdint>

namespace cp::hooks {

// Set once from TGL_PluginInit, before any feature is installed.
void set_exe_base(const void* base);

namespace detail {
extern uintptr_t g_exe_base;  // written once by set_exe_base
}
inline uintptr_t exe_base() { return detail::g_exe_base; }

// The 3.04 listing (docs/re/) puts the exe at 0x00400000; at runtime it is relocated.
constexpr uint32_t kListingBase = 0x00400000;

// `rva` (VA - 0x00400000 in the 3.04 listing) resolved against the live image base.
inline uintptr_t exe_addr(uint32_t rva) { return exe_base() + rva; }

// The listing VA of an RVA, and of a runtime address inside the exe: what logs print, so they can be
// looked up in docs/re/.
constexpr uint32_t listing_va(uint32_t rva) { return rva + kListingBase; }
inline uint32_t listing_va_of(uintptr_t runtime) {
    return static_cast<uint32_t>(runtime - exe_base() + kListingBase);
}

// Whether `size` bytes at `p` can be read, without touching them (no exception is raised).
bool readable(const void* p, size_t size);

bool expect_bytes(uintptr_t at, const void* expected, size_t size);

// Overwrites `size` bytes at `at` (any protection) and flushes the instruction cache.
bool write_bytes(uintptr_t at, const void* src, size_t size);

// Replaces the pointer stored at `slot` (a vtable entry or any code/data pointer) when it currently
// holds `expected`. Returns false and writes nothing otherwise.
bool replace_pointer(uintptr_t slot, uintptr_t expected, uintptr_t replacement);

// `opcode rel32` (0xE8 CALL, 0xE9 JMP) at `site` reaching `target`, in `out[5]`.
void encode_rel32(unsigned char opcode, uintptr_t site, uintptr_t target, unsigned char* out);

// The target of the `CALL rel32` at `site`, or 0 when there is none.
uintptr_t call_target(uintptr_t site);

// Redirects the 5-byte `CALL rel32` at `site` to `target` when it currently calls `expected_target`.
bool redirect_call(uintptr_t site, uintptr_t expected_target, uintptr_t target);

// Redirects the `CALL rel32` at `site` to `target` whatever it calls now (another plugin may have
// redirected it first) and returns the previous target in `previous`, or 0 when there is no CALL there.
bool chain_call(uintptr_t site, uintptr_t target, uintptr_t& previous);

// chain_call at exe RVA `site_rva`, logged as `feature`: off when there is no CALL there, a note when
// the call no longer reaches `expected_rva` (another hook was installed first; it is chained to).
bool chain_call_logged(const char* feature, uint32_t site_rva, uint32_t expected_rva, uintptr_t target,
                       uintptr_t& previous);

// Replaces the `size` bytes at `site` (at least 5, whole instructions, currently `expected`) with a
// `JMP rel32` to `target` padded with NOPs. The target either jumps back into the function itself, or
// is a function with the same signature that calls a trampoline (make_trampoline) of the replaced bytes.
bool jump_hook(uintptr_t site, const void* expected, size_t size, uintptr_t target);

// Executable copy of the `size` bytes at `site` (whole instructions without relative operands) followed
// by a jump to `site + size`: the original function minus its replaced prologue. 0 on failure.
uintptr_t make_trampoline(uintptr_t site, size_t size);

}  // namespace cp::hooks
