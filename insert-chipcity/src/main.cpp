// insert-chipcity - the "chip city" scene of Insert No Coins (Razor 1911, 2010, Win32 64k),
// music orders 4-7, ported to C++17 / SDL3 / OpenGL 1.x. Visuals only (no music).
//
// Usage: insert-chipcity [--scale N] [--data DIR]
//            keys: Space pause, R restart, F fullscreen, Esc quit
//        insert-chipcity --dump DIR [--fps F] [--frames N] [--start SECONDS]
//            (hidden window: writes 800x500 frames DIR/fNNNN.ppm at F per second of the scene)
//
// The scene renders at the original 800x500 into a framebuffer object, which is scaled to the
// window. It loops: 15.36 s, then the start flash again.
#include <SDL3/SDL.h>
#include <GL/gl.h>
#include <GL/glext.h>

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

#include "chipcity.h"
#include "gl_real.h"

namespace {

using namespace icc;

PFNGLGENFRAMEBUFFERSPROC pGenFramebuffers;
PFNGLBINDFRAMEBUFFERPROC pBindFramebuffer;
PFNGLGENRENDERBUFFERSPROC pGenRenderbuffers;
PFNGLBINDRENDERBUFFERPROC pBindRenderbuffer;
PFNGLRENDERBUFFERSTORAGEPROC pRenderbufferStorage;
PFNGLFRAMEBUFFERRENDERBUFFERPROC pFramebufferRenderbuffer;
PFNGLCHECKFRAMEBUFFERSTATUSPROC pCheckFramebufferStatus;
PFNGLBLITFRAMEBUFFERPROC pBlitFramebuffer;

template <typename T>
bool load(T& p, const char* name) {
    p = reinterpret_cast<T>(SDL_GL_GetProcAddress(name));
    if (!p) std::fprintf(stderr, "missing GL function %s\n", name);
    return p != nullptr;
}

bool make_fbo(GLuint& fbo) {
    if (!load(pGenFramebuffers, "glGenFramebuffers") || !load(pBindFramebuffer, "glBindFramebuffer") ||
        !load(pGenRenderbuffers, "glGenRenderbuffers") || !load(pBindRenderbuffer, "glBindRenderbuffer") ||
        !load(pRenderbufferStorage, "glRenderbufferStorage") ||
        !load(pFramebufferRenderbuffer, "glFramebufferRenderbuffer") ||
        !load(pCheckFramebufferStatus, "glCheckFramebufferStatus") ||
        !load(pBlitFramebuffer, "glBlitFramebuffer"))
        return false;
    GLuint rb[2];
    pGenRenderbuffers(2, rb);
    pBindRenderbuffer(GL_RENDERBUFFER, rb[0]);
    pRenderbufferStorage(GL_RENDERBUFFER, GL_RGBA8, W, H);
    pBindRenderbuffer(GL_RENDERBUFFER, rb[1]);
    pRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH_COMPONENT24, W, H);
    pGenFramebuffers(1, &fbo);
    pBindFramebuffer(GL_FRAMEBUFFER, fbo);
    pFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_RENDERBUFFER, rb[0]);
    pFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, rb[1]);
    if (pCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
        std::fprintf(stderr, "framebuffer incomplete\n");
        return false;
    }
    return true;
}

std::string find_data(const std::string& given) {
    std::vector<std::string> c;
    if (!given.empty()) c.push_back(given);
    c.push_back("data");
    if (const char* base = SDL_GetBasePath()) {
        c.push_back(std::string(base) + "data");
        c.push_back(std::string(base) + "../data");
    }
    for (const auto& d : c) {
        SDL_PathInfo info;
        if (SDL_GetPathInfo((d + "/atlas.png").c_str(), &info)) return d;
    }
    return "data";
}

bool load_atlas(const std::string& dir, std::vector<uint8_t>& rgb) {
    SDL_Surface* s = SDL_LoadPNG((dir + "/atlas.png").c_str());
    if (!s) {
        std::fprintf(stderr, "%s/atlas.png: %s\n", dir.c_str(), SDL_GetError());
        return false;
    }
    SDL_Surface* c = SDL_ConvertSurface(s, SDL_PIXELFORMAT_RGB24);
    SDL_DestroySurface(s);
    if (!c || c->w != 256 || c->h != 256) return false;
    rgb.resize(256 * 256 * 3);
    for (int y = 0; y < 256; y++)
        std::copy_n((const uint8_t*)c->pixels + y * c->pitch, 256 * 3, rgb.data() + y * 256 * 3);
    SDL_DestroySurface(c);
    return true;
}

// The scene's timeline: music time 15.36 s (order 4) to 30.72 s (order 8). The original's
// clock t counts from program start and the XM starts at t = 3 s.
class Timeline {
public:
    explicit Timeline(ChipCity& cc) : cc_(cc) {}
    void restart() { tau_ = 0; started_ = swung_ = false; }
    // Draw the frame at scene time tau (seconds); handles the music-row events and looping.
    void frame(GlSink& g, double tau) {
        const double len = kSceneEnd - kSceneStart;
        if (tau >= len) tau -= len * (int)(tau / len);
        if (tau < tau_) started_ = swung_ = false;  // looped
        tau_ = tau;
        const float b = phase((float)(kMusicStart + kSceneStart + tau));
        if (!started_) {
            cc_.start(g, b);
            started_ = true;
        }
        if (!swung_ && tau >= kSwingStart - kSceneStart) {
            cc_.swing(b);
            swung_ = true;
        }
        cc_.frame(g, b);
    }

private:
    ChipCity& cc_;
    double tau_ = 0;
    bool started_ = false, swung_ = false;
};

