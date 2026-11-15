// Part 8's light tables, from its set-up (1C7C0h).
#include "precalc/light.h"

#include <cmath>

#include "common.h"

namespace tunnel {

// One row per light level L:
// - 0-64 map a texel J to J f + 128 (1 - f), f = e^(1.5 - (64 - L)/13) - 0.02,
//   at most 1 (1 from L 45): the low levels fogged towards index 128;
// - 65-129, the highlights: J + (L - 65)(255 - J) / 64, towards white.
std::vector<uint8_t> makeLightTables() {
    std::vector<uint8_t> light(0x10000, 0);
    for (int32_t row = 0; row <= 0x40; row++) {
        float f = (float)(std::exp(1.5 - X(0x40 - row) * 0.07692307692307693) + -0.02);
        if (1 < f) f = 1.0f;
        for (int32_t j = 0; j < 0x100; j++) {
            light[row * 0x100 + j] = (uint8_t)std::lrint(X(j) * f + (1 - X(f)) * 128.0f);
            light[(0x41 + row) * 0x100 + j] = (uint8_t)(row * (0xFF - j) / 64 + j);
        }
    }
    return light;
}

}  // namespace tunnel
