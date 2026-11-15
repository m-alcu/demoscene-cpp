// The logo's mask, "cubic team & $een": the intro's only stored picture.
#pragma once

#include <cstdint>

namespace tunnel {

// Into TILE (256x256): 0, and FFh where the letters are
void logoMask(uint8_t* tile);

}  // namespace tunnel
