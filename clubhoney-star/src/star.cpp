#include "star.h"

#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <sstream>

namespace honey {

namespace {

// ---------------------------------------------------------------------------------------------
// The scene's animation (from HONI0.EXP, as the engine holds it after loading)

// A Hermite key: frame, position, incoming and outgoing tangents (3D Studio space, z up).
struct Key { float frame; float p[3], in[3], out[3]; };

const Key CAM_POS[] = {
    {0, {-575.139099f, -701.730957f, -253.974762f}, {0, 0, 0}, {747.333008f, 4.7442627f, 0}},
    {100, {172.193939f, -696.986694f, -253.974762f}, {583.55896f, 382.61554f, 0}, {583.55896f, 382.61554f, 0}},
    {200, {591.978882f, 63.5001221f, -253.974762f}, {209.892471f, 478.723938f, 294.567047f}, {209.892471f, 478.723938f, 294.567047f}},
    {300, {591.978882f, 260.461182f, 335.159332f}, {119.187744f, -78.3480225f, 294.567047f}, {119.187744f, -78.3480225f, 294.567047f}},
    {400, {830.35437f, -93.1959229f, 335.159332f}, {119.187744f, -171.942474f, -397.627777f}, {119.187744f, -171.942474f, -397.627777f}},
    {500, {830.35437f, -83.4237747f, -460.096222f}, {-97.6179199f, -306.605194f, -397.627777f}, {-97.6179199f, -306.605194f, -397.627777f}},
    {600, {635.11853f, -706.406311f, -460.096222f}, {-97.6179199f, -25.2817345f, -42.6539764f}, {-97.6179199f, -25.2817345f, -42.6539764f}},
    {700, {635.11853f, -133.987244f, -545.404175f}, {-187.03064f, 10.3543501f, -28.4359856f}, {-374.061279f, 20.7087002f, -56.8719711f}},
    {900, {74.0266113f, -675.343262f, -545.404175f}, {2384.14233f, -1719.60706f, 0}, {1192.07117f, -859.803528f, 0}},
    {1000, {4211.33203f, -2713.39771f, -545.404175f}, {6.40112877f, -3.15322351f, 0}, {4130.9043f, -2034.90125f, 0}},
};
// The target's track ends in the engine's end marker at frame 65534; keeping it reproduces the
// slow drift after frame 100.
const Key CAM_TARGET[] = {
    {0, {-575.139038f, -58.1446533f, -61.2842064f}, {0, 0, 0}, {572.148682f, -5.45080566f, 0}},
    {100, {-2.99035645f, -63.595459f, -61.2842064f}, {0.873056233f, -0.00831752364f, 0}, {571.275635f, -5.44248819f, 0}},
    {65534, {-2.99035645f, -63.595459f, -61.2842064f}, {0, 0, 0}, {0, 0, 0}},
};
// The star stays put: one rotation (quaternion w, x, y, z) and one position.
constexpr float OBJ_ROT[4] = {-0.41862151f, 0.906903803f, -0.0402556881f, 0.0257106125f};
constexpr float OBJ_POS[3] = {7.24637604f, 0.0f, -1.44927597f};
// Projection factors (pixels) for a 320x200 screen shown at 4:3, scaled to the buffer
constexpr float FOVX = 386.27417f * RES, FOVY = 321.895142f * RES;
constexpr float ZNEAR = 0.5f;
constexpr uint32_t BACKGROUND = 0xFF7D9B7Cu;   // the green the scene's picture fades to

template <size_t N>
void hermite(const Key (&k)[N], float t, float out[3]) {
    if (t <= k[0].frame) { std::memcpy(out, k[0].p, sizeof k[0].p); return; }
    size_t i = 0;
    while (i + 2 < N && k[i + 1].frame < t) i++;
    const Key &a = k[i], &b = k[i + 1];
    const float u = std::min(1.0f, (t - a.frame) / (b.frame - a.frame));
    const float u2 = u * u, u3 = u2 * u;
    const float h00 = 2 * u3 - 3 * u2 + 1, h01 = 3 * u2 - 2 * u3;
    const float h10 = u3 - 2 * u2 + u, h11 = u3 - u2;
    for (int j = 0; j < 3; j++) out[j] = h00 * a.p[j] + h01 * b.p[j] + h10 * a.out[j] + h11 * b.in[j];
}

// 4x4 matrices: row-major, points as row vectors (p' = p * M), so A*B applies A first.
struct Mat4 { float m[16] = {}; };

Mat4 identity() { Mat4 r; r.m[0] = r.m[5] = r.m[10] = r.m[15] = 1; return r; }

Mat4 operator*(const Mat4& a, const Mat4& b) {
    Mat4 r;
    for (int row = 0; row < 4; row++)
        for (int col = 0; col < 4; col++)
            for (int k = 0; k < 4; k++) r.m[row * 4 + col] += a.m[row * 4 + k] * b.m[k * 4 + col];
    return r;
}

Mat4 translate(float x, float y, float z) {
    Mat4 r = identity();
    r.m[12] = x; r.m[13] = y; r.m[14] = z;
    return r;
}

Mat4 quat_matrix(const float* q) {
    const float w = q[0], x = q[1], y = q[2], z = q[3];
    Mat4 r = identity();
    r.m[0] = 1 - 2 * (y * y + z * z); r.m[1] = 2 * (x * y - w * z);     r.m[2] = 2 * (x * z + w * y);
    r.m[4] = 2 * (x * y + w * z);     r.m[5] = 1 - 2 * (x * x + z * z); r.m[6] = 2 * (y * z - w * x);
    r.m[8] = 2 * (x * z - w * y);     r.m[9] = 2 * (y * z + w * x);     r.m[10] = 1 - 2 * (x * x + y * y);
    return r;
}

// The 3D Studio camera: pitch, then heading, from the direction to the target; then the axes
// swapped so that the view direction is +z and screen y points down.
Mat4 camera_view(const float* eye, const float* target) {
    float d[3] = {target[0] - eye[0], target[1] - eye[1], target[2] - eye[2]};
    const float len = std::sqrt(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]);
    for (float& c : d) c /= len;
    const float horiz = std::sqrt(d[0] * d[0] + d[1] * d[1]);
    float sa = 1, ca = 0;
    if (horiz != 0) { sa = d[0] / horiz; ca = d[1] / horiz; }
    Mat4 heading = identity();
    heading.m[0] = ca; heading.m[1] = sa; heading.m[4] = -sa; heading.m[5] = ca;
    Mat4 pitch = identity();
    pitch.m[5] = horiz; pitch.m[6] = -d[2]; pitch.m[9] = d[2]; pitch.m[10] = horiz;
    Mat4 axes;                                     // x, y, z -> x, -z, y
    axes.m[0] = 1; axes.m[6] = 1; axes.m[9] = -1; axes.m[15] = 1;
    return translate(-eye[0], -eye[1], -eye[2]) * heading * pitch * axes;
}

}  // namespace

