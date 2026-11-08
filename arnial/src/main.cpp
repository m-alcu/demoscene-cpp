// arnial - ARNIAL by LCUB (Martín Alcubierre, 1995), a rotozoomer in mode X, ported from its
// assembler source to C++17 / SDL3.
//
// Usage: arnial [--scale N] [--resol 1|2] [--data DIR]
//        arnial --dump DIR [--frames N] [--resol 1|2]
//            (no window: DIR/fNNNN.ppm and DIR/frames.txt with CRCs, N frames, default 600)
//
// Keys: Space pauses; any other key quits, and the original's farewell text is printed, as the
// DOS program did on returning to text mode.
//
// Timing: the original waits for every vertical retrace of its 320x480 mode, 25.175 MHz /
// (800 x 525) = 59.94 Hz, and draws one frame per retrace.
#include <SDL3/SDL.h>

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

#include "arnial.h"

namespace {

const char* kFarewell =
    "          ■■■■    rotation/span/pan in MODE X !   ■■■■\n\n"
    "This is the first demo from LCUB (Spain)\n\n"
    "Only with the help of some people's sources:\n"
    "■ modeX libs from Draeden/VLA (I really apreciate your work!!)\n"
    "■ the central routine (only for linear mode) from Paul H. Kahler. \n"
    "■ rutinas de detec 386 a Chc from Reset-Tvc.\n"
    "         ( thanks to all of them in my first demo )\n";

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
        if (SDL_GetPathInfo((d + "/arnial.png").c_str(), &info)) return d;
    }
    return "data";
}

int dump(arn::Arnial& a, const std::string& dir, int frames) {
    FILE* list = std::fopen((dir + "/frames.txt").c_str(), "w");
    if (!list) { std::perror(dir.c_str()); return 1; }
    std::vector<uint8_t> rgb(arn::W * a.height() * 3);
    for (int f = 0; f < frames; f++) {
        a.step();
        a.to_rgb24(rgb.data());
        std::fprintf(list, "%d %08x\n", f, arn::crc32(a.pixels(), arn::W * a.height()));
        char p[1024];
        std::snprintf(p, sizeof p, "%s/f%04d.ppm", dir.c_str(), f);
        if (FILE* g = std::fopen(p, "wb")) {
            std::fprintf(g, "P6\n%d %d\n255\n", arn::W, a.height());
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
    int scale = 4, resol = 1, frames = 600;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--resol" && i + 1 < argc) resol = std::atoi(argv[++i]) == 2 ? 2 : 1;
        else if (a == "--data" && i + 1 < argc) data = argv[++i];
        else if (a == "--dump" && i + 1 < argc) dump_dir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::max(1, std::atoi(argv[++i]));
        else {
            std::fprintf(stderr, "usage: arnial [--scale N] [--resol 1|2] [--data DIR] | --dump DIR [--frames N]\n");
            return 1;
        }
    }
    if (!SDL_Init(dump_dir.empty() ? SDL_INIT_VIDEO : 0)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    arn::Arnial a(resol);
    if (!a.init(find_data(data))) return 1;
    if (!dump_dir.empty()) {
        const int r = dump(a, dump_dir, frames);
        SDL_Quit();
        return r;
    }

    // 160 x 120 (or 240) rows, each row repeated over 4 (or 2) of the 480 scan lines: 4:3
    SDL_Window* win = SDL_CreateWindow("arnial", 160 * scale, 120 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 640, 480, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_Texture* tex =
        SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, arn::W, a.height());
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);

    std::vector<uint32_t> argb(arn::W * a.height());
    const double fps = 25175000.0 / (800 * 525);
    const Uint64 freq = SDL_GetPerformanceFrequency();
    const Uint64 t0 = SDL_GetPerformanceCounter();
    long shown = 0;
    bool running = true, paused = false, farewell = false;
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type != SDL_EVENT_KEY_DOWN || e.key.repeat) continue;
            if (e.key.scancode == SDL_SCANCODE_SPACE) paused = !paused;
            else running = false, farewell = true;
        }
        if (!paused) a.step();
        shown++;
        const Uint64 due = t0 + (Uint64)(shown * (double)freq / fps);
        const Uint64 now = SDL_GetPerformanceCounter();
        if (due > now) SDL_DelayNS((due - now) * 1000000000ull / freq);
        a.to_argb(argb.data());
        SDL_UpdateTexture(tex, nullptr, argb.data(), arn::W * 4);
        SDL_RenderClear(ren);
        SDL_RenderTexture(ren, tex, nullptr, nullptr);
        SDL_RenderPresent(ren);
    }
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    if (farewell) std::fputs(kFarewell, stdout);
    return 0;
}
