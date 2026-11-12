// ctslasse-pond - the pond of Lasse Reinbøng (Cubic Team & $eeN, 1995),
// the start of part 8: drops falling in water over a marble, in
// C++17 / SDL3.
//
// Usage: ctslasse-pond [--loop] [--scale N]
//            keys / mouse: click a drop where clicked, D a drop somewhere,
//                  L the endless pond / the intro looped, R restart,
//                  Space pause, Esc quit
//        ctslasse-pond --dump DIR [--frames N] [--start SECONDS] [--loop]
//            (no window: writes N frames, 70 per second, as DIR/fNNNN.ppm)
//
// Endless (the default): the intro's three drops, then more falling at
// random, every 1-2.7 s, with the intro's ring for each. --loop / L: the
// intro's own timeline, exact: the three drops, then from T 8 (5.5 s) the
// palette turning red and the plane's waves blending in, until T 12 (8.2 s).
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <memory>
#include <random>
#include <string>
#include <vector>

#include "pond.h"

namespace {

using pond::Drop;

// The endless pond: its drops and when the next one falls
struct Water {
    std::vector<Drop> drops = pond::Pond::introDrops();
    std::mt19937 rng{1995};
    float next = 4.0f;      // T

    void reset() {
        drops = pond::Pond::introDrops();
        rng.seed(1995);
        next = 4.0f;
    }
    void drop(float x, float y, float t) { drops.push_back({x, y, t, false}); }
    void randomDrop(float t) {
        std::uniform_real_distribution<float> ux(4, 36), uy(3, 22);
        const float x = ux(rng);
        drop(x, uy(rng), t);
    }
    // at T: the random drops due, the finished ones gone
    void update(float t) {
        while (t >= next) {
            randomDrop(next);
            next += std::uniform_real_distribution<float>(1.5f, 4.0f)(rng);
        }
        drops.erase(std::remove_if(drops.begin(), drops.end(), [&](const Drop& d) { return pond::Pond::dropDone(d, t); }),
                    drops.end());
    }
};

double partT(double seconds) { return seconds * pond::kPit / pond::kUnit; }

void draw(pond::Pond& p, Water& w, double seconds, bool loop) {
    if (loop) {
        const double len = pond::kIntroEnd * pond::kUnit / pond::kPit;   // about 8.2 s
        p.frame((int32_t)std::floor(std::fmod(seconds, len) * pond::kPit));
    } else {
        const float t = (float)partT(seconds);
        w.update(t);
        p.pondFrame(t, w.drops);
    }
}

int dump(pond::Pond& p, Water& w, const std::string& dir, int frames, double start, bool loop) {
    std::vector<uint32_t> argb(pond::W * pond::H);
    for (int f = 0; f < frames; f++) {
        draw(p, w, start + f / 70.0, loop);
        p.toArgb(argb.data());
        char path[1024];
        std::snprintf(path, sizeof path, "%s/f%04d.ppm", dir.c_str(), f);
        FILE* g = std::fopen(path, "wb");
        if (!g) {
            std::perror(path);
            return 1;
        }
        std::fprintf(g, "P6\n%d %d\n255\n", pond::W, pond::H);
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
    std::string dumpDir;
    int scale = 3, frames = 70;
    double start = 0;
    bool loop = false;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--dump" && i + 1 < argc) dumpDir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::atoi(argv[++i]);
        else if (a == "--start" && i + 1 < argc) start = std::max(0.0, std::atof(argv[++i]));
        else if (a == "--loop") loop = true;
        else {
            std::fprintf(stderr, "usage: ctslasse-pond [--loop] [--scale N] | --dump DIR [--frames N] [--start S] [--loop]\n");
            return 1;
        }
    }
    auto p = std::make_unique<pond::Pond>();
    Water water;
    if (!dumpDir.empty()) {
        // the random drops up to START, as a window would have had them
        if (!loop) water.update((float)partT(start));
        return dump(*p, water, dumpDir, frames, start, loop);
    }

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    // 320x200 shown at 4:3, as on a VGA monitor in mode 13h
    SDL_Window* win = SDL_CreateWindow("ctslasse-pond", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    auto setTitle = [&] {
        SDL_SetWindowTitle(win, loop ? "ctslasse-pond - the intro, looped" : "ctslasse-pond - endless (click: a drop)");
    };
    setTitle();
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 320, 240, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_SetRenderVSync(ren, 1);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, pond::W, pond::H);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);

    std::vector<uint32_t> argb(pond::W * pond::H);
    const Uint64 freq = SDL_GetPerformanceFrequency();
    Uint64 last = SDL_GetPerformanceCounter();
    double t = 0;
    bool running = true, paused = false;
    auto restart = [&] {
        t = 0;
        water.reset();
    };
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type == SDL_EVENT_MOUSE_BUTTON_DOWN && e.button.button == SDL_BUTTON_LEFT && !loop) {
                // the window's point on the 320x240 view, then the grid's cells (8 pixels, rows 5/6)
                float x = e.button.x, y = e.button.y;
                SDL_RenderCoordinatesFromWindow(ren, x, y, &x, &y);
                if (x >= 0 && x < 320 && y >= 0 && y < 240) water.drop(x / 8, y * (200.0f / 240) / 8, (float)partT(t));
            }
            if (e.type != SDL_EVENT_KEY_DOWN || e.key.repeat) continue;
            switch (e.key.scancode) {
            case SDL_SCANCODE_ESCAPE: running = false; break;
            case SDL_SCANCODE_SPACE: paused = !paused; break;
            case SDL_SCANCODE_R: restart(); break;
            case SDL_SCANCODE_D:
                if (!loop) water.randomDrop((float)partT(t));
                break;
            case SDL_SCANCODE_L:
                loop = !loop;
                restart();
                setTitle();
                break;
            default: break;
            }
        }
        const Uint64 now = SDL_GetPerformanceCounter();
        if (!paused) t += (double)(now - last) / (double)freq;
        last = now;
        // endless: after a day the part's time is set back (the palette has long settled)
        if (!loop && t > 86400) {
            const float back = (float)partT(t - 60);
            for (Drop& d : water.drops) d.t -= back;
            water.next -= back;
            t = 60;
        }
        draw(*p, water, t, loop);
        p->toArgb(argb.data());
        SDL_UpdateTexture(tex, nullptr, argb.data(), pond::W * 4);
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
