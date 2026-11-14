// piscina - the pond of Lasse Reinbøng (Cubic Team & $eeN, 1995), part 8,
// in a swimming pool: drops falling in the water over a tiled bottom, small
// waves always running, and the sun's light gathered on the bottom by them
// (the caustics), in C++17 / SDL3.
//
// Usage: piscina [--256] [--res WxH] [--tiles 256] [--ripples S] [--no-caustics] [--scale N]
//            keys / mouse: click a drop where clicked, D a drop somewhere,
//                  W the small waves' strength (0, 0.5, 1, 1.5),
//                  K the caustics on / off,
//                  C 32-bit colour / 256 colours,
//                  M the tiles at 256 / 512,
//                  G the grid, the light table, the palette and the caustics, in the corners,
//                  R restart, Space pause, Esc quit
//        piscina --dump DIR [--frames N] [--start SECONDS] [--256] [--res WxH] [--tiles 256] [--ripples S]
//            [--no-caustics]
//            (no window: writes N frames, 70 per second, as DIR/fNNNN.ppm)
//
// The pool: the intro's three drops, then more falling at random, every
// 1-2.7 s, or where clicked, with the intro's ring for each. Shown in 32-bit
// colour (the default), at 1280x800 or --res, or in 256 colours at 320x200.
// Either is shown at 4:3.
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

#include "pool.h"

namespace {

using piscina::Drop;

// The pool: its drops and when the next one falls
struct Water {
    std::vector<Drop> drops = piscina::Pool::introDrops();
    std::mt19937 rng{1995};
    float next = 4.0f;      // T

