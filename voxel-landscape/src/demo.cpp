#include "demo.h"

#include <algorithm>
#include <cmath>

namespace vl {

namespace {

constexpr int N = 256, MASK = N - 1;
constexpr int kWater = 70;               // water level (heights 0-255)
constexpr int kSky = 192;                // palette 192-255: sky gradient, top to horizon
constexpr float kFov = 1.1f;             // radians across the screen
constexpr float kFar = 420;              // view distance in map cells
constexpr float kScale = 120;            // height -> screen projection

uint32_t argb(float r, float g, float b) {
    auto c = [](float v) { return (uint32_t)std::clamp((int)std::lround(v * 255), 0, 255); };
    return 0xFF000000u | c(r) << 16 | c(g) << 8 | c(b);
}

// A small deterministic random generator, so the landscape is the same every run.
uint32_t rng_state = 0x1234567;
int rnd(int range) {
    rng_state = rng_state * 1103515245u + 12345u;
    return (int)((rng_state >> 8) % (2 * range + 1)) - range;
}

}  // namespace

Demo::Demo() : screen_(W * H), height_(N * N), colour_(N * N) {
    // Heightmap: diamond-square (midpoint displacement) on a wrapping 256x256 grid.
    std::vector<int> h(N * N, 0);
    auto at = [&](int x, int y) -> int& { return h[(y & MASK) * N + (x & MASK)]; };
    at(0, 0) = 128;
    for (int step = N, amp = 128; step > 1; step /= 2, amp = amp * 52 / 100) {
        const int half = step / 2;
        for (int y = 0; y < N; y += step)  // diamond: centres of squares
            for (int x = 0; x < N; x += step)
                at(x + half, y + half) = (at(x, y) + at(x + step, y) + at(x, y + step) + at(x + step, y + step)) / 4 + rnd(amp);
        for (int y = 0; y < N; y += half)  // square: edge midpoints
            for (int x = (y / half % 2 == 0) ? half : 0; x < N; x += step)
                at(x, y) = (at(x - half, y) + at(x + half, y) + at(x, y - half) + at(x, y + half)) / 4 + rnd(amp);
    }
    // Normalise to 0-255 and smooth once, then flatten everything below the water level.
    const auto [mn, mx] = std::minmax_element(h.begin(), h.end());
    std::vector<int> s(N * N);
    for (int y = 0; y < N; y++)
        for (int x = 0; x < N; x++) {
            int sum = 0;
            for (int dy = -1; dy <= 1; dy++)
                for (int dx = -1; dx <= 1; dx++) sum += (at(x + dx, y + dy) - *mn) * 255 / std::max(1, *mx - *mn);
            s[y * N + x] = sum / 9;
        }
    for (int i = 0; i < N * N; i++) height_[i] = (uint8_t)std::max(s[i], kWater);

    // Colour map: 4 bands of 16 shades (water, sand/grass, rock, snow), shaded by the slope
    // towards the light (from the west: left neighbour higher = darker).
    for (int y = 0; y < N; y++)
        for (int x = 0; x < N; x++) {
            const int hh = s[y * N + x];
            const int slope = s[y * N + ((x - 1) & MASK)] - s[y * N + ((x + 1) & MASK)];
            int band, shade;
            if (hh <= kWater) { band = 0; shade = 8 + std::clamp((kWater - hh) / -6 + 4, -6, 6); }  // deeper = darker
            else {
                band = hh < 140 ? 1 : hh < 195 ? 2 : 3;
                shade = std::clamp(8 - slope / 2, 0, 15);
            }
            colour_[y * N + x] = (uint8_t)(band * 16 + shade);
        }

    // Palette: the 4 bands, then 3 fog levels mixing towards the horizon colour.
    const float base[4][3] = {{0.10f, 0.30f, 0.60f}, {0.25f, 0.55f, 0.18f}, {0.50f, 0.42f, 0.32f}, {0.92f, 0.94f, 1.0f}};
    const float fog[3] = {0.80f, 0.85f, 0.95f};
    for (int f = 0; f < 3; f++) {
        const float m = f * 0.33f;  // fog amount
        for (int b = 0; b < 4; b++)
            for (int k = 0; k < 16; k++) {
                const float l = 0.35f + 0.65f * k / 15;
                float c[3];
                for (int i = 0; i < 3; i++) c[i] = base[b][i] * l * (1 - m) + fog[i] * m;
                if (b == 1 && k < 4) for (int i = 0; i < 3; i++) c[i] = c[i] * 0.6f + 0.35f * (1 - m) * (i < 2);  // beach tint
                pal_[f * 64 + b * 16 + k] = argb(c[0], c[1], c[2]);
            }
    }
    for (int k = 0; k < 64; k++) {  // sky: deep blue at the top to the haze at the horizon
        const float f = k / 63.0f;
        pal_[kSky + k] = argb(0.15f + 0.65f * f * f, 0.30f + 0.55f * f, 0.65f + 0.30f * f);
    }
}

// One frame of the landscape. horizon is the screen row of the horizon (pitch), bank tilts it
// (rows per column, from the centre).
void Demo::render(float cx, float cy, float angle, float height, float horizon, float bank) {
    // Sky: a gradient by distance below the (banked) horizon line... drawn per column, since
    // the terrain overwrites it below anyway.
    for (int x = 0; x < W; x++) {
        const float hz = horizon + (x - W / 2) * bank;
        for (int y = 0; y < H; y++) {
            const int k = std::clamp(63 - (int)((hz - y) * 0.5f), 0, 63);
            screen_[y * W + x] = (uint8_t)(kSky + k);
        }
    }
    for (int x = 0; x < W; x++) {
        const float a = angle + (x - W / 2) * (kFov / W);
        const float dx = std::cos(a), dy = std::sin(a);
        // Correct the fisheye: distances along the view direction, not the ray.
        const float fish = std::cos(a - angle);
        const float hz = horizon + (x - W / 2) * bank;
        int ybuf = H;  // lowest row still free in this column
        float z = 1;
        for (float dz = 0.5f; z < kFar && ybuf > 0; z += dz, dz *= 1.012f) {
            const int mx = (int)std::floor(cx + dx * z) & MASK, my = (int)std::floor(cy + dy * z) & MASK;
            const int i = my * N + mx;
            const int y = (int)((height - height_[i]) * kScale / (z * fish) + hz);
            if (y < ybuf) {
                const int f = z < kFar * 0.35f ? 0 : z < kFar * 0.65f ? 1 : 2;  // fog level
                const uint8_t c = (uint8_t)(f * 64 + colour_[i]);
                for (int yy = std::max(y, 0); yy < ybuf; yy++) screen_[yy * W + x] = c;
                ybuf = std::max(y, 0);
            }
        }
    }
}

void Demo::frame() {
    if (paused) return;
    t_++;
    const float t = t_ / 70.0f;
    // The flight: a wandering path over the wrapping map; the camera keeps a height above the
    // ground ahead, pitches the horizon with the climb and banks into the turns.
    const float angle = t * 0.25f + 0.6f * std::sin(t * 0.37f);
    const float turn = 0.25f + 0.6f * 0.37f * std::cos(t * 0.37f);  // d(angle)/dt
    const float cx = 40 * t * std::cos(t * 0.05f) + 100, cy = 40 * t * std::sin(t * 0.05f) + 60;
    float ground = 0;  // the highest ground under the camera and up to 80 cells ahead
    for (int k = 0; k <= 80; k += 8) {
        const int px = (int)(cx + std::cos(angle) * k) & MASK, py = (int)(cy + std::sin(angle) * k) & MASK;
        ground = std::max(ground, (float)height_[py * N + px] - k * 0.25f);  // farther counts a little less
    }
    cam_h_ += ((ground + 40) - cam_h_) * 0.05f;  // ease towards the target height
    const float cam_h = cam_h_;
    const float horizon = 70 + 20 * std::sin(t * 0.5f);
    render(cx, cy, angle, cam_h, horizon, -0.25f * (turn - 0.25f));
}

void Demo::to_argb(uint32_t* out) const {
    for (int i = 0; i < W * H; i++) out[i] = pal_[screen_[i]];
}

}  // namespace vl
