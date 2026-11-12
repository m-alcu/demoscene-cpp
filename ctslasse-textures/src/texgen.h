// The texture generators of Lasse Reinbøng's knot (part 5), with their
// constants made parameters. With the defaults they make the intro's
// textures exactly (tests/tests.cpp), the warp and the light too, although
// they use plain doubles here instead of the x87.
//
// Every texture is a 256x256 tile of bytes, addressed by (row << 8 | column),
// wrapping both ways.
#pragma once

#include <cstdint>

namespace texlab {

constexpr int kSize = 256, kTexels = kSize * kSize;

// --- the fractal noise (16DCAh) ----------------------------------------------
// A diamond-square: the square's centres from their four corners, then the
// sides' midpoints from their two corners and the two centres beside them,
// each plus a random part; the step from 256 down to 2.
struct PlasmaParams {
    uint32_t seed = 0x17091977;
    int bits = 3;               // values 0..2^bits - 1
    int amp = 500;              // the random part's size at the first level
    float decay = 0.5f;         // the amplitude's factor from level to level (roughness)
    int centreMul = 3;          // the random part's weight at a centre
    int sideMul = 2;            // ... at a side
};
void plasma(const PlasmaParams& p, uint8_t* out);

// --- the knot's material (18B76h, 16E81h) ------------------------------------
// A noise (the base) read displaced: across by TX[U], down by TY[V], where
// U and V are two more noises at the texel and TX, TY waves with noise on
// top (from the first row of V and U):
//     TX[i] = V[i] / div - amplitude sin(freq i + phase)
//     TY[i] = U[i] / div + amplitude cos(freq i + phase)
// Then shifted left (by 5: the base picks one of the 8 ramps of 32).
struct WarpParams {
    PlasmaParams base;
    PlasmaParams u{0x4D3, 8, 500, 0.5f, 3, 2};
    PlasmaParams v{0x477, 8, 500, 0.5f, 3, 2};
    float amplitude = 80.0f;
    float freq = 0.04f;
    float phase = 0.0f;
    int div = 2;
    int shift = 5;
};
void warp(const WarpParams& p, uint8_t* out);

// --- the background's hexagons (185D5h, 16EA6h) ------------------------------
// Three colours on a lattice of hexagons: down, bands (DY a row, a band each
// 128), every other one shifted; across, cells 256/3 wide (DX a column).
// Then blurred with a 3x3 box, BLUR times.
struct HexParams {
    int dx = 5;
    int dy = 8;
    int colour[3] = {0x45, 0x4C, 0x54};
    int blur = 1;
};
void hexes(const HexParams& p, uint8_t* out);

// --- the light (18FF9h) ----------------------------------------------------------
// With R the squared distance to (cx, cy) over radius^2, at most rmax:
//     (peak (1 - R/div)^power + slope (1 - R) + offset) / scale
// a narrow, hot peak on a broad slope. The shade in a ramp, 0-31.
struct LightParams {
    float cx = 128, cy = 128;
    float radius = 128;
    float rmax = 0.9f;
    float power = 100;
    float div = 6;
    float peak = 128;
    float slope = 96;
    float offset = 30;
    float scale = 8;
};
void lighting(const LightParams& p, uint8_t* out);

// --- the palette (189ECh) --------------------------------------------------------
// Eight ramps of 32: black -> the ramp's colour over SPLIT entries, -> white
// over the rest. The colours (6-bit) are set by palette8Colours.
struct PaletteParams {
    int colour[8][3];
    int split = 18;
    PaletteParams();
};
void palette8Colours(int out[8][3]);    // the intro's: greys, browns, greens
void palette(const PaletteParams& p, uint8_t* rgb);  // 256 x RGB, 6-bit

uint32_t crc32(const uint8_t* p, unsigned n);

}  // namespace texlab
