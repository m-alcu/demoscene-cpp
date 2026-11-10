// gouraud-torus - a Gouraud-shaded rotating torus in the style of 1993-1995 PC demos
// (320x200, 256 colours, software scanline filler), in C++17 / SDL3.
//
// Usage: gouraud-torus [--scale N] [--model M]
//            keys: Space pause, G Gouraud/flat, M next model, Esc quit
//        gouraud-torus --dump DIR [--frames N] [--start SECONDS] [--flat] [--model M]
//            models: 0 own torus, 1 Cyboman 2 rings, 2 Cyboman 2 sawtooth
//            (no window: writes N frames, 70 per second, as DIR/fNNNN.ppm, 320x200)
#include <SDL3/SDL.h>

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

#include "torus.h"

namespace {

int dump(gt::Torus& torus, const std::string& dir, int frames, double start) {
    std::vector<uint32_t> argb(gt::W * gt::H);
    for (int f = 0; f < frames; f++) {
        torus.render(start + f / 70.0);
        torus.to_argb(argb.data());
        char p[1024];
        std::snprintf(p, sizeof p, "%s/f%04d.ppm", dir.c_str(), f);
        FILE* g = std::fopen(p, "wb");
        if (!g) { std::perror(p); return 1; }
        std::fprintf(g, "P6\n%d %d\n255\n", gt::W, gt::H);
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
    std::string dump_dir;
    int scale = 3, frames = 70;
    double start = 0;
    bool flat = false;
    int model = 0;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--dump" && i + 1 < argc) dump_dir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::atoi(argv[++i]);
        else if (a == "--start" && i + 1 < argc) start = std::atof(argv[++i]);
        else if (a == "--flat") flat = true;
        else if (a == "--model" && i + 1 < argc) model = std::clamp(std::atoi(argv[++i]), 0, (int)gt::Model::Count - 1);
        else {
            std::fprintf(stderr, "usage: gouraud-torus [--scale N] [--model M] | --dump DIR [--frames N] [--start S] [--flat] [--model M]\n");
            return 1;
        }
    }
    gt::Torus torus;
    torus.gouraud = !flat;
    torus.set_model((gt::Model)model);
    if (!dump_dir.empty()) return dump(torus, dump_dir, frames, start);

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    // 320x200 shown at 4:3, as on a VGA monitor in mode 13h
    SDL_Window* win = SDL_CreateWindow("gouraud-torus", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    auto set_title = [&] { SDL_SetWindowTitle(win, (std::string("gouraud-torus - ") + gt::model_name(torus.model())).c_str()); };
    set_title();
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 320, 240, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_SetRenderVSync(ren, 1);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, gt::W, gt::H);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);

    std::vector<uint32_t> argb(gt::W * gt::H);
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
            case SDL_SCANCODE_G: torus.gouraud = !torus.gouraud; break;
            case SDL_SCANCODE_M:
                torus.set_model((gt::Model)(((int)torus.model() + 1) % (int)gt::Model::Count));
                set_title();
                break;
            default: break;
            }
        }
        const Uint64 now = SDL_GetPerformanceCounter();
        if (!paused) t += (double)(now - last) / (double)freq;
        last = now;
        torus.render(t);
        torus.to_argb(argb.data());
        SDL_UpdateTexture(tex, nullptr, argb.data(), gt::W * 4);
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
