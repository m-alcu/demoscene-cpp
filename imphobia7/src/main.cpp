// imphobia7 - a C++17/SDL3 port of Imphobia Issue #7 (December 1993), the PC
// diskmag of the Belgian group Imphobia (code: The Wizard; graphics: P.L.;
// main editor: Darkness).
//
// Layout of the sources:
//   vga.h/.cpp        - the VGA as the mag used it (planes, latches, DAC,
//                       CRTC), and turning it into frames
//   mag.h/.cpp        - the reader, translated from IMPHOB7.EXE
//   modplayer.h/.cpp  - the module player for the background tunes
//   main.cpp          - SDL: the window, the frame clock, sound, keys, mouse
//
// The original started with configuration questions (sound card, port,
// IRQ, DMA, compatibility mode, printer); the port has none: it plays the
// music as the GUS version did (F1-F4 change the tune, F9 turns it off and
// on).
//
// Usage: imphobia7 [--data DIR] [--scale N]
//        imphobia7 --dump DIR --frames N [--keys F:SC,...] [--mouse F:X:Y:B;...]
//                 [--shots F,...]          (no window: frame CRCs and pictures)
// Keys: arrows, Enter/Space, Esc (back, and at the main menu: quit),
//       F to save the article as a .TXT file; the mouse works as in the mag.
#include <SDL3/SDL.h>

#include <array>
#include <atomic>
#include <condition_variable>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <memory>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

#include "mag.h"
#include "modplayer.h"
#include "vga.h"

namespace {

// Mode 12h: 25.175 MHz, 800 x 525 → 59.94 Hz.
constexpr double kFrame = 800.0 * 525.0 / 25175000.0;

struct Quit {};

std::vector<uint8_t> readFile(const std::string& path) {
    std::vector<uint8_t> d;
    size_t n = 0;
    void* p = SDL_LoadFile(path.c_str(), &n);
    if (p) {
        d.assign((uint8_t*)p, (uint8_t*)p + n);
        SDL_free(p);
    }
    return d;
}

std::string dataDir(const std::string& given) {
    std::vector<std::string> c;
    if (!given.empty()) c.push_back(given);
    if (const char* d = SDL_getenv("IMPHOBIA_DATA")) c.push_back(d);
    c.push_back("data");
    c.push_back("../data");
    if (const char* base = SDL_GetBasePath()) {
        c.push_back(std::string(base) + "data");
        c.push_back(std::string(base) + "../data");
    }
    for (auto& d : c) {
        SDL_PathInfo info;
        if (SDL_GetPathInfo((d + "/NFO7.DAT").c_str(), &info)) return d;
    }
    return "data";
}

// The program runs on its own thread; each waitFrame() hands a frame to the
// main thread and waits to be given the next one.
class Runner : public imp::Host {
public:
    Runner(const std::string& data) : data_(data) {}

    imp::Vga vga;
    std::unique_ptr<imp::Mag> mag;
    imp::ModPlayer music;
    std::mutex musicLock;
    bool musicOn = false;
    int volume = 0;

    void start() {
        thread_ = std::thread([this] {
            try {
                std::unique_lock<std::mutex> l(m_);
                cv_.wait(l, [&] { return progTurn_ || quit_; });
                if (quit_) return;
                l.unlock();
                mag->run();
            } catch (const Quit&) {
            } catch (const std::exception& e) {
                SDL_Log("imphobia7: %s", e.what());
            }
            std::lock_guard<std::mutex> g(m_);
            done_ = true;
            progTurn_ = false;
            cv_.notify_all();
        });
    }

    // Main thread: lets the program run up to its next frame. False when it
    // has finished.
    bool step() {
        std::unique_lock<std::mutex> l(m_);
        if (done_) return false;
        progTurn_ = true;
        cv_.notify_all();
        cv_.wait(l, [&] { return !progTurn_ || done_; });
        return !done_;
    }

    void stop() {
        {
            std::lock_guard<std::mutex> g(m_);
            quit_ = true;
            cv_.notify_all();
        }
        if (thread_.joinable()) thread_.join();
    }

