// hexappeal - a C++17/SDL3 port of the end part of HEX APPEAL (Cascada Demo
// Section, Assembly '93): the slimy scroller with the credits and greetings,
// over LIBERTINE by Zodiak.
//
// Layout of the sources:
//   endpart.h/.cpp    - the end part: the ring buffer, the text, the wobble
//   modplayer.h/.cpp  - the module player (no SDL, unit-tested)
//   main.cpp          - SDL init, the retrace clock, audio and keys
//
// Usage: hexappeal [module]
// Esc fades out and quits, as in the original; at the end of the text it
// does so by itself.
#include <SDL3/SDL.h>

#include <cstdio>
#include <cstdlib>
#include <string>
#include <utility>
#include <vector>

#include "endpart.h"
#include "modplayer.h"

namespace {

// The part runs in the mode the one before left: mode 13h with 480-line
// timing, 25.175 MHz / (800 x 528) = 59.60 Hz. The music system called the
// part at every retrace.
constexpr double kRetrace = 800.0 * 528.0 / 25175000.0;

// Where the song is when the end part starts: the part before hands over at
// position 19, row 55 (it asks the music system for position + 1 >= 14h and
// row + 1 >= 38h).
constexpr int kStartPosition = 19;
constexpr int kStartRow = 55;

std::string assetDir() {
    std::vector<std::string> candidates;
    if (const char* d = SDL_getenv("HEXAPPEAL_ASSETS")) candidates.push_back(d);
    candidates.push_back("assets");
    candidates.push_back("../assets");
    if (const char* base = SDL_GetBasePath()) {
        candidates.push_back(std::string(base) + "assets");
        candidates.push_back(std::string(base) + "../assets");
    }
    for (const std::string& c : candidates) {
        SDL_IOStream* io = SDL_IOFromFile((c + "/palette.dac").c_str(), "rb");
        if (io) {
            SDL_CloseIO(io);
            return c;
        }
    }
    return "assets";
}

void fatal(const std::string& msg) {
    SDL_Log("%s", msg.c_str());
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "hexappeal", msg.c_str(), nullptr);
}

// The clock: retraces, and the music that plays between them.
struct Clock {
    hex::EndPart& part;
    hex::ModPlayer& music;
    long retraces = 0;
    double audioDue = 0.0;
    std::vector<float> audio;

    // The next retrace: the part's callback, then its main loop's frame.
    // Leaves in `audio` the sound up to it.
    void retrace() {
        audioDue += hex::ModPlayer::kRate * kRetrace;
        const int n = (int)audioDue;
        audioDue -= n;
        audio.resize((size_t)n * 2);
        music.render(audio.data(), n);
        retraces++;
        part.retrace();
        music.setVolume(part.volume());
        part.frame();
    }
};

// Headless hooks:
// HEXAPPEAL_DUMP=file writes what the harness's capture.py records from the
// original, uncompressed: per retrace u32 retrace, u32 volume, the DAC, the
// screen. HEXAPPEAL_KEYS=retrace:scancode,... (hex) sets the keyboard port
// at those retraces. HEXAPPEAL_WAV=file writes the sound.
struct Hooks {
    FILE* dump = nullptr;
    FILE* wav = nullptr;
    long wavFrames = 0;
    std::vector<std::pair<long, uint8_t>> keys;

    void record(const Clock& c) {
        if (!dump) return;
        const uint32_t head[2] = {(uint32_t)c.retraces, (uint32_t)c.part.volume()};
        std::fwrite(head, sizeof head, 1, dump);
        std::fwrite(c.part.dac(), 768, 1, dump);
        std::fwrite(c.part.screen(), hex::kScreenW * hex::kScreenH, 1, dump);
    }
    void sound(const Clock& c) {
        if (!wav) return;
        std::vector<int16_t> s(c.audio.size());
        for (size_t i = 0; i < s.size(); i++) s[i] = (int16_t)(c.audio[i] * 32767.0f);
        std::fwrite(s.data(), 2, s.size(), wav);
        wavFrames += (long)s.size() / 2;
    }
    void closeWav() {
        if (!wav) return;
        const uint32_t data = (uint32_t)wavFrames * 4, rate = hex::ModPlayer::kRate;
        const uint32_t h[] = {0x46464952, 36 + data, 0x45564157, 0x20746D66, 16, 0x00020001,
                              rate, rate * 4, 0x00100004, 0x61746164, data};
        std::fseek(wav, 0, SEEK_SET);
        std::fwrite(h, sizeof h, 1, wav);
        std::fclose(wav);
    }
};

}  // namespace

