// ctslasse-pond - the pond of Lasse Reinbøng (Cubic Team & $eeN, 1995),
// the start of part 8: drops falling in water over a marble, in
// C++17 / SDL3.
//
// Usage: ctslasse-pond [--loop] [--256] [--res WxH] [--marble 256] [--scale N]
//            keys / mouse: click a drop where clicked, D a drop somewhere,
//                  L the endless pond / the intro looped, C 32-bit colour /
//                  the intro's 256 colours, M the marble at 256 / 512,
//                  G the grid and the marble in a corner,
//                  R restart, Space pause, Esc quit
//        ctslasse-pond --dump DIR [--frames N] [--start SECONDS] [--loop] [--256] [--res WxH]
//                      [--marble 256]
//            (no window: writes N frames, 70 per second, as DIR/fNNNN.ppm)
//
// Endless (the default): the intro's three drops, then more falling at
// random, every 1-2.7 s, with the intro's ring for each. --loop / L: the
// intro's own timeline, exact: the three drops, then from T 8 (5.5 s) the
// palette turning red and the plane's waves blending in, until T 12 (8.2 s).
// Shown in 32-bit colour (the default), at 1280x800 or --res, or as the
// intro has it, in 256 colours at 320x200. Either is shown at 4:3. The
// 32-bit picture uses the marble at 512x512 (--marble 256 / M: the intro's):
// the same marble, with one more octave of detail and without the steps of
// the intro's warp.
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <memory>
#include <random>
#include <string>
#include <vector>

#include "pond.h"

namespace {

using pond::Drop;

// The endless pond: its drops and when the next one falls
struct Water {
    std::vector<Drop> drops = pond::Pond::introDrops();
    std::mt19937 rng{1995};
    float next = 4.0f;      // T

