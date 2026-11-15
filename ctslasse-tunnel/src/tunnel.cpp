// A frame, from the time to the picture: the timeline writes the grid and
// the DAC, a renderer draws the grid.
#include "tunnel.h"

#include <algorithm>
#include <cmath>

#include "precalc/light.h"
#include "precalc/texture.h"
#include "render/mapper.h"
#include "render/truecolor.h"

namespace tunnel {

Tunnel::Tunnel(bool logo) : tex_(makeTexture(logo)), light_(makeLightTables()), screen_(W * H, 0) {
    Palettes::white(dac_);  // the part before ends in white
}

void Tunnel::frame(int32_t clock) {
    info_ = timeline_.update(clock, grid_, dac_);
    drawGrid(grid_, tex_.data(), light_.data(), screen_.data());
}

namespace {

// The whole turns of the texture (256 texels, 2^32 in 8.24) the tunnel has
// turned and flown at CLOCK; none before it is alone (T 38), where its
// flight is still within a turn or two
struct Turns {
    int64_t u = 0, v = 0;
};
Turns turnsAt(int32_t clock) {
    const float T = partTime(clock);
    if (T < 38) return {};
    const TunnelShape s = tunnelAt(T);
    constexpr double turn = 256.0 * 4096.0;
    return {std::llround(s.u0 / turn) * (int64_t(1) << 32), std::llround(s.v0 / turn) * (int64_t(1) << 32)};
}

}  // namespace

void Tunnel::morph(int32_t clock, int32_t clockTo, float w, int32_t from, int32_t fromTo) {
    // each frame on its own: the DAC as it stands at its time (the intro
    // writes it only while it changes)
    WideGrid a, b;
    timeline_.jumped();
    const float tTo = timeline_.updateWide(clockTo, b, dac_).t;
    const Dac dacTo = dac_;
    timeline_.jumped();
    info_ = timeline_.updateWide(clock, a, dac_);
    const int64_t k = std::lround(std::clamp(w, 0.0f, 1.0f) * 4096);
    // Unwrapped, as the intro's blend is: every point goes the same way. A
    // whole turn off either grid does not change its own picture (the
    // result is cut to 32 bits), only how far the mix has to go.
    const Turns ta = turnsAt(from), tb = turnsAt(fromTo);
    auto mix = [&](int64_t x, int64_t y) { return (uint32_t)((x * (4096 - k) + y * k) >> 12); };
    for (size_t i = 0; i < grid_.size(); i++)
        grid_[i] = {mix(a[i].u - ta.u, b[i].u - tb.u), mix(a[i].v - ta.v, b[i].v - tb.v),
                    mix(a[i].light, b[i].light)};
    for (int i = 0; i < 768; i++) {
        dac_.rgb[i] = (uint8_t)((dac_.rgb[i] * (4096 - k) + dacTo.rgb[i] * k + 2048) >> 12);
        dac_.exact[i] += (dacTo.exact[i] - dac_.exact[i]) * (float)k / 4096;
    }
    info_.morph = (float)k / 4096, info_.morphTo = tTo;
    drawGrid(grid_, tex_.data(), light_.data(), screen_.data());
}

void Tunnel::toArgb(uint32_t* out) const { tunnel::toArgb(screen_.data(), dac_.rgb, out); }

void Tunnel::toTrueColor(uint32_t* out, int w, int h, bool smooth) const {
    drawTrueColor(grid_, tex_.data(), dac_.exact, out, w, h, smooth);
}

}  // namespace tunnel
