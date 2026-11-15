// ctslasse-tunnel - the water tunnel of Lasse Reinbøng (Cubic Team & $eeN,
// 1995), part 8 from T 12: the rippling plane in red and blue, then the
// tunnel with walls waving like water, in C++17 / SDL3.
//
// Usage: ctslasse-tunnel [--start SECONDS] [--endless] [--logo] [--256] [--res WxH] [--linear] [--scale N]
//            keys: E looped / endless, L the logo on / off,
//                  C 32-bit colour / the intro's 256 colours,
//                  I the 32-bit picture's interpolation: smooth / the mapper's (bilinear),
//                  G the grid on the texture, the light table, the palette
//                    and the frame's parameters, in the corners,
//                  Left / Right 5 s back / on, R restart,
//                  Space pause, Esc quit
//        ctslasse-tunnel --dump DIR [--frames N] [--start SECONDS] [--endless] [--logo] [--256] [--res WxH] [--linear]
//            (no window: writes N frames, 70 per second, as DIR/fNNNN.ppm)
//
// Looped (the default): from --start (seconds into the part; 8.2 by
// default, T 12, the plane alone) to the part's end in the intro (T 72,
// 49.1 s), over and over, seamlessly: instead of the intro's fade-out, over
// the last 5 T (3.4 s) the tunnel turns back into the plane as it is just
// after the start, and goes on from there. --endless / E: it runs on (the
// tunnel breathing and turning). --logo / L: the intro's texture, with
// its "cubic team & $een" logo embossed in the marble; without, the marble.
// Shown in 32-bit colour (the default), at 1280x800 or --res, or as the
// intro has it, in 256 colours at 320x200 (--256 / C). Either is shown at 4:3.
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <memory>
#include <string>
#include <vector>

#include "tunnel.h"

