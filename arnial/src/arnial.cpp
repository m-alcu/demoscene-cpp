#include "arnial.h"
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

namespace arn {

Arnial::Arnial(int resol) : resol(resol), h(120 * resol) {
    // SINCOS.INC: 256 angles per turn, amplitude 256, rounded to the nearest integer (this gives
    // all 320 entries of the original table exactly); Cosine is the same table 64 entries on.
    const double pi = std::acos(-1.0);
    for (int i = 0; i < 320; i++) sine[i] = (int16_t)std::lround(256.0 * std::sin(2.0 * pi * i / 256.0));
    reset();
}

bool Arnial::init(const std::string& data) {
    const std::string ip = data + "/arnial.png";
    SDL_Surface* s = SDL_LoadPNG(ip.c_str());
    const SDL_Palette* pal = s ? SDL_GetSurfacePalette(s) : nullptr;
    if (!s || s->format != SDL_PIXELFORMAT_INDEX8 || !pal || s->w != 256 || s->h != 256) {
        std::fprintf(stderr, "arnial: %s is not a 256x256 indexed image\n", ip.c_str());
        if (s) SDL_DestroySurface(s);
        return false;
    }
    bitmap.resize(65536);
    for (int y = 0; y < 256; y++) std::memcpy(&bitmap[y * 256], (const uint8_t*)s->pixels + y * s->pitch, 256);
    // the palette goes to the DAC shifted right by 2 (PAL holds 8-bit values)
    for (int i = 0; i < 256; i++) {
        const SDL_Color c = i < pal->ncolors ? pal->colors[i] : SDL_Color{};
        dac6[3 * i] = c.r >> 2;
        dac6[3 * i + 1] = c.g >> 2;
        dac6[3 * i + 2] = c.b >> 2;
    }
    SDL_DestroySurface(s);
    reset();
    return true;
}

void Arnial::reset() {
    page[0].assign(W * h, 0);        // the mode set clears video memory
    page[1].assign(W * h, 0);
    shown = 0;
    rot = 192;
    xx = yy = 0;
}

void Arnial::step() {
    shown ^= 1;                      // vga1/vga2 swap, Set_Start_Offset, wait for the retrace
    if (!bitmap.empty()) draw(page[shown ^ 1]);
    rot++;                           // the next angle
    yy += 128;                       // pan half a texel down
}

// The body of the main loop (barbra). All arithmetic is 16-bit, as in the original.
void Arnial::draw(std::vector<uint8_t>& out) {
    // scale = (sin(rot) + 256) * 16: the zoom breathes with the angle, 0..8192
    const int16_t sn = sine[rot], cs = sine[rot + 64];
    const int32_t scale = (int16_t)((sn + 256) << 4);
    // imul, then the middle 16 bits of the product: (v * scale) >> 8, in 8.8 texels
    const int16_t S = (int16_t)(uint16_t)((uint32_t)(sn * scale) >> 8);
    const int16_t C = (int16_t)(uint16_t)((uint32_t)(cs * scale) >> 8);

    // Per byte (two pixels) the scan moves (2C, 2S); per row (-S, C). With resol 2 the rows are
    // twice as many and the row step half as big (sar).
    const uint16_t ddx = (uint16_t)(2 * C), ddy = (uint16_t)(2 * S);
    const uint16_t d2x = (uint16_t)(resol == 2 ? (int16_t)-S >> 1 : -S);
    const uint16_t d2y = (uint16_t)(resol == 2 ? C >> 1 : C);

    // Planes 2-3 (the right pixel of each byte) start at the pan; planes 0-1 (the left pixel)
    // half a byte step back, (-C, -S), so together they sample every (C, S): 160 pixels.
    uint16_t ii = xx, jj = yy;
    uint16_t ii2 = (uint16_t)(xx - C), jj2 = (uint16_t)(yy - S);

    for (int y = 0; y < h; y++) {
        uint8_t* row = &out[y * W];
        uint16_t cx = ii, dx = jj;           // planes 1100
        for (int x = 0; x < W; x += 2) {
            cx += ddx;
            dx += ddy;
            row[x + 1] = bitmap[(dx & 0xFF00) | cx >> 8];
        }
        cx = ii2;                            // planes 0011
        dx = jj2;
        for (int x = 0; x < W; x += 2) {
            cx += ddx;
            dx += ddy;
            row[x] = bitmap[(dx & 0xFF00) | cx >> 8];
        }
        ii += d2x;
        jj += d2y;
        ii2 += d2x;
        jj2 += d2y;
    }
}

void Arnial::to_argb(uint32_t* out) const {
    uint32_t pal[256];
    for (int i = 0; i < 256; i++) {
        const uint8_t* c = &dac6[3 * i];
        pal[i] = 0xff000000u | (uint32_t)((c[0] * 255 + 31) / 63) << 16 | (uint32_t)((c[1] * 255 + 31) / 63) << 8 |
                 (uint32_t)((c[2] * 255 + 31) / 63);
    }
    const uint8_t* p = pixels();
    for (int k = 0; k < W * h; k++) out[k] = pal[p[k]];
}

void Arnial::to_rgb24(uint8_t* out) const {
    const uint8_t* p = pixels();
    for (int k = 0; k < W * h; k++) {
        const uint8_t* c = &dac6[3 * p[k]];
        for (int j = 0; j < 3; j++) *out++ = (uint8_t)((c[j] * 255 + 31) / 63);
    }
}

uint32_t crc32(const uint8_t* p, size_t n) {
    static uint32_t table[256];
    static bool init = false;
    if (!init) {
        for (uint32_t i = 0; i < 256; i++) {
            uint32_t k = i;
            for (int j = 0; j < 8; j++) k = (k >> 1) ^ (0xEDB88320u & (0u - (k & 1)));
            table[i] = k;
        }
        init = true;
    }
    uint32_t c = ~0u;
    while (n--) c = (c >> 8) ^ table[(c ^ *p++) & 0xFF];
    return ~c;
}

}  // namespace arn
