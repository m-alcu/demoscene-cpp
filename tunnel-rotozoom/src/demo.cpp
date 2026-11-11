#include "demo.h"

#include <algorithm>
#include <cmath>

namespace tr {

namespace {

constexpr int TW = W * 2, TH = H * 2;  // tunnel table size

uint32_t argb(float r, float g, float b) {
    auto c = [](float v) { return (uint32_t)std::clamp((int)std::lround(v * 255), 0, 255); };
    return 0xFF000000u | c(r) << 16 | c(g) << 8 | c(b);
}

}  // namespace

Demo::Demo() : screen_(W * H), tex_(256 * 256), angle_(TW * TH), depth_(TW * TH), level_(TW * TH) {
    // The texture: an XOR pattern (the classic) under a grid of bright tiles with bevelled
    // edges, values 0-63.
    for (int y = 0; y < 256; y++)
        for (int x = 0; x < 256; x++) {
            int v = ((x ^ y) >> 2) & 31;                        // 0-31: the XOR pattern
            const int tx = x & 31, ty = y & 31;                 // position in a 32x32 tile
            if (tx < 2 || ty < 2) v = 63;                       // light edge
            else if (tx > 29 || ty > 29) v = 8;                 // dark edge
            else if (((x >> 5) + (y >> 5)) & 1) v += 24;        // alternate tiles brighter
            tex_[y * 256 + x] = (uint8_t)std::min(v, 63);
        }

    // Palette: 64 colours (violet -> magenta -> orange -> pale yellow) at 4 brightness levels.
    for (int l = 0; l < 4; l++) {
        const float b = 1.0f - l * 0.24f;
        for (int k = 0; k < 64; k++) {
            const float f = k / 63.0f;
            pal_[l * 64 + k] = argb(b * std::min(1.0f, 0.15f + f * 1.2f), b * f * f * 0.95f,
                                    b * (0.35f + 0.5f * std::sin(f * 3.0f)) * (1 - f * 0.4f));
        }
    }

    // Tunnel tables: for each pixel, the angle around the centre gives the texture's u and
    // the inverse of the distance gives v (far = small radius = large v). The brightness
    // level falls off towards the centre (depth fog).
    for (int y = 0; y < TH; y++)
        for (int x = 0; x < TW; x++) {
            const float dx = x - TW / 2 + 0.5f, dy = (y - TH / 2 + 0.5f) * 1.2f;  // 1.2: mode 13h pixels
            const float r = std::sqrt(dx * dx + dy * dy);
            const int i = y * TW + x;
            angle_[i] = (uint8_t)((int)std::lround(std::atan2(dy, dx) * 128 / M_PI) & 255);
            depth_[i] = (uint8_t)((int)(32 * 256 / std::max(r, 1.0f)) & 255);
            level_[i] = (uint8_t)std::clamp(3 - (int)(r / 22), 0, 3);
        }
}

// The tunnel: per pixel, two table reads and one texel. Moving the window over the tables
// steers the tunnel; adding to v flies forward and adding to u turns it.
void Demo::tunnel() {
    const float t = t_ / 70.0f;
    const int ox = W / 2 + (int)(W / 3 * std::sin(t * 0.9f));   // window offset in the tables
    const int oy = H / 2 + (int)(H / 3 * std::sin(t * 1.3f));
    const int fly = (int)(t_ * 3), turn = (int)(64 * std::sin(t * 0.4f) * 2);
    uint8_t* p = screen_.data();
    for (int y = 0; y < H; y++) {
        const int row = (y + oy) * TW + ox;
        for (int x = 0; x < W; x++) {
            const int i = row + x;
            const uint8_t u = (uint8_t)(angle_[i] + turn), v = (uint8_t)(depth_[i] + fly);
            *p++ = (uint8_t)(level_[i] * 64 + tex_[v * 256 + u]);
        }
    }
}

// The rotozoomer: the screen is a rotated, scaled window on the (repeating) texture. Per row,
// the start (u, v) steps by (-sin, cos)*zoom; per pixel, by (cos, sin)*zoom, all in 16.16.
void Demo::rotozoom() {
    const float t = t_ / 70.0f;
    const float a = t * 0.7f, zoom = 0.35f + 0.3f * (1 + std::sin(t * 1.1f));  // texels per pixel
    const int32_t du = (int32_t)(std::cos(a) * zoom * 65536), dv = (int32_t)(std::sin(a) * zoom * 65536);
    const int32_t dvr = (int32_t)(du * 1.2f), dur = (int32_t)(-dv * 1.2f);  // per row, mode 13h aspect
    // Centre of rotation: a point on the texture that drifts, placed at the screen centre.
    const int32_t cu = (int32_t)((128 + 100 * std::sin(t * 0.3f)) * 65536), cv = (int32_t)((t * 20) * 65536);
    int32_t ru = cu - du * (W / 2) - dur * (H / 2), rv = cv - dv * (W / 2) - dvr * (H / 2);
    uint8_t* p = screen_.data();
    for (int y = 0; y < H; y++, ru += dur, rv += dvr) {
        int32_t u = ru, v = rv;
        for (int x = 0; x < W; x++, u += du, v += dv)
            *p++ = tex_[((v >> 16) & 255) * 256 + ((u >> 16) & 255)];  // level 0: full brightness
    }
}

void Demo::frame() {
    t_++;
    if (autoswitch && t_ % 700 == 0) switch_effect();
    if (effect_ == 0) tunnel();
    else rotozoom();
}

void Demo::to_argb(uint32_t* out) const {
    for (int i = 0; i < W * H; i++) out[i] = pal_[screen_[i]];
}

}  // namespace tr
