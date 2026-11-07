// projange - a C++17/SDL3 port of Project Angel, by Impact Studios (The
// Party IV, 1994; final release March 1995; music on the Gravis
// UltraSound).
//
// Usage: projange [--data DIR] [--scale N] [--mute]
//        projange --dump DIR --seconds S [--keys F,...] [--wav FILE] [--gus FILE]
//            (no window: DIR/frames.txt, a line per frame: number, time,
//            CRC-32 of the picture as the CRTC reads it, CRC-32 of the DAC;
//            Esc down at the frames listed; the music to a WAV; the GUS
//            register writes)
//
// DIR holds the demo's own files: ANGEL.EXE and DRIVERS.VGA.
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <set>
#include <string>
#include <vector>

#include "cpu.h"
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
    if (const char* d = SDL_getenv("PROJANGE_DATA")) c.push_back(d);
    c.push_back("data");
    c.push_back("../data");
    if (const char* base = SDL_GetBasePath()) {
        c.push_back(std::string(base) + "data");
        c.push_back(std::string(base) + "../data");
    }
    for (auto& d : c) {
        SDL_PathInfo info;
        if (SDL_GetPathInfo((d + "/ANGEL.EXE").c_str(), &info)) return d;
    }
    return "data";
}

int window(angel::Machine& m, int scale, bool mute) {
    if (!SDL_Init(SDL_INIT_VIDEO | (mute ? 0 : SDL_INIT_AUDIO))) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    SDL_Window* win = SDL_CreateWindow("Project Angel", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 640, 480, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_Texture* tex = nullptr;
    int tw = 0, th = 0;
    SDL_AudioStream* audio = nullptr;
    std::vector<float> pcm;
    int rate = 0;
    // the picture of the frame last taken
    std::vector<uint8_t> shown, px;
    int sw = 0, sh = 0;
    bool graphics = false;
    m.frame = [&](long, uint16_t start, uint8_t pan) {
        graphics = m.vga.mode() != 3;
        if (!graphics) return;
        m.vga.picture(start, pan, px, sw, sh);
        shown.resize((size_t)sw * sh * 3);
        const uint8_t* dac = m.vga.dac();
        for (size_t i = 0; i < (size_t)sw * sh; i++)
            for (int k = 0; k < 3; k++) {
                const uint8_t c = dac[px[i] * 3 + k] & 0x3F;
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
        if (!mute && (int)m.gus.rate() != rate) {
            rate = (int)m.gus.rate();
            if (audio) SDL_DestroyAudioStream(audio);
            const SDL_AudioSpec spec{SDL_AUDIO_F32, 2, rate};
            audio = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr);
            if (audio) SDL_ResumeAudioStreamDevice(audio), m.pcm = &pcm;
            else std::fprintf(stderr, "projange: no audio (%s)\n", SDL_GetError()), mute = true;
        }
        pcm.clear();
        if (!m.run(step / fps)) break;
        if (audio) {
            SDL_PutAudioStreamData(audio, pcm.data(), (int)(pcm.size() * sizeof(float)));
            const int ahead = (int)(3 * rate / fps) * 2 * (int)sizeof(float);
            while (running && SDL_GetAudioStreamQueued(audio) > ahead) SDL_Delay(1);
        } else {
            const Uint64 due = t0 + (Uint64)(step / fps * freq), now = SDL_GetPerformanceCounter();
            if (due > now) SDL_DelayNS((due - now) * 1000000000ull / freq);
        }
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
        SDL_RenderClear(ren);
        if (graphics && sw && sh) {
            if (sw != tw || sh != th) {
                if (tex) SDL_DestroyTexture(tex);
                tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_RGB24, SDL_TEXTUREACCESS_STREAMING, sw, sh);
                SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);
                tw = sw, th = sh;
            }
            SDL_UpdateTexture(tex, nullptr, shown.data(), sw * 3);
            const SDL_FRect dst{0, 0, 640, 480};
            SDL_RenderTexture(ren, tex, nullptr, &dst);
        }
        SDL_RenderPresent(ren);
    }
    if (audio) {
        m.pcm = nullptr;
        SDL_DestroyAudioStream(audio);
    }
    m.stop();
    if (tex) SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}

}  // namespace