    // --- Host ---
    void waitFrame() override {
        std::unique_lock<std::mutex> l(m_);
        progTurn_ = false;
        cv_.notify_all();
        cv_.wait(l, [&] { return progTurn_ || quit_; });
        if (quit_) throw Quit{};
    }
    void playModule(const std::string& name) override {
        // "data    .001" → DATA.001
        std::string f;
        for (char c : name)
            if (c != ' ') f += (char)SDL_toupper((unsigned char)c);
        std::lock_guard<std::mutex> g(musicLock);
        musicOn = music.loadMemory(readFile(data_ + "/" + f));
        if (!musicOn) SDL_Log("imphobia7: %s: %s", f.c_str(), music.error().c_str());
        music.setVolume(volume * 64 / 255);
    }
    void stopMusic() override {
        std::lock_guard<std::mutex> g(musicLock);
        musicOn = false;
    }
    void setMusicVolume(int v) override {
        std::lock_guard<std::mutex> g(musicLock);
        volume = v;
        music.setVolume(v * 64 / 255);
    }
    void saveFile(const std::string& name, const std::vector<uint8_t>& d) override {
        SDL_IOStream* io = SDL_IOFromFile(name.c_str(), "wb");
        if (!io) return;
        SDL_WriteIO(io, d.data(), d.size());
        SDL_CloseIO(io);
        SDL_Log("imphobia7: saved %s", name.c_str());
    }

    void renderAudio(std::vector<float>& out, int frames) {
        out.assign((size_t)frames * 2, 0.0f);
        std::lock_guard<std::mutex> g(musicLock);
        if (musicOn) music.render(out.data(), frames);
    }

private:
    std::string data_;
    std::thread thread_;
    std::mutex m_;
    std::condition_variable cv_;
    bool progTurn_ = false, done_ = false, quit_ = false;
};

uint8_t scancode(SDL_Scancode s) {
    static const std::map<SDL_Scancode, uint8_t> m = {
        {SDL_SCANCODE_ESCAPE, 0x01}, {SDL_SCANCODE_RETURN, 0x1C}, {SDL_SCANCODE_KP_ENTER, 0x1C},
        {SDL_SCANCODE_SPACE, 0x39},  {SDL_SCANCODE_E, 0x12},      {SDL_SCANCODE_P, 0x19},
        {SDL_SCANCODE_F, 0x21},      {SDL_SCANCODE_UP, 0x48},     {SDL_SCANCODE_DOWN, 0x50},
        {SDL_SCANCODE_LEFT, 0x4B},   {SDL_SCANCODE_RIGHT, 0x4D},  {SDL_SCANCODE_KP_8, 0x48},
        {SDL_SCANCODE_KP_2, 0x50},   {SDL_SCANCODE_KP_4, 0x4B},   {SDL_SCANCODE_KP_6, 0x4D},
        {SDL_SCANCODE_F1, 0x3B},     {SDL_SCANCODE_F2, 0x3C},     {SDL_SCANCODE_F3, 0x3D},
        {SDL_SCANCODE_F4, 0x3E},     {SDL_SCANCODE_F5, 0x3F},     {SDL_SCANCODE_F6, 0x40},
        {SDL_SCANCODE_F7, 0x41},     {SDL_SCANCODE_F8, 0x42},     {SDL_SCANCODE_F9, 0x43},
        {SDL_SCANCODE_F10, 0x44},
    };
    auto it = m.find(s);
    return it == m.end() ? 0 : it->second;
}

uint32_t crc32(const uint8_t* p, size_t n, uint32_t c = 0) {
    c = ~c;
    while (n--) {
        c ^= *p++;
        for (int k = 0; k < 8; k++) c = (c >> 1) ^ (0xEDB88320u & (0u - (c & 1)));
    }
    return ~c;
}

void fatal(const std::string& msg) {
    SDL_Log("%s", msg.c_str());
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "imphobia7", msg.c_str(), nullptr);
}

}  // namespace

