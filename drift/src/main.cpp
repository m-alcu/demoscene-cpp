// drift - a C++17/SDL3 port of DRIFT, Wild Light's 64K intro, winner at
// Assembly '95 (code Vulture, Asmu, Odd Monk, Preacher; music Nobody).
//
// Usage: drift [--data DIR] [--scale N] [--mute]
//        drift --dump DIR --frames N [--keys F,...] [--wav FILE] [--gus FILE]
//            (no window: DIR/frames.txt, a line per frame: number, CRC-32
//            of the picture's plane bytes as the CRTC reads them, CRC-32 of
//            the DAC; Esc down at the frames listed; the music to a WAV;
//            the GUS register writes to a text file)
#include <SDL3/SDL.h>

#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <map>
#include <memory>
#include <mutex>
#include <string>
#include <vector>

#include "demo.h"
#include "machine.h"

namespace {

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

std::string dataDir(const std::string& given) {
    std::vector<std::string> c;
    if (!given.empty()) c.push_back(given);
    if (const char* d = SDL_getenv("DRIFT_DATA")) c.push_back(d);
    c.push_back("data");
    c.push_back("../data");
    if (const char* base = SDL_GetBasePath()) {
        c.push_back(std::string(base) + "data");
        c.push_back(std::string(base) + "../data");
    }
    for (auto& d : c) {
        SDL_PathInfo info;
        if (SDL_GetPathInfo((d + "/drift.img").c_str(), &info)) return d;
    }
    return "data";
}

}  // namespace