// ---------------------------------------------------------------------------------------------
// Loading

bool Star::load_mesh(const std::string& path) {
    std::ifstream in(path);
    if (!in) { std::fprintf(stderr, "%s: cannot open\n", path.c_str()); return false; }
    std::string line, key;
    while (std::getline(in, line)) {
        if (line.empty() || line[0] == '#') continue;
        std::istringstream s(line);
        s >> key;
        if (key == "v") {
            Vec3 p, n;
            s >> p.x >> p.y >> p.z >> n.x >> n.y >> n.z;
            pos.push_back(p);
            nrm.push_back(n);
        } else if (key == "f") {
            Face f;
            s >> f.v[0] >> f.v[1] >> f.v[2] >> f.n.x >> f.n.y >> f.n.z;
            faces.push_back(f);
        }
    }
    for (const Face& f : faces)
        for (int i : f.v)
            if (i < 0 || i >= (int)pos.size()) { std::fprintf(stderr, "%s: bad face\n", path.c_str()); return false; }
    if (faces.empty()) { std::fprintf(stderr, "%s: no faces\n", path.c_str()); return false; }
    return true;
}

bool Star::load_texture(const std::string& path) {
    SDL_Surface* s = SDL_LoadPNG(path.c_str());
    if (!s) { std::fprintf(stderr, "%s: %s\n", path.c_str(), SDL_GetError()); return false; }
    const SDL_Palette* p = SDL_GetSurfacePalette(s);
    const bool ok = s->format == SDL_PIXELFORMAT_INDEX8 && p && s->w == 256 && s->h == 256;
    if (ok) {
        // palette indices to RGB, then a bilinear enlargement to TEX x TEX (edges clamped)
        uint32_t pal[256] = {};
        for (int i = 0; i < p->ncolors && i < 256; i++)
            pal[i] = (uint32_t)p->colors[i].r << 16 | (uint32_t)p->colors[i].g << 8 | p->colors[i].b;
        auto src = [&](int x, int y) {
            x = std::clamp(x, 0, 255); y = std::clamp(y, 0, 255);
            return pal[((const uint8_t*)s->pixels)[y * s->pitch + x]];
        };
        tex.resize(TEX * TEX);
        for (int y = 0; y < TEX; y++) {
            const float sy = (y + 0.5f) * 256.0f / TEX - 0.5f;
            const int y0 = (int)std::floor(sy);
            const float fy = sy - y0;
            for (int x = 0; x < TEX; x++) {
                const float sx = (x + 0.5f) * 256.0f / TEX - 0.5f;
                const int x0 = (int)std::floor(sx);
                const float fx = sx - x0;
                const uint32_t c00 = src(x0, y0), c10 = src(x0 + 1, y0);
                const uint32_t c01 = src(x0, y0 + 1), c11 = src(x0 + 1, y0 + 1);
                uint32_t out = 0xFF000000u;
                for (int sh = 0; sh <= 16; sh += 8) {
                    const float top = ((c00 >> sh) & 255) * (1 - fx) + ((c10 >> sh) & 255) * fx;
                    const float bot = ((c01 >> sh) & 255) * (1 - fx) + ((c11 >> sh) & 255) * fx;
                    out |= (uint32_t)(top * (1 - fy) + bot * fy + 0.5f) << sh;
                }
                tex[y * TEX + x] = out;
            }
        }
    } else {
        std::fprintf(stderr, "%s: not a 256x256 indexed picture\n", path.c_str());
    }
    SDL_DestroySurface(s);
    return ok;
}

