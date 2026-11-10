// x87 arithmetic as the original executes it.
//
// The intro is MSVC6 code: float globals, x87 maths at the Windows default control word 0x27F
// (53-bit precision, round to nearest), and the CRT's cos/sin are the bare fcos/fsin
// instructions, whose 64-bit-mantissa result goes straight into the next x87 operation.
// To get the same bits we compute in long double (x87 on x86/x86-64) with the control word
// set to 0x27F, and call fcos/fsin directly.
#pragma once

#if !(defined(__i386__) || defined(__x86_64__))
#error "insert-chipcity needs an x86 CPU (x87 fcos/fsin, precision control)"
#endif

namespace icc {

using ld = long double;

inline ld x87_cos(ld x) {
    ld r;
    __asm__("fcos" : "=t"(r) : "0"(x));
    return r;
}

inline ld x87_sin(ld x) {
    ld r;
    __asm__("fsin" : "=t"(r) : "0"(x));
    return r;
}

// The CRT helpers at 0x42b880/0x42b8a0 take a float and return the raw x87 result.
inline ld crt_cos(float a) { return x87_cos((ld)a); }
inline ld crt_sin(float a) { return x87_sin((ld)a); }

// Scope guard: x87 control word 0x27F (PC53, round to nearest, all exceptions masked).
class Pc53 {
public:
    Pc53() {
        __asm__ volatile("fnstcw %0" : "=m"(old_));
        const unsigned short cw = 0x27F;
        __asm__ volatile("fldcw %0" : : "m"(cw));
    }
    ~Pc53() { __asm__ volatile("fldcw %0" : : "m"(old_)); }
    Pc53(const Pc53&) = delete;
    Pc53& operator=(const Pc53&) = delete;

private:
    unsigned short old_;
};

}  // namespace icc
