// asm94 - a C++17/SDL3 port of the Assembly '94 invitation intro, by Future
// Crew and Sonic PC (April 1994: code mik/Sonic PC, graphics Marvel/FC and
// Pixel/FC, music Purple Motion/FC).
//
// Usage: asm94 [--data DIR] [--scale N] [--mute]
//        asm94 --dump DIR --seconds S [--keys F,...] [--wav FILE]
//            (no window: DIR/frames.txt, a line per frame: number, CRC-32 of
//            the picture (palette indices), CRC-32 of the palette; Esc down
//            at the frames listed; the music to a WAV)
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <set>
#include <string>
#include <vector>

#include "demo.h"
#include "machine.h"

namespace {

std::vector<uint8_t> readFile(const std::string& p) {
    std::ifstream f(p, std::ios::binary);
    return std::vector<uint8_t>((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
}

uint32_t crc32(const uint8_t* p, size_t n, uint32_t c = 0) {
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
    c = ~c;
    while (n--) c = (c >> 8) ^ table[(c ^ *p++) & 0xFF];
    return ~c;
}

void writeWav(const std::string& path, const std::vector<float>& s, int rate) {
    FILE* f = std::fopen(path.c_str(), "wb");
    if (!f) return;
    auto u32 = [&](uint32_t v) { std::fwrite(&v, 4, 1, f); };
    auto u16 = [&](uint16_t v) { std::fwrite(&v, 2, 1, f); };
    const uint32_t bytes = (uint32_t)s.size() * 2;
    std::fwrite("RIFF", 1, 4, f), u32(36 + bytes), std::fwrite("WAVEfmt ", 1, 8, f);
    u32(16), u16(1), u16(2), u32((uint32_t)rate), u32((uint32_t)rate * 4), u16(4), u16(16);
    std::fwrite("data", 1, 4, f), u32(bytes);
    for (float v : s) u16((uint16_t)(int16_t)std::lround(std::fmax(-1.0f, std::fmin(1.0f, v * 0.5f)) * 32767.0f));
    std::fclose(f);
}

std::string dataDir(const std::string& given) {
    std::vector<std::string> c;
    if (!given.empty()) c.push_back(given);
    if (const char* d = SDL_getenv("ASM94_DATA")) c.push_back(d);
    c.push_back("data");
    c.push_back("../data");
    if (const char* base = SDL_GetBasePath()) {
        c.push_back(std::string(base) + "data");
        c.push_back(std::string(base) + "../data");
    }
    for (auto& d : c) {
        SDL_PathInfo info;
        if (SDL_GetPathInfo((d + "/asm94.img").c_str(), &info)) return d;
    }
    return "data";
}

int window(asm94::Machine& m, int scale, bool mute) {
    if (!SDL_Init(SDL_INIT_VIDEO | (mute ? 0 : SDL_INIT_AUDIO))) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    SDL_Window* win = SDL_CreateWindow("Assembly '94", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 320, 240, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_RGB24, SDL_TEXTUREACCESS_STREAMING, 320, 480);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);
    SDL_AudioStream* audio = nullptr;
    std::vector<float> pcm;
    if (!mute) {
        const SDL_AudioSpec spec{SDL_AUDIO_F32, 2, asm94::Mixer::kRate};
        audio = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr);
        if (audio) SDL_ResumeAudioStreamDevice(audio), m.pcm = &pcm;
        else std::fprintf(stderr, "asm94: no audio (%s)\n", SDL_GetError());
    }
    // the picture of the frame last taken (320 x 200, 240 or 480), as RGB
    std::vector<uint8_t> shown(320 * 480 * 3, 0), px;
    int sh = 240;
    bool graphics = false;
    m.frame = [&](long) {
        graphics = m.screen.graphics;
        if (!graphics) return;
        m.picture(px, sh);
        const uint8_t* pal = m.screen.palette;
        for (int i = 0; i < 320 * sh; i++)
            for (int k = 0; k < 3; k++) {
                const uint8_t c = pal[px[i] * 3 + k];
                shown[i * 3 + k] = (uint8_t)(c << 2 | c >> 4);
            }
    };
    const double fps = 60.0;
    const Uint64 freq = SDL_GetPerformanceFrequency(), t0 = SDL_GetPerformanceCounter();
    bool running = true;
    for (long step = 1; running; step++) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type == SDL_EVENT_KEY_DOWN && !e.key.repeat && e.key.scancode == SDL_SCANCODE_ESCAPE) m.press(1);
            if (e.type == SDL_EVENT_KEY_UP && e.key.scancode == SDL_SCANCODE_ESCAPE) m.press(0x81);
        }
        pcm.clear();
        if (!m.run(step / fps)) break;
        if (audio) {
            SDL_PutAudioStreamData(audio, pcm.data(), (int)(pcm.size() * sizeof(float)));
            // the music paces the steps: at most three steps' worth queued
            const int ahead = (int)(3 * asm94::Mixer::kRate / fps) * 2 * (int)sizeof(float);
            while (running && SDL_GetAudioStreamQueued(audio) > ahead) SDL_Delay(1);
        } else {
            const Uint64 due = t0 + (Uint64)(step / fps * freq), now = SDL_GetPerformanceCounter();
            if (due > now) SDL_DelayNS((due - now) * 1000000000ull / freq);
        }
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
        SDL_RenderClear(ren);
        if (graphics) {
            SDL_UpdateTexture(tex, nullptr, shown.data(), 320 * 3);
            const SDL_FRect src{0, 0, 320, (float)sh}, dst{0, 0, 320, 240};
            SDL_RenderTexture(ren, tex, &src, &dst);
        }
        SDL_RenderPresent(ren);
    }
    if (audio) {
        m.pcm = nullptr;
        SDL_DestroyAudioStream(audio);
    }
    m.stop();
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}

}  // namespace

