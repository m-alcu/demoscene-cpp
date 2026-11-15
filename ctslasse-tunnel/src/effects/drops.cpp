// The drops: rings spreading from three points, each pushing the texture
// outwards and lighting it as it passes.
#include <cmath>

#include "effects/effects.h"

namespace tunnel {

namespace {

// 1C746h: max(cos A, 0), as a float
float cosPos(float a) {
    const float c = (float)std::cos(X(a));
    return 0 > c ? 0.0f : c;
}

}  // namespace

// 1CB2Bh: the drops. Three rings, centred at (20, 12), (10, 7) and (27, 9),
// the radius 8 cells per T, the second and third 10 and 18 cells behind
// (T 1.25 and 2.25). For a point inside a ring, at A = distance - radius
// (A < 0), with a strength S growing to the ring's front:
// - it is pushed out from the centre by sin(A) * S times its distance;
// - the light rises by max(cos A, 0) * S * 50 over the base 3F000h.
// The first: S = 8 * 2048 / (8 - A); the others 2730.67 * 4 / (4 - A).
void makeDrops(Grid& grid, float t) {
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
            // the flat texture, 8000h (8 texels) a cell, and the three pushes
            const X u = X(x1) * g1 + gx * 0x8000 + X(x2) * g2 + X(x3) * g3;
            const X v = X(y1) * g1 + gy * 0x8000 + X(y2) * g2 + X(y3) * g3;
            // the light, summed through floats
            const float l1 = (float)(X(cosPos(r1.a)) * (float)(X(r1.s) * 50.0f));
            const float l12 = (float)(X(cosPos(r2.a)) * (float)(X(r2.s) * 50.0f) + (X(l1) + 258048.0f));
            const X light = X(cosPos(r3.a)) * (float)(X(r3.s) * 50.0f) + l12;
            grid[gy * kGridW + gx] = {(uint32_t)std::lrint(u), (uint32_t)std::lrint(v), (uint32_t)std::lrint(light)};
        }
}

}  // namespace tunnel
