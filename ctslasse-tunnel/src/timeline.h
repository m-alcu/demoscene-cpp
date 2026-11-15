// The timeline: part 8's script. At each moment it says which effects are
// on, with what parameters and how they are blended, and what the palette
// is. It is the part's main loop (1C776h) with the drawing left out.
#pragma once

#include "common.h"
#include "effects/effects.h"
#include "precalc/palette.h"

namespace tunnel {

// What a frame is made of, for the inspector (none of it is used to draw)
struct FrameInfo {
    float t = 0;                // the part's time
    bool drops = false, plane = false, tunnel = false;
    float planeShare = 0;       // the plane's weight in the blend (0-1), the rest the drops' or the tunnel's
    float twist = 0, zoom = 0, phase = 0, wave = 0;   // the tunnel's
    float u0 = 0, v0 = 0;       // its turn and its forward movement, in texels
    float morph = 0;            // the loop's morph into its start (0-1), and the time it goes to
    float morphTo = 0;
};

// A grid not cut to the texture's 256 texels: the same 8.24 values in 64
// bits, as the effects count them (the tunnel's v is how far it has flown,
// thousands of texels). Two of these can be mixed in a straight line.
struct WidePoint {
    int64_t u, v, light;
};
using WideGrid = std::array<WidePoint, kGridW * kGridH>;

// The tunnel's shape at T, from T 38, when it is alone: its flight, and its
// twist, zoom, wave and phase, set by one span of T after another
TunnelShape tunnelAt(float T);

class Timeline {
public:
    bool fadeOut = true;        // false: no fade over T 68-72 (it runs on)

    // The frame at CLOCK (PIT ticks since the part began): its grid (8.24),
    // and DAC brought to it. The intro writes the DAC only while it fades,
    // so DAC is the one from the frame before.
    FrameInfo update(int32_t clock, Grid& grid, Dac& dac);
    // The same frame with its grid unwrapped; cut to 32 bits it is update()'s
    FrameInfo updateWide(int32_t clock, WideGrid& grid, Dac& dac);
    // The next frame does not follow the last one: its palette is set whole
    void jumped() { dacSet_ = false; }

private:
    // The frame as the two grids it is blended from, FRONT (the drops or the
    // tunnel) and plane_, and their weights (of 4096)
    struct Weights {
        int32_t front = 4096, plane = 0;
    };
    Weights layers(int32_t clock, Grid& front, Dac& dac, FrameInfo& info);
    void colours(X t80, Dac& dac);
    Weights blended(float T, Grid& grid, FrameInfo& info);

    Palettes palettes_;
    Grid plane_{}, front_{};
    bool dacSet_ = false;       // the palette written (else a start past the fades stays white)
    float lastT_ = 0;
};

}  // namespace tunnel
