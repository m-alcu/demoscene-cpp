#include "blobs.h"

#include <algorithm>
#include <cmath>
#include <cstring>

namespace mb {

namespace {

constexpr float kIso = 1.0f;
constexpr float kHalf = 2.1f;                // the grid spans [-kHalf, kHalf]^3
constexpr float kDist = 4.6f, kFocal = 215;  // camera distance, projection scale (pixels at 320 wide)
constexpr int kBg = 0, kBgLen = 64;          // palette: 0-63 background gradient
constexpr int kRamp = 64, kRampLen = 192;    //          64-255 the material's shading ramp

int32_t fix(float v) { return (int32_t)std::lround(v * 65536.0f); }

Vec sub(Vec a, Vec b) { return {a.x - b.x, a.y - b.y, a.z - b.z}; }
Vec add(Vec a, Vec b) { return {a.x + b.x, a.y + b.y, a.z + b.z}; }
Vec scale(Vec a, float s) { return {a.x * s, a.y * s, a.z * s}; }
float dot(Vec a, Vec b) { return a.x * b.x + a.y * b.y + a.z * b.z; }
Vec cross(Vec a, Vec b) { return {a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x}; }
Vec norm(Vec a) {
    const float l = std::sqrt(dot(a, a));
    return l > 0 ? scale(a, 1 / l) : Vec{0, 0, -1};
}

uint32_t rgb(float r, float g, float b) {
    auto c = [](float v) { return (uint32_t)std::clamp((int)std::lround(v * 255), 0, 255); };
    return 0xFF000000u | c(r) << 16 | c(g) << 8 | c(b);
}

// Kuhn's split of a cube into 6 tetrahedra around the diagonal 0-7 (corner bits: x=1,
// y=2, z=4). Neighbouring cubes cut their shared face along the same diagonal, so the
// surface has no cracks.
constexpr int kTets[6][4] = {{0, 1, 3, 7}, {0, 3, 2, 7}, {0, 2, 6, 7},
                             {0, 6, 4, 7}, {0, 4, 5, 7}, {0, 5, 1, 7}};

}  // namespace

float field(const std::vector<Ball>& balls, Vec p) {
    float f = 0;
    for (const Ball& b : balls) {
        const Vec d = sub(p, b.c);
        f += b.r * b.r / std::max(dot(d, d), 1e-6f);
    }
    return f;
}

// f = sum r^2/|p-c|^2  =>  grad f = sum -2 r^2 (p-c)/|p-c|^4. Outward is -grad.
Vec normal(const std::vector<Ball>& balls, Vec p) {
    Vec g = {0, 0, 0};
    for (const Ball& b : balls) {
        const Vec d = sub(p, b.c);
        const float d2 = std::max(dot(d, d), 1e-6f);
        g = add(g, scale(d, b.r * b.r / (d2 * d2)));
    }
    return norm(g);
}

void polygonise(const std::vector<Ball>& balls, int n, float half, Mesh& out) {
    out.pos.clear();
    out.nrm.clear();
    const int s = n + 1;
    const float cell = 2 * half / n;
    std::vector<float> v((size_t)s * s * s);
    for (int k = 0; k < s; k++)
        for (int j = 0; j < s; j++)
            for (int i = 0; i < s; i++) {
                const bool border = i == 0 || j == 0 || k == 0 || i == n || j == n || k == n;
                v[((size_t)k * s + j) * s + i] =
                    border ? 0 : field(balls, {-half + i * cell, -half + j * cell, -half + k * cell});
            }
    auto at = [&](int g) {
        return Vec{-half + (g % s) * cell, -half + (g / s % s) * cell, -half + (g / (s * s)) * cell};
    };
    // The crossing on the grid edge a-b, always computed from the lower index so that every
    // cube touching the edge gets the very same point.
    auto cut = [&](int a, int b) {
        if (a > b) std::swap(a, b);
        const float t = (kIso - v[a]) / (v[b] - v[a]);
        const Vec pa = at(a);
        return add(pa, scale(sub(at(b), pa), t));
    };
    auto emit = [&](Vec p0, Vec p1, Vec p2) {
        Vec n0 = normal(balls, p0), n1 = normal(balls, p1), n2 = normal(balls, p2);
        if (dot(cross(sub(p1, p0), sub(p2, p0)), add(add(n0, n1), n2)) < 0) {
            std::swap(p1, p2);  // wind every triangle outward
            std::swap(n1, n2);
        }
        out.pos.insert(out.pos.end(), {p0, p1, p2});
        out.nrm.insert(out.nrm.end(), {n0, n1, n2});
    };

    for (int k = 0; k < n; k++)
        for (int j = 0; j < n; j++)
            for (int i = 0; i < n; i++) {
                int g[8], in = 0;
                for (int c = 0; c < 8; c++) {
                    g[c] = ((k + (c >> 2 & 1)) * s + j + (c >> 1 & 1)) * s + i + (c & 1);
                    in += v[g[c]] > kIso;
                }
                if (in == 0 || in == 8) continue;
                for (const auto& tet : kTets) {
                    int a[4], m = 0;  // inside corners first, then outside ones
                    for (int q = 0; q < 4; q++)
                        if (v[g[tet[q]]] > kIso) a[m++] = g[tet[q]];
                    const int ins = m;
                    for (int q = 0; q < 4; q++)
                        if (!(v[g[tet[q]]] > kIso)) a[m++] = g[tet[q]];
                    if (ins == 1 || ins == 3) {
                        // One corner alone on its side: one triangle around it.
                        const int lone = ins == 1 ? 0 : 3;
                        int o[3], p = 0;
                        for (int q = 0; q < 4; q++)
                            if (q != lone) o[p++] = a[q];
                        emit(cut(a[lone], o[0]), cut(a[lone], o[1]), cut(a[lone], o[2]));
                    } else if (ins == 2) {
                        // Two and two: a quad a0-a2, a0-a3, a1-a3, a1-a2.
                        const Vec q0 = cut(a[0], a[2]), q1 = cut(a[0], a[3]);
                        const Vec q2 = cut(a[1], a[3]), q3 = cut(a[1], a[2]);
                        emit(q0, q1, q2);
                        emit(q0, q2, q3);
                    }
                }
            }
}

const char* material_name(Material m) {
    switch (m) {
    case Material::Slime: return "slime";
    case Material::Mercury: return "mercury";
    case Material::Lava: return "lava";
    default: return "?";
    }
}

const char* view_name(View v) {
    switch (v) {
    case View::Solid: return "solid";
    case View::Wire: return "wireframe";
    case View::SolidWire: return "solid + wireframe";
    default: return "?";
    }
}

Blobs::Blobs(int width, int height) {
    set_resolution(width, height);
    set_material(Material::Slime);
}

void Blobs::set_resolution(int width, int height) {
    w_ = width;
    h_ = height;
    screen_.assign((size_t)w_ * h_, 0);
}

std::vector<Ball> Blobs::balls_at(double t) {
    // Each ball on its own Lissajous path; the frequencies are not multiples of each other,
    // so the meetings never repeat exactly.
    static const float kP[5][7] = {
        // amplitude, wx, wy, wz, phase x, phase y, radius
        {1.05f, 0.53f, 0.71f, 0.37f, 0.0f, 1.3f, 0.50f},
        {1.10f, 0.67f, 0.43f, 0.59f, 2.1f, 0.4f, 0.44f},
        {1.00f, 0.41f, 0.61f, 0.73f, 4.0f, 2.6f, 0.47f},
        {1.08f, 0.79f, 0.52f, 0.47f, 1.0f, 3.7f, 0.40f},
        {0.90f, 0.35f, 0.83f, 0.65f, 3.3f, 5.1f, 0.42f},
    };
    std::vector<Ball> b;
    for (int i = 0; i < 5; i++) {
        const float* p = kP[i];
        const float ft = (float)t;
        b.push_back({{p[0] * std::sin(p[1] * ft + p[4]), p[0] * std::sin(p[2] * ft + p[5]),
                      p[0] * std::sin(p[3] * ft + p[4] + p[5])},
                     p[6] * (1 + 0.06f * std::sin(2.3f * ft + i * 1.7f))});
    }
    return b;
}

void Blobs::set_material(Material m) {
    material_ = m;
    // The background: a "copper" gradient tinted to the material.
    Vec bg = m == Material::Slime ? Vec{0.05f, 0.12f, 0.20f}
           : m == Material::Mercury ? Vec{0.20f, 0.06f, 0.26f}
                                    : Vec{0.22f, 0.04f, 0.10f};
    for (int k = 0; k < kBgLen; k++) {
        const float f = 1.0f - (float)k / (kBgLen - 1);
        palette_[kBg + k] = rgb(bg.x * f * f, bg.y * f, bg.z * f);
    }
    // The shading ramp: black -> the body colour (diffuse) -> white (the wet highlight).
    for (int k = 0; k < kRampLen; k++) {
        const float f = (float)k / (kRampLen - 1);
        float r, g, b;
        if (m == Material::Lava) {
            r = std::min(1.0f, f * 2.2f);
            g = std::clamp((f - 0.35f) * 1.8f, 0.0f, 1.0f);
            b = std::clamp((f - 0.75f) * 4.0f, 0.0f, 1.0f);
        } else {
            const Vec body = m == Material::Slime ? Vec{0.30f, 0.95f, 0.18f} : Vec{0.62f, 0.70f, 0.86f};
            const Vec dark = m == Material::Slime ? Vec{0.00f, 0.06f, 0.03f} : Vec{0.03f, 0.03f, 0.08f};
            if (f < 0.72f) {
                const float d = std::pow(f / 0.72f, 1.25f);
                r = dark.x + (body.x - dark.x) * d, g = dark.y + (body.y - dark.y) * d,
                b = dark.z + (body.z - dark.z) * d;
            } else {
                const float w = (f - 0.72f) / 0.28f;
                r = body.x + (1 - body.x) * w, g = body.y + (1 - body.y) * w, b = body.z + (1 - body.z) * w;
            }
        }
        palette_[kRamp + k] = rgb(r, g, b);
    }
}

void Blobs::render(double t) {
    const int W = w_, H = h_;
    for (int y = 0; y < H; y++) std::memset(&screen_[(size_t)y * W], kBg + y * kBgLen / H, W);
    // The projection scales with the width; pixels are stretched so the screen shows at 4:3
    // (for 320x200, each pixel is 1.2 times taller than wide).
    const float focal = kFocal * W / 320.0f, aspect = 4.0f * H / (3.0f * W);

    polygonise(balls_at(t), grid, kHalf, mesh_);

    const float ax = (float)(t * 0.31), ay = (float)(t * 0.47), az = (float)(t * 0.13);
    const float sx = std::sin(ax), cx = std::cos(ax), sy = std::sin(ay), cy = std::cos(ay);
    const float sz = std::sin(az), cz = std::cos(az);
    auto rot = [&](Vec p) {
        Vec q = {p.x, p.y * cx - p.z * sx, p.y * sx + p.z * cx};
        q = {q.x * cy + q.z * sy, q.y, -q.x * sy + q.z * cy};
        return Vec{q.x * cz - q.y * sz, q.x * sz + q.y * cz, q.z};
    };

    // Light from the upper left, towards the viewer (the camera looks along +z), and the
    // half vector for the highlight.
    const Vec L = norm({-0.45f, -0.60f, -0.66f});
    const Vec Hv = norm({L.x, L.y, L.z - 1});

    const size_t nv = mesh_.pos.size();
    proj_.resize(nv);
    std::vector<Vec> vp(nv);
    for (size_t i = 0; i < nv; i++) {
        const Vec p = rot(mesh_.pos[i]), n = rot(mesh_.nrm[i]);
        vp[i] = {p.x, p.y, p.z + kDist};
        const float diff = std::max(0.0f, dot(n, L));
        const float spec = std::pow(std::max(0.0f, dot(n, Hv)), 28.0f);
        const float rim = std::pow(1 - std::fabs(n.z), 3.0f);  // a glossy edge, like a wet skin
        const float lum = std::min(1.0f, 0.05f + 0.62f * diff + 0.12f * rim + 0.60f * spec);
        const float z = vp[i].z;
        proj_[i] = {fix(W / 2 + p.x * focal / z), (int32_t)std::lround(H / 2 + p.y * focal * aspect / z),
                    fix(lum * (kRampLen - 1))};
    }

    // Back faces away (outward normal pointing away from the eye), then far faces first.
    faces_.clear();
    for (size_t i = 0; i < nv; i += 3) {
        const Vec g = cross(sub(vp[i + 1], vp[i]), sub(vp[i + 2], vp[i]));
        if (dot(g, vp[i]) >= 0) continue;
        faces_.push_back({(int)i, vp[i].z + vp[i + 1].z + vp[i + 2].z});
    }
    std::sort(faces_.begin(), faces_.end(), [](const Face& a, const Face& b) { return a.z > b.z; });

    // Wireframe: every face, far to near, is filled with one dark colour and then outlined,
    // so nearer faces hide the lines behind them (hidden-line removal by the painter's sort).
    // The lines carry the vertex shading. Over the solid surface they are drawn darker.
    const int32_t base = kRamp << 16, top = (kRampLen - 1) << 16;
    const int32_t fill = base + top / 14;
    auto wire = [&](int32_t c) {
        return view == View::Wire ? base + top / 4 + (int32_t)((int64_t)c * 3 / 4) : base + c * 2 / 5;
    };
    for (const Face& f : faces_) {
        Vert a = proj_[f.i], b = proj_[f.i + 1], c = proj_[f.i + 2];
        if (!gouraud) a.c = b.c = c.c = (a.c + b.c + c.c) / 3;
        if (view == View::Wire) {
            Vert fa = a, fb = b, fc = c;
            fa.c = fb.c = fc.c = fill;
            triangle(fa, fb, fc);
        } else {
            Vert sa = a, sb = b, sc = c;
            sa.c += base, sb.c += base, sc.c += base;
            triangle(sa, sb, sc);
        }
        if (view != View::Solid) {
            a.c = wire(a.c), b.c = wire(b.c), c.c = wire(c.c);
            line(a, b);
            line(b, c);
            line(c, a);
        }
    }
}

// A line with its colour interpolated (a Gouraud line), stepped along its longer axis.
void Blobs::line(const Vert& a, const Vert& b) {
    constexpr int lo = kRamp, hi = kRamp + kRampLen - 1;
    const int x0 = (a.x + 0x8000) >> 16, x1 = (b.x + 0x8000) >> 16;
    const int n = std::max(std::abs(x1 - x0), std::abs(b.y - a.y));
    const int32_t dx = n ? (b.x - a.x) / n : 0, dy = n ? ((b.y - a.y) << 16) / n : 0;
    const int32_t dc = n ? (b.c - a.c) / n : 0;
    int32_t x = a.x + 0x8000, y = (a.y << 16) + 0x8000, c = a.c;
    for (int i = 0; i <= n; i++, x += dx, y += dy, c += dc) {
        const int px = x >> 16, py = y >> 16;
        if (px >= 0 && px < w_ && py >= 0 && py < h_)
            screen_[(size_t)py * w_ + px] = (uint8_t)std::clamp(c >> 16, lo, hi);
    }
}

// Scanline filler. Vertices sorted by y; the long edge a->c against a->b then b->c. x and
// colour step in 16.16 along the edges, and colour steps in 16.16 across each span.
void Blobs::triangle(const Vert& v0, const Vert& v1, const Vert& v2) {
    const Vert* p[3] = {&v0, &v1, &v2};
    std::sort(p, p + 3, [](const Vert* a, const Vert* b) { return a->y < b->y; });
    const Vert &a = *p[0], &b = *p[1], &c = *p[2];
    if (a.y == c.y) return;
    constexpr int lo = kRamp, hi = kRamp + kRampLen - 1;

    auto step = [](int32_t from, int32_t to, int32_t dy) { return dy ? (to - from) / dy : 0; };
    const int32_t dxl = step(a.x, c.x, c.y - a.y), dcl = step(a.c, c.c, c.y - a.y);
    int32_t xl = a.x, cl = a.c;

    for (int half = 0; half < 2; half++) {
        const Vert &s = half ? b : a, &e = half ? c : b;
        const int dy = e.y - s.y;
        const int32_t dxs = step(s.x, e.x, dy), dcs = step(s.c, e.c, dy);
        int32_t xs = s.x, cs = s.c;
        for (int y = s.y; y < e.y; y++, xl += dxl, cl += dcl, xs += dxs, cs += dcs) {
            if (y < 0 || y >= h_) continue;
            int32_t x0 = xl, x1 = xs, c0 = cl, c1 = cs;
            if (x0 > x1) { std::swap(x0, x1); std::swap(c0, c1); }
            const int ix0 = (x0 + 0xFFFF) >> 16, ix1 = (x1 + 0xFFFF) >> 16;
            if (ix0 >= ix1) continue;
            const int32_t dc = (x1 - x0) >= 0x10000 ? (int32_t)(((int64_t)(c1 - c0) << 16) / (x1 - x0)) : 0;
            int32_t col = c0 + (int32_t)(((int64_t)((ix0 << 16) - x0) * dc) >> 16);
            uint8_t* row = &screen_[(size_t)y * w_];
            for (int x = ix0; x < ix1; x++, col += dc)
                if (x >= 0 && x < w_) row[x] = (uint8_t)std::clamp(col >> 16, lo, hi);
        }
    }
}

void Blobs::to_argb(uint32_t* out) const {
    for (size_t i = 0; i < screen_.size(); i++) out[i] = palette_[screen_[i]];
}

}  // namespace mb
