// The vector parts' scripts: 1A896h (part 2), 1AD1Dh/1AD51h/1B182h/1B1ECh
// (the frames and set-ups of parts 4-6), 1AD70h (the vector ending, into
// mode 12h), and the precalculation (1B12Bh) that makes their objects.
#include "demo.h"

namespace drift {

namespace {
// the scripts' variables
constexpr uint32_t kTicks = 0x1A270, kStep = 0x1A274, kFadeTo = 0x1A27C, kFadeAt = 0x1A280;
}  // namespace

// One of the script's loops: the frame drawn (DRAW), then a fade step
// (FROM, TO) if asked, until the tick count reaches END. False on Esc.
bool Demo::sceneLoop(uint32_t end, const std::function<void()>& frame, uint32_t from, uint32_t to) {
    do {
        frame();
        if (from) fade(from, to, m_.r32(kFadeTo), 0x300, m_.r32(kFadeAt));
        if (esc()) return false;
    } while (m_.r32(kTicks) < end);
    return true;
}

void Demo::fadeSetup(uint32_t to, uint32_t step0) {
    m_.w32(kFadeTo, to);
    m_.w32(kFadeAt, step0);
}

// 1A896h
void Demo::vectors() {
    const uint32_t heap = m_.r32(8);
    auto frameA = [&] {                 // the room, the picture, the objects
        drawRoom();
        addPicture(heap + 0x10000);
        drawObjects();
        show();
    };
    auto abort = [&] {                  // 1AD16h
        modeX();
        return;
    };
    setPalette(0x13EBD, 0x300, 0);
    fadeSetup(0x80, 0);
    m_.w32(kStep, 0x1B36D);
    if (!sceneLoop(0x378, frameA, 0x13EBD, 0x141BD)) return abort();
    // a white flash
    setPalette(0x141BD, 0x300, 0);
    for (uint32_t i = 0; i < 0x2FD; i++) m_.w8(0x13EC0 + i, 0x3F);
    fadeSetup(4, 0);
    if (!sceneLoop(0x37D, [&] {
            drawRoom();
            addPicture(heap + 0x10000);
            drawObjects();
            show();
        }, 0x141BD, 0x13EBD))
        return abort();
    setPalette(0x13EBD, 0x300, 0);
    fadeSetup(0x3F, 0);
    if (!sceneLoop(0x3BD, [&] {
            drawRoom();
            addPicture(heap + 0x1FA00);
            show();
        }, 0x13EBD, 0x144BD))
        return abort();
    setPalette(0x144BD, 0x300, 0);
    m_.w32(kStep, 0x1B36C);
    if (!sceneLoop(0xAB7, [&] {
            drawRoom();
            addPicture(heap + 0x1FA00);
            drawObjects();
            show();
        }, 0, 0))
        return abort();
    // the ripple
    for (uint32_t i = 0; i < 0xFA00; i += 4) m_.w32(heap + 0x10000 + i, 0x40404040);
    m_.w32(0x11C34, heap + 0x3F9E0);
    m_.w32(kStep, 0x1B381);
    setPalette(0x147BD, 0x180, 0x80);
    if (!sceneLoop(0xC79, [&] {
            drawRoom();
            addRipple(heap + 0x1FA00, m_.r32(0x11C34));
            show();
        }, 0, 0))
        return abort();
    for (uint32_t i = 0; i < 0x180; i += 4) m_.w32(0x141BD + i, m_.r32(0x144BD + i));
    for (uint32_t i = 0; i < 0x180; i += 4) m_.w32(0x141BD + 0x180 + i, m_.r32(0x147BD + i));
    for (uint32_t i = 0; i < 0xFF; i++) m_.w16(0x13EC0 + i * 3, 0), m_.w8(0x13EC2 + i * 3, 0x20);
    fadeSetup(0x7F, 0);
    m_.w32(kStep, 0x1B3C4);
    if (!sceneLoop(0xCF9, [&] {
            drawRoom();
            addRipple(heap + 0x1FA00, m_.r32(0x11C34));
            show();
        }, 0x141BD, 0x13EBD))
        return abort();
    // the room spins on black
    setPalette(0x13EBD, 0x300, 0);
    m_.w32(0x1A28C, 0x1A32C);
    m_.w32(0x1A290, 0x1A334);
    m_.w32(0x1A294, 0);
    m_.w32(0x1A298, 0);
    faceStyle(0x14DBD, 0xC00000);
    waitFrame();
    for (uint32_t i = 0; i < 0xFA00; i += 4) vram32(i, 0xE0E0E0E0);
    waitFrame();
    setPalette(0x1493D, 0x300, 0);
    m_.w32(kStep, 0x1B3CF);
    do {
        for (uint32_t i = 0; i < 0xFA00; i += 4) m_.w32(heap + i, 0);
        drawRoom();
        show();
        if (esc()) return abort();
    } while (m_.r32(kTicks) < 0xD6D);
    for (uint32_t i = 0; i < 0x2FD; i++) m_.w8(0x13EC0 + i, 0x3F);
    fadeSetup(4, 0);
    m_.w32(kStep, 0x1B36D);
    do {
        fade(0x1493D, 0x13EBD, m_.r32(kFadeTo), 0x300, m_.r32(kFadeAt));
        if (esc()) return abort();
    } while (m_.r32(kTicks) < 0xD72);
    setPalette(0x13EBD, 0x300, 0);
    modeX();
    modeXBackground();
    fadeSetup(0xFF, 0);
    do {
        fade(0x13EBD, 0x1493D, m_.r32(kFadeTo), 0x300, m_.r32(kFadeAt));
        if (esc()) return abort();
    } while (m_.r32(kTicks) < 0xE72);
    setPalette(0x1493D, 0x300, 0);
}

// 1B182h: part 4's set-up
void Demo::vectorsReset() {
    m_.w32(kStep, 0x1B36C);
    m_.w32(0x1A28C, 0x1A32C);
    m_.w32(0x1A290, 0x1A334);
    m_.w32(kTicks, 0x270F);
    faceStyle(0x14E01, 0x100);
    m_.w32(0x14E39, 0x1A806);
    m_.w32(0x14E11, 0);
    m_.w32(0x14E15, 0xFE000000);
    m_.w32(0x14E19, 0x800000);
    m_.w32(0x14E01, 0x200);
}

// 1AD1Dh: a sky into the buffer's top 60 rows, the objects over it
bool Demo::vectorsFlight() {
    uint32_t edi = m_.r32(8), eax = 0x3C3C3C3C;
    for (int b = 0; b < 0x1E; b++, eax -= 0x01010101)
        for (int k = 0; k < 0xA0; k++, edi += 4) m_.w32(edi, eax);
    drawObjects();
    return m_.r32(kTicks) >= 0x2AF8;
}

// 1B1ECh: part 6's set-up
void Demo::vectorsSpin() {
    m_.w32(kStep, 0x1B3E2);
    m_.w32(0x14DC1, 0x400);
    m_.w32(0x14DD1, 0x3E80000);
    m_.w32(kTicks, 0x4E1F);
    setPalette(0x14ABD, 0x180, 0x80);
}

// 1AD51h
bool Demo::vectorsSpinFrame() {
    drawRoom();
    if (m_.r32(kTicks) > 0x4F1A) {
        m_.w32(kStep, 0x1B36C);
        return true;
    }
    return false;
}

// 1AD70h: the vector ending, then mode 12h with the picture at [8]+10000h
// (two colours) doubled across and stretched 6/5 down, faded in
bool Demo::vectorsEnd() {
    const uint32_t heap = m_.r32(8);
    m_.w32(0x1A28C, 0x1A33C);
    m_.w32(0x1A290, 0x1A350);
    faceStyle(0x14E01, 0x800000);
    m_.w32(0x14E05, 0), m_.w32(0x14E09, 0), m_.w32(0x14E0D, 0);
    m_.w32(0x14E39, 0x1A836);
    m_.w32(0x14E11, 0x8000000);
    m_.w32(0x14E15, 0xF8000000);
    m_.w32(0x14E19, 0x3000000);
    m_.w32(0x14E01, 0x102);
    for (uint32_t i = 0; i < 0x2FD; i++) m_.w8(0x13EC0 + i, 0x3F);
    fadeSetup(0x10, 0);
    m_.w32(kStep, 0x1B36D);
    do {
        fade(0x1493D, 0x13EBD, m_.r32(kFadeTo), 0x300, m_.r32(kFadeAt));
        if (esc()) return false;
    } while (m_.r32(kTicks) < 0x4F2B);
    setPalette(0x13EBD, 0x300, 0);
    faceStyle(0x14DBD, 0);
    mode13();
    fadeSetup(0x3F, 0);
    if (!sceneLoop(0x4F6B, [&] {
            drawRoom();
            addPicture(heap + 0x1FA00);
            drawObjects();
            show();
        }, 0x13EBD, 0x144BD))
        return false;
    setPalette(0x144BD, 0x300, 0);
    m_.w32(kStep, 0x1B36C);
    if (!sceneLoop(0x542B, [&] {
            drawRoom();
            addPicture(heap + 0x1FA00);
            drawObjects();
            show();
        }, 0, 0))
        return false;
    setPalette(0x14C3D, 0x180, 0x80);
    if (!sceneLoop(0x589F, [&] {
            drawRoom();
            addPicture(heap + 0x1FA00);
            drawObjects();
            show();
        }, 0, 0))
        return false;
    fadeSetup(0x7F, 0);
    m_.w32(kStep, 0x1B36D);
    if (!sceneLoop(0x591F, [&] {
            drawRoom();
            addPicture(heap + 0x1FA00);
            drawObjects();
            show();
        }, 0x144BD, 0x13EBD))
        return false;
    setPalette(0x13EBD, 0x300, 0);
    // the picture to two colours
    for (uint32_t i = 0; i < 0xFA00; i++) m_.w8(heap + 0x10000 + i, m_.r8(heap + i) >= 0x80 ? 1 : 0);
    for (uint32_t i = 0; i < 0x300; i += 4) m_.w32(0x141BD + i, 0);
    fadeSetup(0x3F, 0);
    do {
        fade(0x13EBD, 0x141BD, m_.r32(kFadeTo), 0x300, m_.r32(kFadeAt));
        if (esc()) return false;
    } while (m_.r32(kTicks) < 0x595F);
    setPalette(0x141BD, 0x300, 0);
    // mode 12h
    m_.w16(0xDC, 0x12);
    m_.vga.setMode(0x12);
    m_.out8(0x3C8, 0x3F);
    m_.out8(0x3C9, 0), m_.out8(0x3C9, 0), m_.out8(0x3C9, 0);
    waitFrame();
    uint32_t esi = heap + 0x10000, edi = 0;
    for (int g = 0x28; g; g--) {
        for (int r = 5; r >= 0; r--) {
            for (int c = 0; c < 0x50; c++) {
                uint8_t bl = 0;
                for (int k = 0; k < 4; k++) {
                    const uint8_t al = (uint8_t)(m_.r8(esi++) << (6 - 2 * k));
                    bl |= al | (uint8_t)(al << 1);
                }
                vram8(edi + 0x50, bl);
                vram8(edi, bl);
                edi++;
            }
            edi += 0x50;
            if (r == 1) esi -= 0x140;   // the fifth source row twice
        }
    }
    for (uint32_t c = 0; c < 0x40; c++) {
        for (int i = 0; i < 3; i++) waitFrame();
        m_.out8(0x3C8, 0x3F);
        m_.out8(0x3C9, c), m_.out8(0x3C9, c), m_.out8(0x3C9, c);
    }
    return true;
}

}  // namespace drift
