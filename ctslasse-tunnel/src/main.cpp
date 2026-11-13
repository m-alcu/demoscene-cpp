// ctslasse-tunnel - the water tunnel of Lasse Reinbøng (Cubic Team & $eeN,
// 1995), part 8 from T 12: the rippling plane in red and blue, then the
// tunnel with walls waving like water, in C++17 / SDL3.
//
// Usage: ctslasse-tunnel [--start SECONDS] [--endless] [--logo] [--scale N]
//            keys: E looped / endless, G the logo on / off,
//                  Left / Right 5 s back / on, R restart,
//                  Space pause, Esc quit
//        ctslasse-tunnel --dump DIR [--frames N] [--start SECONDS] [--endless] [--logo]
//            (no window: writes N frames, 70 per second, as DIR/fNNNN.ppm)
//
// Looped (the default): from --start (seconds into the part; 8.2 by
// default, T 12, the plane alone) to the part's end in the intro (T 72,
// 48.9 s, faded out), over and over. --endless / E: no fade-out, it runs on
// (the tunnel breathing and turning). --logo / G: the intro's texture, with
// its "cubic team & $een" logo embossed in the marble; without, the marble.
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <memory>
#include <string>
#include <vector>

#include "tunnel.h"

namespace {

constexpr double kEndSeconds = tunnel::kEnd * tunnel::kUnit / tunnel::kPit;   // about 48.9 s

// The clock at a time: looped from START at the part's end, or (endless)
// back to START when the intro's 32-bit clock would overflow, after 30 minutes.
int32_t clockAt(double seconds, double start, bool endless) {
    const double end = endless ? 2147483647.0 / tunnel::kPit : kEndSeconds;
    if (seconds >= end) seconds = start + std::fmod(seconds - start, end - start);
    return (int32_t)std::floor(seconds * tunnel::kPit);
}

int dump(tunnel::Tunnel& k, const std::string& dir, int frames, double start, bool endless) {
    std::vector<uint32_t> argb(tunnel::W * tunnel::H);
    for (int f = 0; f < frames; f++) {
        k.frame(clockAt(start + f / 70.0, start, endless));
        k.toArgb(argb.data());
        char p[1024];
        std::snprintf(p, sizeof p, "%s/f%04d.ppm", dir.c_str(), f);
        FILE* g = std::fopen(p, "wb");
        if (!g) {
            std::perror(p);
            return 1;
        }
        std::fprintf(g, "P6\n%d %d\n255\n", tunnel::W, tunnel::H);
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
    double start = 12 * tunnel::kUnit / tunnel::kPit;
    bool endless = false, logo = false;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--dump" && i + 1 < argc) dumpDir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::atoi(argv[++i]);
        else if (a == "--start" && i + 1 < argc) start = std::clamp(std::atof(argv[++i]), 0.0, kEndSeconds - 1);
        else if (a == "--endless") endless = true;
        else if (a == "--logo") logo = true;
        else {
            std::fprintf(stderr, "usage: ctslasse-tunnel [--start S] [--endless] [--logo] [--scale N] | --dump DIR [--frames N] [--start S] [--endless] [--logo]\n");
            return 1;
        }
    }
    auto k = std::make_unique<tunnel::Tunnel>(logo);
    k->fadeOut = !endless;
    if (!dumpDir.empty()) return dump(*k, dumpDir, frames, start, endless);

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    // 320x200 shown at 4:3, as on a VGA monitor in mode 13h
    SDL_Window* win = SDL_CreateWindow("ctslasse-tunnel", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    auto setTitle = [&] {
        std::string t = endless ? "ctslasse-tunnel - endless" : "ctslasse-tunnel - looped";
        t += logo ? " - with the logo" : "";
        SDL_SetWindowTitle(win, t.c_str());
    };
    setTitle();
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 320, 240, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_SetRenderVSync(ren, 1);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, tunnel::W, tunnel::H);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);

    std::vector<uint32_t> argb(tunnel::W * tunnel::H);
    const Uint64 freq = SDL_GetPerformanceFrequency();
    Uint64 last = SDL_GetPerformanceCounter();
    double t = start;
    bool running = true, paused = false;
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type != SDL_EVENT_KEY_DOWN || e.key.repeat) continue;
            switch (e.key.scancode) {
            case SDL_SCANCODE_ESCAPE: running = false; break;
            case SDL_SCANCODE_SPACE: paused = !paused; break;
            case SDL_SCANCODE_R: t = start; break;
            case SDL_SCANCODE_LEFT: t = std::max(start, t - 5); break;
            case SDL_SCANCODE_RIGHT: t += 5; break;
            case SDL_SCANCODE_E:
                endless = !endless;
                k->fadeOut = !endless;
                setTitle();
                break;
            case SDL_SCANCODE_G: {
                logo = !logo;
                const bool fade = k->fadeOut;
                k = std::make_unique<tunnel::Tunnel>(logo);
                k->fadeOut = fade;
                setTitle();
                break;
            }
            default: break;
            }
        }
        const Uint64 now = SDL_GetPerformanceCounter();
        if (!paused) t += (double)(now - last) / (double)freq;
        last = now;
        // looped: back to the start at the part's end (endless: after 30 minutes)
        const double end = endless ? 2147483647.0 / tunnel::kPit : kEndSeconds;
        if (t >= end) t = start + std::fmod(t - start, end - start);
        k->frame((int32_t)std::floor(t * tunnel::kPit));
        k->toArgb(argb.data());
        SDL_UpdateTexture(tex, nullptr, argb.data(), tunnel::W * 4);
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