    void reset() {
        drops = piscina::Pool::introDrops();
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
        drops.erase(std::remove_if(drops.begin(), drops.end(), [&](const Drop& d) { return piscina::Pool::dropDone(d, t); }),
                    drops.end());
    }
};

double partT(double seconds) { return seconds * piscina::kPit / piscina::kUnit; }

// What is shown: 32-bit colour at RES, or 256 colours at 320x200
struct View {
    bool trueColor = true;
    int resW = 1280, resH = 800;
    int w() const { return trueColor ? resW : piscina::W; }
    int h() const { return trueColor ? resH : piscina::H; }
};

void draw(piscina::Pool& p, Water& w, double seconds, const View& v) {
    const float t = (float)partT(seconds);
    w.update(t);
    if (v.trueColor) p.pondFrame(t, w.drops, v.w(), v.h());   // the water at each pixel
    else p.pondFrame(t, w.drops);
}

void picture(const piscina::Pool& p, const View& v, std::vector<uint32_t>& argb) {
    argb.resize((size_t)v.w() * v.h());
    if (v.trueColor) p.toTrueColor(argb.data(), v.w(), v.h());
    else p.toArgb(argb.data());
}

int dump(piscina::Pool& p, Water& w, const std::string& dir, int frames, double start, const View& v) {
    std::vector<uint32_t> argb;
    for (int f = 0; f < frames; f++) {
        draw(p, w, start + f / 70.0, v);
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

// G: the grid and the tiles, in the top left corner. The grid where it
// reads the tiles: each point at its u, v, joined to its neighbours (the
// mesh the mapper interpolates in each 8x8 block), over the tiles as the
// screen shows them at rest (each texel through the DAC), dimmed. At rest the
// grid is a square mesh 8 texels apart over 320x200 texels; the drops and
// the waves push it about. u and v wrap at 256 texels (the bottom repeats
// every 256): each point is placed from its neighbour by their difference,
// so the mesh shows whole, over the bottom repeated as far as it reaches. The points are coloured by
// their light level: grey below 64 (shaded), white-blue above 65 (lit).
//
// And the light table, in the top right corner: its rows S = level - 65,
// 0-64 (down), by 256 texels (across), each entry through the DAC: the
// colour a texel J takes at step S. Row 0 is the bottom as it is (the water
// at rest), the rows below take it towards the top of the palette (all of
// it at 64). The bars at the right count the grid's points at each step
// (what the frame uses).
class Inspector {
public:
    bool on = false;
    void draw(SDL_Renderer* ren, const piscina::Pool& p, bool big) {
        // the grid, unwrapped, in texels (of the 256 tile)
        constexpr int gw = piscina::kGridW, gh = piscina::kGridH, n = gw * gh;
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

        // the tiles under it, tiled, through the DAC
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
            auto c = [&](int k) { return (uint32_t)dac[3 * i + k] * 160 / 63; };   // dimmed
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
        const std::string label = "grid 41x26 on the tiles " + std::to_string(big ? 512 : 256) + " (texels " +
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
        lightTable(ren, p, level, ww, wh);
        palette(ren, p, ww, wh);
        caustics(ren, p, ww, wh);
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
        SDL_SetRenderLogicalPresentation(ren, lw, lh, mode);
    }
    // before the renderer goes
    void release() {
        if (tex_) SDL_DestroyTexture(tex_);
        if (light_) SDL_DestroyTexture(light_);
        if (caustics_) SDL_DestroyTexture(caustics_);
        tex_ = light_ = caustics_ = nullptr;
    }

private:
    // the light table's panel, in the top right corner of a WW x WH window
    void lightTable(SDL_Renderer* ren, const piscina::Pool& p, const int* level, int ww, int wh) {
        constexpr int rows = piscina::kRows;
        if (!light_) {
            light_ = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, 256, rows);
            SDL_SetTextureScaleMode(light_, SDL_SCALEMODE_NEAREST);
        }
        const uint8_t* dac = p.dac();
        const uint8_t* t = p.lightTable();
        uint32_t px[256 * rows];
        for (int i = 0; i < 256 * rows; i++) {
            auto c = [&](int k) { return (uint32_t)dac[3 * t[i] + k] * 255 / 63; };
            px[i] = 0xFF000000u | c(0) << 16 | c(1) << 8 | c(2);
        }
        SDL_UpdateTexture(light_, nullptr, px, 256 * 4);
        // the table, the bars beside it (a quarter of its width)
        const float k = std::max(0.5f, std::floor(std::min(ww * 0.35f / 320, wh * 0.55f / rows) * 4) / 4);
        const float tw = 256 * k, th = rows * k, bars = 64 * k;
        const float ox = ww - 8 - tw - bars - 4, oy = 8;
        const std::string label = "light table: step 0-64 (level - 65) down, texel across";
        const float textW = (float)label.size() * SDL_DEBUG_TEXT_FONT_CHARACTER_SIZE;
        const float right = ww - 5.0f, left = std::min(ox - 3, right - textW - 6);
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 220);
        const SDL_FRect back = {left, oy - 3, right - left, th + 18};
        SDL_RenderFillRect(ren, &back);
        const SDL_FRect panel = {ox, oy, tw, th};
        SDL_RenderTexture(ren, light_, nullptr, &panel);
        // the grid's points per step
        int count[rows] = {};
        constexpr int n = piscina::kGridW * piscina::kGridH;
        for (int i = 0; i < n; i++) count[std::clamp(level[i] - piscina::kHighlight, 0, rows - 1)]++;
        const int most = *std::max_element(count, count + rows);
        SDL_SetRenderDrawColor(ren, 255, 255, 255, 220);
        for (int l = 0; l < rows; l++)
            if (count[l]) {
                // a square root, so a few points still show next to the many at rest
                const float len = std::max(1.0f, bars * std::sqrt((float)count[l] / most));
                const SDL_FRect bar = {ox + tw + 4, oy + l * k, len, std::max(1.0f, k)};
                SDL_RenderFillRect(ren, &bar);
            }
        SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);
        SDL_RenderDebugText(ren, left + 3, oy + th + 4, label.c_str());
    }

