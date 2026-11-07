// journey - a C++17/SDL3 port of the Journey music disks (Journey I and
// Journey II, music by Purple Motion of Future Crew, December 1993): one
// program, Future Crew's MusicDiscPlayer V1.0 (MDP.EXE, with Sami
// Tammilehto's STMIK and its Gravis UltraSound driver), for both disks.
//
// Usage: journey [--disk 1|2 | --data DIR] [--scale N] [--mute]
//        journey [--disk 1|2 | --data DIR] --dump DIR --seconds S [--keys FILE] [--wav FILE] [--gus FILE]
//            (no window: DIR/frames.txt, a line per frame: number, time,
//            CRC-32 of the picture as the CRTC reads it, of the DAC, of the
//            VGA port writes since the frame before, and of the text page;
//            FILE of keys: "time scancode" a line, hex scan codes, as the
//            analysis's captures give them)
//
// The disk's directory holds MDP.EXE, MDP.MDI and the modules, as released.
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <set>
#include <sstream>
#include <string>
#include <vector>

#include "cpu.h"
#include "demo.h"
#include "machine.h"

namespace {

const uint8_t kFont[256 * 16] = {
#include "font8x16.inc"
};

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

bool isFile(const std::string& p) {
    SDL_PathInfo info;
    return SDL_GetPathInfo(p.c_str(), &info) && info.type == SDL_PATHTYPE_FILE;
}

// The disk's directory: DIR as given, or for --disk N the first of
// JOURNEY<N> / journey<N> (and the same under data/) in $JOURNEY_DATA, the
// working directory, its parent and next to the executable
std::string dataDir(const std::string& given, int disk) {
    if (!given.empty()) return given;
    std::vector<std::string> roots;
    if (const char* d = SDL_getenv("JOURNEY_DATA")) roots.push_back(d);
    roots.push_back(".");
    roots.push_back("..");
    if (const char* base = SDL_GetBasePath()) {
        roots.push_back(std::string(base));
        roots.push_back(std::string(base) + "..");
    }
    for (auto& r : roots)
        for (const char* sub : {"", "data/"})
            for (const char* name : {"JOURNEY", "journey", "Journey"}) {
                const std::string d = r + "/" + sub + name + std::to_string(disk);
                if (isFile(d + "/MDP.EXE") || isFile(d + "/mdp.exe")) return d;
            }
    return "JOURNEY" + std::to_string(disk);
}

// SDL's scan codes to the PC's (set 1)
uint8_t pcScan(SDL_Scancode s) {
    switch (s) {
    case SDL_SCANCODE_ESCAPE: return 0x01;
    case SDL_SCANCODE_RETURN: case SDL_SCANCODE_KP_ENTER: return 0x1C;
    case SDL_SCANCODE_SPACE: return 0x39;
    case SDL_SCANCODE_BACKSPACE: return 0x0E;
    case SDL_SCANCODE_TAB: return 0x0F;
    case SDL_SCANCODE_UP: case SDL_SCANCODE_KP_8: return 0x48;
    case SDL_SCANCODE_DOWN: case SDL_SCANCODE_KP_2: return 0x50;
    case SDL_SCANCODE_LEFT: case SDL_SCANCODE_KP_4: return 0x4B;
    case SDL_SCANCODE_RIGHT: case SDL_SCANCODE_KP_6: return 0x4D;
    case SDL_SCANCODE_PAGEUP: case SDL_SCANCODE_KP_9: return 0x49;
    case SDL_SCANCODE_PAGEDOWN: case SDL_SCANCODE_KP_3: return 0x51;
    case SDL_SCANCODE_HOME: case SDL_SCANCODE_KP_7: return 0x47;
    case SDL_SCANCODE_END: case SDL_SCANCODE_KP_1: return 0x4F;
    case SDL_SCANCODE_LSHIFT: return 0x2A;
    case SDL_SCANCODE_RSHIFT: return 0x36;
    case SDL_SCANCODE_LCTRL: case SDL_SCANCODE_RCTRL: return 0x1D;
    case SDL_SCANCODE_LALT: case SDL_SCANCODE_RALT: return 0x38;
    case SDL_SCANCODE_MINUS: return 0x0C;
    case SDL_SCANCODE_EQUALS: return 0x0D;
    case SDL_SCANCODE_LEFTBRACKET: return 0x1A;
    case SDL_SCANCODE_RIGHTBRACKET: return 0x1B;
    case SDL_SCANCODE_SEMICOLON: return 0x27;
    case SDL_SCANCODE_APOSTROPHE: return 0x28;
    case SDL_SCANCODE_GRAVE: return 0x29;
    case SDL_SCANCODE_BACKSLASH: return 0x2B;
    case SDL_SCANCODE_COMMA: return 0x33;
    case SDL_SCANCODE_PERIOD: return 0x34;
    case SDL_SCANCODE_SLASH: return 0x35;
    default: break;
    }
    if (s >= SDL_SCANCODE_F1 && s <= SDL_SCANCODE_F10) return (uint8_t)(0x3B + (s - SDL_SCANCODE_F1));
    if (s >= SDL_SCANCODE_1 && s <= SDL_SCANCODE_0) return (uint8_t)(0x02 + (s - SDL_SCANCODE_1));
    static const uint8_t letters[26] = {0x1E, 0x30, 0x2E, 0x20, 0x12, 0x21, 0x22, 0x23, 0x17, 0x24, 0x25, 0x26, 0x32,
                                        0x31, 0x18, 0x19, 0x10, 0x13, 0x1F, 0x14, 0x16, 0x2F, 0x11, 0x2D, 0x15, 0x2C};
    if (s >= SDL_SCANCODE_A && s <= SDL_SCANCODE_Z) return letters[s - SDL_SCANCODE_A];
    return 0;
}

// The picture of a frame as it was displayed: the planes as the CRTC reads
// them (in text mode, the text page through the font), each line in the
// DAC's colours at the time it was displayed.
class Screen {
public:
    explicit Screen(journey::Machine& m) : m_(m) {
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

private:
    struct DacWrite {
        double t;
        uint8_t idx, comp, v;
    };
    void take() {
        if (m_.vga.mode() == 3) text();
        else graphics();
        writes_.clear();
        std::memcpy(dac0_, m_.vga.dac(), 768);
    }
    void text() {
        // 80 x 25 characters of 9 x 16 dots (the ninth column blank, or
        // the eighth repeated for the line-drawing characters)
        w = 720, h = 400;
        rgb.assign((size_t)w * h * 3, 0);
        const uint8_t* dac = m_.vga.dac();
        for (int r = 0; r < 25; r++)
            for (int col = 0; col < 80; col++) {
                const uint8_t ch = m_.mem[0xB8000 + (r * 80 + col) * 2], at = m_.mem[0xB8000 + (r * 80 + col) * 2 + 1];
                const uint8_t fg = m_.vga.attrPalette(at & 15), bg = m_.vga.attrPalette(at >> 4 & 7);
                for (int y = 0; y < 16; y++) {
                    const uint8_t bits = kFont[ch * 16 + y];
                    uint8_t* o = &rgb[((size_t)(r * 16 + y) * w + col * 9) * 3];
                    for (int x = 0; x < 9; x++) {
                        const bool on = x < 8 ? (bits >> (7 - x) & 1) : (ch >= 0xC0 && ch <= 0xDF && (bits & 1));
                        const uint8_t c = on ? fg : bg;
                        for (int k = 0; k < 3; k++) o[x * 3 + k] = (uint8_t)(dac[c * 3 + k] << 2 | dac[c * 3 + k] >> 4);
                    }
                }
            }
    }
    void graphics() {
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
    journey::Machine& m_;
    std::vector<uint8_t> px_;
    std::vector<DacWrite> writes_;
    uint8_t dac0_[256][3];
    uint8_t idx_ = 0, phase_ = 0;
};

int window(journey::Machine& m, Screen& screen, int scale, bool mute, const char* title) {
    if (!SDL_Init(SDL_INIT_VIDEO | (mute ? 0 : SDL_INIT_AUDIO))) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    SDL_Window* win = SDL_CreateWindow(title, 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderLogicalPresentation(ren, 640, 480, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_Texture* tex = nullptr;
    int tw = 0, th = 0;
    SDL_AudioStream* audio = nullptr;
    std::vector<float> pcm;
    int rate = 0;
    const double fps = 60.0;
    const Uint64 freq = SDL_GetPerformanceFrequency();
    Uint64 t0 = SDL_GetPerformanceCounter();
    long base = 0;
    bool running = true;
    for (long step = 1; running; step++) {
        // keys: to the machine at its current time (it is stopped between
        // run() calls); a key held repeats as the keyboard's typematic would
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type == SDL_EVENT_KEY_DOWN || e.type == SDL_EVENT_KEY_UP) {
                const uint8_t s = pcScan(e.key.scancode);
                if (s) m.press(e.type == SDL_EVENT_KEY_DOWN ? s : (uint8_t)(s | 0x80));
            }
        }
        if (!mute && (int)m.gus.rate() != rate) {
            rate = (int)m.gus.rate();
            if (audio) SDL_DestroyAudioStream(audio);
            const SDL_AudioSpec spec{SDL_AUDIO_F32, 2, rate};
            audio = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr);
            if (audio) SDL_ResumeAudioStreamDevice(audio), m.pcm = &pcm;
            else std::fprintf(stderr, "journey: no audio (%s)\n", SDL_GetError()), mute = true;
        }
        pcm.clear();
        const Uint64 before = SDL_GetPerformanceCounter();
        if (!m.run(step / fps)) break;
        // (loading a module takes the program no time; if the host took
        // long, the clock starts again from here)
        if ((double)(SDL_GetPerformanceCounter() - before) / freq > 0.25) t0 = SDL_GetPerformanceCounter(), base = step;
        if (audio) {
            SDL_PutAudioStreamData(audio, pcm.data(), (int)(pcm.size() * sizeof(float)));
            const int ahead = (int)(3 * rate / fps) * 2 * (int)sizeof(float);
            while (running && SDL_GetAudioStreamQueued(audio) > ahead) SDL_Delay(1);
        } else {
            const Uint64 due = t0 + (Uint64)((step - base) / fps * freq), now = SDL_GetPerformanceCounter();
            if (due > now) SDL_DelayNS((due - now) * 1000000000ull / freq);
        }
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
        SDL_RenderClear(ren);
        if (screen.w && screen.h) {
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
    std::string data, dump, gusFile, wav, keysFile;
    double seconds = 0;
    int scale = 2, disk = 1;
    bool mute = false;
    for (int i = 1; i < argc; i++) {
        const std::string a = argv[i];
        auto next = [&]() { return i + 1 < argc ? std::string(argv[++i]) : std::string(); };
        if (a == "--data") data = next();
        else if (a == "--disk") disk = std::atoi(next().c_str());
        else if (a == "1" || a == "2") disk = a[0] - '0';
        else if (a == "--dump") dump = next();
        else if (a == "--seconds") seconds = std::stod(next());
        else if (a == "--keys") keysFile = next();
        else if (a == "--gus") gusFile = next();
        else if (a == "--wav") wav = next();
        else if (a == "--scale") scale = std::max(1, std::atoi(next().c_str()));
        else if (a == "--mute") mute = true;
        else {
            std::fprintf(stderr, "usage: journey [--disk 1|2 | --data DIR] [--scale N] [--mute]\n"
                                 "       journey [--disk 1|2 | --data DIR] --dump DIR --seconds S [--keys FILE] "
                                 "[--wav FILE] [--gus FILE]\n");
            return 1;
        }
    }
    data = dataDir(data, disk);
    std::vector<uint8_t> packed = readFile(data + "/MDP.EXE");
    if (packed.empty()) packed = readFile(data + "/mdp.exe");
    std::vector<uint8_t> exe = journey::unlzexe(packed);
    if (packed.size() != 36078 || exe.empty()) {
        std::fprintf(stderr, "journey: needs the music disk's MDP.EXE (36078 bytes) and its files in %s\n", data.c_str());
        return 1;
    }
    journey::Machine m;
    journey::Demo demo(m, std::move(exe), data);
    Screen screen(m);
    std::string error;
    auto program = [&] {
        try {
            demo.main();
        } catch (const journey::Quit&) {
            throw;
        } catch (const std::exception& e) {
            error = e.what();
            std::fprintf(stderr, "journey: t=%.6f: %s\n", m.now(), e.what());
        }
    };
    if (dump.empty()) {
        m.start(program);
        const int r = window(m, screen, scale, mute, "Journey");
        // what MDP leaves on the text screen when it ends (F10, an error)
        if (m.ended() && demo.exitCode >= 0) {
            const std::string t = demo.textPage();
            std::fwrite(t.data(), 1, t.size(), stdout);
            return r ? r : demo.exitCode;
        }
        return r;
    }
    if (!keysFile.empty()) {
        std::ifstream kf(keysFile);
        std::vector<std::pair<double, uint8_t>> keys;
        std::string line;
        while (std::getline(kf, line)) {
            std::istringstream ls(line);
            double t;
            std::string s;
            if (ls >> t >> s) keys.push_back({t, (uint8_t)std::stoi(s, nullptr, 16)});
        }
        m.keys(keys);
    }
    FILE* out = std::fopen((dump + "/frames.txt").c_str(), "w");
    if (!out) {
        std::fprintf(stderr, "journey: cannot write to %s\n", dump.c_str());
        return 1;
    }
    FILE* gus = gusFile.empty() ? nullptr : std::fopen(gusFile.c_str(), "w");
    if (gus) m.gus.log = [gus](double t, int v, int r, uint32_t val) { std::fprintf(gus, "%.9f %d %x %x\n", t, v, r, val); };
    uint32_t vcrc = 0;
    screen.chain = [&](double t, uint16_t p, uint8_t v) {
        char line[64];
        const int n = std::snprintf(line, sizeof line, "%.9f %x %x\n", t, p, v);
        vcrc = crc32(line, (size_t)n, vcrc);
    };
    // JOURNEY_PPM=f1,...: those frames' pictures as the window shows them (DIR/pic_NNNNN.ppm)
    const std::set<long> ppm = frameList("JOURNEY_PPM");
    long last = -1;
    m.frame = [&](long n, uint16_t start, uint8_t pan) {
        const std::vector<uint8_t> px = m.vga.scanout(start, pan);
        std::fprintf(out, "%ld %.6f %08x %08x %08x %08x\n", n, m.now(), crc32(px.data(), px.size()),
                     crc32(m.vga.dac(), 768), vcrc, crc32(&m.mem[0xB8000], 4000));
        vcrc = 0;
        last = n;
    };
    auto shot = m.retrace;
    m.retrace = [&] {
        shot();
        if (ppm.count(last) && screen.w) {
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
    const bool ended = m.ended();
    m.stop();
    if (!wav.empty()) writeWav(wav, pcm, (int)m.gus.rate());
    std::fclose(out);
    if (gus) std::fclose(gus);
    if (ended) std::printf("exit %d at %.9f\n%s", demo.exitCode, m.now(), demo.textPage().c_str());
    return error.empty() ? 0 : 2;
}
