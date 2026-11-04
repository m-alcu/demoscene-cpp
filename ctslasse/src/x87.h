// The x87 as the harness's emulator (Unicorn, QEMU 5.0's x87) computes it:
// arithmetic in 80 bits (long double: the host's x87, precision control
// extended as after FNINIT, rounding to nearest), the transcendental
// instructions through doubles and the C library, as QEMU's helpers do.
// The program never changes the control word.
#pragma once

#include <cfenv>
#include <cmath>
#include <cstdint>
#include <cstring>

namespace lasse {

using X = long double;

namespace x87 {

constexpr double kMaxTan = 9223372036854775808.0;

inline X fsin(X x) {
    const double d = (double)x;
    if (d > kMaxTan || d < -kMaxTan) return x;
    return (X)std::sin(d);
}

inline X fcos(X x) {
    const double d = (double)x;
    if (d > kMaxTan || d < -kMaxTan) return x;
    return (X)std::cos(d);
}

// FSINCOS: ST0 = cos, ST1 = sin
inline void fsincos(X x, X& s, X& c) {
    const double d = (double)x;
    s = (X)std::sin(d);
    c = (X)std::cos(d);
}

// FPATAN: atan2(ST1, ST0)
inline X fpatan(X st1, X st0) { return (X)std::atan2((double)st1, (double)st0); }

// FYL2X: ST1 * log2(ST0) (ST0 > 0)
inline X fyl2x(X st1, X st0) {
    double t = (double)st0;
    t = std::log(t) / std::log(2.0);
    t *= (double)st1;
    return (X)t;
}

inline X f2xm1(X x) { return (X)(std::pow(2.0, (double)x) - 1.0); }

inline X fscale(X st0, X st1) {
    if (std::isnan(st1)) return st1;
    return std::scalbn(st0, (int)std::trunc(st1));
}

inline int expOf(X x) {
    uint16_t e;
    std::memcpy(&e, reinterpret_cast<const char*>(&x) + 8, 2);
    return e & 0x7FFF;
}

// FPREM: ST0 = ST0 rem ST1 (QEMU 5.0's, in doubles)
inline X fprem(X st0x, X st1x) {
    double st0 = (double)st0x, st1 = (double)st1x;
    if (std::isinf(st0) || std::isnan(st0) || std::isnan(st1) || st1 == 0.0) return (X)NAN;
    const int expdif = expOf(st0x) - expOf(st1x);
    if (expdif < 0) return st0x;
    if (expdif < 53) {
        double q = st0 / st1;
        q = q < 0.0 ? std::ceil(q) : std::floor(q);
        st0 = st0 - st1 * q;
    } else {
        const double t = std::pow(2.0, expdif - 50);
        double s = (st0 / st1) / t;
        s = s < 0.0 ? -std::floor(std::fabs(s)) : std::floor(s);
        st0 -= st1 * s * t;
    }
    return (X)st0;
}

inline X fsqrt(X x) { return std::sqrt(x); }
inline X frndint(X x) { return std::nearbyint(x); }

// FIST(P) dword: round to nearest; out of range, softfloat's saturation
inline int32_t fist32(X x) {
    const X r = std::nearbyint(x);
    if (!(r >= -2147483648.0L)) return INT32_MIN;
    if (!(r <= 2147483647.0L)) return INT32_MAX;
    return (int32_t)r;
}

// FISTP qword
inline int64_t fist64(X x) {
    const X r = std::nearbyint(x);
    if (!(r >= -9223372036854775808.0L)) return INT64_MIN;
    if (!(r < 9223372036854775808.0L)) return INT64_MAX;
    return (int64_t)r;
}

inline int16_t fist16(X x) {
    const int32_t v = fist32(x);
    return v == (int16_t)v ? (int16_t)v : (int16_t)-32768;
}

}  // namespace x87

// The x87 register stack, for code that keeps values on it across
// instructions and calls (the vector routines, the compiler's scheduling).
// The methods are the instructions (capstone's names, Intel's operand
// order): fsubp(i): ST(i) = ST(i) - ST0, pop; fsubrp(i): ST(i) = ST0 - ST(i),
// pop; fsub(X): ST0 -= X; fsubr(X): ST0 = X - ST0; and so on.
struct Fpu {
    X r[8] = {};
    int top = 0;

    X& st(int i) { return r[(top + i) & 7]; }
    X& operator[](int i) { return st(i); }
    void push(X v) { top = (top - 1) & 7; r[top] = v; }
    X pop() { const X v = r[top]; top = (top + 1) & 7; return v; }

