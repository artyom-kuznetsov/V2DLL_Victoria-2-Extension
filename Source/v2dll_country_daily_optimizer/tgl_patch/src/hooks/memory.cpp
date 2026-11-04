#include "hooks/memory.h"

#include <windows.h>

#include <cstring>

#include "log.h"

namespace cp::hooks {

namespace {

constexpr unsigned char kCall = 0xE8;
constexpr unsigned char kJmp = 0xE9;
constexpr unsigned char kNop = 0x90;
constexpr size_t kRel32Size = 5;
constexpr size_t kMaxReplaced = 32;
constexpr DWORD kReadable = PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READ |
                            PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY;

}  // namespace

namespace detail {
uintptr_t g_exe_base = 0;
}

void set_exe_base(const void* base) { detail::g_exe_base = reinterpret_cast<uintptr_t>(base); }

bool readable(const void* p, size_t size) {
    auto at = reinterpret_cast<uintptr_t>(p);
    uintptr_t end = at + size;
    if (!p || end < at) {
        return false;
    }
    while (at < end) {
        MEMORY_BASIC_INFORMATION info;
        if (!VirtualQuery(reinterpret_cast<const void*>(at), &info, sizeof(info)) || info.State != MEM_COMMIT ||
            (info.Protect & kReadable) == 0 || (info.Protect & (PAGE_GUARD | PAGE_NOACCESS)) != 0) {
            return false;
        }
        at = reinterpret_cast<uintptr_t>(info.BaseAddress) + info.RegionSize;
    }
    return true;
}

bool expect_bytes(uintptr_t at, const void* expected, size_t size) {
    return std::memcmp(reinterpret_cast<const void*>(at), expected, size) == 0;
}

bool write_bytes(uintptr_t at, const void* src, size_t size) {
    void* dst = reinterpret_cast<void*>(at);
    DWORD old_protect = 0;
    if (!VirtualProtect(dst, size, PAGE_EXECUTE_READWRITE, &old_protect)) {
        return false;
    }
    std::memcpy(dst, src, size);
    VirtualProtect(dst, size, old_protect, &old_protect);
    FlushInstructionCache(GetCurrentProcess(), dst, size);
    return true;
}

bool replace_pointer(uintptr_t slot, uintptr_t expected, uintptr_t replacement) {
    if (!expect_bytes(slot, &expected, sizeof(expected))) {
        return false;
    }
    return write_bytes(slot, &replacement, sizeof(replacement));
}

void encode_rel32(unsigned char opcode, uintptr_t site, uintptr_t target, unsigned char* out) {
    out[0] = opcode;
    auto rel = static_cast<int32_t>(target - (site + kRel32Size));
    std::memcpy(out + 1, &rel, sizeof(rel));
}

uintptr_t call_target(uintptr_t site) {
    if (*reinterpret_cast<const unsigned char*>(site) != kCall) {
        return 0;
    }
    int32_t rel;
    std::memcpy(&rel, reinterpret_cast<const void*>(site + 1), sizeof(rel));
    return site + kRel32Size + static_cast<uintptr_t>(rel);
}

bool redirect_call(uintptr_t site, uintptr_t expected_target, uintptr_t target) {
    unsigned char expected[kRel32Size];
    encode_rel32(kCall, site, expected_target, expected);
    if (!expect_bytes(site, expected, sizeof(expected))) {
        return false;
    }
    unsigned char patched[kRel32Size];
    encode_rel32(kCall, site, target, patched);
    return write_bytes(site, patched, sizeof(patched));
}

bool chain_call(uintptr_t site, uintptr_t target, uintptr_t& previous) {
    previous = call_target(site);
    return previous != 0 && redirect_call(site, previous, target);
}

bool chain_call_logged(const char* feature, uint32_t site_rva, uint32_t expected_rva, uintptr_t target,
                       uintptr_t& previous) {
    if (!chain_call(exe_addr(site_rva), target, previous)) {
        logf("%s: could not patch the call at %08X, off", feature, listing_va(site_rva));
        return false;
    }
    if (previous != exe_addr(expected_rva)) {
        logf("%s: the call at %08X was already redirected; chaining to it", feature, listing_va(site_rva));
    }
    return true;
}

bool jump_hook(uintptr_t site, const void* expected, size_t size, uintptr_t target) {
    if (size < kRel32Size || size > kMaxReplaced || !expect_bytes(site, expected, size)) {
        return false;
    }
    unsigned char patched[kMaxReplaced];
    std::memset(patched, kNop, size);
    encode_rel32(kJmp, site, target, patched);
    return write_bytes(site, patched, size);
}

uintptr_t make_trampoline(uintptr_t site, size_t size) {
    if (size < kRel32Size || size > kMaxReplaced) {
        return 0;
    }
    auto* code = static_cast<unsigned char*>(
        VirtualAlloc(nullptr, size + kRel32Size, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE));
    if (!code) {
        return 0;
    }
    auto at = reinterpret_cast<uintptr_t>(code);
    std::memcpy(code, reinterpret_cast<const void*>(site), size);
    encode_rel32(kJmp, at + size, site + size, code + size);
    FlushInstructionCache(GetCurrentProcess(), code, size + kRel32Size);
    return at;
}

}  // namespace cp::hooks
