// kaleido-bars - a C++17/SDL3 port of the vertical bars scene (parts 15-17) of
// Kaleidoscopico by LFT (Linus Akesson), a Raspberry Pi Pico 2 demo from Revision 2025.
//
// Usage: kaleido-bars [--data DIR] [--scale N] [--loop]
//        kaleido-bars --dump DIR [--ppm A:B]
//            (no window: DIR/frames.txt, a line per frame: global frame number and the
//            CRC-32 of the 512x768 RGB24 picture; --ppm also writes those frames' pictures)
#include <SDL3/SDL.h>

#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <memory>
#include <string>
#include <vector>

#include "demo.h"

namespace {

uint32_t crc32(const uint8_t* p, size_t n) {
    static uint32_t table[256];
    static bool init = false;
    if (!init) {
        for (uint32_t i = 0; i < 256; i++) {
            uint32_t k = i;
            for (int j = 0; j < 8; j++) k = (k >> 1) ^ (0xEDB88320u & (0u - (k & 1)));
            table[i] = k;
        }
        init = true;
    }
    uint32_t c = ~0u;
    while (n--) c = (c >> 8) ^ table[(c ^ *p++) & 0xFF];
    return ~c;
}

std::string findData(const std::string& given) {
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

}  // namespace

int main(int argc, char** argv) {
    std::string data, dump;
    int scale = 1;
    long ppm_a = -1, ppm_b = -1;
    bool loop = false;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--data" && i + 1 < argc) data = argv[++i];
        else if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--dump" && i + 1 < argc) dump = argv[++i];
        else if (a == "--ppm" && i + 1 < argc) std::sscanf(argv[++i], "%ld:%ld", &ppm_a, &ppm_b);
        else if (a == "--loop") loop = true;
        else {
            std::fprintf(stderr, "usage: kaleido-bars [--data DIR] [--scale N] [--loop] | --dump DIR [--ppm A:B]\n");
            return 1;
        }
    }
    const bool headless = !dump.empty();
    if (!SDL_Init(headless ? 0 : SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    const std::string dir = findData(data);
    auto demo = std::make_unique<kb::Demo>();
    if (!demo->init(dir)) return 1;
    std::vector<uint8_t> rgb(512 * 768 * 3);

    if (headless) {
        FILE* out = std::fopen((dump + "/frames.txt").c_str(), "w");
        if (!out) { std::perror(dump.c_str()); return 1; }
        while (!demo->finished) {
            const long f = demo->frame;
            demo->run_frame();
            demo->video.to_rgb(rgb.data());
            std::fprintf(out, "%ld %08x\n", f, crc32(rgb.data(), rgb.size()));
            if (f >= ppm_a && f < ppm_b) {
                char p[1024];
                std::snprintf(p, sizeof p, "%s/f%05ld.ppm", dump.c_str(), f);
                if (FILE* g = std::fopen(p, "wb")) {
                    std::fprintf(g, "P6\n512 768\n255\n");
                    std::fwrite(rgb.data(), 1, rgb.size(), g);
                    std::fclose(g);
                }
            }
        }
        std::fclose(out);
        SDL_Quit();
        return 0;
    }

    // 1024x768 at 60 Hz: each of the 512 pixels per line is two VGA pixels wide
    SDL_Window* win = SDL_CreateWindow("Kaleidoscopico - vertical bars", 1024 * scale, 768 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 1024, 768, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_RGB24, SDL_TEXTUREACCESS_STREAMING, 512, 768);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);
    SDL_SetRenderVSync(ren, 0);

    // 65 MHz pixel clock, 1344x806 total: 60.0038 frames per second
    const double fps = 65e6 / (1344.0 * 806.0);
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
        if (demo->finished) {
            if (!loop) break;
            demo = std::make_unique<kb::Demo>();
            demo->init(dir);
            t0 = SDL_GetPerformanceCounter();
            shown = 0;
        }
        demo->run_frame();
        demo->video.to_rgb(rgb.data());
        shown++;
        const Uint64 due = t0 + (Uint64)(shown * (double)freq / fps);
        const Uint64 now = SDL_GetPerformanceCounter();
        if (due > now) SDL_DelayNS((due - now) * 1000000000ull / freq);
        SDL_UpdateTexture(tex, nullptr, rgb.data(), 512 * 3);
        SDL_RenderClear(ren);
        const SDL_FRect dst{0, 0, 1024, 768};
        SDL_RenderTexture(ren, tex, nullptr, &dst);
        SDL_RenderPresent(ren);
    }
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
