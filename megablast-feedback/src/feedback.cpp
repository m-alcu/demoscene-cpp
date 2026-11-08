#include "feedback.h"
#include <SDL3/SDL.h>

#include <algorithm>
#include <cstdio>
#include <cstring>

namespace mf {

namespace {

// Velocity (x, y) in 1/16 texel per tick, by song pattern (the demo's table at 40206h; only
// these entries are reached: the scene's patterns and the one after). During pattern p the
// velocity crossfades from kVelocity[p] to kVelocity[p + 1] over 256 ticks.
struct Vel { int32_t x, y; };
Vel velocity(int pattern) {
    switch (pattern) {
    case 36: return {32, 12};
    case 37: return {8, 16};
    case 38: return {32, -14};
    default: return {0, 0};
    }
}

bool load(const std::string& path, std::vector<uint8_t>& out, size_t size) {
    size_t n = 0;
    void* f = SDL_LoadFile(path.c_str(), &n);
    if (!f || n != size) {
        std::fprintf(stderr, "megablast-feedback: cannot read %s (%zu bytes expected)\n", path.c_str(), size);
        SDL_free(f);
        return false;
    }
    out.assign((const uint8_t*)f, (const uint8_t*)f + n);
    SDL_free(f);
    return true;
}

}  // namespace

bool Feedback::init(const std::string& data) {
    std::vector<uint8_t> w;
    if (!load(data + "/warp.bin", w, W * H * 2) || !load(data + "/shade.bin", shade, 64 * 256)) return false;
    warp.resize(W * H);
    for (int i = 0; i < W * H; i++) warp[i] = (uint16_t)(w[2 * i] | w[2 * i + 1] << 8);

    const std::string cp = data + "/checker.png";
    SDL_Surface* s = SDL_LoadPNG(cp.c_str());
    const SDL_Palette* sp = s ? SDL_GetSurfacePalette(s) : nullptr;
    if (!s || s->format != SDL_PIXELFORMAT_INDEX8 || !sp || s->w != 256 || s->h != 256) {
        std::fprintf(stderr, "megablast-feedback: %s is not a 256x256 indexed image\n", cp.c_str());
        if (s) SDL_DestroySurface(s);
        return false;
    }
    checker.resize(65536);
    for (int y = 0; y < 256; y++) std::memcpy(&checker[y * 256], (const uint8_t*)s->pixels + y * s->pitch, 256);
    for (int i = 0; i < 256; i++) {
        const SDL_Color c = i < sp->ncolors ? sp->colors[i] : SDL_Color{};
        pal6[3 * i] = c.r >> 2;
        pal6[3 * i + 1] = c.g >> 2;
        pal6[3 * i + 2] = c.b >> 2;
    }
    SDL_DestroySurface(s);
    reset();
    return true;
}

void Feedback::reset() {
    buf[0] = checker;
    buf[1] = checker;
    src = 0;
    fade = 0;
    shade_level = 0;
    drawing = false;
    last_pattern = -1;
    w_new = 0;
    w_old = 256;
    pos_x = pos_y = 0;
    si = 0;
    std::fill(screen.begin(), screen.end(), 0);
}

// 193C1h, once per 70 Hz tick.
void Feedback::tick(int pattern) {
    if (fade != 256) fade += 4;                               // fade in over 64 ticks
    if (drawing && shade_level != 0xb0) shade_level += 2;     // the feedback darkens more and more
    if (pattern != last_pattern) {                            // a new pattern: crossfade from
        last_pattern = pattern;                               // its velocity to the next one's
        w_new = 0;
        w_old = 256;
    }
    const Vel a = velocity(pattern), b = velocity(pattern + 1);
    pos_x += (b.x * w_new + a.x * w_old) >> 8;
    pos_y += (b.y * w_new + a.y * w_old) >> 8;
    if (w_old != 0) { w_old--; w_new++; }
    si = (uint16_t)((pos_x >> 4) + ((pos_y >> 4) << 8));     // y in the high byte, x in the low
}

// 19359h + 19226h: the faded palette, then one pass over the screen.
void Feedback::frame() {
    drawing = true;
    for (int i = 0; i < 768; i++) dac[i] = (uint8_t)((pal6[i] * fade) >> 8);
    const uint8_t* in = buf[src].data();
    uint8_t* fed = buf[src ^ 1].data();
    const uint8_t* dark = &shade[(shade_level >> 3) * 256];
    for (int y = 0; y < H; y++) {
        const uint16_t* row = &warp[y * W];
        uint8_t* out = &screen[y * W];
        for (int x = 0; x < W; x++) {
            // the table gives the texel; the shift moves the whole picture; 16-bit wrap-around
            const uint8_t c = in[(uint16_t)(row[x] + si)];
            out[x] = c;
            if (x < kFeed) fed[y * 256 + x] = dark[c];   // the next frame's texture
        }
    }
    src ^= 1;
}

void Feedback::to_rgb24(uint8_t* out) const {
    for (int k = 0; k < W * H; k++) {
        const uint8_t* c = &dac[3 * screen[k]];
        for (int j = 0; j < 3; j++) *out++ = (uint8_t)((c[j] * 255 + 31) / 63);
    }
}

void Feedback::to_argb(uint32_t* out) const {
    uint32_t pal[256];
    for (int i = 0; i < 256; i++) {
        const uint8_t* c = &dac[3 * i];
        pal[i] = 0xff000000u | (uint32_t)((c[0] * 255 + 31) / 63) << 16 | (uint32_t)((c[1] * 255 + 31) / 63) << 8 |
                 (uint32_t)((c[2] * 255 + 31) / 63);
    }
    for (int k = 0; k < W * H; k++) out[k] = pal[screen[k]];
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

}  // namespace mf
