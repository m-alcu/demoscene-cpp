// The plane: the flat texture, turned, then pulled about by sines of its
// own coordinates.
#include <cmath>

#include "effects/effects.h"

namespace tunnel {

// 1CDF8h: the plane. The grid turned by U/2 (U = T - 8), then pulled by
// three sines, each of one coordinate along the other, their strengths
// K1-K3 growing with T; a ring moving out from the centre at 8 cells per U
// pushes the points inside it outwards. The light stays 3F000h.
void makePlane(Grid& grid, float t) {
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
            // turned
            const int xs = x + 16, ys = y + 8, xc = x + 24, yc = y + 16;
            const X ty = X(ys) * cph + X(xs) * sph;
            const X tx = X(xc) * cph - sph * X(yc);
            // pulled: x by a sine of y, y by a sine of the new x, x again by a sine of the new y
            const X wx = (std::sin(ty * 0.166666672f + u) * k1 + 1) * (float)tx;
            const X wy = (std::sin(wx * 0.25f + ph) * k2 + 1) * (float)ty;
            const X wx2 = (std::sin(wy * 0.333333343f + q) * k3 + 1) * (float)wx;
            const float px = (float)wx2, py = (float)wy;
            // 8 texels a cell
            int32_t pu = (int32_t)std::lrint(wx2 * 8.0f * 4096.0f);
            int32_t pv = (int32_t)std::lrint(X(py) * 8.0f * 4096.0f);
            // the ring
            const float z = (float)(std::sqrt(X(x * x + y * y)) - X(radius) + 15.0);
            if (0 > z && z > -37.69911184307752) {   // -12 pi
                const X w = std::sin(X(z)) * 4096.0;
                const X ru = px * w + X(pu), rv = w * py + X(pv);
                pu = (int32_t)std::lrint(ru), pv = (int32_t)std::lrint(rv);
            }
            grid[(y + 12) * kGridW + x + 20] = {(uint32_t)pu, (uint32_t)pv, 0x3F000};
        }
}

}  // namespace tunnel
