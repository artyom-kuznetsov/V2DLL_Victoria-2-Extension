#pragma once

#include <cstdint>

namespace cp::hooks {

// x87 control word fields and the default MXCSR (all SSE exceptions masked, round to nearest).
constexpr uint16_t kX87Precision24 = 0x0000;
constexpr uint16_t kX87Precision53 = 0x0200;
constexpr uint16_t kX87Precision64 = 0x0300;
constexpr uint16_t kX87PrecisionMask = 0x0300;
constexpr uint16_t kX87RoundingMask = 0x0C00;
constexpr uint16_t kX87ExceptionMasks = 0x003F;
constexpr uint32_t kMxcsrDefault = 0x1F80;

inline const char* x87_precision_name(uint16_t control_word) {
    switch (control_word & kX87PrecisionMask) {
        case kX87Precision24: return "24-bit";
        case kX87Precision53: return "53-bit";
        default: return "64-bit";
    }
}

inline void read_fpu(uint16_t& x87, uint32_t& mxcsr) {
    uint16_t cw;
    uint32_t csr;
    __asm {
        fnstcw cw
        stmxcsr csr
    }
    x87 = cw;
    mxcsr = csr;
}

inline void write_fpu(uint16_t x87, uint32_t mxcsr) {
    __asm {
        fldcw x87
        ldmxcsr mxcsr
    }
}

}  // namespace cp::hooks