namespace {

constexpr double kEndSeconds = tunnel::kEnd * tunnel::kUnit / tunnel::kPit;   // about 49.1 s
// the loop's morph into its start: 5 T (3.4 s), as long as the tunnel's own blend in (T 33-38)
constexpr double kMorph = 5 * tunnel::kUnit / tunnel::kPit;
constexpr double kLatestStart = kEndSeconds - 2 * kMorph;   // a loop at least as long as its morph

int32_t clockOf(double seconds) { return (int32_t)std::floor(seconds * tunnel::kPit); }

// The time, kept in the loop. Looped: from START to the part's end; over
// its last kMorph the frame turns into the one kMorph after START, so at
// the end it goes on from there, START + kMorph. Endless: back to START
// when the intro's 32-bit clock would overflow, after 30 minutes.
double wrap(double t, double start, bool endless) {
    if (endless) {
        const double end = 2147483647.0 / tunnel::kPit;
        return t < end ? t : start + std::fmod(t - start, end - start);
    }
    const double from = start + kMorph;
    return t < kEndSeconds ? t : from + std::fmod(t - from, kEndSeconds - from);
}

// The frame at T (in the loop): over the loop's last kMorph, morphed into
// the frames after START, eased in and out, (1 - cos) / 2
void show(tunnel::Tunnel& k, double t, double start, bool endless) {
    const double into = t - (kEndSeconds - kMorph);
    if (endless || into <= 0) return k.frame(clockOf(t));
    const float w = (float)(0.5 - 0.5 * std::cos(M_PI * into / kMorph));
    k.morph(clockOf(t), clockOf(start + into), w);
}

// What is shown: 32-bit colour at RES, or the intro's 256 colours at 320x200
struct View {
    bool trueColor = true, smooth = true;
    int resW = 1280, resH = 800;
    int w() const { return trueColor ? resW : tunnel::W; }
    int h() const { return trueColor ? resH : tunnel::H; }
};

void picture(const tunnel::Tunnel& k, const View& v, std::vector<uint32_t>& argb) {
    argb.resize((size_t)v.w() * v.h());
    if (v.trueColor) k.toTrueColor(argb.data(), v.w(), v.h(), v.smooth);
    else k.toArgb(argb.data());
}

int dump(tunnel::Tunnel& k, const std::string& dir, int frames, double start, bool endless, const View& v) {
    std::vector<uint32_t> argb;
    for (int f = 0; f < frames; f++) {
        show(k, wrap(start + f / 70.0, start, endless), start, endless);
        picture(k, v, argb);
        char p[1024];
        std::snprintf(p, sizeof p, "%s/f%04d.ppm", dir.c_str(), f);
        FILE* g = std::fopen(p, "wb");
        if (!g) {
            std::perror(p);
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

// G: what the frame is made of, in the corners of the window.
//
// Top left, the grid on the texture: the 256x256 tile (each texel through
// the DAC, dimmed) and the 41x26 points where they read it, at their u, v,
// joined to their neighbours (the mesh the mapper interpolates in each 8x8
// block). u and v wrap at 256 texels: each segment is drawn from both its
// ends by their difference, so one that crosses the tile's edge shows on
// both sides. The plane is a mesh 8 texels apart, waving and turning; the
// tunnel's u is its angle (once round the tile across the screen) and its
// v its depth, so its rings of points run down the tile as it moves. Near
// the far end the points are further apart than the tile: those segments
// are left out. The points are coloured by their light level: dark (fog)
// to grey (63, the texel as it is), blue-white above 65 (lit).
//
// Top right, the light table: its 130 rows (level, down) by 256 texels
// (across), each entry through the DAC: the colour a texel J takes at a
// level. Rows 0-64 are the fog, J f + 128 (1 - f), towards index 128 (the
// far end's colour); 65-129 go towards white. The bars at the right count
// the grid's points at each level (what the frame uses).
//
// Bottom left, the palette: the DAC's 256 entries, and their red, green and
// blue as curves. Bottom right, the frame's parameters.
class Inspector {
public:
    bool on = false;
    void draw(SDL_Renderer* ren, const tunnel::Tunnel& k) {
        constexpr int gw = tunnel::Tunnel::kGridW, gh = tunnel::Tunnel::kGridH, n = gw * gh;
        uint32_t g[n * 3];
        std::memcpy(g, k.grid(), sizeof g);
        int level[n];
        for (int i = 0; i < n; i++) level[i] = (int)(g[3 * i + 2] >> 24);

        // in window pixels, whatever the picture's logical size
        int lw, lh;
        SDL_RendererLogicalPresentation mode;
        SDL_GetRenderLogicalPresentation(ren, &lw, &lh, &mode);
        SDL_SetRenderLogicalPresentation(ren, 0, 0, SDL_LOGICAL_PRESENTATION_DISABLED);
        int ww, wh;
        SDL_GetCurrentRenderOutputSize(ren, &ww, &wh);
        SDL_SetRenderDrawBlendMode(ren, SDL_BLENDMODE_BLEND);
        gridPanel(ren, k, g, level, ww, wh);
        lightTable(ren, k, level, ww, wh);
        palette(ren, k, ww, wh);
        parameters(ren, k, level, ww, wh);
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 255);
        SDL_SetRenderLogicalPresentation(ren, lw, lh, mode);
    }
    // before the renderer goes
    void release() {
        if (tex_) SDL_DestroyTexture(tex_);
        if (light_) SDL_DestroyTexture(light_);
        tex_ = light_ = nullptr;
    }

private:
    static constexpr float kChar = SDL_DEBUG_TEXT_FONT_CHARACTER_SIZE;

    static uint32_t argb(const uint8_t* dac, int i, int scale) {
        auto c = [&](int k) { return (uint32_t)(dac[3 * i + k] & 0x3F) * scale / 63; };
        return 0xFF000000u | c(0) << 16 | c(1) << 8 | c(2);
    }

    // the grid on the texture, in the top left corner
    void gridPanel(SDL_Renderer* ren, const tunnel::Tunnel& k, const uint32_t* g, const int* level, int ww, int wh) {
        constexpr int gw = tunnel::Tunnel::kGridW, gh = tunnel::Tunnel::kGridH, n = gw * gh;
        if (!tex_) {
            tex_ = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, 256, 256);
            SDL_SetTextureScaleMode(tex_, SDL_SCALEMODE_NEAREST);
        }
        const uint8_t* t = k.texture();
        const uint8_t* dac = k.dac();
        uint32_t lut[256];
        for (int i = 0; i < 256; i++) lut[i] = argb(dac, i, 160);   // dimmed
        pixels_.resize(256 * 256);
        for (int i = 0; i < 256 * 256; i++) pixels_[i] = lut[t[i]];
        SDL_UpdateTexture(tex_, nullptr, pixels_.data(), 256 * 4);

        // window pixels per texel: the panel at most 40% of the window across, 55% down
        const float s = std::max(0.5f, std::min(ww * 0.4f, wh * 0.55f) / 256);
        const float ox = 8, oy = 8, side = 256 * s;
        const SDL_FRect panel = {ox, oy, side, side};
        const std::string label = "grid 41x26 on the texture (u across, v down, mod 256)";
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 220);
        const SDL_FRect back = {ox - 3, oy - 3, std::max(side, label.size() * kChar) + 6, side + 18};
        SDL_RenderFillRect(ren, &back);
        SDL_RenderTexture(ren, tex_, nullptr, &panel);

        // texels from 8.24, on the tile and as differences
        auto pos = [](uint32_t a) { return (float)(a >> 8) / 65536.0f; };
        auto delta = [](uint32_t a, uint32_t b) { return (float)(int32_t)(b - a) / 16777216.0f; };
        const SDL_Rect clip = {(int)ox, (int)oy, (int)std::ceil(side), (int)std::ceil(side)};
        SDL_SetRenderClipRect(ren, &clip);
        SDL_SetRenderDrawColor(ren, 255, 210, 40, 200);
        auto segment = [&](int a, int b) {
            const float du = delta(g[3 * a], g[3 * b]), dv = delta(g[3 * a + 1], g[3 * b + 1]);
            if (std::fabs(du) > 48 || std::fabs(dv) > 48) return;   // the far end: further apart than the mesh shows
            for (int e : {a, b}) {
                const float sign = e == a ? 1.0f : -1.0f;
                const float x = ox + pos(g[3 * e]) * s, y = oy + pos(g[3 * e + 1]) * s;
                SDL_RenderLine(ren, x, y, x + sign * du * s, y + sign * dv * s);
            }
        };
        for (int y = 0; y < gh; y++)
            for (int x = 0; x < gw; x++) {
                const int i = y * gw + x;
                if (x + 1 < gw) segment(i, i + 1);
                if (y + 1 < gh) segment(i, i + gw);
            }
        const float d = std::clamp(s * 2, 2.0f, 4.0f);
        for (int i = 0; i < n; i++) {
            const int l = level[i];
            const Uint8 c = (Uint8)std::clamp(l <= 64 ? 30 + l * 3 : 220 + (l - 65) / 2, 0, 255);
            SDL_SetRenderDrawColor(ren, c, c, l > 64 ? 255 : c, 255);
            const SDL_FRect dot = {ox + pos(g[3 * i]) * s - d / 2, oy + pos(g[3 * i + 1]) * s - d / 2, d, d};
            SDL_RenderFillRect(ren, &dot);
        }
        SDL_SetRenderClipRect(ren, nullptr);
        SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);
        SDL_RenderDebugText(ren, ox, oy + side + 4, label.c_str());
    }

