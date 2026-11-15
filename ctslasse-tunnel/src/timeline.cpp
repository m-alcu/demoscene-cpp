// Part 8 (1C776h) at a clock. T, in the part's unit, is float, as the
// intro keeps it; each value is computed in long double in the intro's
// order and rounded where the intro stores it.
#include "timeline.h"

#include <cmath>

namespace tunnel {

namespace {

constexpr double pi = 3.141592653589793;

// 1C706h: an ease, (1 - cos(pi x)) / 2, X held to 0-1
X ease(float x) {
    if (0 > x) x = 0;
    if (1 < x) x = 1.0f;
    return (1 - std::cos(X(x) * 3.141592653589793)) * 0.5;
}

// the tunnel's turn and its way forward at T: 23.1 and 70 texels per T
void flight(float T, TunnelShape& s) {
    const X a = (X(T) + -38.0f) * 4096.0f;
    s.u0 = (int32_t)std::lrint(a * 23.1234), s.v0 = (int32_t)std::lrint(a * 70.0f);
}

void record(const TunnelShape& s, FrameInfo& info) {
    info.tunnel = true;
    info.twist = s.twist, info.zoom = s.zoom, info.phase = s.phase, info.wave = s.wave;
    info.u0 = s.u0 / 4096.0f, info.v0 = s.v0 / 4096.0f;
}

}  // namespace

TunnelShape tunnelAt(float T) {
    TunnelShape s;
    flight(T, s);
    float zoom = 500.0f, twist = 1.0f, wave = 0;
    float phase = (float)(X(T) * 2.0f);
    if (T > 39) wave = (float)(ease((float)((X(T) + -39.0f) * 0.5f)) * 0.8);   // the walls start to wave
    if (T > 42) {   // the twist steps up, the wave swings
        twist = (float)std::nearbyint(X(T) + -41.0f);
        const double d = (double)((50.0f - X(T)) * 0.1);
        wave = (float)(std::cos((X(T) + -42.0f) * pi) * d);
    }
    if (T > 46) {   // twist 5, the wave eased down to 0.2, the phase spinning
        const float u = (float)(X(T) + -46.0f);
        wave = (float)(0.4 - ease((float)((X(T) + -46.0f) * 2.0f)) * 0.2);
        twist = 5.0f;
        phase = (float)(ease(u) * u * 3.0f + phase);
    }
    if (T > 48) {   // the zoom breathes
        const float u = (float)(X(T) + -48.0f);
        const double d = (double)(ease((float)((X(T) + -48.0f) * 0.125f)) * 0.8);
        zoom = (float)((std::sin(X(u) * pi) * d + 1) * 500.0);
    }
    if (T > 55.5) {   // twist 3, wave 0.6, the phase at 2T
        twist = 3.0f, wave = 0.6f;
        phase = (float)(X(T) * 2.0f);
    }
    if (T > 56) {
        const double d = (double)(ease((float)((60.0f - X(T)) * 0.25f)) * 0.8);
        zoom = (float)((std::sin((X(T) + -48.0f) * pi) * d + 1) * 500.0);
    }
    if (T > 60) {   // the wave dies out, swinging
        const double d = (double)(std::cos((X(T) + -60.0f) * pi) * 0.6);
        wave = (float)(ease((float)((66.0f - X(T)) * 0.25f)) * d);
    }
    if (T > 62) {   // the zoom breathes at 1.5T, +-85%
        const double d = (double)(ease((float)(X(T) + -62.0f)) * 0.85);
        zoom = (float)((std::sin(X(T) * 1.5) * d + 1) * 500.0);
    }
    s.twist = twist, s.zoom = zoom, s.phase = phase, s.wave = wave;
    return s;
}

// The palettes: in from white as greys (T 0-0.5), greys to blue (0.5-1.5),
// blue to red (8-12), out to black (68-72)
void Timeline::colours(X t80, Dac& dac) {
    const float T = (float)t80;
    const double dT = (double)t80;
    if (!dacSet_) {
        // started past the fades (never in the intro): the palette in full
        if (T >= 12) palettes_.whole(Pal::Red, dac);
        else if (T >= 1.5f) palettes_.whole(Pal::Blue, dac);
        dacSet_ = true;
    }
    if (t80 < 0.5) palettes_.fromWhite(Pal::Grey, (int32_t)std::lrint(X(T) * 2.0f * 64.0f), dac);
    else if (dT < 1.5) palettes_.mix(Pal::Blue, Pal::Grey, (int32_t)std::lrint((X(dT) + -0.5) * 64.0), dac);
    if (T > 8 && T < 12) palettes_.mix(Pal::Red, Pal::Blue, (int32_t)std::lrint((X(T) + -8.0f) * 16.0f), dac);
    if (fadeOut && T > 68) palettes_.toBlack(Pal::Red, (int32_t)std::lrint((X(72.0f) - T) * 16.0f), dac);
}

// To T 38: the drops (to T 12), the plane (from T 8), the tunnel (from
// T 33), and how much of the plane is blended with whichever of the others
// is on
Timeline::Weights Timeline::blended(float T, Grid& grid, FrameInfo& info) {
    if (T < 12) {
        makeDrops(grid, T);
        info.drops = true;
    }
    if (T > 8 && T < 38) {
        makePlane(plane_, T);
        info.plane = true;
    }
    if (T > 33) {
        TunnelShape s;
        s.twist = 5.0f, s.zoom = 500.0f, s.phase = 0.0f, s.wave = 0.0f;
        flight(T, s);
        makeTunnel(grid, s);
        record(s, info);
    }
    // grid = grid a + plane b: b rising with the plane (T 8-12), and
    // falling as the tunnel comes in (T 33-38)
    float w = 0;
    if (T > 8) w = (float)((1 - std::cos((X(T) + -8.0f) * 0.25f * pi)) * 0.5);
    if (T > 12) w = 1.0f;
    if (T > 33 && T < 38) w = (float)((std::cos((X(T) + -33.0f) * 0.2f * pi) + 1) * 0.5);
    if (0 > w) w = 0;
    if (1 < w) w = 1.0f;
    w = (float)(X(w) * 4096.0f);
    const int32_t wb = (int32_t)std::lrint(X(w)), wa = (int32_t)std::lrint(X(4096.0f) - w);
    info.planeShare = wb / 4096.0f;
    return {wa, wb};
}

Timeline::Weights Timeline::layers(int32_t clock, Grid& front, Dac& dac, FrameInfo& info) {
    const X t80 = X(clock) / 813440.2376280001;
    const float T = (float)t80;
    // back in time (a loop, a seek), or the fade-out skipped: the palette as
    // it stands at T (the intro writes it only while it changes)
    if (T < lastT_ || (!fadeOut && T > 68)) dacSet_ = false;
    lastT_ = T;
    info = FrameInfo{};
    info.t = T;
    colours(t80, dac);
    if (T < 38) return blended(T, front, info);
    // the tunnel alone
    const TunnelShape s = tunnelAt(T);
    makeTunnel(front, s);
    record(s, info);
    return {};
}

FrameInfo Timeline::update(int32_t clock, Grid& grid, Dac& dac) {
    FrameInfo info;
    const Weights w = layers(clock, grid, dac, info);
    blend(grid, plane_, w.front, w.plane);   // the tunnel alone: times 4096
    return info;
}

// The blend (150BEh) in 64 bits, the effects' values signed as they are
FrameInfo Timeline::updateWide(int32_t clock, WideGrid& grid, Dac& dac) {
    FrameInfo info;
    const Weights w = layers(clock, front_, dac, info);
    auto sum = [&](uint32_t a, uint32_t b) { return (int64_t)(int32_t)a * w.front + (int64_t)(int32_t)b * w.plane; };
    for (size_t i = 0; i < grid.size(); i++) {
        const Point &p = front_[i], &q = plane_[i];
        grid[i] = {sum(p.u, q.u), sum(p.v, q.v), sum(p.light, q.light)};
    }
    return info;
}

}  // namespace tunnel
