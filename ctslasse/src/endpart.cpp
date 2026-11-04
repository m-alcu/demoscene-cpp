// The end part (1B6F3h): the credits drawn in two colours on a black
// screen (a run-length picture as the font), white flash, fades timed by
// the vertical retrace polled at 3DAh.
#include "demo.h"

namespace lasse {


// 35/200/150 retraces: wait for the end of one, then the start of the next.
void Demo::retraces(int32_t n) {
    for (int32_t i = 0; i < n; i++) {
        while (m_.in8(0x3DA) & 8) {}
        while (!(m_.in8(0x3DA) & 8)) {}
    }
}

void Demo::endPart() {
    const uint32_t big = m_.r32(0x2B4C0);
    rle(big, 0x21EBA, 0, 1);
    text(0x30, 0x10, 0x291ED, big);
    text(0x48, 0x10, 0x29200, big);
    text(0x78, 0x78, 0x29213, big);
    rle(big, 0x21EBA, 0, 2);
    text(0x60, 0x80, 0x29219, big);
    text(0xA8, 0x30, 0x2921E, big);
    whiteDac();
    retraces(0x23);
    // colour 1 from white to black
    for (int32_t v = 0x3F; v != -1; v--) {
        m_.out8(0x3C8, 1);
        for (int k = 0; k < 3; k++) m_.out8(0x3C9, (uint8_t)v);
        retraces(1);
    }
    retraces(0xC8);
    // colour 1 up from black, colour 2 down from white
    for (int32_t v = 0, w = 0x3F; v < 0x40; v++, w--) {
        m_.out8(0x3C8, 1);
        for (int k = 0; k < 3; k++) m_.out8(0x3C9, (uint8_t)v);
        for (int k = 0; k < 3; k++) m_.out8(0x3C9, (uint8_t)w);
        retraces(1);
    }
    retraces(0x96);
    // background and colour 1 from white to black
    for (int32_t v = 0x3F; v != -1; v--) {
        m_.out8(0x3C8, 0);
        for (int k = 0; k < 6; k++) m_.out8(0x3C9, (uint8_t)v);
        retraces(1);
    }
    memset(kVram, 0, 0xFA00);
}

}  // namespace lasse