int main(int argc, char** argv) {
    std::string data, dumpDir, keysArg, shotsArg, mouseArg;
    int scale = 2, dumpFrames = 0;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--data" && i + 1 < argc) data = argv[++i];
        else if (a == "--scale" && i + 1 < argc) scale = std::atoi(argv[++i]);
        else if (a == "--dump" && i + 1 < argc) dumpDir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) dumpFrames = std::atoi(argv[++i]);
        else if (a == "--keys" && i + 1 < argc) keysArg = argv[++i];
        else if (a == "--shots" && i + 1 < argc) shotsArg = argv[++i];
        else if (a == "--mouse" && i + 1 < argc) mouseArg = argv[++i];
        else {
            std::fprintf(stderr, "usage: imphobia7 [--data DIR] [--scale N]\n");
            return 1;
        }
    }
    const bool headless = !dumpDir.empty();
    if (!SDL_Init(headless ? 0 : (SDL_INIT_VIDEO | SDL_INIT_AUDIO))) {
        fatal(std::string("SDL_Init: ") + SDL_GetError());
        return 1;
    }
    data = dataDir(data);
    auto image = readFile(data + "/imphob7.img");
    auto dat = readFile(data + "/NFO7.DAT");
    if (image.size() != 59637 || dat.empty()) {
        fatal("imphobia7: data/imphob7.img and data/NFO7.DAT are needed (tools/extract_assets.py)");
        return 1;
    }

    Runner run(data);
    run.mag = std::make_unique<imp::Mag>(run.vga, run, std::move(image), std::move(dat));
    run.start();

    std::vector<uint8_t> rgb;
    if (headless) {
        // Frame by frame, no window: a line per frame with CRCs of the planes
        // and the DAC, and the full state at each frame in DIR/NNNNN.bin
        // when IMPHOBIA_DUMP_FULL is set. Keys: frame:scancode(hex).
        std::multimap<int, uint8_t> keys;
        for (size_t p = 0; p < keysArg.size();) {
            size_t c = keysArg.find(',', p);
            std::string item = keysArg.substr(p, c == std::string::npos ? std::string::npos : c - p);
            size_t colon = item.find(':');
            if (colon != std::string::npos)
                keys.insert({std::atoi(item.c_str()), (uint8_t)std::strtol(item.c_str() + colon + 1, nullptr, 16)});
            if (c == std::string::npos) break;
            p = c + 1;
        }
        // Mouse: frame:x:y:buttons;... in the driver's coordinates, set after
        // that frame (as the original's driver would be read in the next).
        std::multimap<int, std::array<int, 3>> mice;
        for (size_t p = 0; p < mouseArg.size();) {
            size_t c = mouseArg.find(';', p);
            std::string item = mouseArg.substr(p, c == std::string::npos ? std::string::npos : c - p);
            int f, x, y, b;
            if (std::sscanf(item.c_str(), "%d:%d:%d:%d", &f, &x, &y, &b) == 4) mice.insert({f, {x, y, b}});
            if (c == std::string::npos) break;
            p = c + 1;
        }
        const bool full = SDL_getenv("IMPHOBIA_DUMP_FULL") != nullptr;
        std::string listPath = dumpDir + "/frames.txt";
        FILE* list = std::fopen(listPath.c_str(), "w");
        if (!list) {
            fatal("cannot write " + listPath);
            return 1;
        }
        for (int f = 0; f < dumpFrames; f++) {
            auto range = keys.equal_range(f);
            for (auto it = range.first; it != range.second; ++it) run.mag->key(it->second);
            if (!run.step()) break;
            uint32_t pc = 0;
            for (auto& pl : run.vga.planes) pc = crc32(pl.data(), pl.size(), pc);
            const uint32_t dc = crc32(run.vga.dac, 768);
            std::fprintf(list, "%d %08x %08x %d\n", f, pc, dc, run.mag->raster() ? 1 : 0);
            if (full) {
                char name[64];
                std::snprintf(name, sizeof name, "/%05d.bin", f);
                if (FILE* o = std::fopen((dumpDir + name).c_str(), "wb")) {
                    for (auto& pl : run.vga.planes) std::fwrite(pl.data(), 1, pl.size(), o);
                    std::fwrite(run.vga.dac, 1, 768, o);
                    std::fwrite(run.vga.crtc, 1, 0x20, o);
                    std::fwrite(run.vga.ac, 1, 0x15, o);
                    std::fwrite(run.mag->codeSegment() + 0x2388, 1, 7, o);
                    std::fclose(o);
                }
            }
            if (("," + shotsArg + ",").find("," + std::to_string(f) + ",") != std::string::npos) {
                run.vga.render(rgb, run.mag->raster() ? run.mag->rasterWrites()
                                                      : std::vector<imp::Vga::LineWrite>{});
                SDL_Surface* s = SDL_CreateSurfaceFrom(run.vga.width(), run.vga.height(), SDL_PIXELFORMAT_RGB24,
                                                       rgb.data(), run.vga.width() * 3);
                char name[64];
                std::snprintf(name, sizeof name, "/shot_%05d.bmp", f);
                SDL_SaveBMP(s, (dumpDir + name).c_str());
                SDL_DestroySurface(s);
            }
            auto mr = mice.equal_range(f);
            for (auto it = mr.first; it != mr.second; ++it)
                run.mag->mouseDriver(it->second[0], it->second[1], it->second[2]);
            run.mag->endOfFrame();
        }
        std::fclose(list);
        run.stop();
        SDL_Quit();
        return 0;
    }

    SDL_Window* win = SDL_CreateWindow("Imphobia #7", 640 * scale, 480 * scale, SDL_WINDOW_RESIZABLE);
    SDL_Renderer* ren = win ? SDL_CreateRenderer(win, nullptr) : nullptr;
    if (!ren) {
        fatal(std::string("SDL: ") + SDL_GetError());
        run.stop();
        return 1;
    }
    SDL_SetRenderLogicalPresentation(ren, 640, 480, SDL_LOGICAL_PRESENTATION_LETTERBOX);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_RGB24, SDL_TEXTUREACCESS_STREAMING, 640, 480);
    SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);
    SDL_HideCursor();

    SDL_AudioSpec spec{SDL_AUDIO_F32, 2, imp::ModPlayer::kRate};
    SDL_AudioStream* audio = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr);
    if (audio) SDL_ResumeAudioStreamDevice(audio);
    std::vector<float> samples;
    double audioDue = 0.0;

    const Uint64 freq = SDL_GetPerformanceFrequency();
    Uint64 next = SDL_GetPerformanceCounter();
    float lastX = -1, lastY = -1;
    bool running = true;
    int texW = 0, texH = 0;
    while (running) {
        SDL_Event ev;
        while (SDL_PollEvent(&ev)) {
            if (ev.type == SDL_EVENT_QUIT) running = false;
            else if (ev.type == SDL_EVENT_KEY_DOWN || ev.type == SDL_EVENT_KEY_UP) {
                const uint8_t sc = scancode(ev.key.scancode);
                if (sc) run.mag->key(ev.type == SDL_EVENT_KEY_DOWN ? sc : (uint8_t)(sc | 0x80));
            }
        }
        {
            float wx, wy, x, y;
            const SDL_MouseButtonFlags b = SDL_GetMouseState(&wx, &wy);
            SDL_RenderCoordinatesFromWindow(ren, wx, wy, &x, &y);
            const bool moved = x != lastX || y != lastY;
            lastX = x, lastY = y;
            run.mag->mouse((int)x, (int)y,
                           ((b & SDL_BUTTON_LMASK) ? 1 : 0) | ((b & SDL_BUTTON_RMASK) ? 2 : 0), moved);
        }
        if (!running || !run.step()) break;

        run.vga.render(rgb, run.mag->raster() ? run.mag->rasterWrites() : std::vector<imp::Vga::LineWrite>{});
        const int w = run.vga.width(), h = run.vga.height();
        if (w != texW || h != texH) {
            SDL_DestroyTexture(tex);
            tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_RGB24, SDL_TEXTUREACCESS_STREAMING, w, h);
            SDL_SetTextureScaleMode(tex, SDL_SCALEMODE_NEAREST);
            texW = w, texH = h;   // whatever the mode, the picture fills the 4:3 screen
        }
        SDL_UpdateTexture(tex, nullptr, rgb.data(), w * 3);
        SDL_RenderClear(ren);
        SDL_RenderTexture(ren, tex, nullptr, nullptr);
        SDL_RenderPresent(ren);
        run.mag->endOfFrame();

        audioDue += imp::ModPlayer::kRate * kFrame;
        const int n = (int)audioDue;
        audioDue -= n;
        run.renderAudio(samples, n);
        if (audio) {
            // keep about 4 frames queued
            if (SDL_GetAudioStreamQueued(audio) < (int)(sizeof(float) * 2 * imp::ModPlayer::kRate * kFrame * 8))
                SDL_PutAudioStreamData(audio, samples.data(), (int)(samples.size() * sizeof(float)));
        }

        next += (Uint64)(kFrame * freq);
        const Uint64 now = SDL_GetPerformanceCounter();
        if (next > now) SDL_DelayPrecise((next - now) * 1000000000ull / freq);
        else next = now;
    }
    run.stop();
    if (audio) SDL_DestroyAudioStream(audio);
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
