// The bottom of the pool, the light table and the palette, the small waves,
// the intro's drops (part 8 up to T 8), the pool and its caustics.
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iterator>
#include <condition_variable>
#include <functional>
#include <mutex>
#include <random>
#include <thread>
#include <type_traits>

#include "pool.h"

namespace piscina {

namespace {

constexpr double kTwoPi = 6.283185307179586;

// The precalculation's generator; the new seed's high half (signed)
inline uint32_t next(uint32_t& seed) {
    seed = seed * 0x15A4E35u + 1;
    return (uint32_t)((int32_t)seed >> 16);
}

// The worker threads, started once and kept waiting: starting them for each
// band of every frame costs more than some of the bands take.
class Workers {
public:
    static Workers& get() {
        static Workers w;
        return w;
    }
    int size() const { return (int)threads_.size() + 1; }
    // JOB(b) for b = 0..N-1 (N up to size()), b 0 in this thread
    void run(int n, const std::function<void(int)>& job) {
        std::lock_guard<std::mutex> one(dispatch_);
        n = std::clamp(n, 1, size());
        {
            std::lock_guard<std::mutex> l(m_);
            job_ = &job, n_ = n, left_ = n - 1, gen_++;
        }
        wake_.notify_all();
        job(0);
        std::unique_lock<std::mutex> l(m_);
        done_.wait(l, [&] { return left_ == 0; });
        job_ = nullptr;
    }

private:
    Workers() {
        const int n = (int)std::clamp(std::thread::hardware_concurrency(), 1u, 64u);
        for (int i = 1; i < n; i++) threads_.emplace_back([this, i] { loop(i); });
    }
    ~Workers() {
        {
            std::lock_guard<std::mutex> l(m_);
            quit_ = true;
        }
        wake_.notify_all();
        for (std::thread& t : threads_) t.join();
    }
    void loop(int b) {
        uint64_t seen = 0;
        for (;;) {
            std::unique_lock<std::mutex> l(m_);
            wake_.wait(l, [&] { return quit_ || gen_ != seen; });
            if (quit_) return;
            seen = gen_;
            if (b >= n_) continue;
            const std::function<void(int)>* job = job_;
            l.unlock();
            (*job)(b);
            l.lock();
            if (--left_ == 0) done_.notify_one();
        }
    }
    std::vector<std::thread> threads_;
    std::mutex dispatch_, m_;
    std::condition_variable wake_, done_;
    const std::function<void(int)>* job_ = nullptr;
    int n_ = 0, left_ = 0;
    uint64_t gen_ = 0;
    bool quit_ = false;
};

int bands(bool threaded) { return threaded ? Workers::get().size() : 1; }

// ROWS(from, to) over rows 0..H, in bands, one per thread (or in this one).
// BAND(b, from, to) is told which band it is (0..bands(threaded)-1).
template <class F>
void inBandsNumbered(int h, bool threaded, const F& band) {
    const int n = bands(threaded);
    if (n == 1) return band(0, 0, h);
    Workers::get().run(n, [&](int b) { band(b, h * b / n, h * (b + 1) / n); });
}

template <class F>
void inBands(int h, bool threaded, const F& rows) {
    inBandsNumbered(h, threaded, [&](int, int from, int to) { rows(from, to); });
}

}  // namespace

// --- the bottom of the pool ---------------------------------------------------------------

namespace {

// One level of the intro's diamond-square fractal on a 256 x 256 tile
// (wrapping), kept fractional: the points HALF apart between those already
// there, first the centres of their squares, then the sides, each the mean
// of its four neighbours plus a random part (scaled by AMP), clamped to
// 0..255. The tiles take it for the glaze's faint mottling.
void plasmaLevel(uint32_t& seed, float* t, int32_t half, int32_t amp) {
    auto at = [&](int32_t x, int32_t y) -> float& { return t[(y & 255) << 8 | (x & 255)]; };
    auto put = [&](int32_t x, int32_t y, float sum, int32_t mul) {
        const int32_t r = (int32_t)next(seed) * mul * amp >> 17;
        at(x, y) = std::clamp((sum + (float)r) * 0.25f, 0.0f, 255.0f);
    };
    const int32_t step = 2 * half;
    for (int32_t y = 0; y < 256; y += step)          // the centres
        for (int32_t x = 0; x < 256; x += step)
            put(x + half, y + half, at(x, y) + at(x + step, y) + at(x + step, y + step) + at(x, y + step), 3);
    for (int32_t y = 0; y < 256; y += step)          // the sides
        for (int32_t x = 0; x < 256; x += step) {
            put(x, y + half, at(x, y) + at(x, y + step) + at(x + half, y + half) + at(x - half, y + half), 2);
            put(x + half, y, at(x, y) + at(x + step, y) + at(x + half, y + half) + at(x + half, y - half), 2);
        }
}

// the intro's first fractal (seed 12345678h, strength 2710h)
std::vector<float> fractal() {
    std::vector<float> t(0x10000);
    uint32_t seed = 0x12345678, amp = 0x2710;
    t[0] = (float)(next(seed) & 0xFF);
    for (int32_t half = 0x80; half; half >>= 1, amp = (uint32_t)((int32_t)amp >> 1))
        plasmaLevel(seed, t.data(), half, (int32_t)amp);
    return t;
}

// The tiles: a mosaic of 8 texels square (32 to the 256 tile, so they wrap
// with it), with grout a texel wide between them. Palette indices: the
// tiles aqua (about 156), each a little lighter or darker than the next,
// the grout pale (205), and four columns of dark blue tiles (58), the lane
// line, down the middle of the screen. The tile's rim, where its glaze rounds off
// into the grout, a little darker; over all of it the fractal's faint
// mottling.
constexpr float kTile = 8, kGrout = 0.5f, kRim = 1.0f;
constexpr int kLane0 = 18, kLane1 = 21;         // texels 144-176: the screen's middle
constexpr float kAqua = 156, kLaneBlue = 58, kGroutPale = 205;

uint32_t tileHash(int x, int y) {
    uint32_t h = (uint32_t)x * 0x9E3779B1u ^ (uint32_t)y * 0x85EBCA77u;
    h ^= h >> 15, h *= 0x2C1B3C6Du, h ^= h >> 12;
    return h;
}

// the bottom at (X, Y), texels of the 256 tile; M the mottling there (0-255)
float bottom(float x, float y, float m) {
    const float tx = std::floor(x / kTile), ty = std::floor(y / kTile);
    const float fx = x - tx * kTile, fy = y - ty * kTile;
    const float d = std::min(std::min(fx, kTile - fx), std::min(fy, kTile - fy));   // to the tile's edge
    const float mottle = (m - 128) * 0.06f;
    if (d < kGrout) return kGroutPale + mottle * 0.3f;
    const int cx = (int)tx & 31, cy = (int)ty & 31;
    const bool lane = cx >= kLane0 && cx <= kLane1;
    float v = (lane ? kLaneBlue : kAqua) + (float)((int)(tileHash(cx, cy) % 13) - 6) * 1.2f + mottle;
    if (d < kGrout + kRim) v -= 10 * (1 - (d - kGrout) / kRim);
    return v;
}

}  // namespace

// The bottom at 256x256 (the grid mapper's tile) and 512x512 (the 32-bit
// picture's, twice the detail): each texel the mean of 4x4 samples of the
// tiles, so their edges are smooth.
void Pool::makeTiles() {
    const std::vector<float> m = fractal();
    auto mottle = [&](float x, float y) {   // bilinear, wrapping
        const float fx = std::floor(x), fy = std::floor(y), ax = x - fx, ay = y - fy;
        const int x0 = (int)fx & 255, y0 = (int)fy & 255, x1 = (x0 + 1) & 255, y1 = (y0 + 1) & 255;
        const float t0 = m[y0 << 8 | x0] + (m[y0 << 8 | x1] - m[y0 << 8 | x0]) * ax;
        const float t1 = m[y1 << 8 | x0] + (m[y1 << 8 | x1] - m[y1 << 8 | x0]) * ax;
        return t0 + (t1 - t0) * ay;
    };
    auto make = [&](std::vector<uint8_t>& t, int size) {
        const float k = 256.0f / size;     // texels of the 256 tile per texel
        const int shift = size == 512 ? 9 : 8;
        t.resize((size_t)size * size);
        inBands(size, true, [&](int from, int to) {
            for (int y = from; y < to; y++)
                for (int x = 0; x < size; x++) {
                    float sum = 0;
                    for (int sy = 0; sy < 4; sy++)
                        for (int sx = 0; sx < 4; sx++) {
                            const float px = (x + (sx + 0.5f) / 4) * k, py = (y + (sy + 0.5f) / 4) * k;
                            sum += bottom(px, py, mottle(px, py));
                        }
                    t[(size_t)y << shift | x] = (uint8_t)std::lround(std::clamp(sum / 16, 0.0f, 255.0f));
                }
        });
    };
    make(tex_, 256);
    make(tex512_, 512);
}

void Pool::setTiles(int size) { tiles_ = size == 256 ? 256 : 512; }

// The light table, a row per step S = level - 65 (0-64): the texel J goes
// to J + (255 - J) S / 64 towards white (S 0: J as it is, 64: white), as
// the intro's rows 65-129: the sky's reflection on the crests.
void Pool::makeLightTable() {
    for (int32_t s = 0; s < kRows; s++)
        for (int32_t j = 0; j < 0x100; j++) light_[s * 0x100 + j] = (uint8_t)(j + ((0xFF - j) * s >> kShift));
}

// The pool's palette: a ramp, black - lane blue - deep aqua - the tiles'
// aqua - pale cyan - white, so a higher index is a brighter colour, as the
// light table and the caustics need (they move an index towards 255 or 0).
// 6-bit, as the DAC; unrounded for the 32-bit picture.
void Pool::palette(float t) {
    static bool made = false;
    static float ramp[768];
    if (!made) {
        struct Key {
            int at;
            float r, g, b;
        };
        const Key keys[] = {{0, 0, 0, 0},       {50, 1, 7, 20},     {110, 4, 26, 42},
                            {160, 12, 44, 55},  {210, 40, 59, 62},  {255, 63, 63, 63}};
        for (size_t k = 0; k + 1 < std::size(keys); k++) {
            const Key &a = keys[k], &b = keys[k + 1];
            for (int i = a.at; i <= b.at; i++) {
                const float f = (float)(i - a.at) / (b.at - a.at);
                ramp[3 * i] = a.r + (b.r - a.r) * f, ramp[3 * i + 1] = a.g + (b.g - a.g) * f,
                ramp[3 * i + 2] = a.b + (b.b - a.b) * f;
            }
        }
        made = true;
    }
    std::memcpy(palF_, ramp, sizeof palF_);
    for (int i = 0; i < 768; i++) pal_[i] = (uint8_t)std::lround(ramp[i]);
    // in from white over T 0-1, in 64 steps as the intro's fades
    const float k = std::round(std::clamp(t, 0.0f, 1.0f) * 64) / 64;
    for (int i = 0; i < 768; i++) {
        dacF_[i] = palF_[i] * k + 63 * (1 - k);
        dac_[i] = (uint8_t)std::lround(dacF_[i]);
    }
}

// --- the small waves ----------------------------------------------------------------------------

// Ten trains of waves, 22 to 55 texels long (a texel about 6 mm: the
// screen is 2 m of pool across, a tile 5 cm): seven from the wind's
// direction, spread over 100 degrees, and three across them (reflected from
// a wall). Each is 0.25 steep (k s: the bottom moves by s cos at a wave
// number k; it is the wave's slope times the depth, over the water's 4/3),
// so one alone would focus the light past the bottom; where several crests
// meet, their curvature adds up and focuses it on the bottom, in lines.
// Short waves move the bottom little (s, 1-2 texels each) and focus as
// well as long ones: in a pool the tiles barely wobble while the light
// runs over them. Deep-water waves: the speed is sqrt(g / k), here slowed
// to half, a calm pool.
void Pool::makeWaves() {
    std::mt19937 rng(2026);
    std::uniform_real_distribution<double> u(0, 1);
    constexpr double g = 9.81 * 160;           // texels / s^2
    constexpr double kSteep = 0.25, kWind = 0.7;
    waves_.clear();
    for (int i = 0; i < 10; i++) {
        const double len = 22 + 33 * u(rng);
        const double dir = i < 7 ? kWind + (u(rng) - 0.5) * 1.75 : kWind + kTwoPi / 4 + (u(rng) - 0.5) * 0.6;
        const double k = kTwoPi / len, s = kSteep / k;
        Wave w;
        w.kx = (float)(k * std::cos(dir)), w.ky = (float)(k * std::sin(dir));
        w.sx = (float)(s * std::cos(dir)), w.sy = (float)(s * std::sin(dir));
        w.omega = 0.5 * std::sqrt(g * k);
        w.phase = kTwoPi * u(rng);
        waves_.push_back(w);
    }
}

namespace {

// The waves along one axis of a sampling (N points, FIRST + i STEP texels):
// cos and sin of each wave's phase there, for cos(A + B) = cos A cos B -
// sin A sin B. Along x the wave number alone; along y, with the time.
// The phase is taken modulo 2 pi in doubles, as the time grows.
struct Axis {
    int n = 0;
    std::vector<float> c, s;    // [wave * n + i]
};

void axis(const std::vector<Wave>& waves, bool alongX, double first, double step, int n, double sec, Axis& a) {
    a.n = n;
    a.c.resize(waves.size() * n), a.s.resize(waves.size() * n);
    for (size_t j = 0; j < waves.size(); j++) {
        const Wave& w = waves[j];
        const double k = alongX ? w.kx : w.ky, ph = alongX ? 0 : std::fmod(w.phase - w.omega * sec, kTwoPi);
        for (int i = 0; i < n; i++) {
            const double p = k * (first + i * step) + ph;
            a.c[j * n + i] = (float)std::cos(p), a.s[j * n + i] = (float)std::sin(p);
        }
    }
}

// where the waves move the bottom seen at column I of AX and row J of AY,
// texels, times STRENGTH
inline void waveShift(const std::vector<Wave>& waves, const Axis& ax, int i, const Axis& ay, int j, float strength,
                      float& du, float& dv) {
    float u = 0, v = 0;
    for (size_t k = 0; k < waves.size(); k++) {
        const float c = ax.c[k * ax.n + i] * ay.c[k * ay.n + j] - ax.s[k * ax.n + i] * ay.s[k * ay.n + j];
        u += waves[k].sx * c, v += waves[k].sy * c;
    }
    du = u * strength, dv = v * strength;
}

}  // namespace

// --- the light on the bottom -------------------------------------------------------------------

float Caustics::at(float u, float v) const {
    if (!on) return 1;
    const float fx = std::clamp((u - kCX) / kCell - 0.5f, 0.0f, kCW - 1.001f);
    const float fy = std::clamp((v - kCY) / kCell - 0.5f, 0.0f, kCH - 1.001f);
    const int x = (int)fx, y = (int)fy;
    const float ax = fx - x, ay = fy - y;
    const float* p = map.data() + (size_t)y * kCW + x;
    const float t0 = p[0] + (p[1] - p[0]) * ax, t1 = p[kCW] + (p[kCW + 1] - p[kCW]) * ax;
    return t0 + (t1 - t0) * ay;
}

namespace {

// A texel J of the bottom under the light E (1 at rest): darker where less
// light falls (towards black, by half at most), towards white where it
// gathers, the more the brighter but never past it (1 - e^-x). Light up to
// 1.5 times is left as it is, so the bottom between the lines stays the
// tiles' colour; a line five times the light is half way to white, ten
// times nearly white.
constexpr float kShadow = 0.5f, kKnee = 1.5f, kGain = 0.2f, kGlow = 0.95f;
inline float lit(float j, float e) {
    const float dark = std::clamp(1 - e, 0.0f, 1.0f) * kShadow;
    const float glow = (1 - std::exp(-std::max(e - kKnee, 0.0f) * kGain)) * kGlow;
    j *= 1 - dark;
    return j + (255 - j) * glow;
}

}  // namespace

// --- the intro's frame ------------------------------------------------------------------------

void Pool::frame(int32_t clock) {
    const float T = (float)(X(clock) / kUnit);
    palette(T);
    bubbles(T);
    // from 16.16 to 8.24, as the intro has them (times 4096)
    for (Point& p : grid_) p.u *= 4096, p.v *= 4096, p.light *= 4096;
    gridMap();
    caustics_.on = false;
    fieldFromGrid();
}

// --- the pool --------------------------------------------------------------------------------

std::vector<Drop> Pool::introDrops() {
    // centres (20, 12), (10, 7), (27, 9); the second and third rings
    // start 10 and 18 cells behind, at T 1.25 and 2.25
    return {{20, 12, 0, true}, {10, 7, 1.25f, false}, {27, 9, 2.25f, false}};
}

namespace {
// a ring's radius, and the fade once it has left the screen (cells)
constexpr float kFadeFrom = 56, kFadeTo = 80;
}  // namespace

bool Pool::dropDone(const Drop& d, float t) { return 8 * (t - d.t) >= kFadeTo; }

namespace {

// The water at a point (cells across and down, fractional allowed): u and v
// in 16.16 (a cell is 8000h), the light (3F000h at rest).
template <class T>
struct Uvl {
    T u, v, light;
};

// The intro's ring for each drop (bubbles()), in doubles for the grid, in
// floats for the water at each pixel and the photons: inside the ring (A =
// distance - radius < 0) a point is pushed out from the centre by sin(A) S
// times its distance, S = 2048 · 8 / (8 - A) for the first drop and
// 2730.67 · 4 / (4 - A) for the others: the ring's front strongest, the
// ripples behind it dying out. The light rises by max(cos A, 0) · S · 50.
// EDGE: the width (cells) over which the light comes in at the ring's
// front, for an edge without steps (0: at once).
template <class T>
Uvl<T> water(T gx, T gy, float t, const std::vector<Drop>& drops, T edge = 0) {
    Uvl<T> w = {gx * 32768, gy * 32768, 258048};
    for (const Drop& d : drops) {
        const T r = 8 * ((T)t - d.t);
        if (r <= 0) continue;
        const T dx = gx - d.x, dy = gy - d.y;
        const T a = std::sqrt(dx * dx + dy * dy) - r;
        if (a > 0) continue;
        T s = d.first ? 2048 * 8 / (8 - a) : (T)2730.666666666666 * 4 / (4 - a);
        if (r > kFadeFrom) s *= (kFadeTo - r) / (kFadeTo - kFadeFrom);
        const T g = std::sin(a) * s;
        w.u += dx * g, w.v += dy * g;
        const T in = edge > 0 ? std::min(-a / edge, (T)1) : 1;
        w.light += std::max(std::cos(a), (T)0) * s * 50 * in;
    }
    w.light = std::min(w.light, (T)((kTop << 12) + 4095));   // the last level
    return w;
}

}  // namespace

// The caustics. The sun is taken overhead, behind the viewer: its rays go
// down through the surface as the eye's do, and are bent by the same slope,
// so a ray that enters the water at a point lands where the eye, looking
// down there, sees the bottom (the water's u and v, drops and waves). A
// photon is sent from every quarter texel of the surface and added where it
// lands; where the waves bend neighbouring rays together, the light
// gathers. The photons are found and added up in bands of rows, one per
// thread, each into its own map; the maps are then summed, and blurred, in
// bands of the map's rows.
void Pool::causticsPass(float t, const std::vector<Drop>& drops) {
    Caustics& c = caustics_;
    constexpr int pw = Caustics::kPW, ph = Caustics::kPH, cw = Caustics::kCW, ch = Caustics::kCH;
    c.pu.resize((size_t)pw * ph), c.pv.resize((size_t)pw * ph);
    c.map.resize((size_t)cw * ch), c.tmp.resize((size_t)cw * ch);
    const int nb = bands(true);
    c.band.resize(nb), c.lo.assign(nb, ch), c.hi.assign(nb, -1);
    const double sec = seconds(t);
    Axis ax, ay;
    axis(waves_, true, Caustics::kPX, Caustics::kSpacing, pw, sec, ax);
    axis(waves_, false, Caustics::kPY, Caustics::kSpacing, ph, sec, ay);
    inBandsNumbered(ph, true, [&](int b, int from, int to) {
        int lo = ch, hi = -1;   // the map's rows this band's photons reach
        for (int j = from; j < to; j++)
            for (int i = 0; i < pw; i++) {
                const float x = Caustics::kPX + i * Caustics::kSpacing, y = Caustics::kPY + j * Caustics::kSpacing;
                const Uvl<float> q = water<float>(x / 8, y / 8, t, drops);
                float du, dv;
                waveShift(waves_, ax, i, ay, j, ripples_, du, dv);
                const size_t k = (size_t)j * pw + i;
                c.pu[k] = q.u / 4096 + du, c.pv[k] = q.v / 4096 + dv;
                const float fy = (c.pv[k] - Caustics::kCY) / Caustics::kCell - 0.5f;
                if (fy >= 0 && fy < ch - 1) lo = std::min(lo, (int)fy), hi = std::max(hi, (int)fy + 1);
            }
        // each photon between its four nearest cells; at rest a cell gets 4
        std::vector<float>& bm = c.band[b];
        bm.resize((size_t)cw * ch);
        if (hi < lo) return;
        std::fill(bm.begin() + (size_t)lo * cw, bm.begin() + (size_t)(hi + 1) * cw, 0.0f);
        c.lo[b] = lo, c.hi[b] = hi;
        float* m = bm.data();
        for (size_t k = (size_t)from * pw; k < (size_t)to * pw; k++) {
            const float fx = (c.pu[k] - Caustics::kCX) / Caustics::kCell - 0.5f;
            const float fy = (c.pv[k] - Caustics::kCY) / Caustics::kCell - 0.5f;
            if (!(fx >= 0 && fx < cw - 1 && fy >= 0 && fy < ch - 1)) continue;
            const int x = (int)fx, y = (int)fy;
            const float ax1 = fx - x, ay1 = fy - y, ax0 = 1 - ax1, ay0 = 1 - ay1;
            float* p = m + (size_t)y * cw + x;
            p[0] += ax0 * ay0, p[1] += ax1 * ay0, p[cw] += ax0 * ay1, p[cw + 1] += ax1 * ay1;
        }
    });
    // the bands' maps summed, and the sun's disc: [1 2 1] across, then
    // down; and from photons to light
    float* m = c.map.data();
    float* q = c.tmp.data();
    inBands(ch, true, [&](int from, int to) {
        for (int y = from; y < to; y++) {
            float* r = m + (size_t)y * cw;
            std::fill(r, r + cw, 0.0f);
            for (int b = 0; b < nb; b++)
                if (y >= c.lo[b] && y <= c.hi[b]) {
                    const float* s = c.band[b].data() + (size_t)y * cw;
                    for (int x = 0; x < cw; x++) r[x] += s[x];
                }
            float* o = q + (size_t)y * cw;
            for (int x = 0; x < cw; x++)
                o[x] = (r[std::max(x - 1, 0)] + 2 * r[x] + r[std::min(x + 1, cw - 1)]) * 0.25f;
        }
    });
    constexpr float kNorm = Caustics::kSpacing * Caustics::kSpacing / (Caustics::kCell * Caustics::kCell);
    inBands(ch, true, [&](int from, int to) {
        for (int y = from; y < to; y++) {
            const float *a = q + (size_t)std::max(y - 1, 0) * cw, *b = q + (size_t)y * cw,
                        *d = q + (size_t)std::min(y + 1, ch - 1) * cw;
            float* o = m + (size_t)y * cw;
            for (int x = 0; x < cw; x++) o[x] = (a[x] + 2 * b[x] + d[x]) * (0.25f * kNorm);
        }
    });
    c.on = true;
}

// The 256-colour picture lit: each pixel's index, under the light where its
// photon landed (the photons start at every quarter texel, so every pixel
// of 320x200 has one), rounded to an index again.
void Pool::causticsToScreen() {
    const Caustics& c = caustics_;
    for (int y = 0; y < H; y++)
        for (int x = 0; x < W; x++) {
            const size_t k = (size_t)(4 * y + 64) * Caustics::kPW + (4 * x + 64);
            uint8_t& s = screen_[y * W + x];
            s = (uint8_t)std::lround(std::clamp(lit(s, c.at(c.pu[k], c.pv[k])), 0.0f, 255.0f));
        }
}

void Pool::pondFrame(float t, const std::vector<Drop>& drops, int w, int h) {
    palette(t);
    const double sec = seconds(t);
    // the grid: the drops' water and the waves
    Axis gx8, gy8;
    axis(waves_, true, 0, 8, kGridW, sec, gx8);
    axis(waves_, false, 0, 8, kGridH, sec, gy8);
    for (int gy = 0; gy < kGridH; gy++)
        for (int gx = 0; gx < kGridW; gx++) {
            const Uvl<double> q = water<double>(gx, gy, t, drops);
            float du, dv;
            waveShift(waves_, gx8, gx, gy8, gy, ripples_, du, dv);
            // in 8.24, as the intro has them: times 4096 (texels: times 2^24)
            // (they wrap at 256 texels, 2^32, as the mapper's do)
            grid_[gy * kGridW + gx] = {(uint32_t)std::llround(q.u * 4096 + du * 16777216.0),
                                       (uint32_t)std::llround(q.v * 4096 + dv * 16777216.0),
                                       (uint32_t)(int32_t)std::lround(q.light) << 12};
        }
    gridMap();
    if (causticsOn_) {
        causticsPass(t, drops);
        causticsToScreen();
    } else {
        caustics_.on = false;
    }
    if (w <= 0 || h <= 0) {
        fieldFromGrid();
        return;
    }
    // The water at each pixel's centre: the ring's front is a step in the
    // light, which interpolated between points further apart shows as a
    // zigzag. Here the step is spread over a pixel. 16.16 / 4096 is texels
    // (u, v) and levels (the light).
    Field& f = field_;
    f.nx = w, f.ny = h, f.cx = (double)W / w, f.cy = (double)H / h, f.ox = f.cx / 2 - 0.5, f.oy = f.cy / 2 - 0.5;
    f.u.resize((size_t)w * h), f.v.resize((size_t)w * h), f.l.resize((size_t)w * h);
    Axis ax, ay;
    axis(waves_, true, f.ox, f.cx, w, sec, ax);
    axis(waves_, false, f.oy, f.cy, h, sec, ay);
    const float edge = (float)(f.cx / 8);   // a pixel
    auto rows = [&](int from, int to) {
        for (int j = from; j < to; j++)
            for (int i = 0; i < w; i++) {
                const size_t k = (size_t)j * w + i;
                const Uvl<float> q = water<float>((float)((f.ox + i * f.cx) / 8), (float)((f.oy + j * f.cy) / 8), t, drops, edge);
                float du, dv;
                waveShift(waves_, ax, i, ay, j, ripples_, du, dv);
                f.u[k] = q.u / 4096 + du, f.v[k] = q.v / 4096 + dv, f.l[k] = q.light / 4096;
            }
    };
    inBands(h, w * h >= 200000, rows);
}

Pool::Pool() : tex_(0x10000), light_(kRows * 0x100), screen_(W * H) {
    makeTiles();
    makeLightTable();
    makeWaves();
    palette(0);     // white: the part before ends in white
    fieldFromGrid();
}

void Pool::toArgb(uint32_t* out) const {
    uint32_t lut[256];
    for (int i = 0; i < 256; i++) {
        auto c = [&](int k) { return (uint32_t)dac_[3 * i + k] * 255 / 63; };
        lut[i] = 0xFF000000u | c(0) << 16 | c(1) << 8 | c(2);
    }
    const uint8_t* s = screen();
    for (int i = 0; i < W * H; i++) out[i] = lut[s[i]];
}

// --- 32-bit colour --------------------------------------------------------------------------

// The water at the grid's points, from 8.24 to texels and levels. u and v
// wrap at 256 texels (2^32): each point is placed from its left neighbour
// (the first of a row from the one above) by their difference, so that
// they stay continuous to interpolate.
void Pool::fieldFromGrid() {
    Field& f = field_;
    f.cx = f.cy = 8, f.ox = f.oy = 0, f.nx = kGridW, f.ny = kGridH;
    f.u.resize(grid_.size()), f.v.resize(grid_.size()), f.l.resize(grid_.size());
    constexpr double k = 1.0 / 16777216.0;
    for (int i = 0; i < (int)grid_.size(); i++) {
        const Point& p = grid_[i];
        const int from = i % kGridW ? i - 1 : i - kGridW;
        if (from < 0) {
            f.u[i] = (int32_t)p.u * k, f.v[i] = (int32_t)p.v * k;
        } else {
            f.u[i] = f.u[from] + (int32_t)(p.u - grid_[from].u) * k;
            f.v[i] = f.v[from] + (int32_t)(p.v - grid_[from].v) * k;
        }
        f.l[i] = p.light * k;
    }
}

// The grid mapper's picture without its roundings, at any size. Each
// pixel's place on the 320x200 screen (its centre) is found in the water,
// whose u, v and light are interpolated between the points around it:
// from the grid bilinearly (at 320x200 the mapper's own positions), from
// pondFrame()'s finer water between the 4x4 around it (Catmull-Rom: the
// curve goes through the points, and its slope is continuous, so the waves
// show no facets between them). Then, kept fractional:
// - the tiles are sampled between their 4x4 nearest texels, also
//   Catmull-Rom; they wrap at 256, as the mapper's byte does;
// - the caustics light the texel, read where the pixel sees the bottom;
// - the light level is continuous: from 65 the texel J goes towards white
//   by (L - 65) / 64, as the table's rows; under 65, J as it is;
// - the palette index this gives is fractional too, read between two DAC
//   entries of the unrounded palette.
void Pool::toTrueColor(uint32_t* out, int w, int h) const {
    const bool big = tiles_ == 512;
    const uint8_t* tex = big ? tex512_.data() : texture();
    const int mask = big ? 511 : 255, shift = big ? 9 : 8;
    const float texScale = big ? 2.0f : 1.0f;
    const Field& f = field_;
    const Caustics& light = caustics_;
    float lut[257 * 3];                           // the DAC in 0-255 (the last entry repeated)
    for (int i = 0; i < 768; i++) lut[i] = dacF_[i] * (255.0f / 63.0f);
    for (int c = 0; c < 3; c++) lut[768 + c] = lut[765 + c];
    // Catmull-Rom's weights for the points before and after: at 0 the
    // second point, at 1 the third
    struct Cubic {
        float w[4];
    };
    auto cubic = [](float t) {
        const float t2 = t * t, t3 = t2 * t;
        return Cubic{{0.5f * (-t3 + 2 * t2 - t), 0.5f * (3 * t3 - 5 * t2 + 2), 0.5f * (-3 * t3 + 4 * t2 + t),
                      0.5f * (t3 - t2)}};
    };
    // a pixel's place in the field: its four points (clamped at the edges)
    // and their weights. The grid (8 pixels apart) is interpolated linearly,
    // as the mapper does: its rings are only a few points wide, and the
    // curve would overshoot them.
    const bool fine = f.cx < 8;
    struct Place {
        int at[4];
        Cubic c;
    };
    auto place = [&](int p, int size, int screen, int points, double first, double apart) {
        const double s = ((p + 0.5) * screen / size - 0.5 - first) / apart;
        const double c = std::clamp(s, 0.0, points - 1.0);
        const int i = std::min((int)c, points - 2);
        const float t = (float)(c - i);
        Place r{{}, fine ? cubic(t) : Cubic{{0, 1 - t, t, 0}}};
        for (int k = 0; k < 4; k++) r.at[k] = std::clamp(i - 1 + k, 0, points - 1);
        return r;
    };
    std::vector<Place> cols(w);
    for (int px = 0; px < w; px++) cols[px] = place(px, w, W, f.nx, f.ox, f.cx);
    auto rows = [&](int from, int to) {
        // one row of the field, interpolated down to this pixel row
        std::vector<float> u(f.nx), v(f.nx), l(f.nx);
        for (int py = from; py < to; py++) {
            const Place r = place(py, h, H, f.ny, f.oy, f.cy);
            for (int i = 0; i < f.nx; i++) {
                float su = 0, sv = 0, sl = 0;
                for (int k = 0; k < 4; k++) {
                    const int n = r.at[k] * f.nx + i;
                    su += f.u[n] * r.c.w[k], sv += f.v[n] * r.c.w[k], sl += f.l[n] * r.c.w[k];
                }
                u[i] = (float)su, v[i] = (float)sv, l[i] = (float)sl;
            }
            uint32_t* o = out + (size_t)py * w;
            for (int px = 0; px < w; px++) {
                const Place& c = cols[px];
                auto at = [&](const std::vector<float>& q) {
                    return q[c.at[0]] * c.c.w[0] + q[c.at[1]] * c.c.w[1] + q[c.at[2]] * c.c.w[2] +
                           q[c.at[3]] * c.c.w[3];
                };
                // the tiles, between their 4x4 nearest texels (u and v stay well within an int)
                const float U = at(u), V = at(v);
                const float tu = U * texScale - 0.5f, tv = V * texScale - 0.5f;
                const float fu = std::floor(tu), fv = std::floor(tv);
                const Cubic cu = cubic(tu - fu), cv = cubic(tv - fv);
                const int x = (int)fu - 1, y = (int)fv - 1;
                int xs[4];
                for (int k = 0; k < 4; k++) xs[k] = (x + k) & mask;
                float j = 0;
                for (int m = 0; m < 4; m++) {
                    const uint8_t* line = tex + (((y + m) & mask) << shift);
                    j += (line[xs[0]] * cu.w[0] + line[xs[1]] * cu.w[1] + line[xs[2]] * cu.w[2] +
                          line[xs[3]] * cu.w[3]) * cv.w[m];
                }
                j = std::clamp(j, 0.0f, 255.0f);   // Catmull-Rom overshoots a little at edges
                // the light on the bottom, then the sky on the crests, then
                // between two palette entries
                j = lit(j, light.at(U, V));
                const float up = std::clamp((at(l) - kHighlight) / kSteps, 0.0f, 1.0f);
                const float idx = std::clamp(j + (255 - j) * up, 0.0f, 255.0f);
                const int i0 = (int)idx;
                const float a = idx - i0;
                const float* e = lut + 3 * i0;
                auto ch = [&](int n) { return (uint32_t)std::min(e[n] + (e[n + 3] - e[n]) * a + 0.5f, 255.0f); };
                o[px] = 0xFF000000u | ch(0) << 16 | ch(1) << 8 | ch(2);
            }
        }
    };
    inBands(h, w * h >= 200000, rows);
}

}  // namespace piscina
