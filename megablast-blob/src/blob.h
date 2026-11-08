// A re-creation of the glowing jelly blob from Megablast (Orange, 1996): a wobbling sphere whose
// front and back faces are all drawn additively, so it glows brightest where the surface is seen
// edge-on. Rendered in software at 320x200 with a 256-colour palette, like mode 13h.
#pragma once
#include <cstdint>
#include <vector>

namespace mb {

constexpr int W = 320, H = 200;

struct Settings {
    bool blur = true;        // the soft look: two 3x3 box blurs of the light buffer
    bool wire = false;       // show the mesh instead (for understanding)
};

class Blob {
  public:
    Blob();
    // Renders the blob at time t (seconds) into the 8-bit frame.
    void render(double t, const Settings& s);
    const uint8_t* frame() const { return pixels.data(); }   // W*H palette indices
    const uint32_t* palette() const { return pal; }          // 256 ARGB8888 entries
    void to_argb(uint32_t* out) const;

  private:
    static constexpr int kN = 22;                // cube-sphere: kN x kN quads per cube face
    struct V { float x, y, z, glow; };

    std::vector<float> dirs;                     // unit directions of the vertices (x, y, z)
    std::vector<int> tris;                       // vertex indices, 3 per triangle
    std::vector<int> edges;                      // vertex index pairs, for the mesh view
    std::vector<V> verts;                        // the same vertices, projected
    std::vector<uint16_t> light;                 // accumulated light, 8.8 fixed point
    std::vector<uint16_t> tmp;
    std::vector<uint8_t> pixels;
    uint32_t pal[256];

    void build(double t);
    void triangle(const V& a, const V& b, const V& c);
    void line(const V& a, const V& b);
    void blur3();
};

}  // namespace mb
