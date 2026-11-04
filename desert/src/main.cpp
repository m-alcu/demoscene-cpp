// desert - a C++17/SDL3 port of "Desert Fractal", a 128-byte intro by
// malcolm/ETERNAL (fixed by kirshe), first place at BYTEFALL'96.
//
// Layout of the sources:
//   desert.h/.cpp  - the intro's registers and routines (no SDL, testable)
//   main.cpp       - SDL init and the frame loop
//
// The original is in ../original/DESERT.ASM.
#include <SDL3/SDL.h>

#include <vector>

#include "desert.h"

namespace {

// Mode 13h is 320x200 double-scanned: 25.175 MHz / (800 x 449) = 70.086 Hz.
// The intro scrolls one line per retrace, whatever the monitor's rate.
constexpr double kRetrace = 800.0 * 449.0 / 25175000.0;

}  // namespace

int main() {
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        SDL_Log("SDL_Init failed: %s", SDL_GetError());
        return 1;
    }

    // 320x200 on a 4:3 monitor: the pixels were taller than wide. 1280x960
    // with STRETCH reproduces that.
    SDL_Window* win = SDL_CreateWindow("Desert Fractal - ETERNAL 1996", 1280, 960,
                                       SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = win ? SDL_CreateRenderer(win, nullptr) : nullptr;
    if (!win || !ren) {
        SDL_Log("window/renderer failed: %s", SDL_GetError());
        return 1;
    }
    SDL_SetRenderVSync(ren, 1);
    SDL_SetRenderLogicalPresentation(ren, desert::kScreenW, desert::kScreenH,
                                     SDL_LOGICAL_PRESENTATION_STRETCH);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888,
                                         SDL_TEXTUREACCESS_STREAMING, desert::kScreenW,
                                         desert::kScreenH);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);

    // Debug hook, as in tsbdemo: run a number of retraces headless, save a
    // BMP and exit, so the output can be checked without a person watching.
    const char* shotPath = SDL_getenv("DESERT_SHOT");
    const int shotFrame = SDL_getenv("DESERT_SHOT_FRAME")
                              ? SDL_atoi(SDL_getenv("DESERT_SHOT_FRAME"))
                              : 70;

    desert::Desert intro;
    std::vector<uint32_t> pixels((size_t)desert::kScreenW * desert::kScreenH);
    double owed = 0.0;  // retraces still to run
    Uint64 prev = SDL_GetTicks();
    int frame = 0;
    bool running = true;

    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            // The original leaves on any key (int 16h, AH=01h).
            if (e.type == SDL_EVENT_QUIT || e.type == SDL_EVENT_KEY_DOWN) running = false;
        }

        const Uint64 now = SDL_GetTicks();
        owed += (double)(now - prev) / 1000.0 / kRetrace;
        prev = now;
        if (shotPath) owed = 1.0;  // one retrace per frame, deterministic
        if (owed > 70.0) owed = 70.0;  // after a stall, don't race to catch up
        for (; owed >= 1.0; owed -= 1.0) intro.retrace();

        // The DAC holds 6 bits per component; scale 0..63 to 0..255.
        const uint8_t* dac = intro.dac();
        const uint8_t* screen = intro.screen();
        for (size_t i = 0; i < pixels.size(); i++) {
            const uint8_t* c = &dac[screen[i] * 3];
            auto s = [](uint8_t v) { return (uint32_t)((v * 255 + 31) / 63); };
            pixels[i] = 0xFF000000u | s(c[0]) << 16 | s(c[1]) << 8 | s(c[2]);
        }
        SDL_UpdateTexture(tex, nullptr, pixels.data(), desert::kScreenW * (int)sizeof(uint32_t));
        SDL_RenderClear(ren);
        SDL_RenderTexture(ren, tex, nullptr, nullptr);

        if (shotPath && ++frame >= shotFrame) {
            if (SDL_Surface* s = SDL_RenderReadPixels(ren, nullptr)) {
                SDL_SaveBMP(s, shotPath);
                SDL_DestroySurface(s);
            }
            running = false;
        }
        SDL_RenderPresent(ren);
    }

    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
