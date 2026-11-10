// A Gouraud-shaded torus, rendered the way PC demos did it around 1993-1995:
// 320x200 with 256 colours (mode 13h), palette ramps for the shading, back-face culling,
// painter's sort of the faces, and a scanline triangle filler in 16.16 fixed point that
// interpolates a palette index along the edges and across each span.
//
// Three models: our own torus, and the torus of Cyboman 2 (Complex, 1994) with its two
// looks from the intro: green/gold rings (at 6 s) and a copper/gold sawtooth (at 21 s).
#pragma once

#include <cstdint>
#include <vector>

namespace gt {

constexpr int W = 320, H = 200;

enum class Model { Own, CybomanRings, CybomanSawtooth, Count };
const char* model_name(Model m);

class Torus {
public:
    Torus();
    // Draw the frame at time t (seconds) into the 8-bit screen.
    void render(double t);
    // Screen through the palette, as 0xAARRGGBB.
    void to_argb(uint32_t* out) const;

    bool gouraud = true;  // false: flat shading (one colour per face), for comparison
    void set_model(Model m);
    Model model() const { return model_; }

    const std::vector<uint8_t>& screen() const { return screen_; }

private:
    struct Vec { float x, y, z; };
    struct Vert { int32_t x, y; int32_t c; float z; };  // projected: pixels, colour 16.16
    struct Mesh {
        std::vector<Vec> pos, nrm;     // model space, scaled to our units
        std::vector<int> tris;         // 3 vertex indices per triangle
        std::vector<uint8_t> mat;      // per triangle: 0 or 1 (second ramp)
    };
    struct Ramp { int base, len; };   // palette range of one material
    struct Face { int a, b, c, mat; float z; };

    void triangle(const Vert& a, const Vert& b, const Vert& c, int lo, int hi);

    Mesh own_, cyb_;
    std::vector<uint8_t> mat_rings_, mat_saw_;
    Model model_ = Model::Own;
    const Mesh* mesh_ = &own_;
    Ramp ramp_[2];
    bool cyb_light_ = false;          // Cyboman 2's light curve
    std::vector<Vert> proj_;
    std::vector<Face> visible_;
    std::vector<uint8_t> screen_;
    uint32_t palette_[256];
};

}  // namespace gt