void blit_to_window(SDL_Window* win, GLuint fbo) {
    int ww, wh;
    SDL_GetWindowSizeInPixels(win, &ww, &wh);
    const double s = std::min((double)ww / W, (double)wh / H);
    const int dw = (int)(W * s), dh = (int)(H * s);
    const int dx = (ww - dw) / 2, dy = (wh - dh) / 2;
    pBindFramebuffer(GL_DRAW_FRAMEBUFFER, 0);
    glViewport(0, 0, ww, wh);
    glDisable(GL_SCISSOR_TEST);
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    pBindFramebuffer(GL_READ_FRAMEBUFFER, fbo);
    const bool integer = s == (int)s;
    pBlitFramebuffer(0, 0, W, H, dx, dy, dx + dw, dy + dh, GL_COLOR_BUFFER_BIT,
                     integer ? GL_NEAREST : GL_LINEAR);
    pBindFramebuffer(GL_FRAMEBUFFER, fbo);
}

int dump(GLuint fbo, Timeline& tl, GlSink& g, const std::string& dir, double fps, int frames, double start) {
    std::vector<uint8_t> px(W * H * 3);
    for (int f = 0; f < frames; f++) {
        pBindFramebuffer(GL_FRAMEBUFFER, fbo);
        tl.frame(g, start + f / fps);
        glFinish();
        glPixelStorei(GL_PACK_ALIGNMENT, 1);
        glReadPixels(0, 0, W, H, GL_RGB, GL_UNSIGNED_BYTE, px.data());
        char p[1024];
        std::snprintf(p, sizeof p, "%s/f%04d.ppm", dir.c_str(), f);
        FILE* o = std::fopen(p, "wb");
        if (!o) { std::perror(p); return 1; }
        std::fprintf(o, "P6\n%d %d\n255\n", W, H);
        for (int y = H - 1; y >= 0; y--) std::fwrite(px.data() + y * W * 3, 1, W * 3, o);
        std::fclose(o);
    }
    return 0;
}

}  // namespace

int main(int argc, char** argv) {
    std::string data, dump_dir;
    int scale = 1, frames = 768;
    double fps = 50, start = 0;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--data" && i + 1 < argc) data = argv[++i];
        else if (a == "--dump" && i + 1 < argc) dump_dir = argv[++i];
        else if (a == "--fps" && i + 1 < argc) fps = std::atof(argv[++i]);
        else if (a == "--frames" && i + 1 < argc) frames = std::atoi(argv[++i]);
        else if (a == "--start" && i + 1 < argc) start = std::atof(argv[++i]);
        else {
            std::fprintf(stderr, "usage: insert-chipcity [--scale N] [--data DIR] | "
                                 "--dump DIR [--fps F] [--frames N] [--start S]\n");
            return 1;
        }
    }
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    std::vector<uint8_t> atlas;
    if (!load_atlas(find_data(data), atlas)) return 1;

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
    SDL_WindowFlags flags = SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE | SDL_WINDOW_HIGH_PIXEL_DENSITY;
    if (!dump_dir.empty()) flags |= SDL_WINDOW_HIDDEN;
    SDL_Window* win = SDL_CreateWindow("Insert No Coins - chip city", W * scale, H * scale, flags);
    SDL_GLContext ctx = win ? SDL_GL_CreateContext(win) : nullptr;
    if (!ctx) {
        std::fprintf(stderr, "window/GL context: %s\n", SDL_GetError());
        return 1;
    }
    SDL_GL_SetSwapInterval(1);
    GLuint fbo = 0;
    if (!make_fbo(fbo)) return 1;

    GlReal gl;
    ChipCity cc;
    cc.init(gl, atlas.data());
    Timeline tl(cc);

    if (!dump_dir.empty()) {
        const int r = dump(fbo, tl, gl, dump_dir, fps, frames, start);
        SDL_GL_DestroyContext(ctx);
        SDL_DestroyWindow(win);
        SDL_Quit();
        return r;
    }

    bool run = true, paused = false;
    double tau = 0;
    Uint64 last = SDL_GetPerformanceCounter();
    const double freq = (double)SDL_GetPerformanceFrequency();
    while (run) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) run = false;
            else if (e.type == SDL_EVENT_KEY_DOWN) {
                switch (e.key.key) {
                case SDLK_ESCAPE: run = false; break;
                case SDLK_SPACE: paused = !paused; break;
                case SDLK_R: tau = 0; tl.restart(); break;
                case SDLK_F:
                    SDL_SetWindowFullscreen(win, !(SDL_GetWindowFlags(win) & SDL_WINDOW_FULLSCREEN));
                    break;
                default: break;
                }
            }
        }
        const Uint64 now = SDL_GetPerformanceCounter();
        if (!paused) tau += (now - last) / freq;
        last = now;
        const double len = kSceneEnd - kSceneStart;
        if (tau >= len) tau -= len;
        pBindFramebuffer(GL_FRAMEBUFFER, fbo);
        tl.frame(gl, tau);
        blit_to_window(win, fbo);
        SDL_GL_SwapWindow(win);
    }
    SDL_GL_DestroyContext(ctx);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