int main(int argc, char** argv) {
    std::string data, dump, wav;
    double seconds = 0;
    int scale = 3;
    bool mute = false;
    std::set<long> keys;
    for (int i = 1; i < argc; i++) {
        const std::string a = argv[i];
        auto next = [&]() { return i + 1 < argc ? std::string(argv[++i]) : std::string(); };
        if (a == "--data") data = next();
        else if (a == "--dump") dump = next();
        else if (a == "--seconds") seconds = std::stod(next());
        else if (a == "--wav") wav = next();
        else if (a == "--scale") scale = std::max(1, std::atoi(next().c_str()));
        else if (a == "--mute") mute = true;
        else if (a == "--keys") {
            const std::string k = next();
            for (size_t p = 0; p < k.size();) {
                const size_t c = k.find(',', p);
                keys.insert(std::stol(k.substr(p, c - p)));
                if (c == std::string::npos) break;
                p = c + 1;
            }
        } else {
            std::fprintf(stderr, "usage: asm94 [--data DIR] [--scale N] [--mute]\n"
                                 "       asm94 --dump DIR --seconds S [--keys F,...] [--wav FILE]\n");
            return 1;
        }
    }
    data = dataDir(data);
    const std::vector<uint8_t> image = readFile(data + "/asm94.img");
    if (image.empty()) {
        std::fprintf(stderr, "no %s/asm94.img (tools/extract_assets.py)\n", data.c_str());
        return 1;
    }
    asm94::Machine m(image);
    asm94::Demo demo(m);
    if (dump.empty()) {
        m.start([&] { demo.main(); });
        return window(m, scale, mute);
    }
    FILE* out = std::fopen((dump + "/frames.txt").c_str(), "w");
    if (!out) {
        std::fprintf(stderr, "cannot write %s/frames.txt\n", dump.c_str());
        return 1;
    }
    m.frame = [&](long n) {
        std::vector<uint8_t> px;
        int lines = 0;
        if (m.screen.graphics) m.picture(px, lines);
        std::fprintf(out, "%ld %08x %08x\n", n, crc32(px.data(), px.size()), crc32(m.screen.palette, 768));
        // Esc down in the middle of the frame before each frame listed, up three on
        if (keys.count(n + 1)) m.press(1);
        if (keys.count(n + 1 - 3)) m.press(0x81);
    };
    std::vector<float> pcm;
    if (!wav.empty()) m.pcm = &pcm;
    m.start([&] { demo.main(); });
    m.run(seconds);
    m.stop();
    if (!wav.empty()) writeWav(wav, pcm, asm94::Mixer::kRate);
    std::fclose(out);
    return 0;
}
