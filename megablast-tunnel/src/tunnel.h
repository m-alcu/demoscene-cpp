// A re-creation of the bending checkerboard tunnel from Megablast (Orange, 1996): the demo's own
// marble checkerboard texture wrapped round a tube that curves away from the viewer, darker with
// depth. Rendered in software at 320x200 with a 256-colour palette, like mode 13h.
#pragma once
#include <cstdint>
#include <string>
#include <vector>

namespace mt {

constexpr int W = 320, H = 200;
constexpr int kShades = 16;   // brightness levels per texture colour in the palette

class Tunnel {
  public:
    bool init(const std::string& data);   // loads data/checker.png (256x256, indexed)
    void render(double t);                // the frame at time t (seconds)
    const uint8_t* frame() const { return pixels.data(); }   // W*H palette indices
    const uint32_t* palette() const { return pal; }          // 256 ARGB8888 entries
    void to_argb(uint32_t* out) const;

  private:
    std::vector<uint8_t> tex;     // 256x256, texture colour numbers 0..n-1
    std::vector<uint8_t> pixels = std::vector<uint8_t>(W * H);
    uint32_t pal[256] = {};
};

}  // namespace mt
