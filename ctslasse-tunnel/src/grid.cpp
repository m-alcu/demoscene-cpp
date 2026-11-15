// Part 8's grid routines: the grid mapper (14DF4h), the tunnel (1C5CBh), the
// drops (1CB2Bh), the wobbling plane (1CDF8h) and the grids' blend (150BEh).
//
// They give the intro's results bit for bit (tests/ref.txt). The floating
// point is the x87's (see X in tunnel.h): each expression is evaluated in
// long double, in the intro's order, and rounded to float or double where
// the intro stores a value, or to the nearest integer (lrint) where it does
// FRNDINT/FISTP.
#include <algorithm>
#include <cmath>

#include "tunnel.h"

namespace tunnel {

namespace {

// 1C746h: max(cos A, 0), as a float
float cosPos(float a) {
    const float c = (float)std::cos(X(a));
    return 0 > c ? 0.0f : c;
}

}  // namespace

// The grid over 40x25 blocks of 8x8 pixels. In each block, u, v and the
// light level are interpolated bilinearly from the four corners: down the
// left edge row by row, then across each row pixel by pixel. A pixel is
// light[L][tex[v][u]], each taken at its whole part: the texture wraps at
// 256 texels, and the level L picks the light table's row.
//
// In texels and levels, as doubles. The intro's mapper works to 1/65536:
// the corners are cut down to that, and so are the steps (each a corner's
// difference divided by 8, rounded down), and the step across changes each
// row by 1/8 of the difference between the bottom and top edges' steps
// (rounded down too). These are all multiples of 1/65536 of a few hundred
// at most, which a double holds exactly (a float's 24 bits would not), so
// the sums are the intro's to the bit.
void Tunnel::gridMap() {
    struct Uvl {
        double u, v, l;
        Uvl& operator+=(const Uvl& o) { return u += o.u, v += o.v, l += o.l, *this; }
    };
    constexpr double kFrac = 65536.0;                                       // the mapper's precision
    auto cut = [](double x) { return std::floor(x * kFrac) / kFrac; };      // down to a multiple of 1/65536
    auto value = [](uint32_t x) { return x / 16777216.0; };                 // the grid's 8.24: 0-256
    // b - a, the shorter way round the 256 (as the grid's values wrap)
    auto diff = [&](uint32_t a, uint32_t b) { return (int32_t)(b - a) / 16777216.0; };
    auto step = [&](const Point& a, const Point& b) {   // (b - a) / 8
        return Uvl{cut(diff(a.u, b.u) / 8), cut(diff(a.v, b.v) / 8), cut(diff(a.light, b.light) / 8)};
    };
    auto whole = [](double x) { return (int)std::floor(x) & 0xFF; };     // the integer part, modulo 256
    const uint8_t* tex = tex_.data();
    const uint8_t* light = light_.data();
    for (int by = 0; by < 25; by++)
        for (int bx = 0; bx < 40; bx++) {
            const Point& p00 = grid_[by * kGridW + bx];
            const Point& p10 = (&p00)[1];
            const Point& p01 = (&p00)[kGridW];
            const Point& p11 = (&p00)[kGridW + 1];
            Uvl across = step(p00, p10);              // per pixel along the row
            const Uvl down = step(p00, p01);          // the left edge, per row
            const Uvl bottom = step(p01, p11);
            const Uvl turn = {cut((bottom.u - across.u) / 8), cut((bottom.v - across.v) / 8),
                              cut((bottom.l - across.l) / 8)};   // the step across, per row
            Uvl left = {cut(value(p00.u)), cut(value(p00.v)), cut(value(p00.light))};
            uint8_t* row = screen_.data() + by * 8 * W + bx * 8;
            for (int y = 0; y < 8; y++, row += W) {
                Uvl q = left;
                for (int x = 0; x < 8; x++) {
                    row[x] = light[whole(q.l) << 8 | tex[whole(q.v) << 8 | whole(q.u)]];
                    q += across;
                }
                left += down;
                across += turn;
            }
        }
}

// 1C5CBh: a tunnel into the grid. For each point, with (dx, dy) its place
// from the screen's centre (20.5, 12.5) and r its distance:
// - u: its angle in 256ths (times 4096), plus U0;
// - v: the depth, ZOOM / r (times 4096), plus V0;
// - the light: 262144 - 0.4 ZOOM / r (times 4096), held to 1000h-3F000h,
//   the far end dark;
// and r waves with the angle: times 1 + sin(angle * TWIST + PHASE) * WAVE,
// the water on the walls.
void Tunnel::tunnel(float twist, float zoom, float phase, int32_t u0, int32_t v0, float wave) {
    info_.tunnel = true;
    info_.twist = twist, info_.zoom = zoom, info_.phase = phase, info_.wave = wave;
    info_.u0 = u0 / 4096.0f, info_.v0 = v0 / 4096.0f;
    const float dim = (float)(X(zoom) * 0.4);
    const float turns = (float)(X(twist) * 5.992112452678286e-06);   // per angle unit: 2 pi / (256 * 4096)
    for (int y = 0; y <= 25; y++)
        for (int x = 0; x <= 40; x++) {
            const X dx = X(x) + -20.5, dy = X(y) + -12.5;
            const X ang = std::nearbyint((std::atan2(dy, dx) * 256.0 / 6.283185307179586 + 128.0) * 4096.0);
            const double swell = (double)(std::sin(ang * turns + phase) * wave + 1);
            const double dx2 = (double)(dx * dx);
            const X m = 4096.0 / std::sqrt(dy * dy + dx2) * swell;
            Point& p = grid_[y * kGridW + x];
            p.u = (uint32_t)(u0 + (int32_t)std::lrint(ang));
            p.v = (uint32_t)(v0 + (int32_t)std::lrint(X(zoom) * m));
            const int32_t l = (int32_t)std::lrint(262144.0f - m * dim);
            p.light = (uint32_t)std::clamp(l, 0x1000, 0x3F000);
        }
}

// 150BEh: grid = grid * WA + plane * WB (WA + WB = 4096: the 16.16 values
// to 8.24)
void Tunnel::blend(int32_t wa, int32_t wb) {
    for (size_t i = 0; i < grid_.size(); i++) {
        Point& p = grid_[i];
        const Point& q = plane_[i];
        p.u = p.u * (uint32_t)wa + q.u * (uint32_t)wb;
        p.v = p.v * (uint32_t)wa + q.v * (uint32_t)wb;
        p.light = p.light * (uint32_t)wa + q.light * (uint32_t)wb;
    }
}

// 1CB2Bh: the drops. Three rings, centred at (20, 12), (10, 7) and (27, 9),
// the radius 8 cells per T, the second and third 10 and 18 cells behind
// (T 1.25 and 2.25). For a point inside a ring, at A = distance - radius
// (A < 0), with a strength S growing to the ring's front:
// - it is pushed out from the centre by sin(A) * S times its distance;
// - the light rises by max(cos A, 0) * S * 50 over the base 3F000h.
// The first: S = 8 * 2048 / (8 - A); the others 2730.67 * 4 / (4 - A).
void Tunnel::bubbles(float t) {
    info_.drops = true;
    const float radius = (float)(X(t) * 8.0f);
    struct Ring {
        float a = 0, s = 0;     // A, S (0 outside the ring)
    };
    auto first = [&](int dx, int dy) {
        Ring r;
        r.a = (float)(std::sqrt(X(dx * dx + dy * dy)) - X(radius));
        r.s = (float)(X(8.0f) * (X(2048.0f) / (X(8.0f) - r.a)));
        return 0 < r.a ? Ring{} : r;
    };
    auto later = [&](int dx, int dy, double behind) {
        Ring r;
        r.a = (float)(std::sqrt(X(dx * dx + dy * dy)) - X(radius) + behind);
        r.s = (float)(X(2730.666666666666) / (X(4.0f) - r.a) * 4.0);
        return 0 < r.a ? Ring{} : r;
    };
    for (int gy = 0; gy < kGridH; gy++)
        for (int gx = 0; gx < kGridW; gx++) {
            const int x1 = gx - 20, y1 = gy - 12, x2 = gx - 10, y2 = gy - 7, x3 = gx - 27, y3 = gy - 9;
            const Ring r1 = first(x1, y1), r2 = later(x2, y2, 10.0), r3 = later(x3, y3, 18.0);
            const float g1 = (float)(std::sin(X(r1.a)) * r1.s);
            const float g2 = (float)(std::sin(X(r2.a)) * r2.s);
            const X g3 = std::sin(X(r3.a)) * r3.s;
            const X u = X(x1) * g1 + gx * 0x8000 + X(x2) * g2 + X(x3) * g3;
            const X v = X(y1) * g1 + gy * 0x8000 + X(y2) * g2 + X(y3) * g3;
            // the light, summed through floats
            const float l1 = (float)(X(cosPos(r1.a)) * (float)(X(r1.s) * 50.0f));
            const float l12 = (float)(X(cosPos(r2.a)) * (float)(X(r2.s) * 50.0f) + (X(l1) + 258048.0f));
            const X light = X(cosPos(r3.a)) * (float)(X(r3.s) * 50.0f) + l12;
            grid_[gy * kGridW + gx] = {(uint32_t)std::lrint(u), (uint32_t)std::lrint(v), (uint32_t)std::lrint(light)};
        }
}

// 1CDF8h: the plane, into plane_. The grid turned by U/2 (U = T - 8), then
// pulled by three sines, each of one coordinate along the other, their
// strengths K1-K3 growing with T; a ring moving out from the centre at 8
// cells per U pushes the points inside it outwards. The light stays 3F000h.
void Tunnel::wobble(float t) {
    info_.plane = true;
    const float u = (float)(X(t) + -8.0f);
    const X k1x = X(u) * 0.1f;
    float k1 = (float)k1x;
    if (k1x > 0.5) k1 = 0.5f;
    const X k2x = (X(u) + -10.0f) * 0.05f;
    float k2 = (float)k2x;
    if (k2x > 0.33) k2 = 0.33f;
    if (0 > k2) k2 = 0;
    const X k3x = (X(u) + -15.0f) * 0.05f;
    float k3 = (float)k3x;
    if (k3x > 0.2) k3 = 0.2f;
    if (0 > k3) k3 = 0;
    const float radius = (float)(X(u) * 8.0f);
    const float ph = (float)(X(u) * 0.5f);
    const float q = (float)(X(u) * 0.333333343f);
    const float cph = (float)std::cos(X(ph));
    const X sph = std::sin(X(ph));
    for (int y = -12; y <= 13; y++)
        for (int x = -20; x <= 20; x++) {
            const int xs = x + 16, ys = y + 8, xc = x + 24, yc = y + 16;
            const X ty = X(ys) * cph + X(xs) * sph;
            const X tx = X(xc) * cph - sph * X(yc);
            const X wx = (std::sin(ty * 0.166666672f + u) * k1 + 1) * (float)tx;
            const X wy = (std::sin(wx * 0.25f + ph) * k2 + 1) * (float)ty;
            const X wx2 = (std::sin(wy * 0.333333343f + q) * k3 + 1) * (float)wx;
            const float px = (float)wx2, py = (float)wy;
            int32_t pu = (int32_t)std::lrint(wx2 * 8.0f * 4096.0f);
            int32_t pv = (int32_t)std::lrint(X(py) * 8.0f * 4096.0f);
            // the ring
            const float z = (float)(std::sqrt(X(x * x + y * y)) - X(radius) + 15.0);
            if (0 > z && z > -37.69911184307752) {   // -12 pi
                const X w = std::sin(X(z)) * 4096.0;
                const X ru = px * w + X(pu), rv = w * py + X(pv);
                pu = (int32_t)std::lrint(ru), pv = (int32_t)std::lrint(rv);
            }
            plane_[(y + 12) * kGridW + x + 20] = {(uint32_t)pu, (uint32_t)pv, 0x3F000};
        }
}

}  // namespace tunnel