    // the light table, in the top right corner
    void lightTable(SDL_Renderer* ren, const tunnel::Tunnel& k, const int* level, int ww, int wh) {
        constexpr int rows = 130;
        if (!light_) {
            light_ = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, 256, rows);
            SDL_SetTextureScaleMode(light_, SDL_SCALEMODE_NEAREST);
        }
        const uint8_t* dac = k.dac();
        const uint8_t* t = k.lightTable();
        std::vector<uint32_t> px(256 * rows);
        for (int i = 0; i < 256 * rows; i++) px[i] = argb(dac, t[i], 255);
        SDL_UpdateTexture(light_, nullptr, px.data(), 256 * 4);
        // the table, the bars beside it (a quarter of its width)
        const float s = std::max(0.5f, std::floor(std::min(ww * 0.35f / 320, wh * 0.55f / rows) * 4) / 4);
        const float tw = 256 * s, th = rows * s, bars = 64 * s;
        const float ox = ww - 8 - tw - bars - 4, oy = 8;
        const std::string l1 = "light table: level 0-129 down, texel across",
                          l2 = "0-64 fog (to 128), 65-129 to white";
        const float textW = std::max(l1.size(), l2.size()) * kChar;
        const float right = ww - 5.0f, left = std::min(ox - 3, right - textW - 6);
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 220);
        const SDL_FRect back = {left, oy - 3, right - left, th + 30};
        SDL_RenderFillRect(ren, &back);
        const SDL_FRect panel = {ox, oy, tw, th};
        SDL_RenderTexture(ren, light_, nullptr, &panel);
        // ticks at levels 0, 63 (the texel as it is) and 65 (the highlights' start)
        SDL_SetRenderDrawColor(ren, 255, 210, 40, 230);
        for (int l : {0, 63, 65, 129}) SDL_RenderLine(ren, ox - 3, oy + (l + 0.5f) * s, ox - 1, oy + (l + 0.5f) * s);
        // the grid's points per level
        int count[rows] = {};
        constexpr int n = tunnel::Tunnel::kGridW * tunnel::Tunnel::kGridH;
        for (int i = 0; i < n; i++) count[std::clamp(level[i], 0, rows - 1)]++;
        const int most = std::max(1, *std::max_element(count, count + rows));
        SDL_SetRenderDrawColor(ren, 255, 255, 255, 220);
        for (int l = 0; l < rows; l++)
            if (count[l]) {
                // a square root, so a few points still show next to the many at one level
                const float len = std::max(1.0f, bars * std::sqrt((float)count[l] / most));
                const SDL_FRect bar = {ox + tw + 4, oy + l * s, len, std::max(1.0f, s)};
                SDL_RenderFillRect(ren, &bar);
            }
        SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);
        SDL_RenderDebugText(ren, left + 3, oy + th + 4, l1.c_str());
        SDL_RenderDebugText(ren, left + 3, oy + th + 16, l2.c_str());
    }

    // the DAC, in the bottom left corner: its 256 entries as a strip (index
    // across), and above it their red, green and blue (0-63) as curves.
    // Ticks mark 0, 64, 128, 192 and 255.
    void palette(SDL_Renderer* ren, const tunnel::Tunnel& k, int ww, int wh) {
        const uint8_t* dac = k.dac();
        const float s = std::max(1.0f, std::floor(std::min(ww * 0.4f / 256, wh * 0.35f / 100) * 4) / 4);
        const float pw = 256 * s, ch = 63 * s * 0.6f, sh = 16 * s;
        const float ox = 8, oy = wh - 8 - 14 - sh - 4 - ch;
        const std::string label = "palette (DAC): index 0-255 across, R G B 0-63 above";
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 220);
        const SDL_FRect back = {ox - 3, oy - 3, std::max(pw, label.size() * kChar) + 6, ch + 4 + sh + 18};
        SDL_RenderFillRect(ren, &back);
        SDL_SetRenderDrawColor(ren, 80, 80, 80, 200);
        const SDL_FRect frame = {ox, oy, pw, ch};
        SDL_RenderRect(ren, &frame);
        const Uint8 col[3][3] = {{255, 80, 80}, {80, 255, 80}, {100, 140, 255}};
        for (int c = 0; c < 3; c++) {
            SDL_FPoint pts[256];
            for (int i = 0; i < 256; i++) pts[i] = {ox + (i + 0.5f) * s, oy + ch - (dac[3 * i + c] & 0x3F) * ch / 63};
            SDL_SetRenderDrawColor(ren, col[c][0], col[c][1], col[c][2], 230);
            SDL_RenderLines(ren, pts, 256);
        }
        const float sy = oy + ch + 4;
        for (int i = 0; i < 256; i++) {
            const uint32_t c = argb(dac, i, 255);
            SDL_SetRenderDrawColor(ren, (Uint8)(c >> 16), (Uint8)(c >> 8), (Uint8)c, 255);
            const SDL_FRect r = {ox + i * s, sy, s, sh};
            SDL_RenderFillRect(ren, &r);
        }
        SDL_SetRenderDrawColor(ren, 255, 210, 40, 230);
        for (int i : {0, 64, 128, 192, 255}) {
            const float x = ox + (i + 0.5f) * s;
            SDL_RenderLine(ren, x, sy + sh, x, sy + sh + 3);
        }
        SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);
        SDL_RenderDebugText(ren, ox, sy + sh + 5, label.c_str());
    }

    // the frame's parameters, in the bottom right corner
    void parameters(SDL_Renderer* ren, const tunnel::Tunnel& k, const int* level, int ww, int wh) {
        const tunnel::Tunnel::Info& f = k.info();
        constexpr int n = tunnel::Tunnel::kGridW * tunnel::Tunnel::kGridH;
        const int lo = *std::min_element(level, level + n), hi = *std::max_element(level, level + n);
        std::vector<std::string> lines;
        char b[128];
        std::snprintf(b, sizeof b, "T %.2f  (%.2f s into the part)", f.t, f.t * tunnel::kUnit / tunnel::kPit);
        lines.push_back(b);
        const char* what = f.drops ? (f.plane ? "the drops + the plane" : "the drops")
                           : f.plane ? (f.tunnel ? "the plane + the tunnel" : "the plane")
                                     : "the tunnel alone";
        lines.push_back(std::string("drawing: ") + what);
        if (f.plane) {
            std::snprintf(b, sizeof b, "blend: plane %.0f%%, %s %.0f%%", f.planeShare * 100, f.drops ? "drops" : "tunnel",
                          (1 - f.planeShare) * 100);
            lines.push_back(b);
        }
        if (f.tunnel) {
            std::snprintf(b, sizeof b, "twist %.2f  zoom %.1f", f.twist, f.zoom);
            lines.push_back(b);
            std::snprintf(b, sizeof b, "wave %.3f  phase %.2f", f.wave, f.phase);
            lines.push_back(b);
            std::snprintf(b, sizeof b, "turn u0 %.1f  depth v0 %.1f texels", std::fmod(f.u0, 256.0f), f.v0);
            lines.push_back(b);
        }
        if (f.morph > 0) {
            std::snprintf(b, sizeof b, "loop: %.0f%% into T %.2f", f.morph * 100, f.morphTo);
            lines.push_back(b);
        }
        std::snprintf(b, sizeof b, "light levels %d-%d", lo, hi);
        lines.push_back(b);
        size_t longest = 0;
        for (auto& l : lines) longest = std::max(longest, l.size());
        const float lh = 12, bw = longest * kChar + 10, bh = lines.size() * lh + 8;
        const float ox = ww - 8 - bw, oy = wh - 8 - bh;
        SDL_SetRenderDrawColor(ren, 0, 0, 0, 220);
        const SDL_FRect back = {ox, oy, bw, bh};
        SDL_RenderFillRect(ren, &back);
        SDL_SetRenderDrawColor(ren, 255, 255, 255, 255);
        for (size_t i = 0; i < lines.size(); i++) SDL_RenderDebugText(ren, ox + 5, oy + 5 + i * lh, lines[i].c_str());
    }

    SDL_Texture* tex_ = nullptr;
    SDL_Texture* light_ = nullptr;
    std::vector<uint32_t> pixels_;
};

}  // namespace