    // the DAC's panel, in the bottom left corner: its 256 entries as a strip
    // (index across), and above it their red, green and blue (0-63) as
    // curves. A ramp from dark to light is what lets the light table move an
    // index to brighten or dull a texel. Ticks mark 0, 64, 128, 192 and 255.
    void palette(SDL_Renderer* ren, const piscina::Pool& p, int ww, int wh) {
        const uint8_t* dac = p.dac();
        const float k = std::max(1.0f, std::floor(std::min(ww * 0.45f / 256, wh * 0.4f / 100) * 4) / 4);
        const float pw = 256 * k, ch = 63 * k * 0.6f, sh = 16 * k;
        const float ox = 8, oy = wh - 8 - 14 - sh - 4 - ch;
        const std::string label = "palette (DAC): index 0-255 across, R G B 0-63 above";
        const float textW = (float)label.size() * SDL_DEBUG_TEXT_FONT_CHARACTER_SIZE;
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 220);
        const SDL_FRect back = {ox - 3, oy - 3, std::max(pw, textW) + 6, ch + 4 + sh + 18};
        SDL_RenderFillRect(ren, &back);
        // the curves, on a faint frame
        SDL_SetRenderDrawColor(ren, 80, 80, 80, 200);
        const SDL_FRect frame = {ox, oy, pw, ch};
        SDL_RenderRect(ren, &frame);
        const Uint8 col[3][3] = {{255, 80, 80}, {80, 255, 80}, {100, 140, 255}};
        for (int c = 0; c < 3; c++) {
            SDL_FPoint pts[256];
            for (int i = 0; i < 256; i++)
                pts[i] = {ox + (i + 0.5f) * k, oy + ch - dac[3 * i + c] * ch / 63};
            SDL_SetRenderDrawColor(ren, col[c][0], col[c][1], col[c][2], 230);
            SDL_RenderLines(ren, pts, 256);
        }
        // the strip
        const float sy = oy + ch + 4;
        for (int i = 0; i < 256; i++) {
            auto c = [&](int j) { return (Uint8)(dac[3 * i + j] * 255 / 63); };
            SDL_SetRenderDrawColor(ren, c(0), c(1), c(2), 255);
            const SDL_FRect r = {ox + i * k, sy, k, sh};
            SDL_RenderFillRect(ren, &r);
        }
        SDL_SetRenderDrawColor(ren, 255, 210, 40, 230);
        for (int i : {0, 64, 128, 192, 255}) {
            const float x = ox + (i + 0.5f) * k;
            SDL_RenderLine(ren, x, sy + sh, x, sy + sh + 3);
        }
        SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);
        SDL_RenderDebugText(ren, ox, sy + sh + 5, label.c_str());
    }

    // The caustics' panel, in the bottom right corner: the light on the
    // bottom (the screen's 320x200 texels of it), 1 at rest as mid grey,
    // twice that and more towards white, less towards black; a yellow frame
    // where the screen is. Under no waves and no drops it is flat grey.
    void caustics(SDL_Renderer* ren, const piscina::Pool& p, int ww, int wh) {
        using C = piscina::Caustics;
        const C& c = p.causticMap();
        if (!caustics_) {
            caustics_ = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, C::kCW, C::kCH);
            SDL_SetTextureScaleMode(caustics_, SDL_SCALEMODE_LINEAR);
        }
        std::vector<uint32_t> px((size_t)C::kCW * C::kCH);
        for (size_t i = 0; i < px.size(); i++) {
            const float e = c.on ? c.map[i] : 1.0f;
            const uint32_t g = (uint32_t)std::lround(255 * (1 - std::exp(-0.7f * e)));   // 1: 128
            px[i] = 0xFF000000u | g << 16 | g << 8 | g;
        }
        SDL_UpdateTexture(caustics_, nullptr, px.data(), C::kCW * 4);
        const float k = std::max(0.5f, std::min(ww * 0.4f / C::kCW, wh * 0.4f / C::kCH));
        const float pw = C::kCW * k, ph = C::kCH * k, ox = ww - 8 - pw, oy = wh - 8 - 14 - ph;
        const std::string label = c.on ? "caustics: the light on the bottom (1 = grey)" : "caustics: off";
        const float textW = (float)label.size() * SDL_DEBUG_TEXT_FONT_CHARACTER_SIZE;
        const float left = std::min(ox - 3, ww - 5 - textW - 6);
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 220);
        const SDL_FRect back = {left, oy - 3, ww - 5 - left, ph + 18};
        SDL_RenderFillRect(ren, &back);
        const SDL_FRect panel = {ox, oy, pw, ph};
        SDL_RenderTexture(ren, caustics_, nullptr, &panel);
        SDL_SetRenderDrawColor(ren, 255, 210, 40, 200);
        const SDL_FRect screen = {ox + (0 - C::kCX) / C::kCell * k, oy + (0 - C::kCY) / C::kCell * k,
                                  piscina::W / C::kCell * k, piscina::H / C::kCell * k};
        SDL_RenderRect(ren, &screen);
        SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);
        SDL_RenderDebugText(ren, left + 3, oy + ph + 4, label.c_str());
    }

    SDL_Texture* tex_ = nullptr;
    SDL_Texture* light_ = nullptr;
    SDL_Texture* caustics_ = nullptr;
    int tw_ = 0, th_ = 0;
    std::vector<uint32_t> pixels_;
};

}  // namespace

