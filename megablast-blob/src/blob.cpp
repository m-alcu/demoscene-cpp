#include "blob.h"

#include <algorithm>
#include <cmath>

namespace mb {

namespace {

struct Vec { float x, y, z; };
Vec operator-(Vec a, Vec b) { return {a.x - b.x, a.y - b.y, a.z - b.z}; }
Vec cross(Vec a, Vec b) { return {a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x}; }
float dot(Vec a, Vec b) { return a.x * b.x + a.y * b.y + a.z * b.z; }
Vec norm(Vec a) {
    const float l = std::sqrt(dot(a, a));
    return l > 0 ? Vec{a.x / l, a.y / l, a.z / l} : Vec{0, 0, 1};
}

constexpr float kPi = 3.14159265358979f;
constexpr float kFocal = 285.0f;      // projection scale, pixels
constexpr float kDistance = 3.4f;     // eye to blob centre, in blob radii
constexpr float kAspect = 1.2f;       // mode 13h pixels are 1.2 times taller than wide
constexpr int kOne = 256;             // light units per layer at full glow

// Palette: black, through deep teal and cyan, to white. Control points (index, r, g, b).
const int kRamp[][4] = {
    {0, 0, 0, 0}, {40, 2, 26, 34}, {100, 6, 64, 80}, {160, 34, 130, 152},
    {205, 110, 200, 215}, {240, 215, 248, 252}, {255, 255, 255, 255},
};

}  // namespace

// The mesh is a cube-sphere: each face of a cube is split into a grid and pushed out onto the
// sphere. Unlike a latitude/longitude sphere it has no poles, so no fans of thin triangles.
Blob::Blob() : light(W * H), tmp(W * H), pixels(W * H) {
    for (int k = 0; k + 1 < (int)(sizeof kRamp / sizeof kRamp[0]); k++) {
        const int* a = kRamp[k];
        const int* b = kRamp[k + 1];
        for (int i = a[0]; i <= b[0]; i++) {
            const float f = (float)(i - a[0]) / (float)(b[0] - a[0]);
            auto ch = [&](int c) { return (uint32_t)std::lround(a[c] + (b[c] - a[c]) * f); };
            pal[i] = 0xff000000u | ch(1) << 16 | ch(2) << 8 | ch(3);
        }
    }
    // Vertices on the cube's edges are shared between faces: merge them by position.
    auto index_of = [&](Vec d) {
        for (size_t k = 0; k < dirs.size(); k += 3)
            if (std::fabs(dirs[k] - d.x) + std::fabs(dirs[k + 1] - d.y) + std::fabs(dirs[k + 2] - d.z) < 1e-5f)
                return (int)(k / 3);
        dirs.insert(dirs.end(), {d.x, d.y, d.z});
        return (int)(dirs.size() / 3 - 1);
    };
    const Vec axes[6][3] = {   // normal, u, v (u x v = normal, so all faces wind the same way)
        {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}},  {{-1, 0, 0}, {0, 0, 1}, {0, 1, 0}},
        {{0, 1, 0}, {0, 0, 1}, {1, 0, 0}},  {{0, -1, 0}, {1, 0, 0}, {0, 0, 1}},
        {{0, 0, 1}, {1, 0, 0}, {0, 1, 0}},  {{0, 0, -1}, {0, 1, 0}, {1, 0, 0}},
    };
    for (const auto& ax : axes) {
        std::vector<int> grid((kN + 1) * (kN + 1));
        for (int i = 0; i <= kN; i++)
            for (int j = 0; j <= kN; j++) {
                // tan spacing makes the grid nearly even once it is on the sphere
                const float u = std::tan((2.0f * i / kN - 1) * kPi / 4), v = std::tan((2.0f * j / kN - 1) * kPi / 4);
                const Vec c{ax[0].x + u * ax[1].x + v * ax[2].x, ax[0].y + u * ax[1].y + v * ax[2].y,
                            ax[0].z + u * ax[1].z + v * ax[2].z};
                grid[i * (kN + 1) + j] = index_of(norm(c));
            }
        for (int i = 0; i < kN; i++)
            for (int j = 0; j < kN; j++) {
                const int a = grid[i * (kN + 1) + j], b = grid[(i + 1) * (kN + 1) + j];
                const int c = grid[i * (kN + 1) + j + 1], d = grid[(i + 1) * (kN + 1) + j + 1];
                tris.insert(tris.end(), {a, b, d, a, d, c});
                edges.insert(edges.end(), {a, b, a, c});
            }
    }
    verts.resize(dirs.size() / 3);
}

// The shape: a sphere whose radius is pushed in and out by travelling waves over the direction.
// A slow, large wave bends it into lumps and folds; finer, faster ones make the ripples along
// its outline.
static float radius(Vec d, float t) {
    float r = 1.0f;
    r += 0.13f * std::sin(2.3f * d.x + 0.7f * t) * std::cos(2.1f * d.z - 0.9f * t + 1.1f * d.y);   // lumps
    r += 0.05f * std::sin(11.0f * d.y + 2.1f * t) * std::sin(10.0f * d.x - 1.3f * t + 7.0f * d.z);   // ripples
    r += 0.035f * std::sin(13.0f * d.z - 1.7f * t + 6.0f * d.x);
    return r;
}

static Vec surface(Vec d, float t) {
    const float r = radius(d, t);
    return {r * d.x, 1.18f * r * d.y, r * d.z};   // a little taller than wide
}

