// rbgdemo2 - a C++17/SDL3 port of "Black Glass ][" (RBGDEMO2.EXE), a vector
// demo and .670 music player coded by Tran of Renaissance, 18 July 1992.
//
// Layout of the sources:
//   demo.h/.cpp       - the VGA state and the demo's main-loop routines
//   objects.cpp       - the 30 objects: table, scripts and motion routines
//   player670.h/.cpp  - the .670 music driver (no SDL, unit-tested)
//   opl2.h/.cpp       - a YM3812, two of which the driver plays on
//   main.cpp          - SDL init, the clock, audio and keys
//
// Usage: rbgdemo2 [muzik file] [mode 0-7]
// The original asked for the mode at a DOS prompt; here it is an argument,
// and space changes it as in the original. Esc fades out and quits.
#include <SDL3/SDL.h>

#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

#include "demo.h"
#include "player670.h"

namespace {

// The SoundBlaster interrupt comes every 140 samples at 8000 Hz; mode 13h
// refreshes at 25.175 MHz / (800 x 449) = 70.086 Hz.
constexpr double kTick = 140.0 / 8000.0;
constexpr double kRetrace = 800.0 * 449.0 / 25175000.0;

std::string assetDir() {
    std::vector<std::string> candidates;
    if (const char* d = SDL_getenv("RBGDEMO2_ASSETS")) candidates.push_back(d);
    candidates.push_back("assets");
    candidates.push_back("../assets");
    if (const char* base = SDL_GetBasePath()) {
        candidates.push_back(std::string(base) + "assets");
        candidates.push_back(std::string(base) + "../assets");
    }
    for (const std::string& c : candidates) {
        SDL_IOStream* io = SDL_IOFromFile((c + "/background.bmp").c_str(), "rb");
        if (io) {
            SDL_CloseIO(io);
            return c;
        }
    }
    return "assets";
}

void fatal(const std::string& msg) {
    SDL_Log("%s", msg.c_str());
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "rbgdemo2", msg.c_str(), nullptr);
}

// The keys the original's handler understood, as PC scancodes.
uint8_t pcScancode(SDL_Scancode s) {
    switch (s) {
    case SDL_SCANCODE_ESCAPE: return 0x01;
    case SDL_SCANCODE_RETURN:
    case SDL_SCANCODE_KP_ENTER: return 0x1C;
    case SDL_SCANCODE_SPACE: return 0x39;
    case SDL_SCANCODE_F1: return 0x3B;
    case SDL_SCANCODE_LEFT:
    case SDL_SCANCODE_KP_4: return 0x4B;
    case SDL_SCANCODE_RIGHT:
    case SDL_SCANCODE_KP_6: return 0x4D;
    default: return 0;
    }
}

// The demo's clock: music ticks and retraces in time order.
struct Clock {
    rbg::Demo& demo;
    rbg::Player670& music;
    double nextRetrace = 0.0;
    long ticks = 0;
    std::vector<float> audio = std::vector<float>(rbg::Player670::kOutPerTick * 2);

    // Runs everything up to and including the next music tick.
    void tick() {
        const double at = (double)(ticks + 1) * kTick;
        while (nextRetrace <= at) {
            demo.onRetrace();
            nextRetrace += kRetrace;
        }
        music.tick();
        music.render(audio.data());
        ticks++;
        demo.onTick();
    }
};

// Headless hooks, run at every page flip:
// RBGDEMO2_DUMP=file writes what capture.py records from the original:
// u32 frame, u32 tick, the DAC, the shown page.
// RBGDEMO2_KEYS=frame:scancode,... (hex scancodes) presses a key right
// after that flip, as capture.py --framekeys does.
struct Hooks {
    FILE* dump = nullptr;
    Clock* clock = nullptr;
    rbg::Demo* demo = nullptr;
    std::vector<std::pair<int, uint8_t>> keys;
    int flips = 0;
    static void onFlip(void* user, const rbg::Demo& d) {
        auto* self = (Hooks*)user;
        if (self->dump) {
            static std::vector<uint8_t> px(320 * 200);
            d.shownPage(px.data());
            const uint32_t head[2] = {(uint32_t)self->flips, (uint32_t)self->clock->ticks};
            std::fwrite(head, sizeof head, 1, self->dump);
            std::fwrite(d.dac(), 768, 1, self->dump);
            std::fwrite(px.data(), px.size(), 1, self->dump);
        }
        uint8_t key = 0;
        for (auto& [f, sc] : self->keys)
            if (f == self->flips) key = sc;   // the last one listed wins
        if (key) self->demo->key(key);
        self->flips++;
    }
};

}  // namespace

