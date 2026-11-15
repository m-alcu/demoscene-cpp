// The palettes: gradients between a few colours. The fades: a palette mixed
// with white, with another palette or with black, in 64 steps.
#include "precalc/palette.h"

#include <algorithm>
#include <cstring>

namespace tunnel {

namespace {

// N colours from (R0, G0, B0) towards (R1, G1, B1), which comes next (it is
// not reached)
void gradient(uint8_t* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1, int32_t n) {
    int32_t ra = r0 * n, ga = g0 * n, ba = b0 * n, rb = 0, gb = 0, bb = 0;
    for (int32_t i = 0; i < n; i++) {
        *dst++ = (uint8_t)((rb + ra) / n);
        *dst++ = (uint8_t)((gb + ga) / n);
        *dst++ = (uint8_t)((bb + ba) / n);
        rb += r1, ra -= r0;
        gb += g1, ga -= g0;
        bb += b1, ba -= b0;
    }
}

// the same gradient unrounded (32-bit colour)
void gradient(float* dst, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1, int32_t n) {
    for (int32_t i = 0; i < n; i++) {
        *dst++ = (float)(r1 * i + r0 * (n - i)) / n;
        *dst++ = (float)(g1 * i + g0 * (n - i)) / n;
        *dst++ = (float)(b1 * i + b0 * (n - i)) / n;
    }
}

}  // namespace

Palettes::Palettes() {
    // AT: the first entry's offset (3 bytes a colour); rounded as the intro
    // has them, and unrounded for the 32-bit picture
    auto both = [&](Pal p, int at, int32_t r0, int32_t g0, int32_t b0, int32_t r1, int32_t g1, int32_t b1, int32_t n) {
        gradient(pal_[(int)p] + at, r0, g0, b0, r1, g1, b1, n);
        gradient(exact_[(int)p] + at, r0, g0, b0, r1, g1, b1, n);
    };
    both(Pal::Red, 0x000, 5, 8, 1, 6, 3, 0x1E, 0x40);              // green-grey to purple
    both(Pal::Red, 0x0C0, 6, 3, 0x1E, 0x0A, 0x23, 0x3C, 0x40);     // to light blue (index 128: the fog)
    both(Pal::Red, 0x180, 0x0A, 0x23, 0x3C, 0, 0, 0, 0x40);        // to black
    both(Pal::Red, 0x240, 0, 0, 0, 0x3F, 0, 0, 0x20);              // to red
    both(Pal::Red, 0x2A0, 0x3F, 0, 0, 0x3F, 0x3F, 0, 0x20);        // to yellow
    both(Pal::Grey, 0, 0, 0, 0, 0x3F, 0x3F, 0x3F, 0x100);          // black to white
    both(Pal::Blue, 0, 0, 0, 0, 0x10, 0x20, 0x40, 0x80);           // black to blue
    both(Pal::Blue, 0x180, 0x10, 0x20, 0x40, 0x3F, 0x3F, 0x3F, 0x80);   // to white
}

void Palettes::white(Dac& dac) {
    std::memset(dac.rgb, 0x3F, sizeof dac.rgb);
    std::fill(dac.exact, dac.exact + 768, 63.0f);
}

void Palettes::whole(Pal p, Dac& dac) const {
    std::memcpy(dac.rgb, pal_[(int)p], sizeof dac.rgb);
    for (int i = 0; i < 768; i++) dac.exact[i] = std::min(exact_[(int)p][i], 63.0f);
}

// The fades. The 6-bit DAC wraps 64, the blue palette's middle, to 0; the
// unrounded DAC is the same mix, held at 63.

void Palettes::fromWhite(Pal p, int32_t k, Dac& dac) const {
    const uint8_t* s = pal_[(int)p];
    const float* sf = exact_[(int)p];
    for (int i = 0; i < 768; i++) {
        dac.rgb[i] = (uint8_t)((((int32_t)s[i] * k + 0xFC0 - k * 0x3F) >> 6) & 0x3F);
        dac.exact[i] = std::clamp((sf[i] * k + 63.0f * (64 - k)) / 64, 0.0f, 63.0f);
    }
}

void Palettes::mix(Pal p, Pal from, int32_t k, Dac& dac) const {
    const uint8_t *s = pal_[(int)p], *m = pal_[(int)from];
    const float *sf = exact_[(int)p], *mf = exact_[(int)from];
    for (int i = 0; i < 768; i++) {
        dac.rgb[i] = (uint8_t)((((int32_t)m[i] * (0x40 - k) + (int32_t)s[i] * k) >> 6) & 0x3F);
        dac.exact[i] = std::clamp((mf[i] * (64 - k) + sf[i] * k) / 64, 0.0f, 63.0f);
    }
}

void Palettes::toBlack(Pal p, int32_t k, Dac& dac) const {
    const uint8_t* s = pal_[(int)p];
    const float* sf = exact_[(int)p];
    for (int i = 0; i < 768; i++) {
        dac.rgb[i] = (uint8_t)((((int32_t)s[i] * k) >> 6) & 0x3F);
        dac.exact[i] = std::clamp(sf[i] * k / 64, 0.0f, 63.0f);
    }
}

}  // namespace tunnel
