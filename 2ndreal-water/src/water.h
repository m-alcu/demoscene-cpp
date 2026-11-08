// The "water" part of Second Reality (Future Crew, 1993): raytraced mirror spheres over water,
// with a sword flying through them, ported from the part's released source (WATER/DEMO.PAS and
// ROUTINES.ASM, by PSI).
//
// The sword is a 400x34 picture scrolled, one column every 3 frames, through a 158x34 buffer.
// Each buffer pixel has a precomputed list of screen offsets (where it shows, directly and in
// the reflections and refractions of the spheres and the water). Three such tables (WAT1-3)
// are drawn in turn, one per frame. A zero (transparent) pixel puts the background back.
#pragma once
#include <cstdint>
#include <string>
#include <vector>

namespace water {

constexpr int W = 320, H = 200;
constexpr int BW = 158, BH = 34;          // the scroll buffer
constexpr int SWORD_W = 400;

// Timeline in 70 Hz frames. Frame 0 is the first frame of the fade-in.
constexpr int FADE_IN = 127;              // for y := 0 to 63*2
constexpr int WAIT = 517;                 // waiting for the music (order change, row >= 16);
                                          // measured in the DOSBox run, ±2 frames
constexpr int MAIN0 = FADE_IN + WAIT;     // first frame of the main loop
constexpr int FADE_OUT = 1332;            // main-loop frame where the music sync (-11) starts the fade
constexpr int END = MAIN0 + FADE_OUT + 64;   // frames drawn in total (fp counts to 64, then quit)

class Water {
  public:
    bool init(const std::string& data_dir);   // background.png, sword.png, wat1-3.png
    void reset();
    // Runs one frame (one waitr). Returns false once the part has ended (nothing drawn).
    bool step();
    int frame() const { return g; }           // frames run so far
    const uint8_t* pixels() const { return screen; }   // 320x200 indices (the VGA memory)
    const uint8_t* dac() const { return dac6; }        // 768 6-bit DAC values
    void to_argb(uint32_t* out) const;
    void to_rgb24(uint8_t* out) const;

  private:
    struct Table {
        std::vector<uint16_t> start;   // BW*BH + 1: entries of buffer pixel i are [start[i], start[i+1])
        std::vector<uint16_t> off;     // screen offsets
    };
    Table tab[3];
    std::vector<uint8_t> bkg = std::vector<uint8_t>(W * H);   // the raytraced picture ("tausta")
    uint8_t font[SWORD_W * BH] = {};   // the sword
    uint8_t srcpal[768] = {};

    uint8_t screen[W * H] = {};
    uint8_t dac6[768] = {};
    // The program's variables. pal/tmppal are array[0..768]: 769 bytes, and the fades'
    // "for pf := 0 to 3" reaches one byte into the next colour (and index 768 for colour 255).
    uint8_t pal[769] = {}, tmppal[769] = {};
    uint8_t fbuf[BW * BH + 1] = {};
    int sss = 0, scp = 0, fp = 0;
    bool fadeout = false;
    int g = 0;

    void scr(int pos);
    void fade_step(bool up);
};

uint32_t crc32(const uint8_t* p, size_t n);

}  // namespace water
