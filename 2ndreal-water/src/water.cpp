#include "water.h"

#include <SDL3/SDL.h>

#include <cstdio>
#include <cstring>

namespace water {

namespace {

// An indexed PNG at least w x h: copies its top w x h pixels (and its palette as 6-bit values)
bool load_indexed(const std::string& path, int w, int h, int stride, uint8_t* out, uint8_t* pal6) {
    SDL_Surface* s = SDL_LoadPNG(path.c_str());
    const SDL_Palette* pal = s ? SDL_GetSurfacePalette(s) : nullptr;
    if (!s || s->format != SDL_PIXELFORMAT_INDEX8 || !pal || s->w < w || s->h < h) {
        std::fprintf(stderr, "%s is not an indexed image of at least %dx%d\n", path.c_str(), w, h);
        if (s) SDL_DestroySurface(s);
        return false;
    }
    for (int y = 0; y < h; y++) std::memcpy(out + y * stride, (const uint8_t*)s->pixels + y * s->pitch, w);
    if (pal6)
        for (int i = 0; i < 256; i++) {
            const SDL_Color c = i < pal->ncolors ? pal->colors[i] : SDL_Color{};
            pal6[i * 3] = c.r >> 2;
            pal6[i * 3 + 1] = c.g >> 2;
            pal6[i * 3 + 2] = c.b >> 2;
        }
    SDL_DestroySurface(s);
    return true;
}

inline uint8_t to8(uint8_t v) { return uint8_t(v << 2 | v >> 4); }

}  // namespace

bool Water::init(const std::string& dir) {
    // background.png 320x200 and sword.png 400x35, indexed, with the demo's palette
    // (MIEKKA.SCI's, stored as v << 2 | v >> 4)
    if (!load_indexed(dir + "/background.png", W, H, W, bkg.data(), srcpal) ||
        !load_indexed(dir + "/sword.png", SWORD_W, BH, SWORD_W, font, nullptr))
        return false;
    for (int t = 0; t < 3; t++) {
        // wat1-3.png: each screen pixel the table lists is R = column + 1, G = 7 * (row + 1)
        const std::string name = dir + "/wat" + std::to_string(t + 1) + ".png";
        SDL_Surface* s = SDL_LoadPNG(name.c_str());
        SDL_Surface* rgb = s ? SDL_ConvertSurface(s, SDL_PIXELFORMAT_RGB24) : nullptr;
        if (s) SDL_DestroySurface(s);
        if (!rgb || rgb->w != W || rgb->h != H) {
            std::fprintf(stderr, "%s is not a 320x200 image\n", name.c_str());
            if (rgb) SDL_DestroySurface(rgb);
            return false;
        }
        // group the screen offsets by strip pixel (counting sort), as the original's lists
        std::vector<int> strip(W * H, -1);
        std::vector<uint16_t> count(BW * BH + 1, 0);
        bool ok = true;
        for (int o = 0; o < W * H; o++) {
            const uint8_t* p = (const uint8_t*)rgb->pixels + (o / W) * rgb->pitch + (o % W) * 3;
            if (!p[0] && !p[1]) continue;
            const int c = p[0] - 1, r = p[1] / 7 - 1;
            if (p[1] % 7 || c < 0 || c >= BW || r < 0 || r >= BH) { ok = false; break; }
            strip[o] = r * BW + c;
            count[strip[o] + 1]++;
        }
        SDL_DestroySurface(rgb);
        if (!ok) { std::fprintf(stderr, "%s: not a position map\n", name.c_str()); return false; }
        Table& tb = tab[t];
        tb.start.assign(BW * BH + 1, 0);
        for (int i = 0; i < BW * BH; i++) tb.start[i + 1] = uint16_t(tb.start[i] + count[i + 1]);
        tb.off.assign(tb.start[BW * BH], 0);
        std::vector<uint16_t> fill(tb.start.begin(), tb.start.end() - 1);
        for (int o = 0; o < W * H; o++)
            if (strip[o] >= 0) tb.off[fill[strip[o]]++] = uint16_t(o);
    }
    reset();
    return true;
}

void Water::reset() {
    // mode 13h, all 256 colours black, then the picture straight into video memory
    std::memcpy(screen, bkg.data(), W * H);
    std::memset(dac6, 0, sizeof dac6);
    std::memcpy(tmppal, srcpal, 768);
    tmppal[768] = 0;
    std::memset(pal, 0, sizeof pal);
    std::memset(fbuf, 0, sizeof fbuf);
    sss = scp = fp = 0;
    fadeout = false;
    g = 0;
}

// putrouts1: every buffer pixel goes to each of its screen offsets; colour 0 shows the background
void Water::scr(int pos) {
    const Table& tb = tab[pos];
    for (int i = 0; i < BW * BH; i++) {
        const uint8_t c = fbuf[i];
        for (int j = tb.start[i]; j < tb.start[i + 1]; j++) {
            const uint16_t di = tb.off[j];
            screen[di] = c ? c : bkg[di];
        }
    }
}

// setrgb(x, pal) then move pal one step toward tmppal, with the pf := 0 to 3 overrun
void Water::fade_step(bool up) {
    for (int x = 0; x < 256; x++) {
        std::memcpy(&dac6[x * 3], &pal[x * 3], 3);
        for (int pf = 0; pf <= 3; pf++) {
            uint8_t& v = pal[x * 3 + pf];
            const uint8_t t = tmppal[x * 3 + pf];
            if (up ? v < t : v > t) v = uint8_t(up ? v + 1 : v - 1);
        }
    }
}

bool Water::step() {
    if (g < FADE_IN) {                              // the fade-in, sword buffer still empty
        if (g & 1) fade_step(true);
        scr(sss);
        sss = sss == 2 ? 0 : sss + 1;
        if (++g == FADE_IN) {
            sss = 0;                                // reset before the main loop
            std::memset(tmppal, 0, sizeof tmppal);  // fade-out target (fillchar happens after the wait,
        }                                           // but nothing reads tmppal while waiting)
        return true;
    }
    if (g < MAIN0) { g++; return true; }            // waiting for the music: nothing changes
    const int k = g - MAIN0;
    if (k == FADE_OUT) fadeout = true;
    if (fadeout) {
        if (fp == 64) return false;                 // quit := 1, the loop ends before drawing
        fp++;
        fade_step(false);
    }
    scr(sss);
    if (sss == 2) {
        sss = 0;
        std::memmove(fbuf, fbuf + 1, sizeof fbuf - 1);   // one column left, all rows as one strip
        // fbuf[158 + x*158] is the start of row x+1, which the shift puts at the end of row x
        for (int x = 0; x < BH; x++) fbuf[BW + x * BW] = font[x * SWORD_W + scp];
        if (scp < 390) scp++;
    } else {
        sss++;
    }
    g++;
    return true;
}

void Water::to_argb(uint32_t* out) const {
    uint32_t lut[256];
    for (int i = 0; i < 256; i++)
        lut[i] = 0xFF000000u | uint32_t(to8(dac6[i * 3])) << 16 | uint32_t(to8(dac6[i * 3 + 1])) << 8 |
                 to8(dac6[i * 3 + 2]);
    for (int i = 0; i < W * H; i++) out[i] = lut[screen[i]];
}

void Water::to_rgb24(uint8_t* out) const {
    for (int i = 0; i < W * H; i++)
        for (int c = 0; c < 3; c++) *out++ = to8(dac6[screen[i] * 3 + c]);
}

uint32_t crc32(const uint8_t* p, size_t n) {
    uint32_t c = 0xFFFFFFFFu;
    for (size_t i = 0; i < n; i++) {
        c ^= p[i];
        for (int k = 0; k < 8; k++) c = (c >> 1) ^ (0xEDB88320u & (0u - (c & 1)));
    }
    return ~c;
}

}  // namespace water
