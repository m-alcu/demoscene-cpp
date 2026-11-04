// main (18883h): the checks, the precalculation, the music, the parts.
#include "demo.h"

namespace lasse {

void Demo::main() {
    sp_ = 0x2C530 - 5 * 4;                  // ESP 2C530h at entry (the return address); ebx ecx edx esi edi
    m_.vga.setMode(3, m_.p(kVram));
    print(0x28B38);                         // the title
    print(0x28B80);                         // "you need a 486..." (a BSWAP follows: no fault)
    print(0x28BB3);                         // ...erased
    // int 11h: a coprocessor; FNINIT; malloc(310000h) succeeds and is freed
    F = Fpu();
    heapInit();
    print(0x28CA8);                         // "testing system preformance..."
    const uint32_t a = malloc(0x160000);
    m_.w32(0x2B4C4, (a + 0x10000) & 0xFFFF0000u);
    m_.w32(0x2B4C0, (a + 0x20000) & 0xFFFF0000u);
    precalc();
    load(0x224C2);
    // 15CCBh: the keyboard IRQ to an EOI only (the old vector kept: PMODE/W's 38h:9)
    m_.w32(0x2B45C, 9);
    m_.w16(0x2B460, 0x38);
    m_.w8(0x2B462, 0);
    m_.vga.setMode(0x13, m_.p(kVram));
    play(0);
    if (idle)
        for (;;) m_.frameCheck();
    using Part = void (Demo::*)();
    static const Part parts[] = {&Demo::part1, &Demo::part2, &Demo::part3, &Demo::part4, &Demo::part5,
                                 &Demo::part6, &Demo::part7, &Demo::part8, &Demo::part9};
    for (Part p : parts) {
        if (escape()) continue;
        (this->*p)();
    }
    stopMusic();
    if (!escape()) endPart();
    m_.vga.setMode(3, m_.p(kVram));
    // 15CF7h: the keyboard flushed, its vector back
    while (m_.in8(0x64) & 1) m_.in8(0x60);
}


}  // namespace lasse