int main(int argc, char** argv) {
    std::string dumpDir;
    int scale = 3, frames = 70;
    double start = 12 * tunnel::kUnit / tunnel::kPit;
    bool endless = false, logo = false;
    View view;
    for (int i = 1; i < argc; i++) {
        std::string a = argv[i];
        if (a == "--scale" && i + 1 < argc) scale = std::max(1, std::atoi(argv[++i]));
        else if (a == "--dump" && i + 1 < argc) dumpDir = argv[++i];
        else if (a == "--frames" && i + 1 < argc) frames = std::atoi(argv[++i]);
        else if (a == "--start" && i + 1 < argc) start = std::clamp(std::atof(argv[++i]), 0.0, kLatestStart);
        else if (a == "--endless") endless = true;
        else if (a == "--logo") logo = true;
        else if (a == "--256") view.trueColor = false;
        else if (a == "--linear") view.smooth = false;
        else if (a == "--res" && i + 1 < argc && std::sscanf(argv[i + 1], "%dx%d", &view.resW, &view.resH) == 2 &&
                 view.resW > 0 && view.resH > 0 && view.resW <= 7680 && view.resH <= 4800)
            i++;
        else {
            std::fprintf(stderr,
                         "usage: ctslasse-tunnel [--start S] [--endless] [--logo] [--256] [--res WxH] [--linear] [--scale N] | "
                         "--dump DIR [--frames N] [--start S] [--endless] [--logo] [--256] [--res WxH] [--linear]\n");
            return 1;
        }
    }
    auto k = std::make_unique<tunnel::Tunnel>(logo);
    k->fadeOut = false;     // looped: the end turns into the start; endless: it runs on
    if (!dumpDir.empty()) return dump(*k, dumpDir, frames, start, endless, view);

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());
        return 1;
    }
    // 320x200 shown at 4:3, as on a VGA monitor in mode 13h
    SDL_Window* win = SDL_CreateWindow("ctslasse-tunnel", 320 * scale, 240 * scale, SDL_WINDOW_RESIZABLE);
    auto setTitle = [&] {
        std::string t = endless ? "ctslasse-tunnel - endless" : "ctslasse-tunnel - looped";
        t += logo ? " - with the logo" : "";
        t += view.trueColor ? " - 32-bit, " + std::to_string(view.resW) + "x" + std::to_string(view.resH) +
                                  (view.smooth ? ", smooth" : ", bilinear")
                            : std::string(" - 256 colours");
        SDL_SetWindowTitle(win, t.c_str());
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
    double t = start;
    bool running = true, paused = false;
    while (running) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
            if (e.type != SDL_EVENT_KEY_DOWN || e.key.repeat) continue;
            switch (e.key.scancode) {
            case SDL_SCANCODE_ESCAPE: running = false; break;
            case SDL_SCANCODE_SPACE: paused = !paused; break;
            case SDL_SCANCODE_R: t = start; break;
            case SDL_SCANCODE_LEFT: t = std::max(start, t - 5); break;
            case SDL_SCANCODE_RIGHT: t += 5; break;
            case SDL_SCANCODE_E:
                endless = !endless;
                setTitle();
                break;
            case SDL_SCANCODE_L: {
                logo = !logo;
                k = std::make_unique<tunnel::Tunnel>(logo);
                k->fadeOut = false;
                setTitle();
                break;
            }
            case SDL_SCANCODE_C:
                view.trueColor = !view.trueColor;
                setView();
                setTitle();
                break;
            case SDL_SCANCODE_I:
                view.smooth = !view.smooth;
                setTitle();
                break;
            case SDL_SCANCODE_G: inspector.on = !inspector.on; break;
            default: break;
            }
        }
        const Uint64 now = SDL_GetPerformanceCounter();
        if (!paused) t += (double)(now - last) / (double)freq;
        last = now;
        t = wrap(t, start, endless);
        show(*k, t, start, endless);
        picture(*k, view, argb);
        SDL_UpdateTexture(tex, nullptr, argb.data(), view.w() * 4);
        SDL_RenderClear(ren);
        SDL_RenderTexture(ren, tex, nullptr, nullptr);
        if (inspector.on) inspector.draw(ren, *k);
        SDL_RenderPresent(ren);
    }
    SDL_DestroyTexture(tex);
    inspector.release();
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
