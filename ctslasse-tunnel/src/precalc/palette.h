// The palettes and the DAC: the part's three palettes, and the fades
// between them that are written to the VGA's DAC.
#pragma once

#include <cstdint>

namespace tunnel {

// The 256 colours on show: red, green and blue of each, 6 bits a channel as
// the VGA takes them, and the same unrounded for the 32-bit picture (0-63).
struct Dac {
    uint8_t rgb[768];
    float exact[768];
};

enum class Pal {
    Red,    // green-grey - purple - light blue - black - red - yellow: the plane's and the tunnel's
    Blue,   // black - blue - white: the drops'
    Grey,   // black - white: the fade in
};

class Palettes {
public:
    Palettes();
    // Into DAC. K counts a fade's steps, 0-64.
    static void white(Dac& dac);                            // all white: how the part before ends
    void whole(Pal p, Dac& dac) const;                      // P as it is
    void fromWhite(Pal p, int32_t k, Dac& dac) const;       // K 0: white, 64: P
    void mix(Pal p, Pal from, int32_t k, Dac& dac) const;   // K 0: FROM, 64: P
    void toBlack(Pal p, int32_t k, Dac& dac) const;         // K 64: P, 0: black

private:
    uint8_t pal_[3][768];    // as the intro has them
    float exact_[3][768];    // unrounded
};

}  // namespace tunnel
