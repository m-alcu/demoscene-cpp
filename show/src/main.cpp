// show - a C++17/SDL3 port of Show, by Majic 12 (Hammering '94, Budapest,
// April 1994; code Maxwood, Phantom and Little, music Chorus & Sid on
// Cascada's GUS player).
//
// Usage: show [--data DIR] [--scale N] [--mute]
//        show --dump DIR --seconds S [--wav FILE] [--gus FILE]
//            (no window: DIR/frames.txt, a line per frame: number, time,
//            CRC-32 of the picture as the CRTC reads it, of the DAC, and of
//            the VGA port writes since the frame before; the music to a
//            WAV; the GUS register writes)
//
// DIR holds the demo's own file, SHOW.EXE.
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

uint32_t crc32(const void* d, size_t n, uint32_t c = 0) {
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
    const uint8_t* p = (const uint8_t*)d;
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
    if (const char* d = SDL_getenv("SHOW_DATA")) c.push_back(d);
    c.push_back("data");
    c.push_back("../data");
    if (const char* base = SDL_GetBasePath()) {
        c.push_back(std::string(base) + "data");
        c.push_back(std::string(base) + "../data");
    }
    for (auto& d : c) {
        SDL_PathInfo info;
        if (SDL_GetPathInfo((d + "/SHOW.EXE").c_str(), &info)) return d;
    }
    return "data";
}

// The picture of a frame as it was displayed: the planes as the CRTC reads
// them, each line in the DAC's colours at the time it was displayed (the
// copper effects change the palette line by line).
class Screen {
public:
    explicit Screen(show::Machine& m) : m_(m) {
        std::memcpy(dac0_, m.vga.dac(), 768);
        m.vgaWrite = [this](double t, uint16_t p, uint8_t v) {
            if (p == 0x3C8) idx_ = v, phase_ = 0;
            else if (p == 0x3C9) {
                writes_.push_back({t, idx_, phase_, (uint8_t)(v & 0x3F)});
                if (++phase_ == 3) phase_ = 0, idx_ = (uint8_t)(idx_ + 1);
            }
            if (chain) chain(t, p, v);
        };
        m.retrace = [this] { take(); };
    }
    std::function<void(double, uint16_t, uint8_t)> chain;
    std::vector<uint8_t> rgb;
    int w = 0, h = 0;
    bool graphics = false;

private:
    struct DacWrite {
        double t;
        uint8_t idx, comp, v;
    };
    void take() {
        graphics = m_.vga.mode() != 3;
        if (graphics) {
            m_.vga.picture(m_.shownStart(), m_.shownPan(), px_, w, h);
            rgb.resize((size_t)w * h * 3);
            uint8_t dac[256][3];
            std::memcpy(dac, dac0_, 768);
            const int msl = m_.vga.rowLines();
            size_t k = 0;
            for (int y = 0; y < h; y++) {
                const double t = m_.lineTime(y * msl);
                for (; k < writes_.size() && writes_[k].t <= t; k++) dac[writes_[k].idx][writes_[k].comp] = writes_[k].v;
                const uint8_t* p = &px_[(size_t)y * w];
                uint8_t* o = &rgb[(size_t)y * w * 3];
                for (int x = 0; x < w; x++)
                    for (int c = 0; c < 3; c++) o[x * 3 + c] = (uint8_t)(dac[p[x]][c] << 2 | dac[p[x]][c] >> 4);
            }
        }
        writes_.clear();
        std::memcpy(dac0_, m_.vga.dac(), 768);
    }
    show::Machine& m_;
    std::vector<uint8_t> px_;
    std::vector<DacWrite> writes_;
    uint8_t dac0_[256][3];
    uint8_t idx_ = 0, phase_ = 0;
};

int window(show::Machine& m, Screen& screen, int scale, bool mute) {
    if (!SDL_Init(SDL_INIT_VIDEO | (mute ? 0 : SDL_INIT_AUDIO))) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    SDL_Window* win = SDL_CreateWindow("Show", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 640, 480, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_Texture* tex = nullptr;
    int tw = 0, th = 0;
    SDL_AudioStream* audio = nullptr;
    std::vector<float> pcm;
    int rate = 0;
    const double fps = 60.0;
    const Uint64 freq = SDL_GetPerformanceFrequency(), t0 = SDL_GetPerformanceCounter();
    bool running = true;
    for (long step = 1; running; step++) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type == SDL_EVENT_KEY_DOWN && e.key.scancode == SDL_SCANCODE_ESCAPE) running = false;
        }
        if (!mute && (int)m.gus.rate() != rate) {
            rate = (int)m.gus.rate();
            if (audio) SDL_DestroyAudioStream(audio);
            const SDL_AudioSpec spec{SDL_AUDIO_F32, 2, rate};
            audio = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr);
            if (audio) SDL_ResumeAudioStreamDevice(audio), m.pcm = &pcm;
            else std::fprintf(stderr, "show: no audio (%s)\n", SDL_GetError()), mute = true;
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
        if (screen.graphics && screen.w && screen.h) {
            if (screen.w != tw || screen.h != th) {
                if (tex) SDL_DestroyTexture(tex);
                tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_RGB24, SDL_TEXTUREACCESS_STREAMING, screen.w, screen.h);
                SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);
                tw = screen.w, th = screen.h;
            }
            SDL_UpdateTexture(tex, nullptr, screen.rgb.data(), screen.w * 3);
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

