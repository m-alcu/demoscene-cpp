// The inspector's four panels (see inspector.h).
#include "app/inspector.h"

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>

namespace {

constexpr float kChar = SDL_DEBUG_TEXT_FONT_CHARACTER_SIZE;

// a DAC entry (6 bits a channel) as ARGB, its brightness scaled to SCALE
uint32_t argb(const uint8_t* dac, int i, int scale) {
    auto c = [&](int k) { return (uint32_t)(dac[3 * i + k] & 0x3F) * scale / 63; };
    return 0xFF000000u | c(0) << 16 | c(1) << 8 | c(2);
}

}  // namespace

void Inspector::draw(SDL_Renderer* ren, const tunnel::Tunnel& k) {
    constexpr int gw = tunnel::kGridW, gh = tunnel::kGridH, n = gw * gh;
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
void Inspector::release() {
    if (tex_) SDL_DestroyTexture(tex_);
    if (light_) SDL_DestroyTexture(light_);
    tex_ = light_ = nullptr;
}

// the grid on the texture, in the top left corner
void Inspector::gridPanel(SDL_Renderer* ren, const tunnel::Tunnel& k, const uint32_t* g, const int* level, int ww, int wh) {
    constexpr int gw = tunnel::kGridW, gh = tunnel::kGridH, n = gw * gh;
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
void Inspector::lightTable(SDL_Renderer* ren, const tunnel::Tunnel& k, const int* level, int ww, int wh) {
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
    constexpr int n = tunnel::kGridW * tunnel::kGridH;
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
void Inspector::palette(SDL_Renderer* ren, const tunnel::Tunnel& k, int ww, int wh) {
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
void Inspector::parameters(SDL_Renderer* ren, const tunnel::Tunnel& k, const int* level, int ww, int wh) {
    const tunnel::FrameInfo& f = k.info();
    constexpr int n = tunnel::kGridW * tunnel::kGridH;
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
