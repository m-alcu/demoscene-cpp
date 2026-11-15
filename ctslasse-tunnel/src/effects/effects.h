// The effects. None of them draws a pixel: each one writes a grid, saying
// for every 8th pixel where it reads the texture (u, v) and how lit it is.
// Bending the grid is what bends the picture; render/ turns it into pixels.
//
// They write fixed point with a texel or a light level as 4096; blend() or
// a multiplication by 4096 takes it to the grid's 8.24.
//
// They give the intro's results bit for bit (tests/ref.txt). The floating
// point is the x87's (see X in common.h): each expression is evaluated in
// long double, in the intro's order, and rounded to float or double where
// the intro stores a value, or to the nearest integer (lrint) where it does
// FRNDINT/FISTP.
#pragma once

#include "common.h"

namespace tunnel {

// The drops (1CB2Bh): three rings spreading over the flat texture, T the part's time
void makeDrops(Grid& grid, float t);

// The plane (1CDF8h): the flat texture turning and waving, T the part's time
void makePlane(Grid& grid, float t);

// The tunnel (1C5CBh)
struct TunnelShape {
    float twist = 1;        // how many waves there are round the walls
    float zoom = 500;       // the depth's scale: how far in the walls are
    float phase = 0;        // where round the walls the waves are (radians)
    int32_t u0 = 0, v0 = 0; // the turn and the way forward, in texels * 4096
    float wave = 0;         // the waves' height, as a share of the radius
};
void makeTunnel(Grid& grid, const TunnelShape& s);

// 150BEh: grid = grid * WA + other * WB (WA + WB = 4096: the effects' values to 8.24)
void blend(Grid& grid, const Grid& other, int32_t wa, int32_t wb);

}  // namespace tunnel
