// clubhoney-star - the chrome star of Club Honey (Acme, Bizarre '98): an environment-mapped
// mesh with the scene's camera flight, rendered in software at 320x200 (times honey::RES) with SDL3.
//
// Usage: clubhoney-star [--scale N] [--loop] [--data DIR]
// Keys:  Space pauses, Escape quits.
#include <SDL3/SDL.h>

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

#include "star.h"

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
        if (SDL_GetPathInfo((d + "/star.txt").c_str(), &info)) return d;
    }
    return "data";
}

}  // namespace

int main(int argc, char** argv) {
    std::string data;
    int scale = 3;
    bool loop = false;
    for (int i = 1; i < argc; i++) {
        const std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--data" && i + 1 < argc) data = argv[++i];
        else if (a == "--loop") loop = true;
        else {
            std::fprintf(stderr, "usage: clubhoney-star [--scale N] [--loop] [--data DIR]\n");
            return 1;
        }
    }
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    honey::Star star;
    if (!star.init(find_data(data))) return 1;

    // the 320x200 picture shown at 4:3, as on a VGA monitor
    SDL_Window* win = SDL_CreateWindow("Club Honey - star", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderVSync(ren, 1);
    SDL_SetRenderLogicalPresentation(ren, 320 * 4, 240 * 4, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, honey::W, honey::H);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);

    const double freq = (double)SDL_GetPerformanceFrequency();
    Uint64 t0 = SDL_GetPerformanceCounter(), paused_at = 0;
    bool running = true, paused = false;
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type != SDL_EVENT_KEY_DOWN || e.key.repeat) continue;
            if (e.key.scancode == SDL_SCANCODE_ESCAPE) running = false;
            else if (e.key.scancode == SDL_SCANCODE_SPACE) {
                paused = !paused;
                if (paused) paused_at = SDL_GetPerformanceCounter();
                else t0 += SDL_GetPerformanceCounter() - paused_at;
            }
        }
        if (!paused) {
            const float frame = (float)((SDL_GetPerformanceCounter() - t0) / freq) * honey::FRAMES_PER_SECOND;
            if (frame >= honey::END_FRAME) {
                if (!loop) break;
                t0 = SDL_GetPerformanceCounter();
                continue;
            }
            star.render(frame);
            SDL_UpdateTexture(tex, nullptr, star.pixels(), honey::W * 4);
        }
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
