// megablast-feedback - the checker feedback scene of Megablast (Orange, 1996), ported from the
// demo's code, in C++17 / SDL3.
//
// Usage: megablast-feedback [--scale N] [--data DIR] [--loop]   keys: Space pause, Esc quit
//        megablast-feedback --dump DIR
//            (no window: DIR/fNNNN.ppm for every frame, 320x200, and DIR/frames.txt with CRCs)
//
// Timing: the demo updates at 70 Hz (its timer ticks) and draws once per screen refresh, so on
// a fast enough PC each frame is one tick then one picture. The scene starts with song
// pattern 24h and ends when pattern 26h begins: 768 ticks, 769 frames (about 11 s).
#include <SDL3/SDL.h>

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

#include "feedback.h"

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
        if (SDL_GetPathInfo((d + "/warp.bin").c_str(), &info)) return d;
    }
    return "data";
}

// The scene's clock: tick k (from 0) belongs to song pattern 36 + k / 384.
struct Scene {
    mf::Feedback& fx;
    int k = 0;
    bool done = false;
    void step() {
        const int pattern = mf::kFirstPattern + k / mf::kTicksPerPattern;
        fx.tick(pattern);
        k++;
        fx.frame();
        if (pattern >= mf::kFirstPattern + 2) done = true;
    }
};

int dump(mf::Feedback& fx, const std::string& dir) {
    FILE* list = std::fopen((dir + "/frames.txt").c_str(), "w");
    if (!list) { std::perror(dir.c_str()); return 1; }
    std::vector<uint8_t> rgb(mf::W * mf::H * 3);
    Scene sc{fx};
    for (int f = 0; !sc.done; f++) {
        sc.step();
        fx.to_rgb24(rgb.data());
        std::fprintf(list, "%d %08x\n", f, mf::crc32(rgb.data(), rgb.size()));
        char p[1024];
        std::snprintf(p, sizeof p, "%s/f%04d.ppm", dir.c_str(), f);
        if (FILE* g = std::fopen(p, "wb")) {
            std::fprintf(g, "P6\n%d %d\n255\n", mf::W, mf::H);
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
    int scale = 3;
    bool loop = false;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--data" && i + 1 < argc) data = argv[++i];
        else if (a == "--dump" && i + 1 < argc) dump_dir = argv[++i];
        else if (a == "--loop") loop = true;
        else {
            std::fprintf(stderr, "usage: megablast-feedback [--scale N] [--data DIR] [--loop] | --dump DIR\n");
            return 1;
        }
    }
    if (!SDL_Init(dump_dir.empty() ? SDL_INIT_VIDEO : 0)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    mf::Feedback fx;
    if (!fx.init(find_data(data))) return 1;
    if (!dump_dir.empty()) {
        const int r = dump(fx, dump_dir);
        SDL_Quit();
        return r;
    }

    // 320x200 shown at 4:3, as on a VGA monitor in mode 13h
    SDL_Window* win = SDL_CreateWindow("megablast-feedback", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 320, 240, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, mf::W, mf::H);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);

    std::vector<uint32_t> argb(mf::W * mf::H);
    Scene sc{fx};
    const double fps = 70.0;   // mode 13h refresh
    const Uint64 freq = SDL_GetPerformanceFrequency();
    Uint64 t0 = SDL_GetPerformanceCounter();
    long shown = 0;
    bool running = true, paused = false;
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type != SDL_EVENT_KEY_DOWN || e.key.repeat) continue;
            if (e.key.scancode == SDL_SCANCODE_ESCAPE) running = false;
            if (e.key.scancode == SDL_SCANCODE_SPACE) paused = !paused;
        }
        if (sc.done) {
            if (!loop) break;
            fx.reset();
            sc.k = 0;
            sc.done = false;
        }
        if (!paused) sc.step();
        shown++;
        const Uint64 due = t0 + (Uint64)(shown * (double)freq / fps);
        const Uint64 now = SDL_GetPerformanceCounter();
        if (due > now) SDL_DelayNS((due - now) * 1000000000ull / freq);
        fx.to_argb(argb.data());
        SDL_UpdateTexture(tex, nullptr, argb.data(), mf::W * 4);
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
