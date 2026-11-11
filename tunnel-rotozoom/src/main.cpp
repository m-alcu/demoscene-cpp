// tunnel-rotozoom - a textured tunnel and a rotozoomer in the style of 1993-1996 PC demos
// (320x200, 256 colours), in C++17 / SDL3.
//
// Usage: tunnel-rotozoom [--scale N]
//            keys: Space switch effect (stops the automatic switch every 10 s), Esc quit
//        tunnel-rotozoom --dump DIR [--frames N]   (no window: DIR/fNNNN.ppm at 70 fps)
#include <SDL3/SDL.h>

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

#include "demo.h"

int main(int argc, char** argv) {
    std::string dump_dir;
    int scale = 3, frames = 1400;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--dump" && i + 1 < argc) dump_dir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::atoi(argv[++i]);
        else {
            std::fprintf(stderr, "usage: tunnel-rotozoom [--scale N] | --dump DIR [--frames N]\n");
            return 1;
        }
    }
    tr::Demo demo;
    std::vector<uint32_t> argb(tr::W * tr::H);

    if (!dump_dir.empty()) {
        for (int f = 0; f < frames; f++) {
            demo.frame();
            demo.to_argb(argb.data());
            char path[1024];
            std::snprintf(path, sizeof path, "%s/f%04d.ppm", dump_dir.c_str(), f);
            FILE* o = std::fopen(path, "wb");
            if (!o) { std::perror(path); return 1; }
            std::fprintf(o, "P6\n%d %d\n255\n", tr::W, tr::H);
            for (uint32_t c : argb) {
                const uint8_t rgb[3] = {(uint8_t)(c >> 16), (uint8_t)(c >> 8), (uint8_t)c};
                std::fwrite(rgb, 1, 3, o);
            }
            std::fclose(o);
        }
        return 0;
    }

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    // 320x200 shown at 4:3, as on a VGA monitor in mode 13h
    SDL_Window* win = SDL_CreateWindow("tunnel-rotozoom", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 320, 240, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_SetRenderVSync(ren, 1);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, tr::W, tr::H);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);

    // Fixed 70 Hz steps, whatever the display's refresh rate.
    const double freq = (double)SDL_GetPerformanceFrequency();
    Uint64 last = SDL_GetPerformanceCounter();
    double acc = 0;
    bool running = true;
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type != SDL_EVENT_KEY_DOWN || e.key.repeat) continue;
            switch (e.key.scancode) {
            case SDL_SCANCODE_ESCAPE: running = false; break;
            case SDL_SCANCODE_SPACE: demo.switch_effect(); demo.autoswitch = false; break;
            default: break;
            }
        }
        const Uint64 now = SDL_GetPerformanceCounter();
        acc += (now - last) / freq;
        last = now;
        int steps = 0;
        while (acc >= 1.0 / 70 && steps++ < 4) {  // at most 4 steps per refresh
            demo.frame();
            acc -= 1.0 / 70;
        }
        if (acc > 0.1) acc = 0;
        demo.to_argb(argb.data());
        SDL_UpdateTexture(tex, nullptr, argb.data(), tr::W * 4);
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