    void reset() {
        drops = pond::Pond::introDrops();
        rng.seed(1995);
        next = 4.0f;
    }
    void drop(float x, float y, float t) { drops.push_back({x, y, t, false}); }
    void randomDrop(float t) {
        std::uniform_real_distribution<float> ux(4, 36), uy(3, 22);
        const float x = ux(rng);
        drop(x, uy(rng), t);
    }
    // at T: the random drops due, the finished ones gone
    void update(float t) {
        while (t >= next) {
            randomDrop(next);
            next += std::uniform_real_distribution<float>(1.5f, 4.0f)(rng);
        }
        drops.erase(std::remove_if(drops.begin(), drops.end(), [&](const Drop& d) { return pond::Pond::dropDone(d, t); }),
                    drops.end());
    }
};

double partT(double seconds) { return seconds * pond::kPit / pond::kUnit; }

// What is shown: 32-bit colour at RES, or the intro's 256 colours at 320x200
struct View {
    bool trueColor = true;
    int resW = 1280, resH = 800;
    int w() const { return trueColor ? resW : pond::W; }
    int h() const { return trueColor ? resH : pond::H; }
};

void draw(pond::Pond& p, Water& w, double seconds, bool loop, const View& v) {
    if (loop) {
        const double len = pond::kIntroEnd * pond::kUnit / pond::kPit;   // about 8.2 s
        p.frame((int32_t)std::floor(std::fmod(seconds, len) * pond::kPit));
    } else {
        const float t = (float)partT(seconds);
        w.update(t);
        if (v.trueColor) p.pondFrame(t, w.drops, v.w(), v.h());   // the water at each pixel
        else p.pondFrame(t, w.drops);
    }
}

void picture(const pond::Pond& p, const View& v, std::vector<uint32_t>& argb) {
    argb.resize((size_t)v.w() * v.h());
    if (v.trueColor) p.toTrueColor(argb.data(), v.w(), v.h());
    else p.toArgb(argb.data());
}

int dump(pond::Pond& p, Water& w, const std::string& dir, int frames, double start, bool loop, const View& v) {
    std::vector<uint32_t> argb;
    for (int f = 0; f < frames; f++) {
        draw(p, w, start + f / 70.0, loop, v);
        picture(p, v, argb);
        char path[1024];
        std::snprintf(path, sizeof path, "%s/f%04d.ppm", dir.c_str(), f);
        FILE* g = std::fopen(path, "wb");
        if (!g) {
            std::perror(path);
            return 1;
        }
        std::fprintf(g, "P6\n%d %d\n255\n", v.w(), v.h());
        for (uint32_t c : argb) {
            const uint8_t rgb[3] = {(uint8_t)(c >> 16), (uint8_t)(c >> 8), (uint8_t)c};
            std::fwrite(rgb, 1, 3, g);
        }
        std::fclose(g);
    }
    return 0;
}

// G: the grid and the marble, in the top left corner. The grid where it
// reads the marble: each point at its u, v, joined to its neighbours (the
// mesh the mapper interpolates in each 8x8 block), over the marble as the
// screen shows it at rest (each texel through the DAC), dimmed. At rest the
// grid is a square mesh 8 texels apart over 320x200 texels; the drops push
// it apart. u and v wrap at 256 texels (the marble is a tile): each point is
// placed from its neighbour by their difference, so the mesh shows whole,
// over the marble tiled as far as it reaches. The points are coloured by
// their light level: grey below 64 (shaded), white-blue above 65 (lit).
class Inspector {
public:
    bool on = false;
    void draw(SDL_Renderer* ren, const pond::Pond& p, bool big) {
        // the grid, unwrapped, in texels (of the 256 tile)
        constexpr int gw = pond::kGridW, gh = pond::kGridH, n = gw * gh;
        uint32_t g[n * 3];
        std::memcpy(g, p.grid(), sizeof g);
        float px[n], py[n];
        int level[n];
        auto delta = [](uint32_t a, uint32_t b) { return (float)(int32_t)(b - a) / 16777216.0f; };
        for (int i = 0; i < n; i++) {
            const int from = i % gw ? i - 1 : i - gw;
            if (from < 0) px[i] = (float)(int32_t)g[0] / 16777216.0f, py[i] = (float)(int32_t)g[1] / 16777216.0f;
            else px[i] = px[from] + delta(g[3 * from], g[3 * i]), py[i] = py[from] + delta(g[3 * from + 1], g[3 * i + 1]);
            level[i] = (int)(g[3 * i + 2] >> 24);
        }
        const float x0 = std::floor(*std::min_element(px, px + n)) - 4, y0 = std::floor(*std::min_element(py, py + n)) - 4;
        const float x1 = std::ceil(*std::max_element(px, px + n)) + 4, y1 = std::ceil(*std::max_element(py, py + n)) + 4;

        // the marble under it, tiled, through the DAC
        const int s = big ? 2 : 1, mask = big ? 511 : 255, shift = big ? 9 : 8;
        const int tw = (int)(x1 - x0) * s, th = (int)(y1 - y0) * s;
        if (!tex_ || tw != tw_ || th != th_) {
            if (tex_) SDL_DestroyTexture(tex_);
            tex_ = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, tw, th);
            SDL_SetTextureScaleMode(tex_, SDL_SCALEMODE_LINEAR);
            tw_ = tw, th_ = th;
        }
        const uint8_t* m = big ? p.texture512() : p.texture();
        const uint8_t* dac = p.dac();
        uint32_t lut[256];
        for (int i = 0; i < 256; i++) {
            auto c = [&](int k) { return (uint32_t)(dac[3 * i + k] & 0x3F) * 160 / 63; };   // dimmed
            lut[i] = 0xFF000000u | c(0) << 16 | c(1) << 8 | c(2);
        }
        pixels_.resize((size_t)tw * th);
        for (int y = 0; y < th; y++) {
            const uint8_t* row = m + ((((int)y0 * s + y) & mask) << shift);
            for (int x = 0; x < tw; x++) pixels_[(size_t)y * tw + x] = lut[row[((int)x0 * s + x) & mask]];
        }
        SDL_UpdateTexture(tex_, nullptr, pixels_.data(), tw * 4);

