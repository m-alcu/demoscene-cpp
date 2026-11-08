#include "tunnel.h"
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <map>

namespace mt {

namespace {

constexpr double kPi = 3.14159265358979323846;
constexpr double kFocal = 150.0;    // pixels per unit at depth 1 (about 94 degrees across)
constexpr double kAspect = 1.2;     // mode 13h pixels are 1.2 times taller than wide
constexpr double kFar = 12.0;       // depth where the tunnel has faded to black
constexpr int kWraps = 3;           // the texture goes round the tube this many times
constexpr double kTexPerUnit = 80;  // texels per unit of depth
constexpr double kSpeed = 2.6;      // units of depth per second

// The tube's axis: how far it has bent away from the straight line at depth w. It starts at the
// camera (0 at w = 0) and the bends travel and change over time.
void axis(double w, double t, double& x, double& y) {
    const double p = 0.7 * t, q = 0.5 * t + 1.0;
    x = 2.2 * (std::sin(0.35 * w + p) - std::sin(p)) + 0.3 * (std::sin(0.7 * w - 1.3 * t) - std::sin(-1.3 * t));
    y = 1.5 * (std::sin(0.27 * w + q) - std::sin(q));
}

}  // namespace

bool Tunnel::init(const std::string& data) {
    const std::string path = data + "/checker.png";
    SDL_Surface* s = SDL_LoadPNG(path.c_str());
    if (!s) { std::fprintf(stderr, "megablast-tunnel: %s: %s\n", path.c_str(), SDL_GetError()); return false; }
    const SDL_Palette* sp = SDL_GetSurfacePalette(s);
    if (s->format != SDL_PIXELFORMAT_INDEX8 || !sp || s->w != 256 || s->h != 256) {
        std::fprintf(stderr, "megablast-tunnel: %s is not a 256x256 indexed image\n", path.c_str());
        SDL_DestroySurface(s);
        return false;
    }
    // The texture uses only a few of its palette's colours. Renumber them 0..n-1 and build the
    // palette as n colours x kShades brightness levels, the usual 8-bit way to shade by depth.
    std::map<uint8_t, int> number;
    tex.resize(256 * 256);
    for (int y = 0; y < 256; y++) {
        const uint8_t* row = (const uint8_t*)s->pixels + y * s->pitch;
        for (int x = 0; x < 256; x++) {
            auto it = number.find(row[x]);
            if (it == number.end()) it = number.emplace(row[x], (int)number.size()).first;
            tex[y * 256 + x] = (uint8_t)it->second;
        }
    }
    if ((int)number.size() * kShades > 256) {
        std::fprintf(stderr, "megablast-tunnel: %s has too many colours\n", path.c_str());
        SDL_DestroySurface(s);
        return false;
    }
    for (const auto& [index, n] : number) {
        const SDL_Color c = sp->colors[index];
        for (int l = 0; l < kShades; l++) {
            const double f = (double)l / (kShades - 1);
            pal[n * kShades + l] = 0xff000000u | (uint32_t)std::lround(c.r * f) << 16 |
                                   (uint32_t)std::lround(c.g * f) << 8 | (uint32_t)std::lround(c.b * f);
        }
    }
    SDL_DestroySurface(s);
    return true;
}

// For a screen point, follows its ray (px·w, py·w, w) from the camera until it reaches the wall
// of the bent tube (radius 1 round the axis), then pins the hit down by bisection. Marching
// finds the first wall the ray meets even where the tube bends across the view. Returns the
// texture position (u round the tube, v along it, in texels) and the light (0..1).
static void trace(double px, double py, double t, double roll, double vshift, double& u, double& v,
                  double& light) {
    auto dist = [&](double w, double& dx, double& dy) {
        double ax, ay;
        axis(w, t, ax, ay);
        dx = px * w - ax;
        dy = py * w - ay;
        return std::hypot(dx, dy);
    };
    double dx = 0, dy = 0, lo = 0, hi = 0.02;
    while (hi < kFar && dist(hi, dx, dy) < 1.0) {
        lo = hi;
        hi += 0.03 + 0.03 * hi;   // finer steps near the camera
    }
    if (hi >= kFar) { u = v = 0; light = 0; return; }
    for (int k = 0; k < 12; k++) {
        const double mid = 0.5 * (lo + hi);
        (dist(mid, dx, dy) < 1.0 ? lo : hi) = mid;
    }
    const double w = hi;
    dist(w, dx, dy);
    u = (std::atan2(dy, dx) + roll) / (2 * kPi) * 256 * kWraps;
    v = w * kTexPerUnit + vshift;
    light = 1.0 - w / kFar;   // darker with depth, black at kFar
}

// The ray is only solved on a grid, every 8 pixels; in between, u, v and the light are
// interpolated bilinearly, as tunnels were drawn in the 90s. u is unwrapped against the cell's
// first corner so the texture seam does not smear.
void Tunnel::render(double t) {
    constexpr int kCell = 8, GW = W / kCell + 1, GH = H / kCell + 1;
    struct Node { double u, v, l; };
    static Node grid[GH][GW];
    const double roll = 0.15 * t + 0.35 * std::sin(0.4 * t);
    const double vshift = kSpeed * t * kTexPerUnit;
    for (int gy = 0; gy < GH; gy++)
        for (int gx = 0; gx < GW; gx++) {
            const double px = (gx * kCell - W / 2) / kFocal, py = (gy * kCell - H / 2) * kAspect / kFocal;
            Node& n = grid[gy][gx];
            trace(px, py, t, roll, vshift, n.u, n.v, n.l);
        }
    for (int gy = 0; gy + 1 < GH; gy++)
        for (int gx = 0; gx + 1 < GW; gx++) {
            Node c[4] = {grid[gy][gx], grid[gy][gx + 1], grid[gy + 1][gx], grid[gy + 1][gx + 1]};
            for (int k = 1; k < 4; k++) c[k].u -= 256.0 * std::round((c[k].u - c[0].u) / 256.0);
            // Where the near wall hides the far one, the depth jumps inside the cell and
            // interpolating would smear the edge: trace every pixel of such a cell.
            double vmin = c[0].v, vmax = c[0].v;
            for (const Node& n : c) { vmin = std::min(vmin, n.v); vmax = std::max(vmax, n.v); }
            const double wmin = (vmin - vshift) / kTexPerUnit, wmax = (vmax - vshift) / kTexPerUnit;
            if (wmax > 1.6 * wmin + 0.5 && wmin < kFar * 0.8) {
                for (int y = 0; y < kCell; y++)
                    for (int x = 0; x < kCell; x++) {
                        const int sx = gx * kCell + x, sy = gy * kCell + y;
                        Node n;
                        trace((sx - W / 2) / kFocal, (sy - H / 2) * kAspect / kFocal, t, roll, vshift, n.u, n.v, n.l);
                        const int shade = std::clamp((int)(n.l * kShades), 0, kShades - 1);
                        pixels[sy * W + sx] = (uint8_t)(tex[((int)std::floor(n.v) & 255) * 256 + ((int)std::floor(n.u) & 255)] * kShades + shade);
                    }
                continue;
            }
            for (int y = 0; y < kCell; y++) {
                const double fy = (double)y / kCell;
                for (int x = 0; x < kCell; x++) {
                    const double fx = (double)x / kCell;
                    auto lerp = [&](double Node::*m) {
                        const double top = c[0].*m + (c[1].*m - c[0].*m) * fx;
                        const double bot = c[2].*m + (c[3].*m - c[2].*m) * fx;
                        return top + (bot - top) * fy;
                    };
                    const int u = (int)std::floor(lerp(&Node::u)) & 255, v = (int)std::floor(lerp(&Node::v)) & 255;
                    const int shade = std::clamp((int)(lerp(&Node::l) * kShades), 0, kShades - 1);
                    pixels[(gy * kCell + y) * W + gx * kCell + x] = (uint8_t)(tex[v * 256 + u] * kShades + shade);
                }
            }
        }
}

void Tunnel::to_argb(uint32_t* out) const {
    for (int k = 0; k < W * H; k++) out[k] = pal[pixels[k]];
}

}  // namespace mt
