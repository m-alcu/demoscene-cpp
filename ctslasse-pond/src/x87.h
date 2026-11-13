// The intro's floating point, as the harness's emulator (Unicorn, QEMU
// 5.0's x87) computes it. The intro was checked under that emulator, so this
// is what the reference holds.
//
// The arithmetic is the x87's own: 80 bits, rounding to nearest (the
// program never changes the control word). That is long double with GCC or
// Clang on x86, so the code writes its expressions in X = long double,
// evaluated in the intro's order and rounded to float or double where the
// intro stores a value.
//
// What QEMU does its own way is here: FSIN and FCOS go through doubles and
// the C library, and FIST saturates.
#pragma once

#include <cmath>
#include <cstdint>
#include <limits>

namespace pond {

using X = long double;
static_assert(std::numeric_limits<X>::digits == 64,
              "long double must be the x87's 80-bit format (GCC or Clang on x86) for the exact picture");

namespace x87 {

// FSIN, FCOS: through doubles, as QEMU does them (not the x87's own
// 80-bit results)
inline X fsin(X x) { return (X)std::sin((double)x); }
inline X fcos(X x) { return (X)std::cos((double)x); }

// FRNDINT + FISTP dword: to the nearest integer; out of range, saturated
inline int32_t fist(X x) {
    const X r = std::nearbyint(x);
    if (!(r >= -2147483648.0L)) return INT32_MIN;
    if (!(r <= 2147483647.0L)) return INT32_MAX;
    return (int32_t)r;
}

}  // namespace x87

}  // namespace pond
