#include "demo.h"
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <utility>

namespace kb {

namespace {

// Timeline, in music positions
constexpr uint32_t kStartPos = 4553;   // position of the first frame
constexpr uint32_t kBouncePos = 4690;  // from here the background bounces to the beat
constexpr uint32_t kLeavePos = 5376;   // the bars start leaving

// 4096-entry sine table, period 4096 (1024 = a quarter turn), amplitude 32767. All the motion
// is integer arithmetic on it.
int16_t sine_table[4096];

void make_sine() {
    // floor(32767 sin) over the first quarter, mirrored: exactly symmetric, and no value is
    // close enough to an integer for a different libm to round it the other way
    for (int i = 0; i < 4096; i++) {
        const int j = i & 2047, k = j <= 1024 ? j : 2048 - j;
        const int v = (int)std::floor(32767.0 * std::sin(2.0 * M_PI * k / 4096.0));
        sine_table[i] = (int16_t)(i < 2048 ? v : -v);
    }
}

int S(uint32_t i) { return sine_table[i & 4095]; }

// 12-bit 0xRGB to ARGB8888
constexpr uint32_t rgb12(uint32_t c) {
    return 0xff000000u | ((c >> 8 & 15) * 17) << 16 | ((c >> 4 & 15) * 17) << 8 | (c & 15) * 17;
}
constexpr uint32_t kBlue = rgb12(0x002), kDarkBlue = rgb12(0x001);

// An indexed PNG; palette index 0 is transparent.
bool load_image(const std::string& path, int w, int h, Image& img) {
    SDL_Surface* s = SDL_LoadPNG(path.c_str());
    if (!s) { std::fprintf(stderr, "kaleido-bars: %s: %s\n", path.c_str(), SDL_GetError()); return false; }
    const SDL_Palette* pal = SDL_GetSurfacePalette(s);
    const bool ok = s->format == SDL_PIXELFORMAT_INDEX8 && pal && s->w == w && s->h == h;
    if (ok) {
        img.w = w; img.h = h;
        img.px.resize(w * h);
        for (int y = 0; y < h; y++) {
            const uint8_t* row = (const uint8_t*)s->pixels + y * s->pitch;
            for (int x = 0; x < w; x++) {
                const SDL_Color c = row[x] < pal->ncolors ? pal->colors[row[x]] : SDL_Color{};
                img.px[y * w + x] = row[x] == 0 ? 0 : 0xff000000u | c.r << 16 | c.g << 8 | c.b;
            }
        }
    } else {
        std::fprintf(stderr, "kaleido-bars: %s is not a %dx%d indexed image\n", path.c_str(), w, h);
    }
    SDL_DestroySurface(s);
    return ok;
}

// Scroll of the carbon background (512x256, tiled) at music position p: it drifts diagonally
// along a slow ellipse and, from kBouncePos, bounces once per beat (28 frames).
void background_scroll(uint32_t p, uint32_t& sx, uint32_t& sy) {
    const uint32_t q = p >> 2;
    const uint32_t third = (64 * q) / 3;
    int32_t x = (int32_t)(2 * p) + (S(36 * q) >> 10) + (int32_t)(16 * q) - (int32_t)third;
    int32_t y = (S(36 * q + 1024) >> 11) + (int32_t)q + (int32_t)(third >> 1);
    if (p >= kBouncePos) {
        const int32_t b = (int32_t)(p % 28) - 14;
        y -= (b * b) >> 4;
    }
    sx = (uint32_t)x;
    sy = (uint32_t)y;
}

}  // namespace

bool Demo::init(const std::string& data) {
    if (!load_image(data + "/bars.png", 1024, 128, bars) || !load_image(data + "/carbon.png", 512, 256, carbon))
        return false;
    make_sine();
    pos = kStartPos;
    return true;
}

void Demo::step() {
    draw();
    update();
    frame_++;
}

// Once per frame, after drawing it.
void Demo::update() {
    pos++;
    switch (part) {
    case Blue:
        if (++t < 3) return;
        part = Wipe;
        t = 0;
        [[fallthrough]];
    case Wipe:
        if (!covered) { t++; draw_mask(); return; }
        if (!held) { held = true; return; }   // one more frame on the finished wipe
        part = Bars;
        t = 0;
        [[fallthrough]];
    case Bars:
        t++;
        if (leaving) fade++;
        if (fade > 63) { done = true; return; }
        if (pos >= kLeavePos) leaving = true;
        return;
    }
}

// ---- the wipe ----

// XOR one line into the mask: in each column it crosses, its value goes into the one pixel where
// it crosses (the row clamped to 0..384, so a line above the screen flips the whole column).
// 14-bit fixed point.
void Demo::edge(int x0, int x1, int y0, int y1, uint8_t value) {
    if (x0 > x1) { std::swap(x0, x1); std::swap(y0, y1); }
    if (x0 == x1) return;
    const int32_t slope = (int32_t)((uint32_t)(y1 - y0) << 14) / (x1 - x0);
    int32_t y = (int32_t)((uint32_t)y0 << 14);
    x1 = std::min(x1, W - 1);
    if (x0 < 0) { y -= (int32_t)((uint32_t)x0 * (uint32_t)slope); x0 = 0; }
    for (int x = x0; x < x1; x++, y += slope)
        mask[std::clamp(y, 0, 384 << 14) >> 14][x] ^= value;
}

// Two parallel lines, rotating and moving apart: the band between them shows the background.
// After the edges are XORed in, each column is XOR-accumulated downwards from 8, so a pixel's
// value tells which lines it is below: 8 above both (blue), 0 between them (background),
// 4 below both (dark blue).
void Demo::draw_mask() {
    std::fill(&mask[0][0], &mask[0][0] + sizeof mask, 0);
    const uint32_t angle = (uint32_t)std::min(110, t) << 3;               // stops at about 77 degrees
    const int32_t a = (595 * t) >> 8, dist = (a * a) >> 8;               // half-width of the band
    const int32_t cy = std::max((128 - t) >> 1, 0) + 192;               // centre rises to 192
    const int32_t sn = -S(angle), cs = S(angle + 1024);
    const int32_t hx = (cs * 4096) >> 15, hy = (sn * 4096) >> 15;      // half-length 4096 pixels
    const int32_t dx = (sn * dist) >> 15, dy = (cs * dist) >> 15;
    int32_t x = 256 - dx, y = cy + dy;
    edge(x - hx, x + hx, y - hy, y + hy, 4);
    x = 256 + dx; y = cy - dy;
    edge(x - hx, x + hx, y - hy, y + hy, 8);
    for (int col = 0; col < W; col++) {
        uint8_t v = 8;
        for (int row = 0; row < 384; row++) mask[row][col] = v ^= mask[row][col];
    }
    covered = dist > 300;
}

// ---- drawing ----

void Demo::draw() {
    if (part == Blue) {
        std::fill(canvas.begin(), canvas.begin() + 512 * W, kBlue);
        std::fill(canvas.begin() + 512 * W, canvas.end(), kDarkBlue);
        return;
    }

    uint32_t bx, by;
    background_scroll(pos, bx, by);
    auto background = [&](int x, int y) { return carbon.at((bx + x) & 511, (by + (y >> 1)) & 255); };

    if (part == Wipe) {
        for (int y = 0; y < H; y++) {
            uint32_t* out = &canvas[y * W];
            const uint8_t* m = mask[y >> 1];
            for (int x = 0; x < W; x++)
                out[x] = m[x] == 0 ? background(x, y) : m[x] == 4 ? kDarkBlue : kBlue;
        }
        return;
    }

    // The bars. bars.png holds 128 cross-sections of a twisted bundle of ribbons, one per
    // twist angle; each screen row shows one of them, picked by time plus a sine of the row,
    // so the bundle turns and bulges. One horizontal offset for all rows slides it in, sways
    // it and slides it out.
    const uint32_t f = (uint32_t)std::min(fade, 63);
    uint32_t in = (uint32_t)(127 - std::min(t, 127));
    in *= in; in *= in;
    uint32_t out_ = f * f; out_ *= out_;
    const uint32_t shift = -(in >> 19) + (out_ >> 15) + (uint32_t)((S(pos * 29 - 2048) * (int32_t)(63 - f)) >> 15);

    // texture row for each of the 384 screen rows
    int rows[384];
    uint32_t phase = (uint32_t)((S((pos & 255) << 4) >> 8) + (int32_t)pos) << 3;
    for (int r = 0; r < 384; r++, phase += 8) rows[r] = ((pos << 1) + (uint32_t)(S(phase) >> 9)) & 127;

    for (int y = 0; y < H; y++) {
        // row r covers lines 2r-1 and 2r; the first row only line 0, the last also line 767
        const int tr = rows[std::min((y + 1) >> 1, 383)];
        uint32_t* out = &canvas[y * W];
        for (int x = 0; x < W; x++) {
            const uint32_t b = bars.at((shift + x) & 1023, tr);
            out[x] = b ? b : background(x, y);
        }
    }
}

void Demo::to_rgb24(uint8_t* out) const {
    for (uint32_t c : canvas) {
        *out++ = c >> 16;
        *out++ = c >> 8;
        *out++ = c;
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

}  // namespace kb
