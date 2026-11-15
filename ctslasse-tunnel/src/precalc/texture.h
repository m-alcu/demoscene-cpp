// The texture: a 256x256 tile of marble, computed at start-up.
#pragma once

#include <cstdint>
#include <vector>

namespace tunnel {

// The tile part 8 shows (the intro's [2B4C0h] + 130000h). LOGO: with the
// "cubic team & $een" logo embossed in it, as in the intro.
std::vector<uint8_t> makeTexture(bool logo);

}  // namespace tunnel
