// The star of Club Honey (Acme, Bizarre '98): an environment-mapped mesh flown around by the
// scene's keyframed camera, drawn by a small software renderer into a 320x200 buffer.
#pragma once
#include <cstdint>
#include <string>
#include <vector>

namespace honey {

constexpr int W = 320, H = 200;
constexpr float FRAMES_PER_SECOND = 54.0f;   // the scene's keyframer speed
constexpr float END_FRAME = 965.0f;          // where the original scene cuts away

class Star {
  public:
    bool init(const std::string& data_dir);  // loads star.txt and pink.png
    void render(float frame);                // draws the scene at an animation frame
    const uint32_t* pixels() const { return color.data(); }   // W x H, ARGB

  private:
    struct Vec3 { float x, y, z; };
    struct Face { int v[3]; Vec3 n; };
    std::vector<Vec3> pos, nrm;
    std::vector<Face> faces;
    std::vector<uint8_t> tex;                // 256 x 256 palette indices
    uint32_t pal[256] = {};
    std::vector<uint32_t> color;
    std::vector<float> depth;                // 1/z per pixel

    bool load_mesh(const std::string& path);
    bool load_texture(const std::string& path);
    struct ClipVert { float x, y, z, u, v; };
    void triangle(const ClipVert& a, const ClipVert& b, const ClipVert& c);
};

}  // namespace honey
