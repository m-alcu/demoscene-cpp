// Piscina: the pond of Lasse Reinbøng (Cubic Team & $eeN, 1995), part 8,
// moved into a swimming pool. The marble is replaced by the bottom of a
// pool (a mosaic of small tiles, pale grout, a dark lane line), small waves run over
// the water all the time, and the light that comes through the surface is
// gathered on the bottom: where the waves focus it, the caustics, the bright
// lines that move over the bottom of a pool on a sunny day.
//
// The picture is a 41x26 grid of points (texture u, v and a light level),
// drawn by the intro's grid mapper in 8x8 blocks over 320x200, or in 32-bit
// colour from the water computed at each pixel. The water is the pond's:
// the intro's ring formula for each drop, plus the small waves. The light on
// the bottom is computed by following the sun's rays through the surface
// (see Caustics).
//
//   pondFrame(t)  the pool: drops falling at random or where asked, the
//                 small waves and the caustics.
//   frame(clock)  the intro's own three drops, exactly, up to T 8: the
//                 grid as the intro has it (tests/ref.txt), which shows
//                 that the water is still the intro's. Only the test uses it.
#pragma once

#include <array>
#include <cstdint>
#include <limits>
#include <vector>

namespace piscina {

// The intro's floating point is the x87's: 80 bits, rounding to nearest.
// That is long double with GCC or Clang on x86; bubbles() evaluates its
// expressions in it, in the intro's order, rounded to float or double where
// the intro stores a value. Elsewhere its grid would not be exact.
using X = long double;
static_assert(std::numeric_limits<X>::digits == 64,
              "long double must be the x87's 80-bit format (GCC or Clang on x86) for the exact grid");

constexpr int W = 320, H = 200;
constexpr int kGridW = 41, kGridH = 26;      // the grid's points: one per 8x8 block's corner
constexpr double kPit = 1193182.0;
constexpr double kUnit = 813440.2376280001;   // the part's time unit in PIT ticks (about 0.68 s)
constexpr float kIntroEnd = 8.0f;             // T: the intro's drops alone up to here
// The light: 63 at rest (and up to 65, the texel as it is), then 64 steps
// towards white (S = level - 65: 0-64, white at 129). The table has a row
// per step; 64 = 2^6, so S / 64 is a shift.
constexpr int kRest = 63, kHighlight = 65, kShift = 6, kSteps = 1 << kShift, kTop = kHighlight + kSteps,
              kRows = kSteps + 1;

// A drop in the water: where (grid cells, 0-40 across, 0-25 down) and when
// (T) it fell. The ring's radius is 8 cells per T.
struct Drop {
    float x, y, t;
    bool first = false;     // the intro's first drop: its own strength
};

// The small waves: a few trains of sine waves, each with its own length,
// direction and speed (deep water: speed grows with the length), always
// running. Their slope bends the light that goes through the surface; the
// bottom is seen moved by it, and the sun's light gathers where the
// slopes focus it. STRENGTH scales every slope (0: still water).
struct Wave {
    float kx, ky;           // wave number (radians per texel) along x and y
    float sx, sy;           // the bottom moves by (sx, sy) cos(phase), texels
    double omega, phase;    // radians per second, at 0 s
};

// The light on the bottom, in texels of the bottom (the 256 tile's, as the
// texture at rest: the screen's 320x200 is 0-320 x 0-200). Photons are sent
// down through a fine grid of points on the surface, a little wider than the
// screen; each lands where the water moves the bottom seen at its point,
// and is added there between the four nearest cells. Then a [1 2 1] blur:
// the sun is a disc, not a point, so its image on the bottom is never a
// line of no width. 1 is the light at rest; where the waves focus it,
// several times that, and less in between: the energy is the same, only
// gathered.
struct Caustics {
    static constexpr float kSpacing = 0.25f;          // between photons, texels
    static constexpr float kCell = 0.5f;              // a cell of the map, texels
    static constexpr float kPX = -16, kPY = -16;      // the first photon
    static constexpr float kCX = -32, kCY = -32;      // the map's corner
    static constexpr int kPW = 1409, kPH = 929;       // photons: -16..336 x -16..216
    static constexpr int kCW = 768, kCH = 528;        // cells: -32..352 x -32..232
    std::vector<float> pu, pv;      // where each photon lands, texels
    std::vector<float> map, tmp;    // the light, kCW x kCH (1 at rest)
    bool on = false;                // computed this frame (else 1 everywhere)
    // each thread's photons, added up in its own map (only its rows lo..hi,
    // inclusive, are used), then the maps summed into MAP
    std::vector<std::vector<float>> band;
    std::vector<int> lo, hi;
    // the light at a point of the bottom, between the four nearest cells
    float at(float u, float v) const;
};

class Pool {
public:
    Pool();
    // The intro at CLOCK (PIT ticks since the part began, up to T 8): the
    // grid as the intro has it, mapped with the tiles.
    void frame(int32_t clock);
    static float partTime(int32_t clock) { return (float)((double)clock / kUnit); }
    static double seconds(double t) { return t * kUnit / kPit; }