int main(int argc, char** argv) {
    const char* shotPath = SDL_getenv("HEXAPPEAL_SHOT");
    const char* dumpPath = SDL_getenv("HEXAPPEAL_DUMP");
    const char* wavPath = SDL_getenv("HEXAPPEAL_WAV");
    const bool headless = shotPath || dumpPath || wavPath;
    const long stopAt = SDL_getenv("HEXAPPEAL_FRAME") ? SDL_atoi(SDL_getenv("HEXAPPEAL_FRAME")) : 1000000;

    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO)) {
        SDL_Log("SDL_Init failed: %s", SDL_GetError());
        return 1;
    }
    const std::string assets = assetDir();
    const std::string module = argc > 1 ? argv[1] : assets + "/libertine.mod";

    hex::EndPart part;
    if (!part.load(assets)) {
        fatal("Cannot load " + part.error() +
              "\nRun from the project root, or set HEXAPPEAL_ASSETS to the assets folder.");
        return 1;
    }
    hex::ModPlayer music;
    if (!music.load(module)) {
        fatal("Cannot load the music: " + music.error());
        return 1;
    }
    music.seek(kStartPosition, kStartRow);
    part.start();

    Clock clock{part, music, 0, 0.0, {}};
    Hooks hooks;
    if (dumpPath) hooks.dump = std::fopen(dumpPath, "wb");
    if (wavPath && (hooks.wav = std::fopen(wavPath, "wb"))) std::fseek(hooks.wav, 44, SEEK_SET);
    if (const char* k = SDL_getenv("HEXAPPEAL_KEYS")) {
        for (const char* p = k; *p;) {
            char* end = nullptr;
            const long f = std::strtol(p, &end, 10);
            if (*end != ':') break;
            const long sc = std::strtol(end + 1, &end, 16);
            hooks.keys.push_back({f, (uint8_t)sc});
            p = *end == ',' ? end + 1 : end;
        }
    }
    auto step = [&] {
        for (auto& [r, sc] : hooks.keys)
            if (r == clock.retraces + 1) part.key(sc);
        clock.retrace();
        hooks.sound(clock);
        if (!part.finished()) hooks.record(clock);
    };

    SDL_Window* win = SDL_CreateWindow("HEX APPEAL - Cascada 1993", 1280, 960, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = win ? SDL_CreateRenderer(win, nullptr) : nullptr;
    if (!win || !ren) {
        fatal(std::string("window/renderer failed: ") + SDL_GetError());
        return 1;
    }
    SDL_SetRenderVSync(ren, 1);
    // 320x200 in a 480-line frame: square pixels, a black band above and
    // below, as a VGA monitor showed it.
    SDL_SetRenderLogicalPresentation(ren, 320, 240, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING,
                                         hex::kScreenW, hex::kScreenH);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);
    const SDL_FRect dst{0.0f, 20.0f, (float)hex::kScreenW, (float)hex::kScreenH};

    SDL_AudioStream* audio = nullptr;
    if (!headless) {
        SDL_AudioSpec spec{};
        spec.format = SDL_AUDIO_F32;
        spec.channels = 2;
        spec.freq = hex::ModPlayer::kRate;
        audio = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr);
        if (audio)
            SDL_ResumeAudioStreamDevice(audio);
        else
            SDL_Log("audio device failed: %s (continuing without sound)", SDL_GetError());
    }

    hooks.record(clock);     // the screen as the part starts, before any retrace

    // With sound, the audio device sets the pace: keep about four retraces
    // queued. Without, the wall clock does.
    const int retraceBytes = (int)(hex::ModPlayer::kRate * kRetrace) * 2 * (int)sizeof(float);
    std::vector<uint32_t> pixels((size_t)hex::kScreenW * hex::kScreenH);
    bool running = true;
    const Uint64 t0 = SDL_GetTicksNS();

    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type == SDL_EVENT_KEY_DOWN && !e.key.repeat && e.key.scancode == SDL_SCANCODE_ESCAPE)
                part.key(0x01);
            if (e.type == SDL_EVENT_KEY_UP && e.key.scancode == SDL_SCANCODE_ESCAPE) part.key(0x81);
        }

        if (headless) {
            while (clock.retraces < stopAt && !part.finished()) step();
            running = false;
        } else if (audio) {
            while (SDL_GetAudioStreamQueued(audio) < 4 * retraceBytes && !part.finished()) {
                step();
                SDL_PutAudioStreamData(audio, clock.audio.data(), (int)(clock.audio.size() * sizeof(float)));
            }
        } else {
            const double now = (double)(SDL_GetTicksNS() - t0) / 1e9;
            while ((double)clock.retraces * kRetrace < now && !part.finished()) step();
        }
        if (part.finished()) running = false;

        part.renderTo(pixels.data());
        SDL_UpdateTexture(tex, nullptr, pixels.data(), hex::kScreenW * (int)sizeof(uint32_t));
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
        SDL_RenderClear(ren);
        SDL_RenderTexture(ren, tex, nullptr, &dst);
        if (shotPath && !running) {
            if (SDL_Surface* s = SDL_RenderReadPixels(ren, nullptr)) {
                SDL_SaveBMP(s, shotPath);
                SDL_DestroySurface(s);
            }
        }
        SDL_RenderPresent(ren);
    }
    // let the last of the sound play out
    if (audio && part.finished())
        while (SDL_GetAudioStreamQueued(audio) > 0) SDL_Delay(10);

    if (hooks.dump) std::fclose(hooks.dump);
    hooks.closeWav();
    if (audio) SDL_DestroyAudioStream(audio);
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
