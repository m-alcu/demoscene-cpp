// ctslasse-knot - part 5 of Lasse Reinbøng (Cubic Team & $eeN, 1995): the
// trefoil knot over the rocking hexagons, in C++17 / SDL3.
//
// Usage: ctslasse-knot [--hires] [--scale N] [--loop]
//            keys: L endless / the part's own timeline looped, R restart,
//                  T the precalculated textures in the corners,
//                  Space pause, Esc quit
//        ctslasse-knot --dump DIR [--hires] [--frames N] [--start SECONDS] [--loop]
//            (no window: writes N frames, 70 per second, as DIR/fNNNN.ppm)
//
// Endless (the default): the palette comes in from white and the knot flies
// in as in the intro, then it runs on with no fade. --loop / L: the part as
// the intro has it (about 10.9 s, faded out at the end), over and over.
// --hires: drawn at 640x400 instead of the intro's 320x200.
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <memory>
#include <string>
#include <vector>

#include "knot.h"

namespace {

// The clock at a time: PIT ticks; looped at the part's end, or (endless)
// when the intro's 32-bit clock would overflow, after 30 minutes.
int32_t clockAt(double seconds, bool loop) {
    const double ticks = std::floor(seconds * knot::kPit);
    const double len = loop ? std::ceil(knot::Knot::kEnd * 813440.2376280001) : 2147483648.0;
    return (int32_t)std::fmod(ticks, len);
}

int dump(knot::Knot& k, const std::string& dir, int frames, double start, bool loop) {
    std::vector<uint32_t> argb(k.width() * k.height());
    for (int f = 0; f < frames; f++) {
        k.frame(clockAt(start + f / 70.0, loop));
        k.toArgb(argb.data());
        char p[1024];
        std::snprintf(p, sizeof p, "%s/f%04d.ppm", dir.c_str(), f);
        FILE* g = std::fopen(p, "wb");
        if (!g) { std::perror(p); return 1; }
        std::fprintf(g, "P6\n%d %d\n255\n", k.width(), k.height());
        for (uint32_t c : argb) {
            const uint8_t rgb[3] = {(uint8_t)(c >> 16), (uint8_t)(c >> 8), (uint8_t)c};
            std::fwrite(rgb, 1, 3, g);
        }
        std::fclose(g);
    }
    return 0;
}

// The precalculation shown in the corners (T), each as an SDL texture drawn
// over the frame at the window's resolution, so the 256x256 tiles keep their
// detail even on the 320x200 screen. The palette is the full one (pal_), not
// the DAC, so they stay visible through the fades.
struct Overlay {
    SDL_Texture* tex[4] = {};   // light, the knot's texture, the hexagons, the palette
                                // (freed with the renderer)

    Overlay(SDL_Renderer* ren, const knot::Knot& k) {
        const uint8_t* pal = k.palette();
        auto rgb = [&](int i) {
            auto c = [&](int j) { return (uint32_t)(pal[3 * i + j] & 0x3F) * 255 / 63; };
            return 0xFF000000u | c(0) << 16 | c(1) << 8 | c(2);
        };
        std::vector<uint32_t> px(0x10000);
        auto make = [&](int w, int h, SDL_ScaleMode mode) {
            SDL_Texture* t = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STATIC, w, h);
            SDL_SetTextureScaleMode(t, mode);
            SDL_UpdateTexture(t, nullptr, px.data(), w * 4);
            return t;
        };
        // the lighting table: the shade within a ramp, 0-31, as grey
        for (int i = 0; i < 0x10000; i++) {
            const uint32_t g = (uint32_t)std::min<int>(k.lightTex()[i], 31) * 255 / 31;
            px[i] = 0xFF000000u | g << 16 | g << 8 | g;
        }
        tex[0] = make(256, 256, SDL_SCALEMODE_LINEAR);
        // the knot's texture: which of the 8 ramps (multiples of 32), shown
        // at each ramp's own colour (its 18th entry, the end of black -> colour)
        for (int i = 0; i < 0x10000; i++) px[i] = rgb((k.plasmaTex()[i] + 17) & 0xFF);
        tex[1] = make(256, 256, SDL_SCALEMODE_LINEAR);
        // the background's hexagons, palette indices as they are
        for (int i = 0; i < 0x10000; i++) px[i] = rgb(k.hexTex()[i]);
        tex[2] = make(256, 256, SDL_SCALEMODE_LINEAR);
        // the palette: the 8 ramps of 32, one a row
        for (int i = 0; i < 256; i++) px[i] = rgb(i);
        tex[3] = make(32, 8, SDL_SCALEMODE_NEAREST);
    }
    // in the corners of the logical W x H view (4:3), framed in black
    void draw(SDL_Renderer* ren, float w, float h) const {
        const float m = w / 80, side = w * 0.3f, pw = side, ph = side / 4;
        const SDL_FRect r[4] = {
            {m, m, side, side},                         // top left: light
            {w - m - side, m, side, side},              // top right: the knot's texture
            {m, h - m - side, side, side},              // bottom left: the hexagons
            {w - m - pw, h - m - ph, pw, ph},           // bottom right: the palette
        };
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
        for (int i = 0; i < 4; i++) {
            const float b = m / 2;
            const SDL_FRect f = {r[i].x - b, r[i].y - b, r[i].w + 2 * b, r[i].h + 2 * b};
            SDL_RenderFillRect(ren, &f);
            SDL_RenderTexture(ren, tex[i], nullptr, &r[i]);
        }
    }
};

}  // namespace

