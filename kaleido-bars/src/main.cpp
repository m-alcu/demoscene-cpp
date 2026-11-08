// kaleido-bars - twisted vertical bars over a scrolling carbon background, in C++17 / SDL3.
//
// Usage: kaleido-bars [--data DIR] [--scale N] [--loop]     (keys: i info panel, Esc quit)
//        kaleido-bars --dump DIR [--ppm A:B]
//            (no window: DIR/frames.txt, a line per frame: frame number and the CRC-32 of the
//            512x768 RGB24 canvas; --ppm also writes frames A..B-1 as PPM files)
#include <SDL3/SDL.h>

#include <algorithm>
#include <cstring>
#include <cmath>
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

// The info panel ('i'), to the right of the picture: for every screen row, which row of
// bars.png it shows. Each row of bars.png is one cross-section of the twisted ribbons, so this
// curve is the whole trick: the rows pick different twist angles along a travelling sine wave.
constexpr int kPanelW = 320;           // logical pixels
constexpr float kPlotX = 1024 + 36;    // texture row 0; texture row R is at kPlotX + 2R

void text(SDL_Renderer* ren, float x, float y, const char* s) { SDL_RenderDebugText(ren, x, y, s); }

void draw_panel(SDL_Renderer* ren, const kb::Demo& demo) {
    SDL_SetRenderDrawBlendMode(ren, SDL_BLENDMODE_BLEND);
    SDL_SetRenderDrawColor(ren, 14, 14, 22, 255);
    const SDL_FRect bg{1024, 0, kPanelW, 768};
    SDL_RenderFillRect(ren, &bg);

    char buf[64];
    // grid: texture rows every 32 (vertical lines), screen rows every 64 (horizontal lines)
    for (int r = 0; r <= 128; r += 32) {
        SDL_SetRenderDrawColor(ren, 60, 60, 80, 255);
        SDL_RenderLine(ren, kPlotX + 2 * r, 24, kPlotX + 2 * r, 767);
        SDL_SetRenderDrawColor(ren, 150, 150, 170, 255);
        std::snprintf(buf, sizeof buf, "%d", r);
        text(ren, kPlotX + 2 * r - 4 * (float)std::strlen(buf), 12, buf);
    }
    for (int row = 64; row < 384; row += 64) {
        SDL_SetRenderDrawColor(ren, 45, 45, 60, 255);
        SDL_RenderLine(ren, kPlotX, 2.0f * row, kPlotX + 256, 2.0f * row);
        SDL_SetRenderDrawColor(ren, 150, 150, 170, 255);
        std::snprintf(buf, sizeof buf, "%d", row);
        text(ren, 1024 + 4, 2.0f * row - 4, buf);
    }
    SDL_SetRenderDrawColor(ren, 150, 150, 170, 255);
    text(ren, 1024 + 4, 2, "row");
    text(ren, kPlotX + 72, 2, "bars.png row");

    if (!demo.bars_shown()) {
        SDL_SetRenderDrawColor(ren, 220, 220, 220, 255);
        text(ren, 1024 + 40, 380, "the bars are not on screen yet");
        return;
    }

    // 2p mod 128: where the curve's centre is. The sine wave swings around it.
    const uint32_t p = demo.position();
    const float base = kPlotX + 2.0f * ((2 * p) & 127);
    SDL_SetRenderDrawColor(ren, 200, 70, 70, 255);
    SDL_RenderLine(ren, base, 24, base, 767);

    // the curve: screen row r covers lines 2r-1 and 2r; break it where it wraps past 127
    SDL_SetRenderDrawColor(ren, 255, 220, 60, 255);
    for (int r = 0; r < 384; r++) {
        const float x = kPlotX + 2.0f * demo.bar_row(r), y = 2.0f * r;
        if (r > 0 && std::abs(demo.bar_row(r) - demo.bar_row(r - 1)) < 64)
            SDL_RenderLine(ren, kPlotX + 2.0f * demo.bar_row(r - 1), y - 2, x, y);
        else
            SDL_RenderLine(ren, x, std::max(y - 1, 0.0f), x, y);
    }

    // legend
    SDL_SetRenderDrawColor(ren, 0, 0, 0, 200);
    const SDL_FRect box{1024 + 4, 680, kPanelW - 8, 84};
    SDL_RenderFillRect(ren, &box);
    SDL_SetRenderDrawColor(ren, 255, 220, 60, 255);
    text(ren, 1024 + 10, 686, "R(r) = (2p + S(phi+8r)>>9) mod 128");
    SDL_SetRenderDrawColor(ren, 200, 70, 70, 255);
    std::snprintf(buf, sizeof buf, "2p mod 128 = %u", (2 * p) & 127);
    text(ren, 1024 + 10, 700, buf);
    SDL_SetRenderDrawColor(ren, 220, 220, 220, 255);
    std::snprintf(buf, sizeof buf, "p = %u", p);
    text(ren, 1024 + 10, 714, buf);
    std::snprintf(buf, sizeof buf, "x shift s = %d (all rows)", (int32_t)demo.bar_shift());
    text(ren, 1024 + 10, 728, buf);
    text(ren, 1024 + 10, 746, "i: hide this panel");
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
    bool info = false;
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
            if (e.type == SDL_EVENT_KEY_DOWN && e.key.scancode == SDL_SCANCODE_I && !e.key.repeat) {
                // the panel widens the window instead of covering the bars
                info = !info;
                const int lw = 1024 + (info ? kPanelW : 0);
                int ww, wh;
                SDL_GetWindowSize(win, &ww, &wh);
                SDL_SetWindowSize(win, wh * lw / 768, wh);
                SDL_SetRenderLogicalPresentation(ren, lw, 768, SDL_LOGICAL_PRESENTATION_LETTERBOX);
            }
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
        const SDL_FRect pic{0, 0, 1024, 768};
        SDL_RenderTexture(ren, tex, nullptr, &pic);
        if (info) draw_panel(ren, *demo);
        SDL_RenderPresent(ren);
    }
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
