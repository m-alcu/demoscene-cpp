// gustrace IMAGE IRQS: the music's GUS register writes (voice reg value, one
// a line, hex; "irq" before each interrupt's) from the set up to IRQS
// timer interrupts, as the analysis harness logs them, for comparison.
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iterator>
#include <vector>

#include "gf1.h"
#include "music.h"

int main(int argc, char** argv) {
    if (argc < 3) {
        std::fprintf(stderr, "usage: gustrace IMAGE IRQS\n");
        return 1;
    }
    std::ifstream f(argv[1], std::ios::binary);
    const std::vector<uint8_t> image((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
    cyb::Gf1 gus;
    gus.log = [](int v, int r, uint32_t x) { std::printf("%d %x %x\n", v, r, x); };
    cyb::Music music(image, gus);
    music.init();
    music.load();
    music.start();
    const long n = std::atol(argv[2]);
    for (long i = 0; i < n; i++) {
        std::printf("irq\n");
        music.irq();
    }
    return 0;
}
