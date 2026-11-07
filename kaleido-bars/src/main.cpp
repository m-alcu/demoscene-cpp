// kaleido-bars - twisted vertical bars over a scrolling carbon background, in C++17 / SDL3.
//
// Usage: kaleido-bars [--data DIR] [--scale N] [--loop]
//        kaleido-bars --dump DIR [--ppm A:B]
//            (no window: DIR/frames.txt, a line per frame: frame number and the CRC-32 of the
//            512x768 RGB24 canvas; --ppm also writes frames A..B-1 as PPM files)
#include <SDL3/SDL.h>

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <memory>
#include <string>
#include <vector>

#include "demo.h"

namespace {

std::string find_data(const std::string& given) {
    std::vector<std::string> c;
    if (!given.empty()) c.push_back(given);
    if (const char* d = SDL_getenv("KALEIDO_DATA")) c.push_back(d);
    c.push_back("data");
    if (const char* base = SDL_GetBasePath()) {
        c.push_back(std::string(base) + "data");
        c.push_back(std::string(base) + "../data");
    }
    for (const auto& d : c) {
        SDL_PathInfo info;
        if (SDL_GetPathInfo((d + "/bars.png").c_str(), &info)) return d;
    }
    return "data";
}

int dump(kb::Demo& demo, const std::string& dir, long ppm_a, long ppm_b) {
    FILE* out = std::fopen((dir + "/frames.txt").c_str(), "w");
    if (!out) { std::perror(dir.c_str()); return 1; }
    std::vector<uint8_t> rgb(kb::W * kb::H * 3);
    while (!demo.finished()) {
        const long f = demo.frame();
        demo.step();
        demo.to_rgb24(rgb.data());
        std::fprintf(out, "%ld %08x\n", f, kb::crc32(rgb.data(), rgb.size()));
        if (f >= ppm_a && f < ppm_b) {
            char p[1024];
            std::snprintf(p, sizeof p, "%s/f%04ld.ppm", dir.c_str(), f);
            if (FILE* g = std::fopen(p, "wb")) {
                std::fprintf(g, "P6\n%d %d\n255\n", kb::W, kb::H);
                std::fwrite(rgb.data(), 1, rgb.size(), g);
                std::fclose(g);
            }
        }
    }
    std::fclose(out);
    return 0;
}

}  // namespace

int main(int argc, char** argv) {
    std::string data, dump_dir;
    int scale = 1;
    long ppm_a = -1, ppm_b = -1;
    bool loop = false;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--data" && i + 1 < argc) data = argv[++i];
        else if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--dump" && i + 1 < argc) dump_dir = argv[++i];
        else if (a == "--ppm" && i + 1 < argc) std::sscanf(argv[++i], "%ld:%ld", &ppm_a, &ppm_b);
        else if (a == "--loop") loop = true;
        else {
            std::fprintf(stderr, "usage: kaleido-bars [--data DIR] [--scale N] [--loop] | --dump DIR [--ppm A:B]\n");
            return 1;
        }
    }
    const bool headless = !dump_dir.empty();
    if (!SDL_Init(headless ? 0 : SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    const std::string dir = find_data(data);
    auto demo = std::make_unique<kb::Demo>();
    if (!demo->init(dir)) return 1;

    if (headless) {
        const int r = dump(*demo, dump_dir, ppm_a, ppm_b);
        SDL_Quit();
        return r;
    }

    // The 512x768 canvas is shown in a 1024x768 window: every pixel is two pixels wide.
    SDL_Window* win = SDL_CreateWindow("kaleido-bars", 1024 * scale, 768 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 1024, 768, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, kb::W, kb::H);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);

    const double fps = 60.0;
    const Uint64 freq = SDL_GetPerformanceFrequency();
    Uint64 t0 = SDL_GetPerformanceCounter();
    long shown = 0;
    bool running = true;
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type == SDL_EVENT_KEY_DOWN && e.key.scancode == SDL_SCANCODE_ESCAPE) running = false;
        }
        if (demo->finished()) {
            if (!loop) break;
            demo = std::make_unique<kb::Demo>();
            demo->init(dir);
            t0 = SDL_GetPerformanceCounter();
            shown = 0;
        }
        demo->step();
        shown++;
        const Uint64 due = t0 + (Uint64)(shown * (double)freq / fps);
        const Uint64 now = SDL_GetPerformanceCounter();
        if (due > now) SDL_DelayNS((due - now) * 1000000000ull / freq);
        SDL_UpdateTexture(tex, nullptr, demo->pixels(), kb::W * 4);
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
