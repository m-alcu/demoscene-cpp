// Checks: a single ball polygonises to a sphere of its radius with outward normals; the
// mesh is closed (every edge shared by exactly two triangles); two balls give one piece
// when close and two when apart; the renderer is deterministic and draws the blob.
#include <cmath>
#include <cstdio>
#include <cstring>
#include <map>
#include <numeric>
#include <tuple>
#include <vector>

#include "blobs.h"

using namespace mb;

static int failures = 0;
#define CHECK(c)                                                    \
    do {                                                            \
        if (!(c)) {                                                 \
            std::printf("FAIL %s:%d: %s\n", __FILE__, __LINE__, #c); \
            failures++;                                             \
        }                                                           \
    } while (0)

namespace {

using Key = std::tuple<float, float, float>;

// Weld the mesh's vertices (shared edges give bit-identical points), then count the
// connected pieces and the edges not shared by exactly two triangles.
void topology(const Mesh& m, int& pieces, int& open_edges) {
    std::map<Key, int> id;
    std::vector<int> v(m.pos.size());
    for (size_t i = 0; i < m.pos.size(); i++) {
        const Key k{m.pos[i].x, m.pos[i].y, m.pos[i].z};
        auto it = id.emplace(k, (int)id.size()).first;
        v[i] = it->second;
    }
    std::vector<int> parent(id.size());
    std::iota(parent.begin(), parent.end(), 0);
    auto find = [&](int x) {
        while (parent[x] != x) x = parent[x] = parent[parent[x]];
        return x;
    };
    std::map<std::pair<int, int>, int> edges;
    for (size_t t = 0; t < v.size(); t += 3)
        for (int e = 0; e < 3; e++) {
            int a = v[t + e], b = v[t + (e + 1) % 3];
            parent[find(a)] = find(b);
            if (a > b) std::swap(a, b);
            if (a != b) edges[{a, b}]++;
        }
    pieces = 0;
    for (size_t i = 0; i < parent.size(); i++) pieces += find((int)i) == (int)i;
    open_edges = 0;
    for (auto& e : edges) open_edges += e.second != 2;
}

}  // namespace

int main() {
    Mesh m;

    // One ball: a sphere of radius r, normals pointing out.
    polygonise({{{0.1f, -0.2f, 0.05f}, 0.5f}}, 40, 1.75f, m);
    CHECK(m.tris() > 500);
    float worst = 0, worst_n = 1;
    for (size_t i = 0; i < m.pos.size(); i++) {
        const Vec d = {m.pos[i].x - 0.1f, m.pos[i].y + 0.2f, m.pos[i].z - 0.05f};
        const float l = std::sqrt(d.x * d.x + d.y * d.y + d.z * d.z);
        worst = std::max(worst, std::fabs(l - 0.5f));
        worst_n = std::min(worst_n, (d.x * m.nrm[i].x + d.y * m.nrm[i].y + d.z * m.nrm[i].z) / l);
    }
    std::printf("sphere: %zu triangles, radius error %.4f, min normal.dir %.5f\n", m.tris(), worst, worst_n);
    CHECK(worst < 0.03f);
    CHECK(worst_n > 0.999f);
    // Triangles wound outward.
    int inward = 0;
    for (size_t i = 0; i < m.pos.size(); i += 3) {
        const Vec a = m.pos[i], b = m.pos[i + 1], c = m.pos[i + 2];
        const Vec u = {b.x - a.x, b.y - a.y, b.z - a.z}, w = {c.x - a.x, c.y - a.y, c.z - a.z};
        const Vec g = {u.y * w.z - u.z * w.y, u.z * w.x - u.x * w.z, u.x * w.y - u.y * w.x};
        inward += g.x * m.nrm[i].x + g.y * m.nrm[i].y + g.z * m.nrm[i].z < 0;
    }
    CHECK(inward == 0);

    // Two balls: fused when close, separate when apart; closed either way.
    int pieces, open;
    for (float d : {0.30f, 0.45f, 0.60f, 0.80f}) {
        polygonise({{{-d, 0, 0}, 0.4f}, {{d, 0.05f, 0}, 0.4f}}, 40, 1.75f, m);
        topology(m, pieces, open);
        const bool near_mid = [&] {
            for (const Vec& p : m.pos)
                if (std::fabs(p.x) < 0.05f) return true;
            return false;
        }();
        std::printf("two balls at +-%.2f: %zu triangles, %d piece(s), %d open edges, bridge %s\n", d, m.tris(),
                    pieces, open, near_mid ? "yes" : "no");
        CHECK(open == 0);
        CHECK(pieces == (d < 0.5f ? 1 : 2));
        CHECK(near_mid == (d < 0.5f));
    }

    // The animated scene stays closed at many times, and the renderer is deterministic.
    for (int f = 0; f < 200; f += 7) {
        polygonise(Blobs::balls_at(f * 0.37), 48, 2.1f, m);
        topology(m, pieces, open);
        CHECK(open == 0);
    }
    Blobs a, b;
    a.render(12.3);
    b.render(12.3);
    CHECK(a.screen() == b.screen());
    int blob = 0;
    for (uint8_t c : a.screen()) blob += c >= 64;
    const int area = a.width() * a.height();
    std::printf("frame at 12.3 s, %dx%d: %zu triangles, %d blob pixels\n", a.width(), a.height(), a.last_tris(),
                blob);
    CHECK(blob > area / 25 && blob < area / 2);

    // Wireframe: the same faces outlined, so the same pixels covered, with lines brighter
    // than the dark fill between them; and the size can change.
    a.view = View::Wire;
    a.render(12.3);
    int covered = 0, lines = 0;
    for (uint8_t c : a.screen()) covered += c >= 64, lines += c >= 64 + 191 / 4;
    std::printf("wireframe: %d covered pixels, %d line pixels\n", covered, lines);
    CHECK(covered > blob * 9 / 10 && covered < blob * 11 / 10);
    CHECK(lines > covered / 10 && lines < covered * 9 / 10);
    a.set_resolution(320, 200);
    a.view = View::Solid;
    a.render(12.3);
    int small = 0;
    for (uint8_t c : a.screen()) small += c >= 64;
    std::printf("320x200: %d blob pixels\n", small);
    CHECK(small > blob / 5 && small < blob / 3);

    std::printf(failures ? "%d FAILED\n" : "all passed\n", failures);
    return failures ? 1 : 0;
}
