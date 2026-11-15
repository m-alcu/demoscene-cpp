// The water tunnel of Lasse Reinbøng (Cubic Team & $eeN, 1995): part 8 of
// the intro (1C776h) from T 12 to its end. A marble texture (by default
// without the intro's embossed logo) on a rippling plane in red, yellow and blue, then a tunnel faded in over it:
// its walls wave like water, it twists, zooms and breathes with the music,
// until it fades out at T 72.
//
// The picture is a 41x26 grid of points (texture u, v and a light level),
// drawn by the intro's grid mapper in 8x8 blocks over 320x200. Translated
// from the ctslasse port routine by routine, into C++ expressions with the
// order of the intro's x87 operations kept; every frame of the part matches
// the original (tests/ref.txt). The whole part is here
// (from T 0, the drops of ctslasse-pond); each frame depends on the time
// only, so any T can be drawn on its own.
//
// This class only joins the modules, in the order a frame takes them:
//   precalc/   once: the texture, the light tables, the palettes
//   timeline   per frame: the time -> which effects, their parameters, the DAC
//   effects/   the drops, the plane and the tunnel, each written into a grid
//   render/    the grid -> pixels: the intro's mapper, or 32-bit colour
#pragma once

#include <cstdint>
#include <vector>

#include "common.h"
#include "timeline.h"

namespace tunnel {

class Tunnel {
public:
    // LOGO: the intro's texture, the "cubic team & $een" logo embossed in the
    // marble (the original's picture); without it, the marble alone
    explicit Tunnel(bool logo = false);
    // The frame at CLOCK (PIT ticks since the part began): the grid, the
    // picture and the DAC as the intro has them.
    void frame(int32_t clock);
    // The frames at CLOCK and at CLOCK_TO, their grids mixed (W 0: CLOCK's,
    // 1: CLOCK_TO's) in a straight line, and their DACs, then drawn: the
    // intro's blend of the tunnel in over the plane (T 33-38, 150BEh), which
    // run the other way turns the loop's end, the tunnel, back into its
    // start, the plane. FROM and FROM_TO: the two clocks at W 0; the
    // tunnel's flight is counted from the whole turns of the texture nearest
    // to it there, as the intro's is from 0, so the mix does not sweep
    // through the thousands of texels flown. (Not in the intro.)
    void morph(int32_t clock, int32_t clockTo, float w, int32_t from, int32_t fromTo);
    static float partTime(int32_t clock) { return tunnel::partTime(clock); }
    // false: no fade over T 68-72 (it runs on)
    void setFadeOut(bool on) { timeline_.fadeOut = on; }

    const uint8_t* screen() const { return screen_.data(); }  // 320x200
    const uint8_t* dac() const { return dac_.rgb; }            // 256 RGB, 6-bit
    const uint8_t* texture() const { return tex_.data(); }      // 256x256; with the logo: the intro's [2B4C0h] + 130000h
    const uint8_t* lightTable() const { return light_.data(); } // 130 x 256: level x texel
    const Grid& points() const { return grid_; }
    // the grid as the intro holds it: 41 x 26 x (u, v, light), 3198 dwords
    const uint8_t* grid() const { return reinterpret_cast<const uint8_t*>(grid_.data()); }
    // the picture in 256 colours, as the intro shows it (the screen through the DAC)
    void toArgb(uint32_t* out) const;
    // The same frame in 32-bit colour, at any size (see render/truecolor.h).
    // Call after frame().
    void toTrueColor(uint32_t* out, int w = W, int h = H, bool smooth = true) const;

    // What the frame drew, for the inspector
    using Info = FrameInfo;
    const Info& info() const { return info_; }

private:
    std::vector<uint8_t> tex_, light_, screen_;   // made once; drawn each frame
    Timeline timeline_;
    Grid grid_{};
    Dac dac_;
    Info info_;
};

}  // namespace tunnel