bool Star::init(const std::string& dir) {
    if (!load_mesh(dir + "/star.txt") || !load_texture(dir + "/pink.png")) return false;
    color.assign(W * H, BACKGROUND);
    depth.assign(W * H, 0.0f);
    return true;
}

// ---------------------------------------------------------------------------------------------
// Rendering

// An affine texture-mapped, depth-tested triangle (camera-space vertices in front of ZNEAR).
void Star::triangle(const ClipVert& a, const ClipVert& b, const ClipVert& c) {
    struct S { float x, y, iz, u, v; };
    auto project = [](const ClipVert& p) {
        const float iz = 1.0f / p.z;
        return S{p.x * FOVX * iz + W * 0.5f, p.y * FOVY * iz + H * 0.5f, iz, p.u, p.v};
    };
    const S p0 = project(a), p1 = project(b), p2 = project(c);
    const float area = (p1.x - p0.x) * (p2.y - p0.y) - (p1.y - p0.y) * (p2.x - p0.x);
    if (std::fabs(area) < 1e-6f) return;
    const int x0 = std::max(0, (int)std::floor(std::min({p0.x, p1.x, p2.x})));
    const int x1 = std::min(W - 1, (int)std::ceil(std::max({p0.x, p1.x, p2.x})));
    const int y0 = std::max(0, (int)std::floor(std::min({p0.y, p1.y, p2.y})));
    const int y1 = std::min(H - 1, (int)std::ceil(std::max({p0.y, p1.y, p2.y})));
    const float inv = 1.0f / area;
    for (int y = y0; y <= y1; y++) {
        const float py = y + 0.5f;
        for (int x = x0; x <= x1; x++) {
            const float px = x + 0.5f;
            // barycentric weights, positive inside whatever the winding
            const float w0 = ((p2.x - p1.x) * (py - p1.y) - (p2.y - p1.y) * (px - p1.x)) * inv;
            const float w1 = ((p0.x - p2.x) * (py - p2.y) - (p0.y - p2.y) * (px - p2.x)) * inv;
            const float w2 = 1.0f - w0 - w1;
            if (w0 < 0 || w1 < 0 || w2 < 0) continue;
            const float iz = w0 * p0.iz + w1 * p1.iz + w2 * p2.iz;
            float& d = depth[y * W + x];
            if (iz <= d) continue;
            d = iz;
            const int u = std::clamp((int)(w0 * p0.u + w1 * p1.u + w2 * p2.u), 0, TEX - 1);
            const int v = std::clamp((int)(w0 * p0.v + w1 * p1.v + w2 * p2.v), 0, TEX - 1);
            color[y * W + x] = tex[v * TEX + u];
        }
    }
}