void Blob::build(double td) {
    const float t = (float)td;
    // Tumble slowly about all three axes.
    const float a = 0.37f * t, b = 0.23f * t + 0.4f, c = 0.11f * t;
    const float ca = std::cos(a), sa = std::sin(a), cb = std::cos(b), sb = std::sin(b), cc = std::cos(c),
                sc = std::sin(c);
    auto rot = [&](Vec v) {
        Vec u{v.x * ca + v.z * sa, v.y, v.z * ca - v.x * sa};   // about y
        u = {u.x, u.y * cb - u.z * sb, u.y * sb + u.z * cb};    // about x
        return Vec{u.x * cc - u.y * sc, u.x * sc + u.y * cc, u.z};   // about z
    };
    const float eps = 0.01f;
    for (size_t k = 0; k < verts.size(); k++) {
        const Vec d{dirs[3 * k], dirs[3 * k + 1], dirs[3 * k + 2]};
        const Vec p = surface(d, t);
        // normal: the surface stepped a little along two tangents
        const Vec t1 = norm(std::fabs(d.y) < 0.9f ? cross(d, Vec{0, 1, 0}) : cross(d, Vec{1, 0, 0}));
        const Vec t2 = cross(d, t1);
        auto at = [&](Vec e, float f) { return surface(norm({d.x + e.x * f, d.y + e.y * f, d.z + e.z * f}), t); };
        Vec n = norm(cross(at(t1, eps) - at(t1, -eps), at(t2, eps) - at(t2, -eps)));
        if (dot(n, p) < 0) n = {-n.x, -n.y, -n.z};
        const Vec q = rot(p), m = rot(n);
        const Vec eye = norm({-q.x, -q.y, -q.z - kDistance});
        // A glowing shell seen through: light per pixel grows as the surface turns edge-on.
        const float edge = 1.0f - std::fabs(dot(m, eye));
        const float glow = 0.2f + 0.8f * edge * std::sqrt(edge) * edge;
        const float z = q.z + kDistance;
        verts[k] = {W / 2 + q.x / z * kFocal, H / 2 - q.y / z * kFocal / kAspect, z, glow};
    }
}

// Adds a Gouraud-shaded triangle into the light buffer (every face, front or back).
void Blob::triangle(const V& a, const V& b, const V& c) {
    const float area = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
    if (std::fabs(area) < 1e-6f) return;
    const int x0 = std::max(0, (int)std::floor(std::min({a.x, b.x, c.x})));
    const int x1 = std::min(W - 1, (int)std::ceil(std::max({a.x, b.x, c.x})));
    const int y0 = std::max(0, (int)std::floor(std::min({a.y, b.y, c.y})));
    const int y1 = std::min(H - 1, (int)std::ceil(std::max({a.y, b.y, c.y})));
    const float inv = 1.0f / area;
    for (int y = y0; y <= y1; y++) {
        const float py = y + 0.5f;
        for (int x = x0; x <= x1; x++) {
            const float px = x + 0.5f;
            // barycentric weights; pixel centres exactly on a shared edge go to one side only
            const float wa = ((b.x - px) * (c.y - py) - (b.y - py) * (c.x - px)) * inv;
            const float wb = ((c.x - px) * (a.y - py) - (c.y - py) * (a.x - px)) * inv;
            const float wc = 1.0f - wa - wb;
            if (wa < 0 || wb < 0 || wc <= 0) continue;
            const float g = wa * a.glow + wb * b.glow + wc * c.glow;
            uint16_t& l = light[y * W + x];
            l = (uint16_t)std::min(65535, l + (int)(g * kOne));
        }
    }
}

void Blob::line(const V& a, const V& b) {
    const int n = (int)std::max(std::fabs(b.x - a.x), std::fabs(b.y - a.y)) + 1;
    for (int k = 0; k <= n; k++) {
        const float f = (float)k / n;
        const int x = (int)(a.x + (b.x - a.x) * f), y = (int)(a.y + (b.y - a.y) * f);
        if (x < 0 || x >= W || y < 0 || y >= H) continue;
        uint16_t& l = light[y * W + x];
        l = (uint16_t)std::min(65535, l + (int)((a.glow + (b.glow - a.glow) * f) * kOne));
    }
}

// 3x3 box blur of the light buffer.
void Blob::blur3() {
    for (int y = 0; y < H; y++)
        for (int x = 0; x < W; x++) {
            int s = 0;
            for (int dx = -1; dx <= 1; dx++) s += light[y * W + std::clamp(x + dx, 0, W - 1)];
            tmp[y * W + x] = (uint16_t)(s / 3);
        }
    for (int y = 0; y < H; y++)
        for (int x = 0; x < W; x++) {
            int s = 0;
            for (int dy = -1; dy <= 1; dy++) s += tmp[std::clamp(y + dy, 0, H - 1) * W + x];
            light[y * W + x] = (uint16_t)(s / 3);
        }
}

void Blob::render(double t, const Settings& s) {
    build(t);
    std::fill(light.begin(), light.end(), 0);
    if (s.wire)
        for (size_t k = 0; k < edges.size(); k += 2) line(verts[edges[k]], verts[edges[k + 1]]);
    else
        for (size_t k = 0; k < tris.size(); k += 3) triangle(verts[tris[k]], verts[tris[k + 1]], verts[tris[k + 2]]);
    if (s.blur) { blur3(); blur3(); }
    // Light to palette index: one layer at full glow is index 175, two saturate near white.
    for (int k = 0; k < W * H; k++) pixels[k] = (uint8_t)std::min(255, light[k] * 175 / kOne);
}

void Blob::to_argb(uint32_t* out) const {
    for (int k = 0; k < W * H; k++) out[k] = pal[pixels[k]];
}

}  // namespace mb
