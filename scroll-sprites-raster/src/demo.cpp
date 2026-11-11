#include "demo.h"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <string>

namespace ssr {

namespace {

constexpr int kBall = 28;                       // sprite size
constexpr int kBalls = 12;
constexpr int kBallPal = 64, kBallShades = 64;  // palette 64-127: the ball's shading
constexpr int kTextPal = 128, kTextRows = 28;   // palette 128-155: the scroller's gradient
constexpr int kShadow = 1;                      // palette 1: the scroller's shadow
constexpr int kScale = 4;                       // font pixels -> screen pixels
constexpr int kCell = 6 * kScale;               // 5 columns + 1 gap
constexpr int kTextY = 138;                     // scroller baseline (top of the glyphs)

const char* kText =
    "HOLA ESCENA!  ESTO ES UN SCROLL SINUSOIDAL CON SPRITES Y BARRAS RASTER, COMO EN 1993...  "
    "EL COLOR 0 CAMBIA EN CADA LINEA, LAS BOLAS SON SPRITES CON TRANSPARENCIA Y CADA COLUMNA "
    "DEL TEXTO SIGUE UNA ONDA.  SALUDOS A TODOS LOS QUE AUN PROGRAMAN EN MODO 13H!       ";

// A 5x7 font: 7 rows per glyph, bit 4 = leftmost column.
struct Glyph { char c; uint8_t rows[7]; };
const Glyph kFont[] = {
    {'A', {0x0E, 0x11, 0x11, 0x1F, 0x11, 0x11, 0x11}}, {'B', {0x1E, 0x11, 0x11, 0x1E, 0x11, 0x11, 0x1E}},
    {'C', {0x0E, 0x11, 0x10, 0x10, 0x10, 0x11, 0x0E}}, {'D', {0x1E, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1E}},
    {'E', {0x1F, 0x10, 0x10, 0x1E, 0x10, 0x10, 0x1F}}, {'F', {0x1F, 0x10, 0x10, 0x1E, 0x10, 0x10, 0x10}},
    {'G', {0x0E, 0x11, 0x10, 0x17, 0x11, 0x11, 0x0F}}, {'H', {0x11, 0x11, 0x11, 0x1F, 0x11, 0x11, 0x11}},
    {'I', {0x0E, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0E}}, {'J', {0x07, 0x02, 0x02, 0x02, 0x02, 0x12, 0x0C}},
    {'K', {0x11, 0x12, 0x14, 0x18, 0x14, 0x12, 0x11}}, {'L', {0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F}},
    {'M', {0x11, 0x1B, 0x15, 0x15, 0x11, 0x11, 0x11}}, {'N', {0x11, 0x11, 0x19, 0x15, 0x13, 0x11, 0x11}},
    {'O', {0x0E, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0E}}, {'P', {0x1E, 0x11, 0x11, 0x1E, 0x10, 0x10, 0x10}},
    {'Q', {0x0E, 0x11, 0x11, 0x11, 0x15, 0x12, 0x0D}}, {'R', {0x1E, 0x11, 0x11, 0x1E, 0x14, 0x12, 0x11}},
    {'S', {0x0F, 0x10, 0x10, 0x0E, 0x01, 0x01, 0x1E}}, {'T', {0x1F, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04}},
    {'U', {0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0E}}, {'V', {0x11, 0x11, 0x11, 0x11, 0x11, 0x0A, 0x04}},
    {'W', {0x11, 0x11, 0x11, 0x15, 0x15, 0x15, 0x0A}}, {'X', {0x11, 0x11, 0x0A, 0x04, 0x0A, 0x11, 0x11}},
    {'Y', {0x11, 0x11, 0x11, 0x0A, 0x04, 0x04, 0x04}}, {'Z', {0x1F, 0x01, 0x02, 0x04, 0x08, 0x10, 0x1F}},
    {'0', {0x0E, 0x11, 0x13, 0x15, 0x19, 0x11, 0x0E}}, {'1', {0x04, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x0E}},
    {'2', {0x0E, 0x11, 0x01, 0x02, 0x04, 0x08, 0x1F}}, {'3', {0x1F, 0x02, 0x04, 0x02, 0x01, 0x11, 0x0E}},
    {'4', {0x02, 0x06, 0x0A, 0x12, 0x1F, 0x02, 0x02}}, {'5', {0x1F, 0x10, 0x1E, 0x01, 0x01, 0x11, 0x0E}},
    {'6', {0x06, 0x08, 0x10, 0x1E, 0x11, 0x11, 0x0E}}, {'7', {0x1F, 0x01, 0x02, 0x04, 0x08, 0x08, 0x08}},
    {'8', {0x0E, 0x11, 0x11, 0x0E, 0x11, 0x11, 0x0E}}, {'9', {0x0E, 0x11, 0x11, 0x0F, 0x01, 0x02, 0x0C}},
    {'!', {0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x04}}, {'.', {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C}},
    {',', {0x00, 0x00, 0x00, 0x00, 0x0C, 0x04, 0x08}}, {'-', {0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00}},
    {'\'', {0x04, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00}}, {'?', {0x0E, 0x11, 0x01, 0x02, 0x04, 0x00, 0x04}},
    {':', {0x00, 0x0C, 0x0C, 0x00, 0x0C, 0x0C, 0x00}},
};

const uint8_t* glyph(char c) {
    static const uint8_t blank[7] = {};
    for (const Glyph& g : kFont)
        if (g.c == c) return g.rows;
    return blank;
}

uint32_t argb(int r, int g, int b) {
    return 0xFF000000u | (uint32_t)std::clamp(r, 0, 255) << 16 | (uint32_t)std::clamp(g, 0, 255) << 8 |
           (uint32_t)std::clamp(b, 0, 255);
}

}  // namespace

Demo::Demo() : screen_(W * H), ball_(kBall * kBall) {
    for (int i = 0; i < 256; i++) sin_[i] = (uint8_t)std::lround(128 + 127 * std::sin(i * 2 * M_PI / 256));
    for (int i = 0; i < 256; i++) pal_[i] = argb(0, 0, 0);
    pal_[kShadow] = argb(0, 0, 0);

    // The ball's shading ramp: deep red -> orange -> a white highlight.
    for (int k = 0; k < kBallShades; k++) {
        const float f = (float)k / (kBallShades - 1);
        pal_[kBallPal + k] = argb((int)(70 + 185 * f), (int)(255 * f * f), (int)(255 * std::pow(f, 4.0f)));
    }
    // The sprite: a sphere lit from the upper left, as palette indices; 0 outside.
    for (int y = 0; y < kBall; y++)
        for (int x = 0; x < kBall; x++) {
            const float nx = (x + 0.5f) / kBall * 2 - 1, ny = (y + 0.5f) / kBall * 2 - 1;
            const float r2 = nx * nx + ny * ny;
            if (r2 > 1) continue;
            const float nz = std::sqrt(1 - r2);
            const float l = std::max(0.0f, (-0.5f * nx - 0.6f * ny + 0.62f * nz));
            const float shade = std::min(1.0f, 0.12f + 0.7f * l + 0.5f * std::pow(l, 12.0f));
            ball_[y * kBall + x] = (uint8_t)(kBallPal + shade * (kBallShades - 1));
        }
}

// Raster bars: each bar is a 16-line colour profile; positions follow sines, and bars whose
// cosine is negative are "behind" and drawn first, so they weave through each other.
void Demo::draw_rasters() {
    for (int y = 0; y < H; y++) line0_[y] = argb(0, 0, 10 + y / 10);  // the copper background
    if (!rasters) return;
    struct Bar { float y, z; int r, g, b; };
    static const int hues[][3] = {{255, 40, 40}, {255, 160, 0}, {255, 255, 60}, {40, 255, 80},
                                  {40, 200, 255}, {90, 80, 255}, {230, 60, 255}};
    std::array<Bar, 7> bars;
    const float t = t_ / 70.0f;
    for (int i = 0; i < 7; i++) {
        const float a = t * 2.1f + i * 0.45f;
        bars[i] = {H / 2 - 8 + 82 * std::sin(a), std::cos(a), hues[i][0], hues[i][1], hues[i][2]};
    }
    std::sort(bars.begin(), bars.end(), [](const Bar& a, const Bar& b) { return a.z < b.z; });
    for (const Bar& b : bars) {
        const int y0 = (int)std::lround(b.y);
        for (int k = 0; k < 16; k++) {
            const int y = y0 + k;
            if (y < 0 || y >= H) continue;
            const float f = std::sin((k + 0.5f) * (float)M_PI / 16);  // dark edges, bright middle
            const float hi = std::pow(f, 8.0f) * 120;                  // a white shine in the centre
            line0_[y] = argb((int)(b.r * f + hi), (int)(b.g * f + hi), (int)(b.b * f + hi));
        }
    }
}

// Sprites: a snake of balls on a Lissajous curve, sorted by depth (the second sine), drawn
// with colour 0 transparent and clipped to the screen.
void Demo::draw_sprites() {
    if (!sprites) return;
    struct Spr { int x, y; float z; };
    std::array<Spr, kBalls> s;
    const float t = t_ / 70.0f;
    for (int i = 0; i < kBalls; i++) {
        const float a = t * 1.3f - i * 0.28f, b = t * 1.9f - i * 0.35f;
        s[i] = {(int)(W / 2 - kBall / 2 + 135 * std::sin(a)), (int)(58 - kBall / 2 + 44 * std::sin(b)), std::cos(a)};
    }
    std::sort(s.begin(), s.end(), [](const Spr& a, const Spr& b) { return a.z < b.z; });
    for (const Spr& p : s)
        for (int y = 0; y < kBall; y++) {
            const int sy = p.y + y;
            if (sy < 0 || sy >= H) continue;
            for (int x = 0; x < kBall; x++) {
                const int sx = p.x + x;
                const uint8_t c = ball_[y * kBall + x];
                if (c && sx >= 0 && sx < W) screen_[sy * W + sx] = c;
            }
        }
}

// The scroller: every screen column takes one column of the text, shifted down by a sine of
// x and time; a shadow is drawn 3 pixels down-right first.
void Demo::draw_scroller() {
    if (!scroller) return;
    // The text gradient cycles: a copper bar of hues sliding through the glyph rows.
    for (int r = 0; r < kTextRows; r++) {
        const float h = (r * 9 + t_ * 3) * (float)M_PI / 128;
        const float f = 0.55f + 0.45f * std::sin(r * (float)M_PI / kTextRows);
        pal_[kTextPal + r] = argb((int)(255 * f * (0.6f + 0.4f * std::sin(h))),
                                  (int)(255 * f * (0.6f + 0.4f * std::sin(h + 2.1f))),
                                  (int)(255 * f * (0.6f + 0.4f * std::sin(h + 4.2f))));
    }
    const std::string text = kText;
    const int len = (int)text.size() * kCell;
    for (int pass = 0; pass < 2; pass++) {  // 0: shadow, 1: text
        const int off = pass ? 0 : 3;
        for (int x = 0; x < W; x++) {
            const int u = ((x + scroll_) % len + len) % len;
            const int col = (u % kCell) / kScale;
            if (col >= 5) continue;  // the gap between letters
            const uint8_t* g = glyph(text[u / kCell]);
            const int y0 = kTextY + (sin_[(x + t_ * 3) & 255] - 128) * 16 / 128;
            for (int r = 0; r < 7; r++) {
                if (!(g[r] >> (4 - col) & 1)) continue;
                for (int k = 0; k < kScale; k++) {
                    const int y = y0 + r * kScale + k + off, sx = x + off;
                    if (y < 0 || y >= H || sx >= W) continue;
                    screen_[y * W + sx] = pass ? (uint8_t)(kTextPal + r * kScale + k) : (uint8_t)kShadow;
                }
            }
        }
    }
}

void Demo::frame() {
    t_++;
    scroll_ += 2;
    std::memset(screen_.data(), 0, screen_.size());  // colour 0: the rasters show through
    draw_rasters();
    draw_sprites();
    draw_scroller();
}

void Demo::to_argb(uint32_t* out) const {
    for (int y = 0; y < H; y++) {
        const uint8_t* row = &screen_[y * W];
        for (int x = 0; x < W; x++) out[y * W + x] = row[x] ? pal_[row[x]] : line0_[y];
    }
}

}  // namespace ssr