std::set<long> frameList(const char* env) {
    std::set<long> r;
    if (const char* e = SDL_getenv(env))
        for (const char* p = e; *p;) {
            r.insert(std::atol(p));
            while (*p && *p != ',') p++;
            if (*p) p++;
        }
    return r;
}

}  // namespace

int main(int argc, char** argv) {
    std::string data, dump, gusFile, wav;
    double seconds = 0;
    int scale = 2;
    bool mute = false;
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
        else {
            std::fprintf(stderr, "usage: show [--data DIR] [--scale N] [--mute]\n"
                                 "       show --dump DIR --seconds S [--wav FILE] [--gus FILE]\n");
            return 1;
        }
    }
    data = dataDir(data);
    std::vector<uint8_t> exe = readFile(data + "/SHOW.EXE");
    if (exe.size() != 1954074) {
        std::fprintf(stderr, "show: needs the demo's SHOW.EXE (1954074 bytes) in %s\n", data.c_str());
        return 1;
    }
    show::Machine m;
    show::Demo demo(m, std::move(exe));
    Screen screen(m);
    std::string error;
    auto program = [&] {
        try {
            demo.main();
        } catch (const show::Quit&) {
            throw;
        } catch (const std::exception& e) {
            error = e.what();
            std::fprintf(stderr, "show: t=%.6f: %s\n", m.now(), e.what());
        }
    };
    if (dump.empty()) {
        m.start(program);
        const int r = window(m, screen, scale, mute);
        // the end's text, as DOS would leave it on the screen
        if (m.ended() && !demo.text.empty()) std::fwrite(demo.text.data(), 1, demo.text.size(), stdout);
        return r;
    }
    if (FILE* t = std::fopen((dump + "/frames.txt").c_str(), "w")) std::fclose(t);
    else {
        std::fprintf(stderr, "show: cannot write to %s\n", dump.c_str());
        return 1;
    }
    FILE* gus = gusFile.empty() ? nullptr : std::fopen(gusFile.c_str(), "w");
    if (gus) m.gus.log = [gus](double t, int v, int r, uint32_t val) { std::fprintf(gus, "%.9f %d %x %x\n", t, v, r, val); };
    FILE* out = std::fopen((dump + "/frames.txt").c_str(), "w");
    uint32_t vcrc = 0;
    screen.chain = [&](double t, uint16_t p, uint8_t v) {
        char line[64];
        const int n = std::snprintf(line, sizeof line, "%.9f %x %x\n", t, p, v);
        vcrc = crc32(line, (size_t)n, vcrc);
    };
    // SHOW_PPM=f1,...: those frames' pictures as the window shows them (DIR/pic_NNNNN.ppm)
    const std::set<long> ppm = frameList("SHOW_PPM");
    long last = -1;
    m.frame = [&](long n, uint16_t start, uint8_t pan) {
        const std::vector<uint8_t> px = m.vga.scanout(start, pan);
        std::fprintf(out, "%ld %.6f %08x %08x %08x\n", n, m.now(), crc32(px.data(), px.size()), crc32(m.vga.dac(), 768),
                     vcrc);
        vcrc = 0;
        last = n;
    };
    // (the picture of frame n is taken at the next retrace)
    auto shot = m.retrace;
    m.retrace = [&] {
        shot();
        if (ppm.count(last) && screen.graphics) {
            char name[64];
            std::snprintf(name, sizeof name, "/pic_%05ld.ppm", last);
            if (FILE* o = std::fopen((dump + name).c_str(), "wb")) {
                std::fprintf(o, "P6 %d %d 255\n", screen.w, screen.h);
                std::fwrite(screen.rgb.data(), 1, screen.rgb.size(), o);
                std::fclose(o);
            }
        }
    };
    std::vector<float> pcm;
    if (!wav.empty()) m.pcm = &pcm;
    m.start(program);
    m.run(seconds);
    m.stop();
    if (!wav.empty()) writeWav(wav, pcm, (int)m.gus.rate());
    std::fclose(out);
    if (gus) std::fclose(gus);
    return error.empty() ? 0 : 2;
}
