// Part 8's grid routines: the grid mapper, the blend of the two grids, the
// drops and the wobbling plane.
//
// They give the intro's results bit for bit (tests/ref.txt). The floating
// point is the x87's (see X in pond.h): each expression is evaluated in long
// double, in the intro's order, and rounded to float or double where the
// intro stores a value, or to the nearest integer (lrint) where it does
// FRNDINT/FISTP.
#include <cmath>

#include "pond.h"

namespace pond {

namespace {

// max(cos A, 0), as a float
float cosPos(float a) {
    const float c = (float)std::cos(X(a));
    return 0 > c ? 0.0f : c;
}

}  // namespace

// The grid over 40x25 blocks of 8x8 pixels. In each block, u, v
// and the light level are interpolated bilinearly from the four corners:
// down the left edge row by row, then across each row pixel by pixel.
//
// The mapper keeps them in 8.16 fixed point (the grid's 8.24 shifted down
// by 8), in 24 bits: the integer byte wraps, so the texture wraps at 256
// and the level too. The steps are the corners' differences divided by 8
// (>> 11 from 8.24), and the step across changes by 1/8 of the difference
// between the bottom and top edges each row. A pixel is
// light[level][tex[v][u]].
//
// (The original keeps the 16-bit fractions in the high halves of registers
// and the integer bytes in other registers' low bytes, and joins them with
// ADD/ADC; its variables are read as dwords straddling two of them, whose
// lower halves are always zero. All this comes to the 24-bit arithmetic
// here.)
void Pond::gridMap() {
    struct Uvl {
        uint32_t u, v, l;
        Uvl& operator+=(const Uvl& o) { return u += o.u, v += o.v, l += o.l, *this; }
    };
    // (b - a) / 8 in 8.16: B - A in 8.24, >> 11 (arithmetic, as the intro does)
    auto step = [](const Point& a, const Point& b) {
        auto d = [](uint32_t x, uint32_t y) { return (uint32_t)((int32_t)(y - x) >> 11); };
        return Uvl{d(a.u, b.u), d(a.v, b.v), d(a.light, b.light)};
    };
    auto byte2 = [](uint32_t x) { return (x >> 16) & 0xFF; };   // the integer byte of 8.16
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
            const Uvl turn = {(uint32_t)((int32_t)(bottom.u - across.u) >> 3),   // the step across, per row
                              (uint32_t)((int32_t)(bottom.v - across.v) >> 3),
                              (uint32_t)((int32_t)(bottom.l - across.l) >> 3)};
            Uvl left = {p00.u >> 8, p00.v >> 8, p00.light >> 8};
            uint8_t* row = screen_.data() + by * 8 * W + bx * 8;
            for (int y = 0; y < 8; y++, row += W) {
                Uvl q = left;
                for (int x = 0; x < 8; x++) {
                    row[x] = light[byte2(q.l) << 8 | tex[byte2(q.v) << 8 | byte2(q.u)]];
                    q += across;
                }
                left += down;
                across += turn;
            }
        }
}

// The grid = the grid · A + the plane · B (A + B = 4096), in 32 bits
void Pond::blend(int32_t a, int32_t b) {
    for (size_t i = 0; i < grid_.size(); i++) {
        Point& g = grid_[i];
        const Point& p = plane_[i];
        g.u = g.u * (uint32_t)a + p.u * (uint32_t)b;
        g.v = g.v * (uint32_t)a + p.v * (uint32_t)b;
        g.light = g.light * (uint32_t)a + p.light * (uint32_t)b;
    }
}

// The intro's three drops, into the grid. Each is a ring whose
// radius grows by 8 cells per T; the second and third start 10 and 18 cells
// behind the first. For a point inside a ring, A = its distance from the
// ring (negative):
// - it is pushed out from the centre by sin(A) · S times its distance, with
//   S = 2048 · 8 / (8 - A) for the first drop, 2730.67 · 4 / (4 - A) for
//   the others;
// - its light rises by max(cos A, 0) · S · 50 over 3F000h.
// u and v are in 16.16 here (a cell is 8000h: 8 texels).
void Pond::bubbles(float t) {
    const float radius = (float)(X(t) * 8.0f);
    struct Ring {
        float a = 0, s = 0;     // A and S, both 0 outside the ring
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
            // from the centres (20, 12), (10, 7), (27, 9)
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
            grid_[gy * kGridW + gx] = {(uint32_t)std::lrint(u), (uint32_t)std::lrint(v),
                                       (uint32_t)std::lrint(light)};
        }
}

// The plane, into the second grid, from T 8 (U = T - 8). Each
// point (x, y), from the centre, is turned by PH = U/2 (the intro's x and y
// terms are offset: x + 16 and x + 24, y + 8 and y + 16), then waved by
// three sines, each on the coordinate the one before left, with strengths
// K1-K3 growing with U up to 0.5, 0.33 and 0.2. It is scaled to 16.16 (a
// cell is 8 texels). A ring (radius 8U - 15) pushes the points inside it
// outwards, by sin of the distance into it, up to 12 pi behind its front.
void Pond::wobble(float t) {
    const X tu = X(t) - 8.0f;
    const float u = (float)tu;
    const X k1x = tu * X(0.1f), k2x = (X(u) - 10.0f) * X(0.05f), k3x = (X(u) - 15.0f) * X(0.05f);
    float k1 = (float)k1x, k2 = (float)k2x, k3 = (float)k3x;
    if (k1x > 0.5) k1 = 0.5f;
    if (k2x > 0.33) k2 = 0.33f;
    if (0 > k2) k2 = 0;
    if (k3x > 0.2) k3 = 0.2f;
    if (0 > k3) k3 = 0;
    const float radius = (float)(X(u) * 8.0f);
    const float ph = (float)(X(u) * 0.5f);
    const float q = (float)(X(u) * 0.33333334f);
    const float cph = (float)std::cos(X(ph));
    const X sph = std::sin(X(ph));
    for (int y = -12; y <= 13; y++)
        for (int x = -20; x <= 20; x++) {
            const int xs = x + 16, ys = y + 8, xc = x + 24, yc = y + 16;
            const X ty = X(ys) * cph + X(xs) * sph;
            const X tx = X(xc) * cph - sph * X(yc);
            const X wx = (std::sin(ty * 0.16666667f + u) * k1 + 1) * (float)tx;
            const X wy = (std::sin(wx * 0.25f + ph) * k2 + 1) * (float)ty;
            const X wx2 = (std::sin(wy * 0.33333334f + q) * k3 + 1) * (float)wx;
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

}  // namespace pond
