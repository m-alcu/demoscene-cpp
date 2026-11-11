// metaballs - Gouraud-shaded blobs that melt into one another and pull apart again, the
// way PC demos showed "liquid" around 1994-1997.
//
// Every frame: a scalar field (sum of r^2/d^2 over the balls) is sampled on a grid, the
// iso-surface field = 1 is cut into triangles by marching tetrahedra, each vertex gets the
// field's analytic gradient as its normal, and the triangles are drawn at 320x200 with 256
// colours (mode 13h) by a 16.16 fixed-point scanline filler that interpolates a palette
// index (Gouraud), with back-face culling and a painter's sort. The screen is 320x200 with
// 256 colours by default in mode 13h style, or any size up to 1280x960; it is always shown at 4:3.
#pragma once

#include <cstdint>
#include <vector>

namespace mb {

struct Vec { float x, y, z; };
struct Ball { Vec c; float r; };

// The surface field = 1 of a set of balls, as triangles with per-vertex outward normals.
struct Mesh {
    std::vector<Vec> pos, nrm;  // 3 entries per triangle (vertices are not shared)
    size_t tris() const { return pos.size() / 3; }
};

// Field value and outward normal (normalised -gradient) at p.
float field(const std::vector<Ball>& balls, Vec p);
Vec normal(const std::vector<Ball>& balls, Vec p);

// Polygonise field = 1 on an n^3-cell grid spanning [-half, half]^3. The grid's border
// samples are forced outside, so the mesh is always closed.
void polygonise(const std::vector<Ball>& balls, int n, float half, Mesh& out);

enum class Material { Slime, Mercury, Lava, Count };
const char* material_name(Material m);

// What is drawn: the shaded surface, its triangles as a hidden-line wireframe, or both.
enum class View { Solid, Wire, SolidWire, Count };
const char* view_name(View v);

class Blobs {
public:
    explicit Blobs(int width = 640, int height = 480);
    void set_resolution(int width, int height);
    int width() const { return w_; }
    int height() const { return h_; }
    // The balls at time t (seconds): Lissajous paths that cross, so they merge and split.
    static std::vector<Ball> balls_at(double t);
    // Draw the frame at time t into the 8-bit screen.
    void render(double t);
    void to_argb(uint32_t* out) const;

    void set_material(Material m);
    Material material() const { return material_; }
    bool gouraud = true;  // false: flat (one colour per face)
    View view = View::Solid;
    int grid = 64;        // cells per axis

    const std::vector<uint8_t>& screen() const { return screen_; }
    size_t last_tris() const { return mesh_.tris(); }

private:
    struct Vert { int32_t x, y, c; };  // x 16.16 pixels, y pixels, colour 16.16
    struct Face { int i; float z; };
    void triangle(const Vert& a, const Vert& b, const Vert& c);
    void line(const Vert& a, const Vert& b);

    int w_ = 0, h_ = 0;
    Mesh mesh_;
    std::vector<Vert> proj_;
    std::vector<Face> faces_;
    std::vector<uint8_t> screen_;
    uint32_t palette_[256];
    Material material_ = Material::Slime;
};

}  // namespace mb