int main(int argc, char** argv) {
    std::string data, dumpDir, keysArg, wav, gusLog;
    int scale = 2, frames = 0;
    bool mute = false;
    for (int i = 1; i < argc; i++) {
        const std::string a = argv[i];
        if (a == "--data" && i + 1 < argc) data = argv[++i];
        else if (a == "--scale" && i + 1 < argc) scale = std::atoi(argv[++i]);
        else if (a == "--dump" && i + 1 < argc) dumpDir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::atoi(argv[++i]);
        else if (a == "--keys" && i + 1 < argc) keysArg = argv[++i];
        else if (a == "--wav" && i + 1 < argc) wav = argv[++i];
        else if (a == "--gus" && i + 1 < argc) gusLog = argv[++i];
        else if (a == "--mute") mute = true;
        else {
            std::fprintf(stderr, "usage: drift [--data DIR] [--scale N] [--mute]\n"
                                 "       drift --dump DIR --frames N [--keys F,...] [--wav FILE] [--gus FILE]\n");
            return 1;
        }
    }
    const bool headless = !dumpDir.empty();
    if (!SDL_Init(headless ? 0 : (SDL_INIT_VIDEO | SDL_INIT_AUDIO))) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    data = dataDir(data);
    const auto image = readFile(data + "/drift.img");
    if (image.size() < 0x24000) {
        std::fprintf(stderr, "drift: %s/drift.img is needed (tools/extract_assets.py)\n", data.c_str());
        return 1;
    }
    drift::Machine m(image);
    drift::Demo demo(m);
    std::vector<float> pcm;
    if (headless ? !wav.empty() : !mute) m.pcm = &pcm;
    // --gus FILE: every GUS register write, as the harness logs them
    FILE* gusOut = gusLog.empty() ? nullptr : std::fopen(gusLog.c_str(), "w");
    if (gusOut)
        m.gus.log = [gusOut](double t, int voice, int reg, uint32_t v) {
            std::fprintf(gusOut, "%.6f %d %x %x\n", t, voice, reg, v);
        };
    m.setClock(drift::kStart);
    m.start([&] { demo.run(); });

    if (headless) {
        std::map<long, bool> escAt;
        for (size_t p = 0; p < keysArg.size();) {
            size_t c = keysArg.find(',', p);
            escAt[std::atol(keysArg.substr(p, c == std::string::npos ? std::string::npos : c - p).c_str())] = true;
            if (c == std::string::npos) break;
            p = c + 1;
        }
        FILE* list = std::fopen((dumpDir + "/frames.txt").c_str(), "w");
        if (!list) {
            std::fprintf(stderr, "cannot write %s/frames.txt\n", dumpDir.c_str());
            return 1;
        }
        // DRIFT_RAW=f1,f2,...: those frames' plane bytes and DAC to DIR/raw_NNNNN.bin
        std::map<long, bool> raw;
        if (const char* r = SDL_getenv("DRIFT_RAW"))
            for (const char* p = r; *p;) {
                raw[std::atol(p)] = true;
                while (*p && *p != ',') p++;
                if (*p) p++;
            }
        m.frame = [&](long n, uint16_t start) {
            std::vector<uint8_t> px;
            const int mode = m.vga.mode();
            if (mode == 0x12 || mode == 0x13) px = m.vga.scanout(start);
            std::fprintf(list, "%ld %08x %08x\n", n, crc32(px.data(), px.size()), crc32(m.vga.dac(), 768));
            if (raw.count(n)) {
                char name[64];
                std::snprintf(name, sizeof name, "/raw_%05ld.bin", n);
                if (FILE* o = std::fopen((dumpDir + name).c_str(), "wb")) {
                    std::fwrite(px.data(), 1, px.size(), o);
                    std::fwrite(m.vga.dac(), 1, 768, o);
                    std::fclose(o);
                }
            }
            // Esc is pressed half a frame before the frames listed, held 3 frames
            for (auto& [f, on] : escAt) {
                if (n + 1 == f) m.key = 1;
                if (n + 1 == f + 3) m.key = 0x81;
            }
        };
        for (long f = 0; f < frames; f++)
            if (!m.run((f + 0.5) / 70.0 + 1e-6)) break;
        std::fclose(list);
        if (gusOut) std::fclose(gusOut);
        if (!wav.empty()) writeWav(wav, pcm, drift::Machine::kRate);
        m.stop();
        SDL_Quit();
        return 0;
    }

    SDL_Window* win = SDL_CreateWindow("DRIFT", 320 * scale * 2, 240 * scale * 2 / 2 * 2, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 640, 480, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_Texture* tex320 = SDL_CreateTexture(ren, SDL_PIXELFORMAT_RGB24, SDL_TEXTUREACCESS_STREAMING, 320, 200);
    SDL_Texture* tex640 = SDL_CreateTexture(ren, SDL_PIXELFORMAT_RGB24, SDL_TEXTUREACCESS_STREAMING, 640, 480);
    SDL_SetTextureScaleMode(tex320, SDL_SCALEMODE_NEAREST);
    SDL_SetTextureScaleMode(tex640, SDL_SCALEMODE_NEAREST);
    SDL_SetRenderVSync(ren, 0);
    SDL_AudioStream* audio = nullptr;
    if (!mute) {
        const SDL_AudioSpec spec{SDL_AUDIO_F32, 2, drift::Machine::kRate};
        audio = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr);
        if (audio) SDL_ResumeAudioStreamDevice(audio);
        else std::fprintf(stderr, "drift: no audio (%s)\n", SDL_GetError());
    }
    // the frame shown: kept at the middle of each frame
    std::vector<uint8_t> shown, rgb;
    int sw = 0, sh = 0;
    bool text = true;
    m.frame = [&](long, uint16_t start) {
        const int mode = m.vga.mode();
        text = mode != 0x12 && mode != 0x13;
        if (text) return;
        std::vector<uint8_t> px;
        m.vga.picture(start, px, sw, sh);
        const uint8_t* dac = m.vga.dac();
        shown.resize(px.size() * 3);
        for (size_t i = 0; i < px.size(); i++)
            for (int k = 0; k < 3; k++) {
                const uint8_t c = dac[px[i] * 3 + k];
                shown[i * 3 + k] = (uint8_t)(c << 2 | c >> 4);
            }
    };
    const double fps = 70.0;
    const Uint64 freq = SDL_GetPerformanceFrequency();
    const Uint64 t0 = SDL_GetPerformanceCounter();
    long frame = (long)std::ceil(drift::kStart * fps);
    bool running = true;
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type == SDL_EVENT_KEY_DOWN && e.key.scancode == SDL_SCANCODE_ESCAPE) m.key = 1;
            if (e.type == SDL_EVENT_KEY_UP && e.key.scancode == SDL_SCANCODE_ESCAPE) m.key = 0x81;
        }
        frame++;
        pcm.clear();
        if (!m.run((frame + 0.5) / fps + 1e-6)) break;
        if (audio) {
            SDL_PutAudioStreamData(audio, pcm.data(), (int)(pcm.size() * sizeof(float)));
            // the music paces the frames: no more than three frames' worth queued
            const int ahead = (int)(3 * drift::Machine::kRate / fps) * 2 * (int)sizeof(float);
            while (running && SDL_GetAudioStreamQueued(audio) > ahead) SDL_Delay(1);
        } else {
            const Uint64 due = t0 + (Uint64)((frame - drift::kStart * fps) / fps * freq);
            const Uint64 now = SDL_GetPerformanceCounter();
            if (due > now) SDL_DelayNS((due - now) * 1000000000ull / freq);
        }
        SDL_RenderClear(ren);
        if (!text && !shown.empty()) {
            SDL_Texture* tex = sw == 640 ? tex640 : tex320;
            SDL_UpdateTexture(tex, nullptr, shown.data(), sw * 3);
            const SDL_FRect dst{0, 0, 640, 480};
            SDL_RenderTexture(ren, tex, nullptr, &dst);
        }
        SDL_RenderPresent(ren);
    }
    if (audio) SDL_DestroyAudioStream(audio);
    m.stop();
    SDL_DestroyTexture(tex320);
    SDL_DestroyTexture(tex640);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
