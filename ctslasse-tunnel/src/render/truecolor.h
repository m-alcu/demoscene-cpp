// The same grid drawn in 32-bit colour, at any size. (Not in the intro.)
#pragma once

#include <cstdint>

#include "common.h"

namespace tunnel {

// GRID as W x H pixels of ARGB (shown at 4:3 as 320x200 is): u, v and the
// light interpolated per pixel from the grid at full precision (SMOOTH:
// Catmull-Rom between the 4x4 points around, else bilinearly, as the mapper
// does), the texture TEX filtered (Catmull-Rom), the light levels computed
// without rounding and the colour read between the entries of DAC (256 x
// RGB, unrounded, 0-63).
void drawTrueColor(const Grid& grid, const uint8_t* tex, const float* dac, uint32_t* out, int w, int h, bool smooth);

}  // namespace tunnel