        // in window pixels, whatever the picture's logical size
        int lw, lh;
        SDL_RendererLogicalPresentation mode;
        SDL_GetRenderLogicalPresentation(ren, &lw, &lh, &mode);
        SDL_SetRenderLogicalPresentation(ren, 0, 0, SDL_LOGICAL_PRESENTATION_DISABLED);
        int ww, wh;
        SDL_GetCurrentRenderOutputSize(ren, &ww, &wh);
        // window pixels per texel: the panel at most 45% of the window across, 55% down
        const float k = std::min(ww * 0.45f / (x1 - x0), wh * 0.55f / (y1 - y0));
        const float ox = 8, oy = 8;
        const SDL_FRect panel = {ox, oy, (x1 - x0) * k, (y1 - y0) * k};
        SDL_SetRenderDrawBlendMode(ren, SDL_BLENDMODE_BLEND);
        const std::string label = "grid 41x26 on the marble " + std::to_string(big ? 512 : 256) + " (texels " +
                                  std::to_string((int)x0) + ".." + std::to_string((int)x1) + ", " +
                                  std::to_string((int)y0) + ".." + std::to_string((int)y1) + ")";
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 220);
        const float textW = (float)label.size() * SDL_DEBUG_TEXT_FONT_CHARACTER_SIZE;
        const SDL_FRect back = {ox - 3, oy - 3, std::max(panel.w, textW) + 6, panel.h + 18};
        SDL_RenderFillRect(ren, &back);
        SDL_RenderTexture(ren, tex_, nullptr, &panel);
        auto at = [&](int i, float& x, float& y) { x = ox + (px[i] - x0) * k, y = oy + (py[i] - y0) * k; };
        SDL_SetRenderDrawColor(ren, 255, 210, 40, 230);
        for (int y = 0; y < gh; y++)
            for (int x = 0; x < gw; x++) {
                const int i = y * gw + x;
                float ax, ay, bx, by;
                at(i, ax, ay);
                if (x + 1 < gw) at(i + 1, bx, by), SDL_RenderLine(ren, ax, ay, bx, by);
                if (y + 1 < gh) at(i + gw, bx, by), SDL_RenderLine(ren, ax, ay, bx, by);
            }
        const float d = std::clamp(k * 1.5f, 2.0f, 5.0f);
        for (int i = 0; i < n; i++) {
            const int l = level[i];
            const Uint8 c = (Uint8)std::clamp(l <= 64 ? 60 + l * 2 : 190 + (l - 64), 0, 255);
            SDL_SetRenderDrawColor(ren, c, c, l > 64 ? 255 : c, 255);
            float x, y;
            at(i, x, y);
            const SDL_FRect dot = {x - d / 2, y - d / 2, d, d};
            SDL_RenderFillRect(ren, &dot);
        }
        SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);
        SDL_RenderDebugText(ren, ox, oy + panel.h + 4, label.c_str());
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
        SDL_SetRenderLogicalPresentation(ren, lw, lh, mode);
    }
    // before the renderer goes
    void release() {
        if (tex_) SDL_DestroyTexture(tex_);
        tex_ = nullptr;
    }

private:
    SDL_Texture* tex_ = nullptr;
    int tw_ = 0, th_ = 0;
    std::vector<uint32_t> pixels_;
};

}  // namespace