int main(int argc, char** argv) {
    std::string data, dump, gusFile, wav, memFile;
    double memAt = -1;
    double seconds = 0;
    int scale = 2;
    bool mute = false;
    std::set<long> keys;
    for (int i = 1; i < argc; i++) {
        const std::string a = argv[i];
        auto next = [&]() { return i + 1 < argc ? std::string(argv[++i]) : std::string(); };
        if (a == "--data") data = next();
        else if (a == "--dump") dump = next();
        else if (a == "--seconds") seconds = std::stod(next());
        else if (a == "--gus") gusFile = next();
        else if (a == "--wav") wav = next();
        else if (a == "--scale") scale = std::max(1, std::atoi(next().c_str()));
        else if (a == "--mute") mute = true;
        else if (a == "--memdump") memAt = std::stod(next()), memFile = next();
        else if (a == "--keys") {
            const std::string k = next();
            for (size_t p = 0; p < k.size();) {
                const size_t c = k.find(',', p);
                keys.insert(std::stol(k.substr(p, c - p)));
                if (c == std::string::npos) break;
                p = c + 1;
            }
        } else {
            std::fprintf(stderr, "usage: projange [--data DIR] [--scale N] [--mute]\n"
                                 "       projange --dump DIR --seconds S [--keys F,...] [--wav FILE] [--gus FILE]\n");
            return 1;
        }
    }
    data = dataDir(data);
    std::vector<uint8_t> exe = readFile(data + "/ANGEL.EXE"), drv = readFile(data + "/DRIVERS.VGA");
    if (exe.size() != 3874636 || drv.size() != 7400) {
        std::fprintf(stderr, "projange: needs the demo's ANGEL.EXE (3874636 bytes) and DRIVERS.VGA (7400) in %s\n",
                     data.c_str());
        return 1;
    }
    angel::Machine m;
    angel::Demo demo(m, std::move(exe), std::move(drv));
    std::string error;
    auto program = [&] {
        try {
            demo.main();
        } catch (const angel::Quit&) {
            throw;
        } catch (const std::exception& e) {
            error = e.what();
            std::fprintf(stderr, "projange: t=%.6f: %s\n", m.now(), e.what());
        }
    };
    if (dump.empty()) {
        m.start(program);
        return window(m, scale, mute);
    }
    FILE* gus = gusFile.empty() ? nullptr : std::fopen(gusFile.c_str(), "w");
    if (gus) m.gus.log = [gus](double t, int v, int r, uint32_t val) { std::fprintf(gus, "%.17g %d %x %x\n", t, v, r, val); };
    FILE* out = std::fopen((dump + "/frames.txt").c_str(), "w");
    std::set<long> raw, ppm;
    if (const char* r = SDL_getenv("PROJANGE_PPM"))
        for (const char* p = r; *p;) {
            ppm.insert(std::atol(p));
            while (*p && *p != ',') p++;
            if (*p) p++;
        }
    if (const char* r = SDL_getenv("PROJANGE_RAW"))
        for (const char* p = r; *p;) {
            raw.insert(std::atol(p));
            while (*p && *p != ',') p++;
            if (*p) p++;
        }
    m.frame = [&](long n, uint16_t start, uint8_t pan) {
        const std::vector<uint8_t> px = m.vga.scanout(start, pan);
        std::fprintf(out, "%ld %.6f %08x %08x\n", n, m.now(), crc32(px.data(), px.size()), crc32(m.vga.dac(), 768));
        // PROJANGE_PPM=f1,...: those frames' pictures, as the window shows them (DIR/pic_NNNNN.ppm)
        if (ppm.count(n)) {
            std::vector<uint8_t> pic;
            int w, h;
            m.vga.picture(start, pan, pic, w, h);
            char name[64];
            std::snprintf(name, sizeof name, "/pic_%05ld.ppm", n);
            if (FILE* o = std::fopen((dump + name).c_str(), "wb")) {
                std::fprintf(o, "P6 %d %d 255\n", w, h);
                for (uint8_t i : pic)
                    for (int k = 0; k < 3; k++) {
                        const uint8_t c = m.vga.dac()[i * 3 + k] & 0x3F;
                        std::fputc(c << 2 | c >> 4, o);
                    }
                std::fclose(o);
            }
        }
        if (raw.count(n)) {
            char name[64];
            std::snprintf(name, sizeof name, "/raw_%05ld.bin", n);
            if (FILE* o = std::fopen((dump + name).c_str(), "wb")) {
                std::fwrite(px.data(), 1, px.size(), o);
                std::fwrite(m.vga.dac(), 1, 768, o);
                std::fclose(o);
            }
        }
        if (keys.count(n + 1)) m.press(1);
        if (keys.count(n + 1 - 3)) m.press(0x81);
    };
    std::vector<float> pcm;
    if (!wav.empty()) m.pcm = &pcm;
    m.start(program);
    if (memAt >= 0) {
        // (debugging: memory below 4 MB at that time, as the harness's snapshot)
        m.run(memAt);
        if (FILE* f = std::fopen(memFile.c_str(), "wb")) {
            std::fwrite(m.mem.data(), 1, 0x400000, f);
            std::fclose(f);
        }
    }
    m.run(seconds);
    m.stop();
    if (!wav.empty()) writeWav(wav, pcm, (int)m.gus.rate());
    std::fclose(out);
    if (gus) std::fclose(gus);
    return error.empty() ? 0 : 2;
}
