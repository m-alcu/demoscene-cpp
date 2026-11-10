#include "torus.h"

#include <algorithm>
#include <cmath>
#include <cstring>

namespace gt {

namespace {

#include "cyboman2_torus.inc"

constexpr int kMajor = 32, kMinor = 16;      // our torus: segments around the ring and the tube
constexpr float kR = 60, kTube = 26;         // ring and tube radius
constexpr float kDist = 230, kFocal = 220;   // camera distance, projection scale
constexpr float kAspect = 200.0f / 240.0f;   // mode 13h pixels are 1.2 times taller than wide
constexpr int kBg = 0, kBgLen = 64;          // palette: 0-63 background gradient
constexpr int kRamp = 64, kRampLen = 192;    //          64-255 our shading ramp
constexpr int kCybBase = 100, kCybLen = 60;  // Cyboman 2: 100-159 and 164-223

// Cyboman 2's model is about 8200 units across (ring radius ~5280, tube ~2920); scale it
// to the size of ours.
constexpr float kCybScale = (kR + kTube) / 8191.0f;

int32_t fix(float v) { return (int32_t)std::lround(v * 65536.0f); }

uint32_t rgb(float r, float g, float b) {
    auto c = [](float v) { return (uint32_t)std::clamp((int)std::lround(v * 255), 0, 255); };
    return 0xFF000000u | c(r) << 16 | c(g) << 8 | c(b);
}

uint32_t vga(const uint8_t* c) {  // 6-bit DAC entry, scaled like the VGA does (v*255/63)
    return 0xFF000000u | (uint32_t)(c[0] * 255 / 63) << 16 | (uint32_t)(c[1] * 255 / 63) << 8 |
           (uint32_t)(c[2] * 255 / 63);
}

// Cyboman 2's light curve (the table at CS:19E7h, built at 2AF4h): k*(k>>1) for a light
// value k in 0-255, capped at 3B00h; a palette offset in 8.8, so 0-59 shades.
int32_t cyb_curve(int k) { return std::min(k * (k >> 1), 0x3B00); }

}  // namespace

const char* model_name(Model m) {
    switch (m) {
    case Model::Own: return "own torus";
    case Model::CybomanRings: return "Cyboman 2 torus, rings (6 s)";
    case Model::CybomanSawtooth: return "Cyboman 2 torus, sawtooth (21 s)";
    default: return "?";
    }
}

Torus::Torus() : screen_(W * H) {
    // Our torus: a (kMajor x kMinor) grid with analytic normals, one material.
    for (int i = 0; i < kMajor; i++) {
        const float u = 2 * (float)M_PI * i / kMajor;
        for (int j = 0; j < kMinor; j++) {
            const float v = 2 * (float)M_PI * j / kMinor;
            const Vec n = {std::cos(u) * std::cos(v), std::sin(u) * std::cos(v), std::sin(v)};
            own_.pos.push_back({std::cos(u) * kR + n.x * kTube, std::sin(u) * kR + n.y * kTube, n.z * kTube});
            own_.nrm.push_back(n);
        }
    }
    for (int i = 0; i < kMajor; i++) {
        for (int j = 0; j < kMinor; j++) {
            const int a = i * kMinor + j, b = ((i + 1) % kMajor) * kMinor + j;
            const int c = ((i + 1) % kMajor) * kMinor + (j + 1) % kMinor, d = i * kMinor + (j + 1) % kMinor;
            own_.tris.insert(own_.tris.end(), {a, b, c, a, c, d});
        }
    }
    own_.mat.assign(own_.tris.size() / 3, 0);

    // Cyboman 2's torus: 24x24 vertices around the y axis, 1152 faces; normals have length 127.
    for (int i = 0; i < kCybVerts; i++) {
        cyb_.pos.push_back({kCybPos[i][0] * kCybScale, kCybPos[i][1] * kCybScale, kCybPos[i][2] * kCybScale});
        cyb_.nrm.push_back({kCybNrm[i][0] / 127.0f, kCybNrm[i][1] / 127.0f, kCybNrm[i][2] / 127.0f});
    }
    for (int k = 0; k < kCybFaces; k++)
        cyb_.tris.insert(cyb_.tris.end(), {kCybTri[k][0], kCybTri[k][1], kCybTri[k][2]});
    // The face flags (material) the intro writes at run time, read from its memory at frames
    // 420 and 1470. Faces come 48 per ring segment (2 per quad); the flag depends only on the
    // face's place k in its row.
    for (int f = 0; f < kCybFaces; f++) {
        const int k = f % 48;
        mat_rings_.push_back(k % 4 < 2 ? 1 : 0);     // ##.. : bands of two quads
        mat_saw_.push_back(k % 6 >= 3 ? 1 : 0);      // ...### : runs of three triangles
    }
    cyb_.mat = mat_rings_;
    proj_.resize(std::max(own_.pos.size(), cyb_.pos.size()));

    // Background: deep violet fading to black (a "copper" gradient), for every model.
    for (int k = 0; k < kBgLen; k++) {
        const float f = 1.0f - (float)k / (kBgLen - 1);
        palette_[kBg + k] = rgb(0.18f * f * f, 0.05f * f, 0.30f * f);
    }
    set_model(Model::Own);
}

void Torus::set_model(Model m) {
    model_ = m;
    for (int i = kBgLen; i < 256; i++) palette_[i] = 0xFF000000u;
    if (m == Model::Own) {
        mesh_ = &own_;
        cyb_light_ = false;
        ramp_[0] = ramp_[1] = {kRamp, kRampLen};
        // Shading ramp: black -> blue -> cyan -> white, the classic "chrome" look.
        for (int k = 0; k < kRampLen; k++) {
            const float f = (float)k / (kRampLen - 1);
            palette_[kRamp + k] = rgb(std::pow(f, 2.2f), std::pow(f, 1.1f), std::min(1.0f, f * 1.6f));
        }
        return;
    }
    mesh_ = &cyb_;
    cyb_light_ = true;
    cyb_.mat = m == Model::CybomanRings ? mat_rings_ : mat_saw_;
    ramp_[0] = {kCybBase, kCybLen};
    ramp_[1] = {kCybBase + 64, kCybLen};
    const auto& pal = m == Model::CybomanRings ? kCybPalRings : kCybPalSawtooth;
    for (int i = 0; i < 124; i++) palette_[kCybBase + i] = vga(pal[i]);
}

void Torus::render(double t) {
    // Background, one palette entry per band of rows.
    for (int y = 0; y < H; y++)
        std::memset(&screen_[y * W], kBg + y * kBgLen / H, W);

    // Rotation about the three axes.
    const float ax = (float)(t * 0.7), ay = (float)(t * 1.1), az = (float)(t * 0.4);
    const float sx = std::sin(ax), cx = std::cos(ax), sy = std::sin(ay), cy = std::cos(ay);
    const float sz = std::sin(az), cz = std::cos(az);
    auto rot = [&](Vec p) {
        Vec q = {p.x, p.y * cx - p.z * sx, p.y * sx + p.z * cx};
        q = {q.x * cy + q.z * sy, q.y, -q.x * sy + q.z * cy};
        return Vec{q.x * cz - q.y * sz, q.x * sz + q.y * cz, q.z};
    };

    // Light (towards the light, view space; the camera looks along +z) and the half vector.
    Vec L = {-0.45f, -0.55f, -0.70f};
    const float ll = std::sqrt(L.x * L.x + L.y * L.y + L.z * L.z);
    L = {L.x / ll, L.y / ll, L.z / ll};
    Vec Hv = {L.x, L.y, L.z - 1};
    const float hl = std::sqrt(Hv.x * Hv.x + Hv.y * Hv.y + Hv.z * Hv.z);
    Hv = {Hv.x / hl, Hv.y / hl, Hv.z / hl};

    // Transform, light and project every vertex: the colour is computed per vertex only, as
    // an offset into the material's ramp (the material is added per face, below).
    const Mesh& mesh = *mesh_;
    for (size_t i = 0; i < mesh.pos.size(); i++) {
        const Vec p = rot(mesh.pos[i]), n = rot(mesh.nrm[i]);
        const float diff = std::max(0.0f, n.x * L.x + n.y * L.y + n.z * L.z);
        int32_t c;
        if (cyb_light_) {
            // A light value through Cyboman 2's curve: dark, then a bright highlight. The intro
            // mixes the normal (x5) with the depth into k; this maps our diffuse term to
            // k = 20-180 so that only the hot spot reaches the curve's cap (k ~ 174).
            const int k = std::clamp((int)std::lround(20 + 160 * diff), 0, 255);
            c = cyb_curve(k) << 8;  // 8.8 -> 16.16
        } else {
            const float spec = std::pow(std::max(0.0f, n.x * Hv.x + n.y * Hv.y + n.z * Hv.z), 24.0f);
            const float lum = std::min(1.0f, 0.06f + 0.70f * diff + 0.55f * spec);
            c = fix(lum * (kRampLen - 1));
        }
        const float z = p.z + kDist;
        proj_[i] = {fix(W / 2 + p.x * kFocal / z), (int32_t)std::lround(H / 2 + p.y * kFocal * kAspect / z), c, z};
    }

    // Back-face culling in screen space, then painter's sort: far faces first.
    visible_.clear();
    for (size_t k = 0; k < mesh.tris.size(); k += 3) {
        const Vert &a = proj_[mesh.tris[k]], &b = proj_[mesh.tris[k + 1]], &c = proj_[mesh.tris[k + 2]];
        const int64_t cross = (int64_t)(b.x - a.x) * (c.y - a.y) - (int64_t)(c.x - a.x) * (b.y - a.y);
        if (cross >= 0) continue;
        visible_.push_back({mesh.tris[k], mesh.tris[k + 1], mesh.tris[k + 2], mesh.mat[k / 3], a.z + b.z + c.z});
    }
    std::sort(visible_.begin(), visible_.end(), [](const Face& p, const Face& q) { return p.z > q.z; });

    for (const Face& f : visible_) {
        Vert a = proj_[f.a], b = proj_[f.b], c = proj_[f.c];
        if (!gouraud) a.c = b.c = c.c = (a.c + b.c + c.c) / 3;  // flat: the face's mean colour
        const Ramp& r = ramp_[f.mat];
        const int32_t base = r.base << 16;  // the material, like Cyboman 2's +4000h per face
        a.c += base, b.c += base, c.c += base;
        triangle(a, b, c, r.base, r.base + r.len - 1);
    }
}

// Scanline filler. Vertices sorted by y; the long edge a->c against a->b then b->c. x and
// colour step in 16.16 along the edges, and colour steps in 16.16 across each span.
void Torus::triangle(const Vert& v0, const Vert& v1, const Vert& v2, int lo, int hi) {
    const Vert* p[3] = {&v0, &v1, &v2};
    std::sort(p, p + 3, [](const Vert* a, const Vert* b) { return a->y < b->y; });
    const Vert &a = *p[0], &b = *p[1], &c = *p[2];
    if (a.y == c.y) return;

    auto step = [](int32_t from, int32_t to, int32_t dy) { return dy ? (to - from) / dy : 0; };
    const int32_t dxl = step(a.x, c.x, c.y - a.y), dcl = step(a.c, c.c, c.y - a.y);
    int32_t xl = a.x, cl = a.c;  // along the long edge

    for (int half = 0; half < 2; half++) {
        const Vert &s = half ? b : a, &e = half ? c : b;
        const int dy = e.y - s.y;
        const int32_t dxs = step(s.x, e.x, dy), dcs = step(s.c, e.c, dy);
        int32_t xs = s.x, cs = s.c;  // along the short edge
        for (int y = s.y; y < e.y; y++, xl += dxl, cl += dcl, xs += dxs, cs += dcs) {
            if (y < 0 || y >= H) continue;
            int32_t x0 = xl, x1 = xs, c0 = cl, c1 = cs;
            if (x0 > x1) { std::swap(x0, x1); std::swap(c0, c1); }
            const int ix0 = (x0 + 0xFFFF) >> 16, ix1 = (x1 + 0xFFFF) >> 16;  // [ceil(x0), ceil(x1))
            if (ix0 >= ix1) continue;
            const int32_t dc = (x1 - x0) >= 0x10000 ? (int32_t)(((int64_t)(c1 - c0) << 16) / (x1 - x0)) : 0;
            int32_t col = c0 + (int32_t)(((int64_t)((ix0 << 16) - x0) * dc) >> 16);  // subpixel start
            uint8_t* row = &screen_[y * W];
            for (int x = ix0; x < ix1; x++, col += dc)
                if (x >= 0 && x < W) row[x] = (uint8_t)std::clamp(col >> 16, lo, hi);
        }
    }
}

void Torus::to_argb(uint32_t* out) const {
    for (int i = 0; i < W * H; i++) out[i] = palette_[screen_[i]];
}

}  // namespace gt
