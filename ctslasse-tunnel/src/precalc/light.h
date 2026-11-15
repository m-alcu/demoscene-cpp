// The light tables: what a texel becomes at each light level.
#pragma once

#include <cstdint>
#include <vector>

namespace tunnel {

constexpr int kLightLevels = 130;

// 256 rows of 256, row L the palette index of each texel at level L (only
// the first kLightLevels are ever reached; the rest are 0):
// - 0-64, the fog: the low levels fade towards index 128;
// - 65-129, the highlights: towards index 255.
std::vector<uint8_t> makeLightTables();

}  // namespace tunnel
