// 2ndreal-water - the mirror spheres and flying sword of Second Reality (Future Crew, 1993),
// ported to C++17 / SDL3 from the part's released source (WATER/DEMO.PAS, ROUTINES.ASM).
//
// Usage: 2ndreal-water [--scale N] [--loop] [--data DIR]
//        2ndreal-water --dump DIR [--frames N]
//            (no window: DIR/fNNNN.ppm and DIR/frames.txt with CRCs; N defaults to the whole part)
//
// Keys: Space pauses, Right skips the wait for the music, Escape quits.
//
// Timing: mode 13h, 25.175 MHz / (800 x 449) = 70.086 Hz, one frame per retrace.
#include <SDL3/SDL.h>

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

#include "water.h"

namespace {

std::string find_data(const std::string& given) {
    std::vector<std::string> c;
    if (!given.empty()) c.push_back(given);
    c.push_back("data");
    if (const char* base = SDL_GetBasePath()) {
        c.push_back(std::string(base) + "data");
        c.push_back(std::string(base) + "../data");
    }
    for (const auto& d : c) {
        SDL_PathInfo info;
        if (SDL_GetPathInfo((d + "/wat1.png").c_str(), &info)) return d;
    }
    return "data";
}

int dump(water::Water& w, const std::string& dir, int frames) {
    FILE* list = std::fopen((dir + "/frames.txt").c_str(), "w");
    if (!list) { std::perror(dir.c_str()); return 1; }
    std::vector<uint8_t> rgb(water::W * water::H * 3);
    for (int f = 0; f < frames && w.step(); f++) {
        w.to_rgb24(rgb.data());
        std::fprintf(list, "%d %08x %08x\n", f, water::crc32(w.pixels(), water::W * water::H),
                     water::crc32(w.dac(), 768));
        char p[1024];
        std::snprintf(p, sizeof p, "%s/f%04d.ppm", dir.c_str(), f);
        if (FILE* g = std::fopen(p, "wb")) {
            std::fprintf(g, "P6\n%d %d\n255\n", water::W, water::H);
            std::fwrite(rgb.data(), 1, rgb.size(), g);
            std::fclose(g);
        }
    }
    std::fclose(list);
    return 0;
}

}  // namespace

int main(int argc, char** argv) {
    std::string dump_dir, data;
    int scale = 3, frames = water::END;
    bool loop = false;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--data" && i + 1 < argc) data = argv[++i];
        else if (a == "--loop") loop = true;
        else if (a == "--dump" && i + 1 < argc) dump_dir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::max(1, std::atoi(argv[++i]));
        else {
            std::fprintf(stderr,
                         "usage: 2ndreal-water [--scale N] [--loop] [--data DIR] | --dump DIR [--frames N]\n");
            return 1;
        }
    }
    if (!SDL_Init(dump_dir.empty() ? SDL_INIT_VIDEO : 0)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    water::Water w;
    if (!w.init(find_data(data))) return 1;
    if (!dump_dir.empty()) {
        const int r = dump(w, dump_dir, frames);
        SDL_Quit();
        return r;
    }

    // 320x200 shown at 4:3, as on a VGA monitor
    SDL_Window* win = SDL_CreateWindow("Second Reality - water", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 320 * 4, 240 * 4, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, water::W, water::H);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);

    std::vector<uint32_t> argb(water::W * water::H);
    const double fps = 25175000.0 / (800 * 449);
    const Uint64 freq = SDL_GetPerformanceFrequency();
    const Uint64 t0 = SDL_GetPerformanceCounter();
    long shown = 0;
    bool running = true, paused = false;
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type != SDL_EVENT_KEY_DOWN || e.key.repeat) continue;
            if (e.key.scancode == SDL_SCANCODE_SPACE) paused = !paused;
            else if (e.key.scancode == SDL_SCANCODE_RIGHT)
                while (w.frame() >= water::FADE_IN && w.frame() < water::MAIN0) w.step();
            else if (e.key.scancode == SDL_SCANCODE_ESCAPE) running = false;
        }
        if (!paused && !w.step()) {
            if (!loop) break;
            w.reset();
        }
        shown++;
        const Uint64 due = t0 + (Uint64)(shown * (double)freq / fps);
        const Uint64 now = SDL_GetPerformanceCounter();
        if (due > now) SDL_DelayNS((due - now) * 1000000000ull / freq);
        w.to_argb(argb.data());
        SDL_UpdateTexture(tex, nullptr, argb.data(), water::W * 4);
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
