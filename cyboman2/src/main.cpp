// cyboman2 - a C++17/SDL3 port of "Cyboman 2: The Inner Loop", Complex's
// 64K intro for The Party '94 (code JMagic, objects Reward, music Jugi).
//
// Usage: cyboman2 [--data DIR] [--scale N] [--mute]
//        cyboman2 --dump DIR --frames N [--keys F,...] [--wav FILE]
//            (no window: DIR/frames.txt, a line per frame: number, CRC-32
//            of the 64000 bytes of the screen, CRC-32 of the DAC; Esc down
//            at the frames listed; the music to a WAV file)
#include <SDL3/SDL.h>

#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "intro.h"
#include "runner.h"
#include "soundtrack.h"

namespace {

constexpr double kFps = 70.086;                 // mode 13h's refresh

void writeWav(const std::string& path, const std::vector<float>& s, int rate) {
    FILE* f = std::fopen(path.c_str(), "wb");
    if (!f) return;
    auto u32 = [&](uint32_t v) { std::fwrite(&v, 4, 1, f); };
    auto u16 = [&](uint16_t v) { std::fwrite(&v, 2, 1, f); };
    const uint32_t bytes = (uint32_t)s.size() * 2;
    std::fwrite("RIFF", 1, 4, f), u32(36 + bytes), std::fwrite("WAVEfmt ", 1, 8, f);
    u32(16), u16(1), u16(2), u32((uint32_t)rate), u32((uint32_t)rate * 4), u16(4), u16(16);
    std::fwrite("data", 1, 4, f), u32(bytes);
    for (float v : s) u16((uint16_t)(int16_t)std::lround(v * 32767.0f));
    std::fclose(f);
}

std::vector<uint8_t> readFile(const std::string& p) {
    std::ifstream f(p, std::ios::binary);
    return std::vector<uint8_t>((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
}

uint32_t crc32(const uint8_t* p, size_t n, uint32_t c = 0) {
    c = ~c;
    while (n--) {
        c ^= *p++;
        for (int k = 0; k < 8; k++) c = (c >> 1) ^ (0xEDB88320u & (0u - (c & 1)));
    }
    return ~c;
}

std::string dataDir(const std::string& given) {
    std::vector<std::string> c;
    if (!given.empty()) c.push_back(given);
    if (const char* d = SDL_getenv("CYBOMAN2_DATA")) c.push_back(d);
    c.push_back("data");
    c.push_back("../data");
    if (const char* base = SDL_GetBasePath()) {
        c.push_back(std::string(base) + "data");
        c.push_back(std::string(base) + "../data");
    }
    for (auto& d : c) {
        SDL_PathInfo info;
        if (SDL_GetPathInfo((d + "/cyboman2.img").c_str(), &info)) return d;
    }
    return "data";
}

void toRgb(const cyb::Intro& in, std::vector<uint8_t>& rgb) {
    rgb.assign(320 * 200 * 3, 0);
    if (in.textMode()) return;
    const uint8_t* v = in.vram();
    const uint8_t* d = in.dac();
    for (int i = 0; i < 64000; i++) {
        const uint8_t* c = d + v[i] * 3;
        for (int k = 0; k < 3; k++) rgb[i * 3 + k] = (uint8_t)(c[k] << 2 | c[k] >> 4);
    }
}

}  // namespace

int main(int argc, char** argv) {
    std::string data, dumpDir, keysArg, wav;
    int scale = 3, frames = 0;
    bool mute = false;
    for (int i = 1; i < argc; i++) {
        const std::string a = argv[i];
        if (a == "--data" && i + 1 < argc) data = argv[++i];
        else if (a == "--scale" && i + 1 < argc) scale = std::atoi(argv[++i]);
        else if (a == "--dump" && i + 1 < argc) dumpDir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::atoi(argv[++i]);
        else if (a == "--keys" && i + 1 < argc) keysArg = argv[++i];
        else if (a == "--wav" && i + 1 < argc) wav = argv[++i];
        else if (a == "--mute") mute = true;
        else {
            std::fprintf(stderr, "usage: cyboman2 [--data DIR] [--scale N] [--mute]\n"
                                 "       cyboman2 --dump DIR --frames N [--keys F,...] [--wav FILE]\n");
            return 1;
        }
    }
    const bool headless = !dumpDir.empty();
    if (!SDL_Init(headless ? 0 : (SDL_INIT_VIDEO | SDL_INIT_AUDIO))) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    data = dataDir(data);
    const auto image = readFile(data + "/cyboman2.img");
    if (image.size() < 0x40000) {
        std::fprintf(stderr, "cyboman2: %s/cyboman2.img is needed (tools/extract_assets.py)\n", data.c_str());
        return 1;
    }
    cyb::Runner run;
    run.intro = std::make_unique<cyb::Intro>(run, image);
    run.start();
    cyb::Soundtrack music(image);
    std::vector<float> pcm;

    if (headless) {
        std::map<int, bool> escAt;
        for (size_t p = 0; p < keysArg.size();) {
            size_t c = keysArg.find(',', p);
            const std::string item = keysArg.substr(p, c == std::string::npos ? std::string::npos : c - p);
            escAt[std::atoi(item.c_str())] = true;
            if (c == std::string::npos) break;
            p = c + 1;
        }
        // CYBOMAN2_RAW=f1,f2,...: those frames' screen and DAC to DIR/raw_NNNNN.bin
        std::map<int, bool> raw;
        if (const char* r = SDL_getenv("CYBOMAN2_RAW"))
            for (const char* p = r; *p;) {
                raw[std::atoi(p)] = true;
                while (*p && *p != ',') p++;
                if (*p) p++;
            }
        bool stopped = false;
        FILE* list = std::fopen((dumpDir + "/frames.txt").c_str(), "w");
        if (!list) {
            std::fprintf(stderr, "cannot write %s/frames.txt\n", dumpDir.c_str());
            run.stop();
            return 1;
        }
        for (int f = 0; f < frames; f++) {
            if (escAt.count(f)) run.esc = true;
            if (!run.step()) break;
            if (!wav.empty()) {
                if (run.intro->finished() && !stopped) music.stop(), stopped = true;
                music.render((f + 1) / kFps, pcm);
            }
            std::fprintf(list, "%d %08x %08x\n", f, crc32(run.intro->vram(), 64000), crc32(run.intro->dac(), 768));
            if (raw.count(f)) {
                char name[64];
                std::snprintf(name, sizeof name, "/raw_%05d.bin", f);
                if (FILE* o = std::fopen((dumpDir + name).c_str(), "wb")) {
                    std::fwrite(run.intro->vram(), 1, 64000, o);
                    std::fwrite(run.intro->dac(), 1, 768, o);
                    std::fclose(o);
                }
            }
        }
        std::fclose(list);
        if (!wav.empty()) writeWav(wav, pcm, cyb::Soundtrack::kRate);
        run.stop();
        SDL_Quit();
        return 0;
    }

    SDL_Window* win = SDL_CreateWindow("Cyboman 2", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 320, 240, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_RGB24, SDL_TEXTUREACCESS_STREAMING, 320, 200);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);
    SDL_SetRenderVSync(ren, 0);
    // The music paces the frames when there is a device: each frame's audio
    // is queued, then the frame shown once no more than three frames' worth
    // wait before it. Otherwise a timer does.
    SDL_AudioStream* audio = nullptr;
    if (!mute) {
        const SDL_AudioSpec spec{SDL_AUDIO_F32, 2, cyb::Soundtrack::kRate};
        audio = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr);
        if (audio) SDL_ResumeAudioStreamDevice(audio);
        else std::fprintf(stderr, "cyboman2: no audio (%s)\n", SDL_GetError());
    }
    const int frameBytes = (int)(cyb::Soundtrack::kRate / kFps) * 2 * (int)sizeof(float);
    std::vector<uint8_t> rgb;
    const Uint64 period = (Uint64)(SDL_GetPerformanceFrequency() / kFps);
    Uint64 next = SDL_GetPerformanceCounter();
    long frame = 0;
    bool running = true;
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type == SDL_EVENT_KEY_DOWN && e.key.scancode == SDL_SCANCODE_ESCAPE) run.esc = true;
            if (e.type == SDL_EVENT_KEY_UP && e.key.scancode == SDL_SCANCODE_ESCAPE) run.esc = false;
        }
        if (!run.step() || run.intro->finished()) break;
        frame++;
        if (audio) {
            pcm.clear();
            music.render(frame / kFps, pcm);
            SDL_PutAudioStreamData(audio, pcm.data(), (int)(pcm.size() * sizeof(float)));
            while (running && SDL_GetAudioStreamQueued(audio) > 3 * frameBytes) SDL_Delay(1);
        } else {
            next += period;
            const Uint64 now = SDL_GetPerformanceCounter();
            if (next > now) SDL_DelayNS((next - now) * 1000000000ull / SDL_GetPerformanceFrequency());
            else next = now;
        }
        toRgb(*run.intro, rgb);
        SDL_UpdateTexture(tex, nullptr, rgb.data(), 320 * 3);
        SDL_RenderClear(ren);
        const SDL_FRect dst{0, 0, 320, 240};
        SDL_RenderTexture(ren, tex, nullptr, &dst);
        SDL_RenderPresent(ren);
    }
    if (audio) SDL_DestroyAudioStream(audio);
    run.stop();
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