int main(int argc, char** argv) {
    std::string dumpDir;
    int scale = 3, frames = 70;
    double start = 0;
    int tiles = 512;
    float ripples = 1.0f;
    bool caustics = true;
    View view;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--dump" && i + 1 < argc) dumpDir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::atoi(argv[++i]);
        else if (a == "--start" && i + 1 < argc) start = std::max(0.0, std::atof(argv[++i]));
        else if (a == "--256") view.trueColor = false;
        else if (a == "--res" && i + 1 < argc && std::sscanf(argv[i + 1], "%dx%d", &view.resW, &view.resH) == 2 &&
                 view.resW > 0 && view.resH > 0 && view.resW <= 7680 && view.resH <= 4800)
            i++;
        else if (a == "--tiles" && i + 1 < argc && (std::atoi(argv[i + 1]) == 256 || std::atoi(argv[i + 1]) == 512))
            tiles = std::atoi(argv[++i]);
        else if (a == "--ripples" && i + 1 < argc) ripples = (float)std::max(0.0, std::atof(argv[++i]));
        else if (a == "--no-caustics") caustics = false;
        else {
            std::fprintf(stderr,
                         "usage: piscina [--256] [--res WxH] [--tiles 256|512] [--ripples S] [--no-caustics] [--scale N] | "
                         "--dump DIR [--frames N] [--start S] [--256] [--res WxH] [--tiles 256|512] [--ripples S] "
                         "[--no-caustics]\n");
            return 1;
        }
    }
    auto p = std::make_unique<piscina::Pool>();
    p->setTiles(tiles);
    p->setRipples(ripples);
    p->setCaustics(caustics);
    Water water;
    if (!dumpDir.empty()) {
        // the random drops up to START, as a window would have had them
        water.update((float)partT(start));
        return dump(*p, water, dumpDir, frames, start, view);
    }

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    // 320x200 shown at 4:3, as on a VGA monitor in mode 13h
    SDL_Window* win = SDL_CreateWindow("piscina", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    auto setTitle = [&] {
        char waves[32];
        std::snprintf(waves, sizeof waves, "%.1f", p->ripples());
        std::string title = "piscina (click: a drop) - waves " + std::string(waves) +
                            (p->caustics() ? ", caustics" : ", no caustics");
        title += view.trueColor ? " - 32-bit, " + std::to_string(view.resW) + "x" + std::to_string(view.resH) +
                                      ", tiles " + std::to_string(p->tiles())
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
            if (e.type == SDL_EVENT_MOUSE_BUTTON_DOWN && e.button.button == SDL_BUTTON_LEFT) {
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
                water.randomDrop((float)partT(t));
                break;
            case SDL_SCANCODE_C:
                view.trueColor = !view.trueColor;
                setView();
                setTitle();
                break;
            case SDL_SCANCODE_G: inspector.on = !inspector.on; break;
            case SDL_SCANCODE_M:
                p->setTiles(p->tiles() == 512 ? 256 : 512);
                setTitle();
                break;
            case SDL_SCANCODE_W:
                p->setRipples(p->ripples() >= 1.5f ? 0.0f : p->ripples() + 0.5f);
                setTitle();
                break;
            case SDL_SCANCODE_K:
                p->setCaustics(!p->caustics());
                setTitle();
                break;
            default: break;
            }
        }
        const Uint64 now = SDL_GetPerformanceCounter();
        if (!paused) t += (double)(now - last) / (double)freq;
        last = now;
        // endless: after a day the part's time is set back (the palette has long settled)
        if (t > 86400) {
            const float back = (float)partT(t - 60);
            for (Drop& d : water.drops) d.t -= back;
            water.next -= back;
            t = 60;
        }
        draw(*p, water, t, view);
        picture(*p, view, argb);
        SDL_UpdateTexture(tex, nullptr, argb.data(), view.w() * 4);
        SDL_RenderClear(ren);
        SDL_RenderTexture(ren, tex, nullptr, nullptr);
        // the 256-colour picture is drawn from the 256 tiles
        if (inspector.on) inspector.draw(ren, *p, view.trueColor && p->tiles() == 512);
        SDL_RenderPresent(ren);
    }
    SDL_DestroyTexture(tex);
    inspector.release();
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