    void fld(X v) { push(v); }
    void fldst(int i) { const X v = st(i); push(v); }
    void fld1() { push(1.0L); }
    void fldz() { push(0.0L); }
    void fldl2e() {                             // 3FFF B8AA3B295C17F0BCh
        X v = 0;
        const uint64_t m = 0xB8AA3B295C17F0BCull;
        const uint16_t e = 0x3FFF;
        std::memcpy(&v, &m, 8);
        std::memcpy(reinterpret_cast<char*>(&v) + 8, &e, 2);
        push(v);
    }
    void fxch(int i = 1) { std::swap(st(0), st(i)); }
    float fstf() { return (float)st(0); }
    double fstd() { return (double)st(0); }
    float fstpf() { return (float)pop(); }
    double fstpd() { return (double)pop(); }
    void fstp(int i) { st(i) = st(0); pop(); }     // fstp st(i)
    int32_t fistp() { return x87::fist32(pop()); }
    int32_t fist() { return x87::fist32(st(0)); }

    void fadd(X v) { st(0) += v; }
    void fsub(X v) { st(0) -= v; }
    void fsubr(X v) { st(0) = v - st(0); }
    void fmul(X v) { st(0) *= v; }
    void fdiv(X v) { st(0) /= v; }
    void fdivr(X v) { st(0) = v / st(0); }
    // the register forms: ST0 op= ST(i)
    void faddst(int i) { st(0) += st(i); }
    void fsubst(int i) { st(0) -= st(i); }
    void fsubrst(int i) { st(0) = st(i) - st(0); }
    void fmulst(int i) { st(0) *= st(i); }
    // ST(i) op= ST0
    void faddto(int i) { st(i) += st(0); }
    void fsubto(int i) { st(i) -= st(0); }
    void fsubrto(int i) { st(i) = st(0) - st(i); }
    void fmulto(int i) { st(i) *= st(0); }
    void faddp(int i = 1) { st(i) += st(0); pop(); }
    void fsubp(int i = 1) { st(i) -= st(0); pop(); }
    void fsubrp(int i = 1) { st(i) = st(0) - st(i); pop(); }
    void fmulp(int i = 1) { st(i) *= st(0); pop(); }
    void fdivp(int i = 1) { st(i) /= st(0); pop(); }
    void fdivrp(int i = 1) { st(i) = st(0) / st(i); pop(); }
    void fchs() { st(0) = -st(0); }
    void fabs_() { st(0) = std::fabs(st(0)); }

    void fsin() { st(0) = x87::fsin(st(0)); }
    void fcos() { st(0) = x87::fcos(st(0)); }
    void fsincos() {
        X s, c;
        x87::fsincos(st(0), s, c);
        st(0) = s;
        push(c);
    }
    void fsqrt() { st(0) = x87::fsqrt(st(0)); }
    void frndint() { st(0) = x87::frndint(st(0)); }
    void fpatan() { const X v = x87::fpatan(st(1), st(0)); pop(); st(0) = v; }
    void fyl2x() { const X v = x87::fyl2x(st(1), st(0)); pop(); st(0) = v; }
    void fprem() { st(0) = x87::fprem(st(0), st(1)); }
    void f2xm1() { st(0) = x87::f2xm1(st(0)); }
    void fscale() { st(0) = x87::fscale(st(0), st(1)); }
    // Watcom's inline pow tail: ST0 = 2^ST0 (fld1; fld st(1); fprem; f2xm1;
    // faddp st(1); fscale; fxch st(1); fstp st(0))
    void exp2() {
        fld1();
        fldst(1);
        fprem();
        f2xm1();
        faddp(1);
        fscale();
        fxch(1);
        fstp(0);
    }
    // FCOM(P) with FNSTSW/SAHF: the flags of ST0 against V (unordered: all set)
    struct Cmp {
        bool below, equal, unordered;
        bool jb() const { return below || unordered; }
        bool jbe() const { return below || equal || unordered; }
        bool ja() const { return !jbe(); }
        bool jae() const { return !jb(); }
        bool je() const { return equal || unordered; }
    };
    Cmp fcom(X v) const {
        const X a = r[top];
        if (std::isnan(a) || std::isnan(v)) return {true, true, true};
        return {a < v, a == v, false};
    }
    Cmp fcomp(X v) {
        const Cmp c = fcom(v);
        pop();
        return c;
    }
};

}  // namespace lasse
