#include "machine.h"
#include <cstdio>
#include <cstdlib>

namespace kb {

uint8_t* Mem::ptr(uint32_t a) {
    if (a >= 0x20000000 && a < 0x20000000 + SRAM_SIZE) return &sram[a - 0x20000000];
    std::fprintf(stderr, "kaleido-bars: access to unmapped address %08x\n", a);
    std::abort();
}

}  // namespace kb