void Star::render(float frame) {
    std::fill(color.begin(), color.end(), BACKGROUND);
    std::fill(depth.begin(), depth.end(), 0.0f);

    float eye[3], target[3];
    hermite(CAM_POS, frame, eye);
    hermite(CAM_TARGET, frame, target);
    Mat4 world = quat_matrix(OBJ_ROT);
    world.m[12] = OBJ_POS[0]; world.m[13] = OBJ_POS[1]; world.m[14] = OBJ_POS[2];
    const Mat4 mv = world * camera_view(eye, target);
    const float* M = mv.m;
    auto xform = [M](const Vec3& p) {
        return Vec3{p.x * M[0] + p.y * M[4] + p.z * M[8] + M[12],
                    p.x * M[1] + p.y * M[5] + p.z * M[9] + M[13],
                    p.x * M[2] + p.y * M[6] + p.z * M[10] + M[14]};
    };
    auto rotate = [M](const Vec3& n) {
        return Vec3{n.x * M[0] + n.y * M[4] + n.z * M[8], n.x * M[1] + n.y * M[5] + n.z * M[9],
                    n.x * M[2] + n.y * M[6] + n.z * M[10]};
    };

    // vertices to camera space; the environment map from the view-space normal
    std::vector<ClipVert> cv(pos.size());
    for (size_t i = 0; i < pos.size(); i++) {
        const Vec3 p = xform(pos[i]), n = rotate(nrm[i]);
        const float r = TEX * 0.5f;
        cv[i] = {p.x, p.y, p.z, n.x * (r - 1) + r, n.y * (r - 1) + r};
    }

    for (const Face& f : faces) {
        const ClipVert& a = cv[f.v[0]];
        const Vec3 n = rotate(f.n);
        if (a.x * n.x + a.y * n.y + a.z * n.z >= 0) continue;   // facing away
        // clip against the near plane (Sutherland-Hodgman), then fan the polygon
        ClipVert poly[4];
        int count = 0;
        for (int k = 0; k < 3; k++) {
            const ClipVert& p = cv[f.v[k]];
            const ClipVert& q = cv[f.v[(k + 1) % 3]];
            const bool pin = p.z >= ZNEAR, qin = q.z >= ZNEAR;
            if (pin) poly[count++] = p;
            if (pin != qin) {
                const float t = (ZNEAR - p.z) / (q.z - p.z);
                poly[count++] = {p.x + (q.x - p.x) * t, p.y + (q.y - p.y) * t, ZNEAR,
                                 p.u + (q.u - p.u) * t, p.v + (q.v - p.v) * t};
            }
        }
        for (int k = 2; k < count; k++) triangle(poly[0], poly[k - 1], poly[k]);
    }
}

}  // namespace honey