    // The pool at T: DROPS are the drops fallen so far (finished ones may be
    // removed). The palette comes in from white over T 0-1. The 32-bit
    // picture is drawn from the water computed at each of its pixels when
    // WxH is given, else from the grid's points (the 256-colour picture
    // always uses the grid, and the caustics pixel by pixel).
    void pondFrame(float t, const std::vector<Drop>& drops, int w = 0, int h = 0);
    // The intro's three drops
    static std::vector<Drop> introDrops();
    // A drop is done when its ring has left the screen
    static bool dropDone(const Drop& d, float t);

    // the small waves' strength (0: still) and the caustics
    void setRipples(float s) { ripples_ = s < 0 ? 0 : s; }
    float ripples() const { return ripples_; }
    void setCaustics(bool on) { causticsOn_ = on; }
    bool caustics() const { return causticsOn_; }
    const Caustics& causticMap() const { return caustics_; }
    const std::vector<Wave>& waves() const { return waves_; }

    const uint8_t* screen() const { return screen_.data(); }   // 320x200
    const uint8_t* dac() const { return dac_; }                // 256 RGB, 6-bit
    const uint8_t* texture() const { return tex_.data(); }     // 256x256, the tiles
    // the light table: kRows rows (S = level - 65, 0-64) of 256 texels
    const uint8_t* lightTable() const { return light_.data(); }
    // the grid as the intro holds it: 41 x 26 x (u, v, light), 3198 dwords
    const uint8_t* grid() const { return reinterpret_cast<const uint8_t*>(grid_.data()); }
    // the picture in 256 colours (the screen through the DAC)
    void toArgb(uint32_t* out) const;
    // The same frame in 32-bit colour, at any size (WxH, shown at 4:3 as
    // 320x200 is): u, v and the light interpolated per pixel at full
    // precision from the water, the tiles filtered (Catmull-Rom), the light
    // and the caustics without rounding. Call after frame() or pondFrame().
    void toTrueColor(uint32_t* out, int w = W, int h = H) const;
    // The tiles the 32-bit picture uses: 256 (as the 256 colours) or 512
    // (the same tiles drawn at twice the detail)
    void setTiles(int size);
    int tiles() const { return tiles_; }
    const uint8_t* texture512() const { return tex512_.data(); }   // 512x512

private:
    // A point of the grid: the texture's u and v (texels) and the light
    // level, in 8.24 fixed point. The drops leave them in 16.16, and they
    // are then multiplied by 4096.
    struct Point {
        uint32_t u, v, light;
    };
    static_assert(sizeof(Point) == 12, "the intro's layout");
    using Grid = std::array<Point, kGridW * kGridH>;

    void makeTiles();               // the bottom, at 256 and 512
    void makeLightTable();          // the light table
    void makeWaves();               // the small waves
    void palette(float t);          // the pool's palette, in from white over T 0-1
    void causticsPass(float t, const std::vector<Drop>& drops);
    void causticsToScreen();        // the 256-colour picture lit by the caustics

    // grid.cpp: the intro's routines
    void gridMap();                     // the grid onto the screen
    void bubbles(float t);              // the three drops, into the grid

    Grid grid_{};
    // The water the 32-bit picture is drawn from: u and v (texels) and the
    // light level at NX x NY points, CX and CY pixels apart (of 320x200), the
    // first at (OX, OY).
    struct Field {
        int nx = 0, ny = 0;
        double cx = 8, cy = 8, ox = 0, oy = 0;
        std::vector<float> u, v, l;
    };
    Field field_;
    void fieldFromGrid();                   // the field at the grid's points
    // the texture, the light table, the screen
    std::vector<uint8_t> tex_, light_, screen_;
    std::vector<uint8_t> tex512_;
    int tiles_ = 512;
    uint8_t pal_[768], dac_[768];
    float palF_[768], dacF_[768];           // the same, unrounded (6-bit scale, 0-63)
    std::vector<Wave> waves_;
    float ripples_ = 1.0f;
    bool causticsOn_ = true;
    Caustics caustics_;
};

}  // namespace piscina
