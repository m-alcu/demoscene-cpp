// wish-bars - the beam-racing bars of Wish (Majic 12, 1993), ported from the part's 8086 code in
// WISH.EXE to C++17 / SDL3.
//
// Usage: wish-bars [--scale N] [--loop]
//        wish-bars --dump DIR [--esc FRAME]
//            (no window: DIR/fNNNN.ppm and DIR/frames.txt with CRCs, for the whole part; with
//            --esc, Esc is down from that frame on)
//
// Keys: Esc does what it did in the demo: the part fades out over 72 frames and ends. Space
// pauses. Closing the window quits at once. Without --loop the program ends with the part.
//
// Timing: mode 13h, 25.175 MHz / (800 x 449) = 70.09 Hz, one picture per frame. The picture is
// 320x200, each row two of the 400 scan lines, shown at 4:3.
#include <SDL3/SDL.h>

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

#include "bars.h"

namespace {

int dump(const std::string& dir, int esc_from) {
    FILE* list = std::fopen((dir + "/frames.txt").c_str(), "w");
    if (!list) { std::perror(dir.c_str()); return 1; }
    wb::Bars b;
    std::vector<uint8_t> rgb(wb::W * wb::H * 3);
    for (int f = 0; b.step(esc_from >= 0 && f >= esc_from); f++) {
        b.to_rgb24(rgb.data());
        std::fprintf(list, "%d %08x %08x\n", f, wb::crc32(b.frame(), wb::W * wb::H), wb::crc32(b.dac(), 768));
        char p[1024];
        std::snprintf(p, sizeof p, "%s/f%04d.ppm", dir.c_str(), f);
        if (FILE* g = std::fopen(p, "wb")) {
            std::fprintf(g, "P6\n%d %d\n255\n", wb::W, wb::H);
            std::fwrite(rgb.data(), 1, rgb.size(), g);
            std::fclose(g);
        }
    }
    std::fclose(list);
    return 0;
}

}  // namespace

int main(int argc, char** argv) {
    std::string dump_dir;
    int scale = 3, esc_from = -1;
    bool loop = false;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--loop") loop = true;
        else if (a == "--dump" && i + 1 < argc) dump_dir = argv[++i];
        else if (a == "--esc" && i + 1 < argc) esc_from = std::max(0, std::atoi(argv[++i]));
        else {
            std::fprintf(stderr, "usage: wish-bars [--scale N] [--loop] | --dump DIR [--esc FRAME]\n");
            return 1;
        }
    }
    if (!dump_dir.empty()) return dump(dump_dir, esc_from);

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    SDL_Window* win = SDL_CreateWindow("Wish - bars", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 640, 480, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, wb::W, wb::H);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);

    wb::Bars b;
    std::vector<uint32_t> argb(wb::W * wb::H);
    const double fps = 25175000.0 / (800 * 449);
    const Uint64 freq = SDL_GetPerformanceFrequency();
    const Uint64 t0 = SDL_GetPerformanceCounter();
    long shown = 0;
    bool running = true, paused = false, esc = false;
    while (running) {
        SDL_Event e;
        bool esc_pressed = false;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type == SDL_EVENT_KEY_DOWN && !e.key.repeat) {
                if (e.key.scancode == SDL_SCANCODE_ESCAPE) esc = esc_pressed = true;
                else if (e.key.scancode == SDL_SCANCODE_SPACE) paused = !paused;
            }
            if (e.type == SDL_EVENT_KEY_UP && e.key.scancode == SDL_SCANCODE_ESCAPE) esc = false;
        }
        if (!paused || esc_pressed) {
            // a tap shorter than a frame still counts, as the key's make code would at port 60h
            if (!b.step(esc || esc_pressed)) {
                if (!loop || esc_pressed || esc) break;
                b.reset();
                b.step(false);
            }
        }
        shown++;
        const Uint64 due = t0 + (Uint64)(shown * (double)freq / fps);
        const Uint64 now = SDL_GetPerformanceCounter();
        if (due > now) SDL_DelayNS((due - now) * 1000000000ull / freq);
        b.to_argb(argb.data());
        SDL_UpdateTexture(tex, nullptr, argb.data(), wb::W * 4);
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
