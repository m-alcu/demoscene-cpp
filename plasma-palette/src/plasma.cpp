#include "plasma.h"

#include <cmath>

namespace pp {

namespace {

// A palette from a few key colours (6-bit), interpolated around the 256 entries and closing
// back on the first one, so that cycling it has no seam.
void ramp(uint8_t out[256][3], const uint8_t keys[][3], int n) {
    for (int i = 0; i < 256; i++) {
        const int seg = i * n / 256, pos = i * n % 256;  // pos/256 into segment seg
        const uint8_t* a = keys[seg];
        const uint8_t* b = keys[(seg + 1) % n];
        for (int c = 0; c < 3; c++) out[i][c] = (uint8_t)(a[c] + (b[c] - a[c]) * pos / 256);
    }
}

}  // namespace

Plasma::Plasma() : screen_(W * H) {
    for (int i = 0; i < 256; i++) sin_[i] = (uint8_t)std::lround(128 + 127 * std::sin(i * 2 * M_PI / 256));

    const uint8_t fire[][3] = {{0, 0, 0}, {32, 0, 0}, {63, 24, 0}, {63, 63, 20}, {63, 32, 0}, {24, 0, 8}};
    const uint8_t ocean[][3] = {{0, 0, 16}, {0, 20, 40}, {10, 50, 63}, {50, 63, 63}, {0, 30, 50}, {0, 6, 28}};
    const uint8_t rainbow[][3] = {{63, 0, 0}, {63, 63, 0}, {0, 63, 0}, {0, 63, 63}, {0, 0, 63}, {63, 0, 63}};
    const uint8_t candy[][3] = {{20, 0, 30}, {63, 20, 50}, {63, 63, 63}, {20, 50, 63}, {0, 10, 30}, {40, 0, 40}};
    ramp(pal_[0], fire, 6);
    ramp(pal_[1], ocean, 6);
    ramp(pal_[2], rainbow, 6);
    ramp(pal_[3], candy, 6);
    for (int i = 0; i < 256; i++)
        for (int c = 0; c < 3; c++) dac_[i][c] = pal_[0][i][c];
}

void Plasma::next_palette() {
    from_ = target_;
    target_ = (target_ + 1) % kPalettes;
    fade_ = 0;
}

// The plasma: each pixel is a byte sum of sine-table lookups, so colours wrap around the
// palette. Only the table offsets move each frame; the palette does the rest.
void Plasma::draw() {
    const uint8_t* s = sin_;
    const int t = (int)t_;
    uint8_t* p = screen_.data();
    switch (plasma_) {
    case 0: {  // classic: horizontal + vertical waves, each the sum of two sines
        uint8_t row[W];
        for (int x = 0; x < W; x++) row[x] = (uint8_t)(s[(x + t) & 255] + s[(x * 3 - t * 2) & 255]);
        for (int y = 0; y < H; y++) {
            const uint8_t col = (uint8_t)(s[(y * 2 + t * 3) & 255] + s[(y - t) & 255]);
            for (int x = 0; x < W; x++) *p++ = (uint8_t)(row[x] + col + s[(x + y + t) & 255]);
        }
        break;
    }
    case 1: {  // circles: distance from two moving centres (squared, through a table)
        const int cx1 = 160 + (s[(t * 2) & 255] - 128) * 110 / 128, cy1 = 100 + (s[(t * 3 + 64) & 255] - 128) * 70 / 128;
        const int cx2 = 160 + (s[(t * 3 + 100) & 255] - 128) * 120 / 128, cy2 = 100 + (s[(t + 30) & 255] - 128) * 80 / 128;
        for (int y = 0; y < H; y++)
            for (int x = 0; x < W; x++) {
                const int d1 = (int)std::sqrt((float)((x - cx1) * (x - cx1) + (y - cy1) * (y - cy1)));
                const int d2 = (int)std::sqrt((float)((x - cx2) * (x - cx2) + (y - cy2) * (y - cy2)));
                *p++ = (uint8_t)(s[(d1 * 4) & 255] + s[(d2 * 3 + t) & 255]);
            }
        break;
    }
    default: {  // interference: a wave along a turning direction plus a ripple
        const int ca = s[(t + 64) & 255] - 128, sa = s[t & 255] - 128;  // rotating direction
        for (int y = 0; y < H; y++)
            for (int x = 0; x < W; x++) {
                const int u = ((x - 160) * ca + (y - 100) * sa) >> 6;
                *p++ = (uint8_t)(s[(u + t * 2) & 255] + s[(((x * x + y * y) >> 7) - t * 3) & 255] +
                                 s[(x - y * 2 + t) & 255]);
            }
        break;
    }
    }
}

void Plasma::frame() {
    t_++;
    if (cycling) shift_ = (shift_ + 1) & 255;
    if (fade_ < 64) fade_++;
    // The "DAC": the palette blended from the old to the new one (64 steps, like the 6-bit
    // VGA fades), then rotated by shift_ - colour cycling.
    for (int i = 0; i < 256; i++) {
        const int j = (i + shift_) & 255;
        for (int c = 0; c < 3; c++)
            dac_[i][c] = (uint8_t)(pal_[from_][j][c] + (pal_[target_][j][c] - pal_[from_][j][c]) * fade_ / 64);
    }
    draw();
}

void Plasma::to_argb(uint32_t* out) const {
    uint32_t lut[256];
    for (int i = 0; i < 256; i++)
        lut[i] = 0xFF000000u | (uint32_t)(dac_[i][0] * 255 / 63) << 16 | (uint32_t)(dac_[i][1] * 255 / 63) << 8 |
                 (uint32_t)(dac_[i][2] * 255 / 63);
    for (int k = 0; k < W * H; k++) out[k] = lut[screen_[k]];
}

}  // namespace pp
