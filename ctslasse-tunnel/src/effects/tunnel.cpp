// The tunnel: a point's angle round the screen's centre is its u, and one
// over its distance from it is its v, so the texture wraps round and runs
// away into the middle.
#include <algorithm>
#include <cmath>

#include "effects/effects.h"

namespace tunnel {

// 1C5CBh: a tunnel into the grid. For each point, with (dx, dy) its place
// from the screen's centre (20.5, 12.5) and r its distance:
// - u: its angle in 256ths (times 4096), plus U0;
// - v: the depth, ZOOM / r (times 4096), plus V0;
// - the light: 262144 - 0.4 ZOOM / r (times 4096), held to 1000h-3F000h,
//   the far end dark;
// and r waves with the angle: times 1 + sin(angle * TWIST + PHASE) * WAVE,
// the water on the walls.
void makeTunnel(Grid& grid, const TunnelShape& s) {
    const float twist = s.twist, zoom = s.zoom, phase = s.phase, wave = s.wave;
    const float dim = (float)(X(zoom) * 0.4);
    const float turns = (float)(X(twist) * 5.992112452678286e-06);   // per angle unit: 2 pi / (256 * 4096)
    for (int y = 0; y <= 25; y++)
        for (int x = 0; x <= 40; x++) {
            const X dx = X(x) + -20.5, dy = X(y) + -12.5;
            const X ang = std::nearbyint((std::atan2(dy, dx) * 256.0 / 6.283185307179586 + 128.0) * 4096.0);
            const double swell = (double)(std::sin(ang * turns + phase) * wave + 1);
            const double dx2 = (double)(dx * dx);
            const X m = 4096.0 / std::sqrt(dy * dy + dx2) * swell;
            Point& p = grid[y * kGridW + x];
            p.u = (uint32_t)(s.u0 + (int32_t)std::lrint(ang));
            p.v = (uint32_t)(s.v0 + (int32_t)std::lrint(X(zoom) * m));
            const int32_t l = (int32_t)std::lrint(262144.0f - m * dim);
            p.light = (uint32_t)std::clamp(l, 0x1000, 0x3F000);
        }
}

}  // namespace tunnel
