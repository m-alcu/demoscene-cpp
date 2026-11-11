// metaballs - Gouraud-shaded blobs that merge and split, in the style of 1994-1997 PC
// demos (256 colours, software scanline filler), in C++17 / SDL3.
//
// Usage: metaballs [--scale N] [--res WxH] [--material M] [--grid N] [--view V]
//            keys: Space pause, W solid/wireframe/both, G Gouraud/flat, M next material,
//                  R next resolution, +/- or Up/Down mesh detail (grid size), Esc quit
//        metaballs --dump DIR [--frames N] [--start SECONDS] [--res WxH] [--flat]
//                  [--material M] [--grid N] [--view V]
//            materials: 0 slime, 1 mercury, 2 lava
//            views: 0 solid, 1 wireframe, 2 solid + wireframe
//            (no window: writes N frames, 70 per second, as DIR/fNNNN.ppm)
#include <SDL3/SDL.h>

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

#include "blobs.h"

namespace {

// The screen sizes R steps through: mode 13h, then the VESA modes of the time and beyond.
constexpr int kRes[][2] = {{320, 200}, {640, 400}, {640, 480}, {800, 600}, {1024, 768}, {1280, 960}};
constexpr int kResCount = sizeof kRes / sizeof kRes[0];

int dump(mb::Blobs& blobs, const std::string& dir, int frames, double start) {
    const int w = blobs.width(), h = blobs.height();
    std::vector<uint32_t> argb((size_t)w * h);
    for (int f = 0; f < frames; f++) {
        blobs.render(start + f / 70.0);
        blobs.to_argb(argb.data());
        char p[1024];
        std::snprintf(p, sizeof p, "%s/f%04d.ppm", dir.c_str(), f);
        FILE* g = std::fopen(p, "wb");
        if (!g) { std::perror(p); return 1; }
        std::fprintf(g, "P6\n%d %d\n255\n", w, h);
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
    int scale = 3, frames = 70, material = 0, grid = 64, view = 0, w = 640, h = 480;
    double start = 0;
    bool flat = false;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--dump" && i + 1 < argc) dump_dir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::atoi(argv[++i]);
        else if (a == "--start" && i + 1 < argc) start = std::atof(argv[++i]);
        else if (a == "--flat") flat = true;
        else if (a == "--res" && i + 1 < argc && std::sscanf(argv[i + 1], "%dx%d", &w, &h) == 2 && w >= 64 &&
                 h >= 40 && w <= 4096 && h <= 4096)
            i++;
        else if (a == "--material" && i + 1 < argc)
            material = std::clamp(std::atoi(argv[++i]), 0, (int)mb::Material::Count - 1);
        else if (a == "--view" && i + 1 < argc) view = std::clamp(std::atoi(argv[++i]), 0, (int)mb::View::Count - 1);
        else if (a == "--grid" && i + 1 < argc) grid = std::clamp(std::atoi(argv[++i]), 8, 128);
        else {
            std::fprintf(stderr,
                         "usage: metaballs [--scale N] [--res WxH] [--material M] [--grid N] [--view V] | --dump DIR "
                         "[--frames N] [--start S] [--res WxH] [--flat] [--material M] [--grid N] [--view V]\n");
            return 1;
        }
    }
    mb::Blobs blobs(w, h);
    blobs.gouraud = !flat;
    blobs.grid = grid;
    blobs.view = (mb::View)view;
    blobs.set_material((mb::Material)material);
    if (!dump_dir.empty()) return dump(blobs, dump_dir, frames, start);

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    // Shown at 4:3 whatever the screen size, as on a CRT monitor.
    SDL_Window* win = SDL_CreateWindow("metaballs", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderVSync(ren, 1);
    SDL_Texture* tex = nullptr;
    std::vector<uint32_t> argb;
    auto set_title = [&] {
        const std::string t = std::string("metaballs - ") + std::to_string(blobs.width()) + "x" +
                              std::to_string(blobs.height()) + ", " + mb::material_name(blobs.material()) + ", " +
                              mb::view_name(blobs.view) + ", grid " + std::to_string(blobs.grid) + " (" +
                              std::to_string(blobs.last_tris()) + " triangles)" + (blobs.gouraud ? "" : ", flat");
        SDL_SetWindowTitle(win, t.c_str());
    };
    auto make_screen = [&] {
        const int sw = blobs.width(), sh = blobs.height();
        if (tex) SDL_DestroyTexture(tex);
        tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, sw, sh);
        // Chunky pixels for 320x200, smooth scaling for the bigger modes.
        SDL_SetTextureScaleMode(tex, sw <= 320 ? SDL_SCALEMODE_NEAREST : SDL_SCALEMODE_LINEAR);
        SDL_SetRenderLogicalPresentation(ren, sw, sw * 3 / 4, SDL_LOGICAL_PRESENTATION_LETTERBOX);
        argb.assign((size_t)sw * sh, 0);
        set_title();
    };
    make_screen();

    const Uint64 freq = SDL_GetPerformanceFrequency();
    Uint64 last = SDL_GetPerformanceCounter(), last_title = last;
    double t = 0;
    bool running = true, paused = false;
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type != SDL_EVENT_KEY_DOWN) continue;
            // Mesh detail: by the character on the key (keycode), not its place (scancode), so
            // + and - work on any keyboard layout; the up/down arrows do the same. These repeat
            // when held.
            const SDL_Keycode k = e.key.key;
            const int dgrid = k == SDLK_PLUS || k == SDLK_EQUALS || k == SDLK_KP_PLUS || k == SDLK_UP ? 4
                            : k == SDLK_MINUS || k == SDLK_KP_MINUS || k == SDLK_DOWN ? -4 : 0;
            if (dgrid) {
                blobs.grid = std::clamp(blobs.grid + dgrid, 8, 128);
                set_title();
                continue;
            }
            if (e.key.repeat) continue;
            switch (e.key.scancode) {
            case SDL_SCANCODE_ESCAPE: running = false; break;
            case SDL_SCANCODE_SPACE: paused = !paused; break;
            case SDL_SCANCODE_G: blobs.gouraud = !blobs.gouraud; set_title(); break;
            case SDL_SCANCODE_W:
                blobs.view = (mb::View)(((int)blobs.view + 1) % (int)mb::View::Count);
                set_title();
                break;
            case SDL_SCANCODE_M:
                blobs.set_material((mb::Material)(((int)blobs.material() + 1) % (int)mb::Material::Count));
                set_title();
                break;
            case SDL_SCANCODE_R: {
                int k = 0;  // the next size in the list after the current one
                while (k < kResCount && kRes[k][0] * kRes[k][1] <= blobs.width() * blobs.height()) k++;
                k %= kResCount;
                blobs.set_resolution(kRes[k][0], kRes[k][1]);
                make_screen();
                break;
            }
            default: break;
            }
        }
        const Uint64 now = SDL_GetPerformanceCounter();
        if (!paused) t += (double)(now - last) / (double)freq;
        last = now;
        blobs.render(t);
        // The triangle count changes every frame; refresh the title twice a second.
        if (now - last_title > freq / 2) {
            set_title();
            last_title = now;
        }
        blobs.to_argb(argb.data());
        SDL_UpdateTexture(tex, nullptr, argb.data(), blobs.width() * 4);
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
