// The blend of two grids: one effect fading into another is a weighted sum
// of where they read the texture, not of their pictures.
#include "effects/effects.h"

namespace tunnel {

// 150BEh: grid = grid * WA + other * WB (WA + WB = 4096: the effects'
// values to 8.24)
void blend(Grid& grid, const Grid& other, int32_t wa, int32_t wb) {
    for (size_t i = 0; i < grid.size(); i++) {
        Point& p = grid[i];
        const Point& q = other[i];
        p.u = p.u * (uint32_t)wa + q.u * (uint32_t)wb;
        p.v = p.v * (uint32_t)wa + q.v * (uint32_t)wb;
        p.light = p.light * (uint32_t)wa + q.light * (uint32_t)wb;
    }
}

}  // namespace tunnel