int main(int argc, char** argv) {
    std::string dumpDir;
    int scale = 3, frames = 70;
    double start = 0;
    bool loop = false;
    int marble = 512;
    View view;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--dump" && i + 1 < argc) dumpDir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::atoi(argv[++i]);
        else if (a == "--start" && i + 1 < argc) start = std::max(0.0, std::atof(argv[++i]));
        else if (a == "--loop") loop = true;
        else if (a == "--256") view.trueColor = false;
        else if (a == "--res" && i + 1 < argc && std::sscanf(argv[i + 1], "%dx%d", &view.resW, &view.resH) == 2 &&
                 view.resW > 0 && view.resH > 0 && view.resW <= 7680 && view.resH <= 4800)
            i++;
        else if (a == "--marble" && i + 1 < argc && (std::atoi(argv[i + 1]) == 256 || std::atoi(argv[i + 1]) == 512))
            marble = std::atoi(argv[++i]);
        else {
            std::fprintf(stderr,
                         "usage: ctslasse-pond [--loop] [--256] [--res WxH] [--marble 256|512] [--scale N] | "
                         "--dump DIR [--frames N] [--start S] [--loop] [--256] [--res WxH] [--marble 256|512]\n");
            return 1;
        }
    }
    auto p = std::make_unique<pond::Pond>();
    p->setMarble(marble);
    Water water;
    if (!dumpDir.empty()) {
        // the random drops up to START, as a window would have had them
        if (!loop) water.update((float)partT(start));
        return dump(*p, water, dumpDir, frames, start, loop, view);
    }

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    // 320x200 shown at 4:3, as on a VGA monitor in mode 13h
    SDL_Window* win = SDL_CreateWindow("ctslasse-pond", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    auto setTitle = [&] {
        std::string title = loop ? "ctslasse-pond - the intro, looped" : "ctslasse-pond - endless (click: a drop)";
        title += view.trueColor ? " - 32-bit, " + std::to_string(view.resW) + "x" + std::to_string(view.resH) +
                                      ", marble " + std::to_string(p->marble())
                                : std::string(" - 256 colours");
        SDL_SetWindowTitle(win, title.c_str());
    };
    setTitle();
    SDL_Renderer* ren = SDL_CreateRenderer(win, nullptr);
    SDL_SetRenderVSync(ren, 1);
    // the picture's texture, and the view at 4:3 (W x H shown as W x 1.2 H)
    SDL_Texture* tex = nullptr;
    auto setView = [&] {
        if (tex) SDL_DestroyTexture(tex);
        tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, view.w(), view.h());
        // the 256 colours as square-cornered pixels, the 32-bit picture smooth
        SDL_SetTextureScaleMode(tex, view.trueColor ? SDL_SCALEMODE_LINEAR : SDL_SCALEMODE_NEAREST);
        SDL_SetRenderLogicalPresentation(ren, view.w(), (int)std::lround(view.h() * 1.2),
                                         SDL_LOGICAL_PRESENTATION_LETTERBOX);
    };
    setView();

    std::vector<uint32_t> argb;
    Inspector inspector;
    const Uint64 freq = SDL_GetPerformanceFrequency();
    Uint64 last = SDL_GetPerformanceCounter();
    double t = 0;
    bool running = true, paused = false;
    auto restart = [&] {
        t = 0;
        water.reset();
    };
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type == SDL_EVENT_MOUSE_BUTTON_DOWN && e.button.button == SDL_BUTTON_LEFT && !loop) {
                // the window's point on the view, then the grid's cells (40 across, 25 down)
                float x = e.button.x, y = e.button.y;
                SDL_RenderCoordinatesFromWindow(ren, x, y, &x, &y);
                const float vw = (float)view.w(), vh = std::round(view.h() * 1.2f);
                if (x >= 0 && x < vw && y >= 0 && y < vh) water.drop(x * 40 / vw, y * 25 / vh, (float)partT(t));
            }
            if (e.type != SDL_EVENT_KEY_DOWN || e.key.repeat) continue;
            switch (e.key.scancode) {
            case SDL_SCANCODE_ESCAPE: running = false; break;
            case SDL_SCANCODE_SPACE: paused = !paused; break;
            case SDL_SCANCODE_R: restart(); break;
            case SDL_SCANCODE_D:
                if (!loop) water.randomDrop((float)partT(t));
                break;
            case SDL_SCANCODE_C:
                view.trueColor = !view.trueColor;
                setView();
                setTitle();
                break;
            case SDL_SCANCODE_G: inspector.on = !inspector.on; break;
            case SDL_SCANCODE_M:
                p->setMarble(p->marble() == 512 ? 256 : 512);
                setTitle();
                break;
            case SDL_SCANCODE_L:
                loop = !loop;
                restart();
                setTitle();
                break;
            default: break;
            }
        }
        const Uint64 now = SDL_GetPerformanceCounter();
        if (!paused) t += (double)(now - last) / (double)freq;
        last = now;
        // endless: after a day the part's time is set back (the palette has long settled)
        if (!loop && t > 86400) {
            const float back = (float)partT(t - 60);
            for (Drop& d : water.drops) d.t -= back;
            water.next -= back;
            t = 60;
        }
        draw(*p, water, t, loop, view);
        picture(*p, view, argb);
        SDL_UpdateTexture(tex, nullptr, argb.data(), view.w() * 4);
        SDL_RenderClear(ren);
        SDL_RenderTexture(ren, tex, nullptr, nullptr);
        // the 256-colour picture is drawn from the intro's marble
        if (inspector.on) inspector.draw(ren, *p, view.trueColor && p->marble() == 512);
        SDL_RenderPresent(ren);
    }
    SDL_DestroyTexture(tex);
    inspector.release();
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