int main(int argc, char** argv) {
    std::string dumpDir;
    int scale = 3, frames = 70, res = 1;
    double start = 0;
    bool loop = false;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--dump" && i + 1 < argc) dumpDir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::atoi(argv[++i]);
        else if (a == "--start" && i + 1 < argc) start = std::atof(argv[++i]);
        else if (a == "--loop") loop = true;
        else if (a == "--hires") res = 2;
        else {
            std::fprintf(stderr, "usage: ctslasse-knot [--hires] [--scale N] [--loop] | --dump DIR [--hires] [--frames N] [--start S] [--loop]\n");
            return 1;
        }
    }
    auto k = std::make_unique<knot::Knot>(res);
    k->fadeOut = loop;
    if (!dumpDir.empty()) return dump(*k, dumpDir, frames, start, loop);

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    // 320x200 (or 640x400) shown at 4:3, as on a VGA monitor in mode 13h
    SDL_Window* win = SDL_CreateWindow("ctslasse-knot", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    auto setTitle = [&] {
        SDL_SetWindowTitle(win, loop ? "ctslasse-knot - the part, looped" : "ctslasse-knot - endless");
    };
    setTitle();
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 320 * res, 240 * res, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_SetRenderVSync(ren, 1);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, k->width(), k->height());
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);

    const Overlay overlay(ren, *k);
    bool showTex = false;

    std::vector<uint32_t> argb(k->width() * k->height());
    const Uint64 freq = SDL_GetPerformanceFrequency();
    Uint64 last = SDL_GetPerformanceCounter();
    double t = 0;
    bool running = true, paused = false;
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type != SDL_EVENT_KEY_DOWN || e.key.repeat) continue;
            switch (e.key.scancode) {
            case SDL_SCANCODE_ESCAPE: running = false; break;
            case SDL_SCANCODE_SPACE: paused = !paused; break;
            case SDL_SCANCODE_R: t = 0; break;
            case SDL_SCANCODE_T: showTex = !showTex; break;
            case SDL_SCANCODE_L:
                loop = !loop;
                k->fadeOut = loop;
                t = 0;
                setTitle();
                break;
            default: break;
            }
        }
        const Uint64 now = SDL_GetPerformanceCounter();
        if (!paused) t += (double)(now - last) / (double)freq;
        last = now;
        k->frame(clockAt(t, loop));
        k->toArgb(argb.data());
        SDL_UpdateTexture(tex, nullptr, argb.data(), k->width() * 4);
        SDL_RenderClear(ren);
        SDL_RenderTexture(ren, tex, nullptr, nullptr);
        if (showTex) overlay.draw(ren, 320.0f * res, 240.0f * res);
        SDL_RenderPresent(ren);
    }
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
