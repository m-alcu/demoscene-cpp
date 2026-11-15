// The 32-bit picture: what the grid mapper draws, without its roundings.
#include "render/truecolor.h"

#include <algorithm>
#include <cmath>
#include <thread>
#include <vector>

namespace tunnel {

namespace {

// ROWS(from, to) over rows 0..H, in bands, one per thread (or in this one)
template <class Rows>
void inBands(int h, bool threaded, const Rows& rows) {
    const int n = threaded ? (int)std::clamp(std::thread::hardware_concurrency(), 1u, 16u) : 1;
    std::vector<std::thread> threads;
    for (int b = 1; b < n; b++) threads.emplace_back(rows, h * b / n, h * (b + 1) / n);
    rows(0, h / n);
    for (std::thread& t : threads) t.join();
}

}  // namespace

// The grid mapper's picture without its roundings, at any size. The grid's
// points are taken from 8.24 to texels and levels. u and v wrap at 256
// texels (2^32), as the mapper's bytes do: the points around a pixel are
// placed from one of them by their differences, so they interpolate
// without jumps. (Not the whole grid from one point, as ctslasse-pond
// does: the tunnel's u, its angle, goes once round the centre, and the
// rows above and below it would come out 256 texels apart.) Each pixel's centre is placed on the 320x200 screen and u, v
// and the light there are interpolated between the points around it:
// bilinearly as the mapper does, or (SMOOTH) with Catmull-Rom between the
// 4x4 around, which goes through the points with a continuous slope: the
// tunnel's depth, zoom / r, is curved, and bilinear shows it as 8x8
// facets. Then, kept fractional:
// - the texture is sampled between its 4x4 nearest texels (Catmull-Rom),
//   wrapping at 256 as the mapper's byte does;
// - the light level is continuous, the table's formulas at it: under 64,
//   fog, J f + 128 (1 - f) with f = e^(1.5 - (64 - L) / 13) - 0.02 (at
//   most 1); from 65, towards white by (L - 65) / 64;
// - the palette index this gives is fractional too, read between two DAC
//   entries of the unrounded palette.
// The tunnel's centre (the far end) has u and v changing faster than the
// grid can follow, as in the intro: there the fog leaves only index 128.
void drawTrueColor(const Grid& grid, const uint8_t* tex, const float* dac, uint32_t* out, int w, int h, bool smooth) {
    constexpr int nx = kGridW, ny = kGridH, n = nx * ny;
    // the grid: u and v as they are (8.24, wrapping), the light in levels
    uint32_t gu[n], gv[n];
    float fl[n];
    for (int i = 0; i < n; i++) {
        gu[i] = grid[i].u, gv[i] = grid[i].v;
        fl[i] = (float)(grid[i].light / 16777216.0);
    }
    // the fog, per level (0-64, by tenths)
    constexpr int fogSteps = 640;
    float fog[fogSteps + 2];
    for (int i = 0; i <= fogSteps + 1; i++)
        fog[i] = (float)std::min(1.0, std::exp(1.5 - (64.0 - i * 64.0 / fogSteps) / 13.0) - 0.02);
    float lut[257 * 3];                           // the DAC in 0-255 (the last entry repeated)
    for (int i = 0; i < 768; i++) lut[i] = dac[i] * (255.0f / 63.0f);
    for (int c = 0; c < 3; c++) lut[768 + c] = lut[765 + c];
    struct Cubic {
        float w[4];
    };
    // Catmull-Rom's weights for the points before and after: at 0 the
    // second point, at 1 the third
    auto cubic = [](float t) {
        const float t2 = t * t, t3 = t2 * t;
        return Cubic{{0.5f * (-t3 + 2 * t2 - t), 0.5f * (3 * t3 - 5 * t2 + 2), 0.5f * (-3 * t3 + 4 * t2 + t),
                      0.5f * (t3 - t2)}};
    };
    // a pixel's place in the grid: its four points (clamped at the edges)
    // and their weights
    struct Place {
        int at[4];
        Cubic c;
    };
    auto place = [&](int p, int size, int screen, int points) {
        const double s = ((p + 0.5) * screen / size - 0.5) / 8;
        const double c = std::clamp(s, 0.0, points - 1.0);
        const int i = std::min((int)c, points - 2);
        const float t = (float)(c - i);
        Place r{{}, smooth ? cubic(t) : Cubic{{0, 1 - t, t, 0}}};
        for (int k = 0; k < 4; k++) r.at[k] = std::clamp(i - 1 + k, 0, points - 1);
        return r;
    };
    std::vector<Place> cols(w);
    for (int px = 0; px < w; px++) cols[px] = place(px, w, W, nx);
    auto rows = [&](int from, int to) {
        // one row of the grid, interpolated down to this pixel row: u and v
        // from the second of the four points, by their differences
        constexpr float k = 1.0f / 16777216.0f;
        float u[nx], v[nx], l[nx];
        for (int py = from; py < to; py++) {
            const Place r = place(py, h, H, ny);
            for (int i = 0; i < nx; i++) {
                const int ref = r.at[1] * nx + i;
                float su = 0, sv = 0, sl = 0;
                for (int q = 0; q < 4; q++) {
                    const int m = r.at[q] * nx + i;
                    su += (float)(int32_t)(gu[m] - gu[ref]) * r.c.w[q];
                    sv += (float)(int32_t)(gv[m] - gv[ref]) * r.c.w[q];
                    sl += fl[m] * r.c.w[q];
                }
                u[i] = (float)(gu[ref] >> 8) / 65536.0f + su * k, v[i] = (float)(gv[ref] >> 8) / 65536.0f + sv * k;
                l[i] = sl;
            }
            uint32_t* o = out + (size_t)py * w;
            for (int px = 0; px < w; px++) {
                const Place& c = cols[px];
                auto at = [&](const float* q) {
                    return q[c.at[0]] * c.c.w[0] + q[c.at[1]] * c.c.w[1] + q[c.at[2]] * c.c.w[2] +
                           q[c.at[3]] * c.c.w[3];
                };
                // across, from the second column by the differences, wrapped to +-128
                auto wrapped = [&](const float* q) {
                    const float b = q[c.at[1]];
                    float s = b;
                    for (int m = 0; m < 4; m++) {
                        const float d = q[c.at[m]] - b;
                        s += (d - 256.0f * std::nearbyint(d / 256.0f)) * c.c.w[m];
                    }
                    return s;
                };
                // the texture, between its 4x4 nearest texels
                const float tu = wrapped(u) - 0.5f, tv = wrapped(v) - 0.5f;
                const float fu0 = std::floor(tu), fv0 = std::floor(tv);
                const Cubic cu = cubic(tu - fu0), cv = cubic(tv - fv0);
                const int x = (int)fu0 - 1, y = (int)fv0 - 1;
                int xs[4];
                for (int k = 0; k < 4; k++) xs[k] = (x + k) & 0xFF;
                float j = 0;
                for (int m = 0; m < 4; m++) {
                    const uint8_t* line = tex + (((y + m) & 0xFF) << 8);
                    j += (line[xs[0]] * cu.w[0] + line[xs[1]] * cu.w[1] + line[xs[2]] * cu.w[2] +
                          line[xs[3]] * cu.w[3]) * cv.w[m];
                }
                j = std::clamp(j, 0.0f, 255.0f);   // Catmull-Rom overshoots a little at edges
                // lit (or fogged), then between two palette entries
                const float lv = std::clamp(at(l), 0.0f, 129.0f);
                float idx;
                if (lv < 64) {
                    const float s = lv * (fogSteps / 64.0f);
                    const int s0 = (int)s;
                    const float f = fog[s0] + (fog[s0 + 1] - fog[s0]) * (s - s0);
                    idx = j * f + 128 * (1 - f);
                } else {
                    idx = j + (255 - j) * std::max(lv - 65, 0.0f) / 64;
                }
                idx = std::clamp(idx, 0.0f, 255.0f);
                const int i0 = (int)idx;
                const float a = idx - i0;
                const float* e = lut + 3 * i0;
                auto ch = [&](int k) { return (uint32_t)std::min(e[k] + (e[k + 3] - e[k]) * a + 0.5f, 255.0f); };
                o[px] = 0xFF000000u | ch(0) << 16 | ch(1) << 8 | ch(2);
            }
        }
    };
    inBands(h, w * h >= 200000, rows);
}

}  // namespace tunnel
