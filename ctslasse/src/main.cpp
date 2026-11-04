// ctslasse - a C++17/SDL3 port of "Lasse Reinboeng", Cubic Team & $eeN's
// 64K intro (party version, December 1995).
//
// Usage: ctslasse [--data DIR] [--scale N] [--mute]
//        ctslasse --dump DIR --frames N [--keys F,...] [--wav FILE] [--gus FILE]
//            [--snap N FILE]
//            (no window: DIR/frames.txt, a line per frame: number, CRC-32 of
//            the picture as the CRTC reads it, CRC-32 of the DAC; Esc down at
//            the frames listed; the music to a WAV; the GUS register writes)
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
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
    if (const char* d = SDL_getenv("CTSLASSE_DATA")) c.push_back(d);
    c.push_back("data");
    c.push_back("../data");
    if (const char* base = SDL_GetBasePath()) {
        c.push_back(std::string(base) + "data");
        c.push_back(std::string(base) + "../data");
    }
    for (auto& d : c) {
        SDL_PathInfo info;
        if (SDL_GetPathInfo((d + "/ctslasse.img").c_str(), &info)) return d;
    }
    return "data";
}

int window(lasse::Machine& m, int scale, bool mute) {
    if (!SDL_Init(SDL_INIT_VIDEO | (mute ? 0 : SDL_INIT_AUDIO))) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    SDL_Window* win = SDL_CreateWindow("Lasse Reinboeng", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 320, 240, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_RGB24, SDL_TEXTUREACCESS_STREAMING, 320, 200);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);
    SDL_AudioStream* audio = nullptr;
    std::vector<float> pcm;
    if (!mute) {
        const SDL_AudioSpec spec{SDL_AUDIO_F32, 2, lasse::Machine::kRate};
        audio = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr);
        if (audio) SDL_ResumeAudioStreamDevice(audio), m.pcm = &pcm;
        else std::fprintf(stderr, "ctslasse: no audio (%s)\n", SDL_GetError());
    }
    // the frame shown, taken at the middle of each 70 Hz frame
    std::vector<uint8_t> shown(320 * 200 * 3, 0), px;
    bool graphics = false;
    m.frame = [&](long, uint16_t start) {
        graphics = m.vga.mode() == 0x13;
        if (!graphics) return;
        m.vga.picture(start, m.p(lasse::kVram), px);
        const uint8_t* dac = m.vga.dac();
        for (size_t i = 0; i < px.size() && i < 320 * 200; i++)
            for (int k = 0; k < 3; k++) {
                const uint8_t c = dac[px[i] * 3 + k] & 0x3F;
                shown[i * 3 + k] = (uint8_t)(c << 2 | c >> 4);
            }
    };
    const double fps = 70.0;
    const Uint64 freq = SDL_GetPerformanceFrequency(), t0 = SDL_GetPerformanceCounter();
    bool running = true;
    for (long frame = 0; running; frame++) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type == SDL_EVENT_KEY_DOWN && !e.key.repeat && e.key.scancode == SDL_SCANCODE_ESCAPE) m.press(1);
            if (e.type == SDL_EVENT_KEY_UP && e.key.scancode == SDL_SCANCODE_ESCAPE) m.press(0x81);
        }
        pcm.clear();
        if (!m.run((frame + 0.5) / fps + 1e-6)) break;
        if (audio) {
            SDL_PutAudioStreamData(audio, pcm.data(), (int)(pcm.size() * sizeof(float)));
            // the music paces the frames: at most three frames' worth queued
            const int ahead = (int)(3 * lasse::Machine::kRate / fps) * 2 * (int)sizeof(float);
            while (running && SDL_GetAudioStreamQueued(audio) > ahead) SDL_Delay(1);
        } else {
            const Uint64 due = t0 + (Uint64)(frame / fps * freq), now = SDL_GetPerformanceCounter();
            if (due > now) SDL_DelayNS((due - now) * 1000000000ull / freq);
        }
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
        SDL_RenderClear(ren);
        if (graphics) {
            SDL_UpdateTexture(tex, nullptr, shown.data(), 320 * 3);
            const SDL_FRect dst{0, 0, 320, 240};          // 320x200 at a 4:3 aspect
            SDL_RenderTexture(ren, tex, nullptr, &dst);
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
    std::string data, dump, gusFile, snapFile, wav;
    long frames = 0, snapAt = -1;
    int scale = 3;
    bool idle = false, mute = false;
    std::vector<long> keys;
    for (int i = 1; i < argc; i++) {
        const std::string a = argv[i];
        auto next = [&]() { return i + 1 < argc ? std::string(argv[++i]) : std::string(); };
        if (a == "--data") data = next();
        else if (a == "--dump") dump = next();
        else if (a == "--frames") frames = std::stol(next());
        else if (a == "--gus") gusFile = next();
        else if (a == "--idle") idle = true;
        else if (a == "--wav") wav = next();
        else if (a == "--scale") scale = std::max(1, std::atoi(next().c_str()));
        else if (a == "--mute") mute = true;
        else if (a == "--snap") snapAt = std::stol(next()), snapFile = next();
        else if (a == "--keys") {
            const std::string k = next();
            for (size_t p = 0; p < k.size();) {
                const size_t c = k.find(',', p);
                keys.push_back(std::stol(k.substr(p, c - p)));
                if (c == std::string::npos) break;
                p = c + 1;
            }
        }
        else {
            std::fprintf(stderr, "usage: ctslasse [--data DIR] [--scale N] [--mute]\n"
                                 "       ctslasse --dump DIR --frames N [--keys F,...] [--wav FILE] [--gus FILE]\n");
            return 1;
        }
    }
    data = dataDir(data);
    const std::vector<uint8_t> image = readFile(data + "/ctslasse.img");
    if (image.empty()) {
        std::fprintf(stderr, "no %s/ctslasse.img (tools/extract_assets.py)\n", data.c_str());
        return 1;
    }
    lasse::Machine m(image);
    lasse::Demo demo(m);
    if (dump.empty()) {
        m.start([&] { demo.main(); });
        return window(m, scale, mute);
    }
    std::vector<std::pair<double, uint8_t>> k;
    for (long f : keys) k.push_back({(f - 0.5) / 70.0, 1}), k.push_back({(f + 2.5) / 70.0, 0x81});
    m.keys(k);
    FILE* gus = gusFile.empty() ? nullptr : std::fopen(gusFile.c_str(), "w");
    if (gus) m.gus.log = [gus](double t, int v, int r, uint32_t val) { std::fprintf(gus, "%.17g %d %x %x\n", t, v, r, val); };
    FILE* out = std::fopen((dump + "/frames.txt").c_str(), "w");
    m.frame = [&](long n, uint16_t start) {
        const std::vector<uint8_t> px = m.vga.scanout(start, m.p(lasse::kVram));
        std::fprintf(out, "%ld %08x %08x\n", n, crc32(px.data(), px.size()), crc32(m.vga.dac(), 768));
    };
    demo.snapAt = snapAt;
    demo.idle = idle;
    demo.snap = [&]() {
        FILE* f = std::fopen(snapFile.c_str(), "wb");
        std::fwrite(m.mem.data(), 1, m.mem.size(), f);
        std::fclose(f);
    };
    std::vector<float> pcm;
    if (!wav.empty()) m.pcm = &pcm;
    m.start([&] { demo.main(); });
    m.run(frames / 70.0);
    m.stop();
    if (!wav.empty()) writeWav(wav, pcm, lasse::Machine::kRate);
    std::fclose(out);
    if (gus) std::fclose(gus);
    return 0;
}
