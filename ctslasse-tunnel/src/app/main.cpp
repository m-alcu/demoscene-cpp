// ctslasse-tunnel - the water tunnel of Lasse Reinbøng (Cubic Team & $eeN,
// 1995), part 8 from T 12: the rippling plane in red and blue, then the
// tunnel with walls waving like water, in C++17 / SDL3.
//
// Usage: ctslasse-tunnel [--start SECONDS] [--endless] [--logo] [--256] [--res WxH] [--linear] [--scale N]
//            keys: E looped / endless, L the logo on / off,
//                  C 32-bit colour / the intro's 256 colours,
//                  I the 32-bit picture's interpolation: smooth / the mapper's (bilinear),
//                  G the grid on the texture, the light table, the palette
//                    and the frame's parameters, in the corners,
//                  Left / Right 5 s back / on, R restart,
//                  Space pause, Esc quit
//        ctslasse-tunnel --dump DIR [--frames N] [--start SECONDS] [--endless] [--logo] [--256] [--res WxH] [--linear]
//            (no window: writes N frames, 70 per second, as DIR/fNNNN.ppm)
//
// Looped (the default): from --start (seconds into the part; 8.2 by
// default, T 12, the plane alone) to the part's end in the intro (T 72,
// 49.1 s), over and over, seamlessly: instead of the intro's fade-out, over
// the last 5 T (3.4 s) the tunnel turns back into the plane as it is just
// after the start, and goes on from there. --endless / E: it runs on (the
// tunnel breathing and turning). --logo / L: the intro's texture, with
// its "cubic team & $een" logo embossed in the marble; without, the marble.
// Shown in 32-bit colour (the default), at 1280x800 or --res, or as the
// intro has it, in 256 colours at 320x200 (--256 / C). Either is shown at 4:3.
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <memory>
#include <string>
#include <vector>

#include "app/inspector.h"
#include "app/playback.h"

int main(int argc, char** argv) {
    std::string dumpDir;
    int scale = 3, frames = 70;
    double start = 12 * tunnel::kUnit / tunnel::kPit;
    bool endless = false, logo = false;
    View view;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--dump" && i + 1 < argc) dumpDir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::atoi(argv[++i]);
        else if (a == "--start" && i + 1 < argc) start = std::clamp(std::atof(argv[++i]), 0.0, kLatestStart);
        else if (a == "--endless") endless = true;
        else if (a == "--logo") logo = true;
        else if (a == "--256") view.trueColor = false;
        else if (a == "--linear") view.smooth = false;
        else if (a == "--res" && i + 1 < argc && std::sscanf(argv[i + 1], "%dx%d", &view.resW, &view.resH) == 2 &&
                 view.resW > 0 && view.resH > 0 && view.resW <= 7680 && view.resH <= 4800)
            i++;
        else {
            std::fprintf(stderr,
                         "usage: ctslasse-tunnel [--start S] [--endless] [--logo] [--256] [--res WxH] [--linear] [--scale N] | "
                         "--dump DIR [--frames N] [--start S] [--endless] [--logo] [--256] [--res WxH] [--linear]\n");
            return 1;
        }
    }
    auto k = std::make_unique<tunnel::Tunnel>(logo);
    k->setFadeOut(false);   // looped: the end turns into the start; endless: it runs on
    if (!dumpDir.empty()) return dump(*k, dumpDir, frames, start, endless, view);

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    // 320x200 shown at 4:3, as on a VGA monitor in mode 13h
    SDL_Window* win = SDL_CreateWindow("ctslasse-tunnel", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    auto setTitle = [&] {
        std::string t = endless ? "ctslasse-tunnel - endless" : "ctslasse-tunnel - looped";
        t += logo ? " - with the logo" : "";
        t += view.trueColor ? " - 32-bit, " + std::to_string(view.resW) + "x" + std::to_string(view.resH) +
                                  (view.smooth ? ", smooth" : ", bilinear")
                            : std::string(" - 256 colours");
        SDL_SetWindowTitle(win, t.c_str());
    };
    setTitle();
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderVSync(ren, 1);
    // the picture's texture, and the view at 4:3 (W x H shown as W x 1.2 H)
    SDL_Texture* tex = nullptr;
    auto setView = [&] {
        if (tex) SDL_DestroyTexture(tex);
        tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, view.w(), view.h());
        // the 256 colours as square-cornered pixels, the 32-bit picture smooth
        SDL_SetTextureScaleMode(tex, view.trueColor ? SDL_SCALEMODE_LINEAR : SDL_SCALEMODE_NEAREST);
        SDL_SetRenderLogicalPresentation(ren, view.w(), (int)std::lround(view.h() * 1.2),
                                         SDL_LOGICAL_PRESENTATION_LETTERBOX);
    };
    setView();

    std::vector<uint32_t> argb;
    Inspector inspector;
    const Uint64 freq = SDL_GetPerformanceFrequency();
    Uint64 last = SDL_GetPerformanceCounter();
    double t = start;
    bool running = true, paused = false;
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type != SDL_EVENT_KEY_DOWN || e.key.repeat) continue;
            switch (e.key.scancode) {
            case SDL_SCANCODE_ESCAPE: running = false; break;
            case SDL_SCANCODE_SPACE: paused = !paused; break;
            case SDL_SCANCODE_R: t = start; break;
            case SDL_SCANCODE_LEFT: t = std::max(start, t - 5); break;
            case SDL_SCANCODE_RIGHT: t += 5; break;
            case SDL_SCANCODE_E:
                endless = !endless;
                setTitle();
                break;
            case SDL_SCANCODE_L: {
                logo = !logo;
                k = std::make_unique<tunnel::Tunnel>(logo);
                k->setFadeOut(false);
                setTitle();
                break;
            }
            case SDL_SCANCODE_C:
                view.trueColor = !view.trueColor;
                setView();
                setTitle();
                break;
            case SDL_SCANCODE_I:
                view.smooth = !view.smooth;
                setTitle();
                break;
            case SDL_SCANCODE_G: inspector.on = !inspector.on; break;
            default: break;
            }
        }
        const Uint64 now = SDL_GetPerformanceCounter();
        if (!paused) t += (double)(now - last) / (double)freq;
        last = now;
        t = wrap(t, start, endless);
        show(*k, t, start, endless);
        picture(*k, view, argb);
        SDL_UpdateTexture(tex, nullptr, argb.data(), view.w() * 4);
        SDL_RenderClear(ren);
        SDL_RenderTexture(ren, tex, nullptr, nullptr);
        if (inspector.on) inspector.draw(ren, *k);
        SDL_RenderPresent(ren);
    }
    SDL_DestroyTexture(tex);
    inspector.release();
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
