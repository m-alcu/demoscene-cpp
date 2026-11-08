// megablast-blob - a re-creation of the glowing jelly blob from Megablast (Orange, 1996), in
// C++17 / SDL3.
//
// Usage: megablast-blob [--scale N]          keys: B blur, W mesh, Space pause, Esc quit
//        megablast-blob --dump DIR [--frames N] [--start SECONDS]
//            (no window: writes N frames, 60 per second, as DIR/fNNNN.ppm, 320x200)
#include <SDL3/SDL.h>

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

#include "blob.h"

namespace {

int dump(const std::string& dir, int frames, double start) {
    mb::Blob blob;
    mb::Settings s;
    std::vector<uint32_t> argb(mb::W * mb::H);
    for (int f = 0; f < frames; f++) {
        blob.render(start + f / 60.0, s);
        blob.to_argb(argb.data());
        char p[1024];
        std::snprintf(p, sizeof p, "%s/f%04d.ppm", dir.c_str(), f);
        FILE* g = std::fopen(p, "wb");
        if (!g) { std::perror(p); return 1; }
        std::fprintf(g, "P6\n%d %d\n255\n", mb::W, mb::H);
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
    int scale = 3, frames = 600;
    double start = 0;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--dump" && i + 1 < argc) dump_dir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::atoi(argv[++i]);
        else if (a == "--start" && i + 1 < argc) start = std::atof(argv[++i]);
        else {
            std::fprintf(stderr, "usage: megablast-blob [--scale N] | --dump DIR [--frames N] [--start S]\n");
            return 1;
        }
    }
    if (!dump_dir.empty()) return dump(dump_dir, frames, start);

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    // 320x200 shown at 4:3, as on a VGA monitor in mode 13h
    SDL_Window* win = SDL_CreateWindow("megablast-blob", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 320, 240, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_SetRenderVSync(ren, 1);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, mb::W, mb::H);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);

    mb::Blob blob;
    mb::Settings s;
    std::vector<uint32_t> argb(mb::W * mb::H);
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
            case SDL_SCANCODE_B: s.blur = !s.blur; break;
            case SDL_SCANCODE_W: s.wire = !s.wire; break;
            case SDL_SCANCODE_SPACE: paused = !paused; break;
            default: break;
            }
        }
        const Uint64 now = SDL_GetPerformanceCounter();
        if (!paused) t += (double)(now - last) / (double)freq;
        last = now;
        blob.render(t, s);
        blob.to_argb(argb.data());
        SDL_UpdateTexture(tex, nullptr, argb.data(), mb::W * 4);
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