int main(int argc, char** argv) {
    std::string muzik;
    int mode = 0;
    for (int i = 1; i < argc; i++) {
        const std::string a = argv[i];
        if (a.size() == 1 && a[0] >= '0' && a[0] <= '7')
            mode = a[0] - '0';
        else
            muzik = a;
    }

    const char* shotPath = SDL_getenv("RBGDEMO2_SHOT");
    const char* dumpPath = SDL_getenv("RBGDEMO2_DUMP");
    const bool headless = shotPath || dumpPath;
    const int stopFrame = SDL_getenv("RBGDEMO2_FRAME") ? SDL_atoi(SDL_getenv("RBGDEMO2_FRAME")) : 100;

    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO)) {
        SDL_Log("SDL_Init failed: %s", SDL_GetError());
        return 1;
    }
    const std::string assets = assetDir();
    if (muzik.empty()) muzik = assets + "/muzik0.670";

    rbg::Player670 music;
    rbg::Demo demo(music);
    if (!demo.load(assets)) {
        fatal("Cannot load the assets: " + demo.error() +
              "\nRun from the project root, or set RBGDEMO2_ASSETS to the assets folder.");
        return 1;
    }
    demo.start(mode);
    if (!music.load(muzik)) {
        fatal("Muzik file not found!!! (" + music.error() + ")");
        return 1;
    }

    Clock clock{demo, music};
    Hooks hooks;
    if (headless) {
        if (dumpPath) hooks.dump = std::fopen(dumpPath, "wb");
        hooks.clock = &clock;
        hooks.demo = &demo;
        if (const char* k = SDL_getenv("RBGDEMO2_KEYS")) {
            for (const char* p = k; *p;) {
                char* end = nullptr;
                const long f = std::strtol(p, &end, 10);
                if (*end != ':') break;
                const long sc = std::strtol(end + 1, &end, 16);
                hooks.keys.push_back({(int)f, (uint8_t)sc});
                p = *end == ',' ? end + 1 : end;
            }
        }
        demo.onFlip = &Hooks::onFlip;
        demo.onFlipUser = &hooks;
    }

    SDL_Window* win = SDL_CreateWindow("Black Glass ][ - Renaissance 1992", 1280, 960,
                                       SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = win ? SDL_CreateRenderer(win, nullptr) : nullptr;
    if (!win || !ren) {
        fatal(std::string("window/renderer failed: ") + SDL_GetError());
        return 1;
    }
    SDL_SetRenderVSync(ren, 1);
    // 320x200 on a 4:3 monitor: pixels 20% taller than wide, as on the VGA.
    SDL_SetRenderLogicalPresentation(ren, rbg::kScreenW, rbg::kScreenH,
                                     SDL_LOGICAL_PRESENTATION_STRETCH);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING,
                                         rbg::kScreenW, rbg::kScreenH);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);

    SDL_AudioStream* audio = nullptr;
    if (!headless) {
        SDL_AudioSpec spec{};
        spec.format = SDL_AUDIO_F32;
        spec.channels = 2;
        spec.freq = rbg::Player670::kOutRate;
        audio = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr);
        if (audio)
            SDL_ResumeAudioStreamDevice(audio);
        else
            SDL_Log("audio device failed: %s (continuing without sound)", SDL_GetError());
    }

    // With sound, the audio device sets the pace: keep about four ticks
    // (70 ms) queued. Without, the wall clock does.
    const int tickBytes = rbg::Player670::kOutPerTick * 2 * (int)sizeof(float);
    std::vector<uint32_t> pixels((size_t)rbg::kScreenW * rbg::kScreenH);
    bool running = true;
    const Uint64 t0 = SDL_GetTicksNS();

    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type == SDL_EVENT_KEY_DOWN && !e.key.repeat) {
                if (const uint8_t sc = pcScancode(e.key.scancode)) demo.key(sc);
            }
        }

        if (headless) {
            while (demo.frame() < stopFrame && !demo.finished()) clock.tick();
            running = false;
        } else if (audio) {
            while (SDL_GetAudioStreamQueued(audio) < 4 * tickBytes && !demo.finished()) {
                clock.tick();
                SDL_PutAudioStreamData(audio, clock.audio.data(), tickBytes);
            }
        } else {
            const double now = (double)(SDL_GetTicksNS() - t0) / 1e9;
            while ((double)clock.ticks * kTick < now && !demo.finished()) clock.tick();
        }
        if (demo.finished()) running = false;

        demo.renderTo(pixels.data());
        SDL_UpdateTexture(tex, nullptr, pixels.data(), rbg::kScreenW * (int)sizeof(uint32_t));
        SDL_RenderClear(ren);
        SDL_RenderTexture(ren, tex, nullptr, nullptr);
        if (shotPath && !running) {
            if (SDL_Surface* s = SDL_RenderReadPixels(ren, nullptr)) {
                SDL_SaveBMP(s, shotPath);
                SDL_DestroySurface(s);
            }
        }
        SDL_RenderPresent(ren);
    }

    if (hooks.dump) std::fclose(hooks.dump);
    if (audio) SDL_DestroyAudioStream(audio);
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    if (demo.finished()) std::printf("\nl8r...\n");   // 19012h
    return 0;
}
