// ctslasse-knot - part 5 of Lasse Reinbøng (Cubic Team & $eeN, 1995): the
// trefoil knot over the rocking hexagons, in C++17 / SDL3.
//
// Usage: ctslasse-knot [--scale N] [--loop]
//            keys: L endless / the part's own timeline looped, R restart,
//                  Space pause, Esc quit
//        ctslasse-knot --dump DIR [--frames N] [--start SECONDS] [--loop]
//            (no window: writes N frames, 70 per second, as DIR/fNNNN.ppm)
//
// Endless (the default): the palette comes in from white and the knot flies
// in as in the intro, then it runs on with no fade. --loop / L: the part as
// the intro has it (about 10.9 s, faded out at the end), over and over.
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
    std::vector<uint32_t> argb(knot::W * knot::H);
    for (int f = 0; f < frames; f++) {
        k.frame(clockAt(start + f / 70.0, loop));
        k.toArgb(argb.data());
        char p[1024];
        std::snprintf(p, sizeof p, "%s/f%04d.ppm", dir.c_str(), f);
        FILE* g = std::fopen(p, "wb");
        if (!g) { std::perror(p); return 1; }
        std::fprintf(g, "P6\n%d %d\n255\n", knot::W, knot::H);
        for (uint32_t c : argb) {
            const uint8_t rgb[3] = {(uint8_t)(c >> 16), (uint8_t)(c >> 8), (uint8_t)c};
            std::fwrite(rgb, 1, 3, g);
        }
        std::fclose(g);
    }
    return 0;
}

}  // namespace

int main(int argc, char** argv) {
    std::string dumpDir;
    int scale = 3, frames = 70;
    double start = 0;
    bool loop = false;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--dump" && i + 1 < argc) dumpDir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::atoi(argv[++i]);
        else if (a == "--start" && i + 1 < argc) start = std::atof(argv[++i]);
        else if (a == "--loop") loop = true;
        else {
            std::fprintf(stderr, "usage: ctslasse-knot [--scale N] [--loop] | --dump DIR [--frames N] [--start S] [--loop]\n");
            return 1;
        }
    }
    auto k = std::make_unique<knot::Knot>();
    k->fadeOut = loop;
    if (!dumpDir.empty()) return dump(*k, dumpDir, frames, start, loop);

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    // 320x200 shown at 4:3, as on a VGA monitor in mode 13h
    SDL_Window* win = SDL_CreateWindow("ctslasse-knot", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    auto setTitle = [&] {
        SDL_SetWindowTitle(win, loop ? "ctslasse-knot - the part, looped" : "ctslasse-knot - endless");
    };
    setTitle();
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 320, 240, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_SetRenderVSync(ren, 1);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, knot::W, knot::H);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);

    std::vector<uint32_t> argb(knot::W * knot::H);
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
        SDL_UpdateTexture(tex, nullptr, argb.data(), knot::W * 4);
        SDL_RenderClear(ren);
        SDL_RenderTexture(ren, tex, nullptr, nullptr);
        SDL_RenderPresent(ren);
    }
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
