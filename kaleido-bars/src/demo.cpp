#include "demo.h"
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iterator>

namespace kb {

// gp+0..gp+127 (core 1's register file) at the start of frame 4739, from the harness
static const uint8_t kGpState[128] = {
#include "gpstate.inc"
};

// Copper list templates as they are in the firmware: (gp offset, value) halfword pairs,
// register 0 = wait for line
static const uint16_t kP15List[] = {   // 0x100085e0: layer 0 solid colour 2, colour 1 from line 512
    0x0030, 0x0002, 0x0028, 0x0004, 0x0000, 0x0200, 0x0030, 0x0001, 0x0000, 0x0fff};
static const uint16_t kP16List[] = {   // 0x100006ec: layer 2 = the mask at 0x20000000
    0x0062, 0x2000, 0x0060, 0x0000, 0x0064, 0x0100, 0x0068, 0x0819, 0x006c, 0x0000,
    0x0070, 0x0001, 0x0074, 0x0002, 0x0078, 0x0002, 0x0000, 0x0fff};
static const uint16_t kP17Head[] = {   // 0x10000548: layer 1 control and its six colours
    0x0044, 0x0000, 0x0048, 0x0919, 0x004c, 0x0000, 0x0050, 0x0210, 0x0052, 0x0643,
    0x0054, 0x0886, 0x0056, 0x0cb9, 0x0058, 0x0fdc, 0x005a, 0x0fff};
static const uint16_t kP17Row[] = {    // 0x1000056c: per row: read address high, low, wait; end
    0x0042, 0x2002, 0x0040, 0x0000, 0x0000, 0x0001, 0x0000, 0x0fff};
static const uint16_t kBgList[] = {    // 0x100036f8: layer 0 = carbon texture at 0x20040000
    0x0020, 0x0000, 0x0022, 0x2004, 0x002c, 0x0000, 0x0024, 0x0100, 0x0028, 0x0819,
    0x0030, 0x0445, 0x0032, 0x0334, 0x0034, 0x0111, 0x0036, 0x0000, 0x0038, 0x0333,
    0x003a, 0x0222, 0x0000, 0x0200, 0x0020, 0x0000, 0x0022, 0x2004, 0x0000, 0x0400,
    0x0020, 0x0000, 0x0022, 0x2004, 0x0000, 0x0fff};

// An indexed PNG whose palette indices are the 4-bit pixel values, packed two pixels per byte
// (low nibble = left pixel) as the PIO program reads them.
static bool load_texture(const std::string& path, int w, int h, std::vector<uint8_t>& out) {
    SDL_Surface* s = SDL_LoadPNG(path.c_str());
    if (!s) { std::fprintf(stderr, "kaleido-bars: %s: %s\n", path.c_str(), SDL_GetError()); return false; }
    bool ok = s->format == SDL_PIXELFORMAT_INDEX8 && s->w == w && s->h == h;
    if (ok) {
        out.assign(w * h / 2, 0);
        for (int y = 0; y < h; y++) {
            const uint8_t* row = (const uint8_t*)s->pixels + y * s->pitch;
            for (int x = 0; x < w; x++) {
                if (row[x] > 15) ok = false;
                out[(y * w + x) / 2] |= (row[x] & 15) << (4 * (x & 1));
            }
        }
    }
    if (!ok) std::fprintf(stderr, "kaleido-bars: %s is not a %dx%d image with 16 palette indices\n", path.c_str(), w, h);
    SDL_DestroySurface(s);
    return ok;
}

void Demo::put(uint32_t dst, const uint16_t* hw, size_t n) {
    for (size_t i = 0; i < n; i++) m.w16(dst + 2 * i, hw[i]);
}

bool Demo::init(const std::string& data) {
    if (!load_texture(data + "/bars.png", 1024, 128, bars) || !load_texture(data + "/carbon.png", 512, 256, carbon))
        return false;
    // The sine table the boot code copies to 0x20060000: floor(32767 sin) over the first
    // quarter, mirrored. (The nearest value to an integer is 5e-5 away, so libm can't flip one.)
    for (int i = 0; i < 4096; i++) {
        const int j = i & 2047, k = j <= 1024 ? j : 2048 - j;
        const int v = (int)std::floor(32767.0 * std::sin(2.0 * M_PI * k / 4096.0));
        m.w16(0x20060000 + 2 * i, i < 2048 ? v : -v);
    }
    m.w32(0x2008177c, 0x0fff0000);  // core 1's empty copper list: wait for line 4095
    std::memcpy(&m.sram[GP - 0x20000000], kGpState, sizeof kGpState);
    // part 15 is running its fade-out loop: its prep has built its list
    p15_prep();
    m.w32(GP - 4, 4553);  // song position
    video.vblank = [this] { vblank_irq(); };
    return true;
}

void Demo::run_frame() {
    video.run_frame();
    frame++;
}

// ---- vertical blank: the doorbell ISR (0x2008001c) then the sequencer up to its next wfi ----

void Demo::vblank_irq() {
    m.w32(GP - 4, m.r32(GP - 4) + 1);  // song position
    // (0x200800de, the music playroutine, drives core 1's synth; the port has no sound)
    call_hook();
    // sequencer (0x10008aec): resume after the wfi it is waiting in
    switch (wait) {
    case W_AFTER_PREP:
        hook = entry == 16 ? H_P16 : H_P17;
        tp = 0;
        wait = W_MAIN;
        return;
    case W_MAIN:
        main_(entry);
        if ((int32_t)m.r32(GP - 4) < end_pos(entry)) { tp = 0; return; }
        hook = entry == 16 ? H_P16 : H_P17_FADE;
        tp = 1;
        wait = W_FADE;
        return;
    case W_FADE:
        main_(entry);
        if (tp == 0) { tp = 1; return; }
        entry++;
        if (entry > 17) { finished = true; return; }
        prep(entry);
        wait = W_AFTER_PREP;
        return;
    }
}

void Demo::call_hook() {
    switch (hook) {
    case H_P15: p15_vblank(); break;
    case H_P16: p16_vblank(); break;
    case H_P17: p17_vblank(); break;
    case H_P17_FADE: p17_fade_vblank(); break;
    }
}

void Demo::prep(int e) {
    if (e == 16) p16_prep();
    else if (e == 17) p17_prep();
}

void Demo::main_(int e) {
    if (e == 16) p16_main();
    else if (e == 17) p17_main();
    // part 15's main is a bare ret
}

int32_t Demo::end_pos(int e) { return e == 17 ? 5376 : 0; }  // table entry +20

// ---- shared routines ----

// 0x10003740: the carbon background on layer 0: copper list 2 and the 512x256 texture
// (the original unpacks it from 0x100270c8 with the LZ decompressor at 0x10000430)
void Demo::bg_prep() {
    put(0x20058000, kBgList, std::size(kBgList));
    std::memcpy(&m.sram[0x40000], carbon.data(), carbon.size());
}

// 0x1000377c: background scroll; from position 4690 it bounces on the beat (28 frames)
void Demo::bg_vblank() {
    const uint32_t a1 = m.r32(GP - 4);
    uint32_t t1 = a1 & ~3u;
    int32_t a4 = m.sine(9 * t1) >> 10;
    a4 = (int32_t)(a1 * 2 + (uint32_t)a4);
    int32_t a5 = m.sine(9 * t1 + 1024) >> 11;
    t1 = a1 >> 2;
    a4 += (int32_t)(t1 << 4);
    a5 += (int32_t)(t1 << 3);
    uint32_t t0 = (t1 << 6) / 3;
    a4 -= (int32_t)t0;
    a5 += (int32_t)(t0 >> 1);
    a5 -= (int32_t)(7 * t1);
    const int32_t pos = (int32_t)a1;
    if (pos >= 0x1252) {
        int32_t a0 = pos % 28 - 14;
        a5 -= (int32_t)((uint32_t)(a0 * a0) >> 4);
    }
    const uint32_t L = 0x20058000;
    m.w16(L + 10, a4 & 7);                      // fine scroll
    const uint32_t lo = ((uint32_t)a4 >> 1) & 252;
    m.w16(L + 2, lo);
    m.w16(L + 50, lo);
    m.w16(L + 62, lo);
    a5 &= 255;
    m.w16(L + 2, m.r16(L + 2) + ((uint32_t)a5 << 8));  // first row; the texture wraps at line 512 - 2*row
    m.w16(L + 46, 512 - 2 * a5);
    m.w16(L + 58, 512 - 2 * a5 + 512);
    m.w32(GP + 12, L);
}

// ---- part 15 ----

void Demo::p15_prep() { put(0x20062000, kP15List, std::size(kP15List)); }
void Demo::p15_vblank() { m.w32(GP + 8, 0x20062000); }

// ---- part 16 ----

void Demo::p16_prep() {
    put(0x20019000, kP16List, std::size(kP16List));
    const uint32_t s = 0x2001a000;
    m.w32(s, 0); m.w32(s + 4, 0); m.w32(s + 8, 0); m.w32(s + 12, 64);
    p16_main();
    bg_prep();
}

void Demo::p16_vblank() {
    m.w32(GP + 8, 0x20019000);
    const uint32_t s = 0x2001a000;
    const uint32_t cnt = m.r32(s) + 1;
    m.w32(s, cnt);
    m.w32(s + 4, (uint32_t)std::min<int32_t>(110, (int32_t)cnt) << 3);  // angle
    uint32_t d = (595 * cnt) >> 8;
    m.w32(s + 8, (d * d) >> 8);                                          // distance
    m.w32(s + 12, (uint32_t)std::max<int32_t>(((int32_t)(128 - cnt)) >> 1, 0));  // y offset
    bg_vblank();
}

// 0x100008be: XOR one edge into the mask, one nibble per column; the fill below follows
void Demo::p16_edge(int32_t a2, int32_t a3, int32_t a4, int32_t a5, uint32_t a6, uint32_t a7) {
    if (!(a2 < a3)) { std::swap(a2, a3); std::swap(a4, a5); }
    if (a2 == a3) return;
    const int32_t a1 = (int32_t)((uint32_t)(a5 - a4) << 14) / (a3 - a2);
    a4 = (int32_t)((uint32_t)a4 << 14);
    const uint32_t hi = a6 << 4;
    a3 = std::min(a3, 511);
    if (a2 < 0) { a4 -= (int32_t)((uint32_t)a2 * (uint32_t)a1); a2 = 0; }
    if (a2 >= a3) return;
    for (; a2 < a3; a2++) {
        const int32_t t5 = std::min(std::max(a4, 0), 0x600000);
        const uint32_t addr = a7 + (((uint32_t)t5 >> 14) << 8) + ((uint32_t)a2 >> 1);
        m.w8(addr, m.r8(addr) ^ ((a2 & 1) ? hi : a6));
        a4 += a1;
    }
}

void Demo::p16_main() {
    for (uint32_t a = 0x20000000; a < 0x20018000; a += 4) m.w32(a, 0);
    const uint32_t s = 0x2001a000;
    const uint32_t s10 = m.r32(s + 4);
    const int32_t s11 = (int32_t)m.r32(s + 8);
    const int32_t s7 = (int32_t)m.r32(s + 12) + 192;
    int32_t s1 = -m.sine(s10);
    int32_t s0 = m.sine(s10 + 1024);
    const int32_t s2 = (int32_t)((uint32_t)s0 * 4096u) >> 15;
    const int32_t s3 = (int32_t)((uint32_t)s1 * 4096u) >> 15;
    s0 = (int32_t)((uint32_t)s0 * (uint32_t)s11) >> 15;
    s1 = (int32_t)((uint32_t)s1 * (uint32_t)s11) >> 15;
    int32_t x = 256 - s1, y = s7 + s0;
    p16_edge(x - s2, x + s2, y - s3, y + s3, 4, 0x20000000);
    x = 256 + s1; y = s7 - s0;
    p16_edge(x - s2, x + s2, y - s3, y + s3, 8, 0x20000000);
    // XOR fill downwards, 8 bytes (16 pixels) per column; rows 0-63 start from nibbles 8
    for (uint32_t col = 0x20000000; col < 0x20000100; col += 8) {
        uint32_t a2 = 0x88888888u, a3 = 0x88888888u;
        for (uint32_t a = col; a < 0x20004000; a += 256) {
            a2 ^= m.r32(a); a3 ^= m.r32(a + 4);
            m.w32(a, a2); m.w32(a + 4, a3);
        }
    }
    for (uint32_t col = 0x20004000; col < 0x20004100; col += 8) {
        uint32_t a2 = m.r32(col - 256), a3 = m.r32(col - 252);
        for (uint32_t a = col; a < 0x20018000; a += 256) {
            a2 ^= m.r32(a); a3 ^= m.r32(a + 4);
            m.w32(a, a2); m.w32(a + 4, a3);
        }
    }
    tp = 300 < s11;
}

// ---- part 17 ----

void Demo::p17_prep() {
    // 1024x128 bar texture (the original unpacks it from 0x10014228)
    std::memcpy(&m.sram[0x20000], bars.data(), bars.size());
    // copper list: layer 1 set-up, then one read address per row (wait lines 1, 3 .. 767)
    put(0x20030000, kP17Head, std::size(kP17Head));
    uint32_t a1 = 0x20030000 + sizeof kP17Head;
    for (uint32_t line = 1; line < 768; line += 2) {
        put(a1, kP17Row, 6);
        m.w16(a1 + 10, line);
        a1 += 12;
    }
    put(a1, kP17Row + 6, 2);
    m.w32(0x20038000, 0);
    m.w32(0x20038004, 0);
    p17_main();
}

void Demo::p17_main() { tp = 63 < (int32_t)m.r32(0x20038004); }

void Demo::p17_fade_vblank() {
    m.w32(0x20038004, m.r32(0x20038004) + 1);
    p17_vblank();
}

void Demo::p17_vblank() {
    const uint32_t L = 0x20030000;
    m.w32(GP + 8, L);
    const uint32_t cnt = m.r32(0x20038000) + 1, fade = m.r32(0x20038004);
    m.w32(0x20038000, cnt);
    const uint32_t pos = m.r32(GP - 4);
    uint32_t a0 = (uint32_t)std::min<int32_t>(127, (int32_t)cnt) ^ 127;  // slide in
    a0 *= a0; a0 *= a0;
    uint32_t t6 = -(a0 >> 19);
    a0 = (uint32_t)std::min<int32_t>(63, (int32_t)fade);                 // slide out
    const uint32_t t5 = a0 ^ 63;
    a0 *= a0; a0 *= a0;
    t6 += a0 >> 15;
    t6 += (uint32_t)((int32_t)((uint32_t)m.sine(pos * 29 - 2048) * t5) >> 15);  // sway
    m.w16(L + 10, t6 & 7);                                   // fine scroll
    t6 = ((t6 >> 3) & 127) << 2;                             // coarse, in bytes
    uint32_t a4 = (uint32_t)((m.sine((pos & 255) << 4) >> 8) + (int32_t)pos) << 3;
    uint32_t e = L + 36;
    for (int row = 0; row < 384; row++) {
        // texture row for this screen row: time plus a sine of the row
        uint32_t t0 = (uint32_t)(m.sine(a4) >> 9);
        t0 = ((pos << 1) + t0) & 127;
        m.w16(e + 6, (t0 << 9) | t6);
        e += 12;
        a4 += 8;
    }
    bg_vblank();
}

}  // namespace kb
