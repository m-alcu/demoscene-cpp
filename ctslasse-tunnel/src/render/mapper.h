// The grid mapper: the grid drawn as the intro draws it, in 256 colours.
#pragma once

#include <cstdint>

#include "common.h"

namespace tunnel {

// GRID onto SCREEN (320x200, a palette index a pixel): each pixel is
// LIGHT[level][TEX[v][u]], with u, v and the level interpolated between the
// grid's points
void drawGrid(const Grid& grid, const uint8_t* tex, const uint8_t* light, uint8_t* screen);

// SCREEN through the DAC (256 x RGB, 6 bits a channel), as ARGB: what the monitor shows
void toArgb(const uint8_t* screen, const uint8_t* dac, uint32_t* out);

}  // namespace tunnel
