// The rotozoomer (1B8E3h): a 256x256 texture rotated and zoomed over the
// frame buffer, drawn by the texture mapper 14BDBh in 8x8 blocks. The
// mapper patches its inner loop (14B14h) with the steps: the immediates of
// its ADD/ADC instructions, and the opcode of its stores (89h MOV, or 01h
// ADD: the texture added on). The port runs that loop over the same
// memory, the immediates read where the mapper wrote them.
//
// The loop's registers hold 8.16 fixed point split across two registers:
// EDX = (u fraction << 16) | ... | v integer (DL), ECX = (v fraction << 16)
// | ... | u integer (CL); each add carries the fraction's overflow into the
// other register's integer byte. EBX is the texel's address (BH row, BL
// column).
#include "demo.h"

namespace lasse {

namespace {
struct Regs {
    uint32_t eax = 0, ebx = 0, ecx = 0, edx = 0, edi = 0, esi = 0;
    uint32_t cf = 0;
    void add(uint32_t& r, uint32_t v) {
        const uint64_t s = (uint64_t)r + v;
        r = (uint32_t)s, cf = (uint32_t)(s >> 32);
    }
    void adc(uint32_t& r, uint32_t v) {
        const uint64_t s = (uint64_t)r + v + cf;
        r = (uint32_t)s, cf = (uint32_t)(s >> 32);
    }
    void adc8lo(uint32_t& r, uint32_t v) {            // adc on the low byte
        const uint32_t s = (r & 0xFF) + (v & 0xFF) + cf;
        r = (r & ~0xFFu) | (s & 0xFF), cf = s >> 8;
    }
    void sbb8lo(uint32_t& r, uint32_t v) {
        const int32_t s = (int32_t)(r & 0xFF) - (int32_t)(v & 0xFF) - (int32_t)cf;
        r = (r & ~0xFFu) | (uint32_t)(s & 0xFF), cf = s < 0;
    }
    void bhdl() { ebx = (ebx & 0xFFFF00FFu) | (edx & 0xFF) << 8; }
    void blcl() { ebx = (ebx & 0xFFFFFF00u) | (ecx & 0xFF); }
    static uint32_t bswap(uint32_t v) { return v >> 24 | (v >> 8 & 0xFF00) | (v << 8 & 0xFF0000) | v << 24; }
};
}  // namespace

// 14B14h: ESI rows of 8 pixels from the texture at EBX to EDI.
static void mapLoop(Machine& m, Regs& r) {
    auto I = [&](uint32_t a) { return m.r32(a); };
    auto al = [&](uint8_t v) { r.eax = (r.eax & ~0xFFu) | v; };
    auto ah = [&](uint8_t v) { r.eax = (r.eax & ~0xFF00u) | (uint32_t)v << 8; };
    auto store = [&](uint32_t at, uint32_t opAt) {
        if (m.r8(opAt) == 0x01) {
            const uint64_t s = (uint64_t)m.r32(at) + r.eax;
            m.w32(at, (uint32_t)s);
            r.cf = (uint32_t)(s >> 32);
        } else {
            m.w32(at, r.eax);
        }
    };
    r.add(r.ecx, I(0x14B16));
    r.bhdl();
    r.adc8lo(r.edx, 0);
    r.blcl();
    do {
        r.add(r.edx, I(0x14B23));
        al(m.r8(r.ebx));
        r.adc(r.ecx, I(0x14B2B));
        r.bhdl(), r.blcl();
        r.adc(r.edx, I(0x14B35));
        ah(m.r8(r.ebx));
        r.adc(r.ecx, I(0x14B3D));
        r.bhdl();
        r.eax = Regs::bswap(r.eax);
        r.blcl();
        r.adc(r.edx, I(0x14B49));
        ah(m.r8(r.ebx));
        r.adc(r.ecx, I(0x14B51));
        r.bhdl(), r.blcl();
        r.adc(r.edx, I(0x14B5B));
        al(m.r8(r.ebx));
        r.adc(r.ecx, I(0x14B63));
        r.bhdl();
        r.eax = Regs::bswap(r.eax);
        r.adc8lo(r.edx, 0);
        store(r.edi, 0x14B6E);
        r.blcl();
        r.add(r.edx, I(0x14B74));
        al(m.r8(r.ebx));
        r.adc(r.ecx, I(0x14B7C));
        r.bhdl(), r.blcl();
        r.adc(r.edx, I(0x14B86));
        ah(m.r8(r.ebx));
        r.adc(r.ecx, I(0x14B8E));
        r.bhdl();
        r.eax = Regs::bswap(r.eax);
        r.blcl();
        r.adc(r.edx, I(0x14B9A));
        ah(m.r8(r.ebx));
        r.adc(r.ecx, I(0x14BA2));
        r.bhdl(), r.blcl();
        r.adc(r.edx, I(0x14BAC));
        al(m.r8(r.ebx));
        r.adc(r.ecx, I(0x14BB4));
        r.bhdl();
        r.eax = Regs::bswap(r.eax);
        r.adc8lo(r.edx, 0);
        store(r.edi + 4, 0x14BBF);
        r.blcl();
        r.add(r.edi, I(0x14BC6));
    } while (--r.esi);
    const uint64_t d = (uint64_t)r.ecx - I(0x14BD3);
    r.ecx = (uint32_t)d, r.cf = (uint32_t)(d >> 63);
    r.sbb8lo(r.edx, 0);
}

// 14BDBh: the texture at TEX over BX x BY blocks of 8x8 at DST (pitch),
// from (U0, V0) stepping (DU, DV) a pixel and (DUY, DVY) a row (16.16).
void Demo::mapper(uint32_t dst, uint32_t tex, uint32_t u0, uint32_t v0, int32_t du, int32_t dv, int32_t duy,
                  int32_t dvy, int32_t bx, int32_t by, int32_t pitch, uint8_t mode) {
    // the patches
    m_.w32(0x14BC6, pitch);
    m_.w8(0x14B6E, mode), m_.w8(0x14BBF, mode);
    const uint32_t A = (uint32_t)du << 16 | (((uint32_t)dv >> 16) & 0xFF);
    for (uint32_t a : {0x14B23u, 0x14B35u, 0x14B49u, 0x14B5Bu, 0x14B74u, 0x14B86u, 0x14B9Au}) m_.w32(a, A);
    {
        uint32_t e = (A & ~0xFFu) | ((((uint32_t)dvy - 7u * (uint32_t)dv) >> 16) & 0xFF);
        e = e - ((uint32_t)du << 19) + ((uint32_t)duy << 16);
        m_.w32(0x14BAC, e);
    }
    const uint32_t I0 = (uint32_t)dv << 16;
    m_.w32(0x14B16, I0), m_.w32(0x14BD3, I0);
    const uint32_t B = I0 | (((uint32_t)du >> 16) & 0xFF);
    for (uint32_t a : {0x14B2Bu, 0x14B3Du, 0x14B51u, 0x14B63u, 0x14B7Cu, 0x14B8Eu}) m_.w32(a, B);
    {
        uint32_t e = (B & ~0xFFu) | ((((uint32_t)duy - 7u * (uint32_t)du) >> 16) & 0xFF);
        m_.w32(0x14BB4, e);
        e = e - ((uint32_t)dv << 19) + ((uint32_t)dvy << 16);
        e = (e & ~0xFFu) | (((uint32_t)du >> 16) & 0xFF);
        m_.w32(0x14BA2, e);
    }
    const uint32_t du8 = (uint32_t)du << 3, dv8 = (uint32_t)dv << 3, duy8 = (uint32_t)duy << 3, dvy8 = (uint32_t)dvy << 3;
    // a step (EDX += lo-word part, CL += its byte; ECX likewise, DL)
    struct Step {
        uint32_t ed, ec, ad;
        uint8_t bc, bd;
    };
    auto split = [](uint32_t v, uint32_t& hiPart, uint8_t& byte) {
        const uint32_t r = v << 16 | v >> 16;
        byte = (uint8_t)r;
        hiPart = r & 0xFFFF0000u;
    };
    Regs r;
    r.ebx = tex, r.edi = dst;
    r.edx = u0 << 16 | u0 >> 16;
    r.ecx = v0 << 16 | v0 >> 16;
    {
        const uint32_t dl = r.edx & 0xFF, cl = r.ecx & 0xFF;
        r.edx = (r.edx & ~0xFFu) | cl, r.ecx = (r.ecx & ~0xFFu) | dl;
    }
    auto step = [&](const Step& s) {
        r.add(r.edx, s.ed);
        r.adc8lo(r.ecx, s.bc);
        r.add(r.ecx, s.ec);
        r.adc8lo(r.edx, s.bd);
        r.edi += s.ad;
    };
    const int32_t a1 = (int32_t)du8 < 0 ? -(int32_t)du8 : (int32_t)du8;
    const int32_t a2 = (int32_t)dv8 < 0 ? -(int32_t)dv8 : (int32_t)dv8;
    if (a1 > a2) {                          // across, block by block
        Step col, row;
        split(du8 - duy8, col.ed, col.bc);
        split(dv8 - dvy8, col.ec, col.bd);
        col.ad = (uint32_t)(1 - pitch) << 3;
        split((uint32_t)(-bx) * du8 + duy8, row.ed, row.bc);
        split((uint32_t)(-bx) * dv8 + dvy8, row.ec, row.bd);
        row.ad = (uint32_t)(pitch - bx) << 3;
        for (int32_t y = by; y; y--) {
            for (int32_t x = bx; x; x--) {
                r.esi = 8;
                mapLoop(m_, r);
                step(col);
            }
            step(row);
        }
    } else {                                // down, a column of blocks at a time
        Step col;
        split((uint32_t)(-by) * duy8 + du8, col.ed, col.bc);
        split((uint32_t)(-by) * dvy8 + dv8, col.ec, col.bd);
        col.ad = ((uint32_t)(-by) * (uint32_t)pitch + 1) << 3;
        for (int32_t x = bx; x; x--) {
            r.esi = (uint32_t)by << 3;
            mapLoop(m_, r);
            step(col);
        }
    }
}

// 1B8E3h: the texture TEX turned by ANGLE (radians), ZOOM, about (CX, CY),
// over the frame buffer; MODE: drawn (nonzero) or added (0).
void Demo::roto(float angle, int32_t zoom, int32_t cx, int32_t cy, uint32_t tex, int32_t mode) {
    Frame fr(*this, 5, 0x38);
    F.fld(angle);
    F.fcos();
    const double dz = (double)(X)zoom;
    F.fmul(dz);
    F.fmul(m_.f64(0x2922D));
    F.fld(angle);
    F.fxch();
    F.frndint();
    const int64_t a = x87::fist64(F.pop());
    F.fsin();
    F.fmul(dz);
    F.fmul(m_.f64(0x2922D));
    F.fld(angle);
    F.fld((X)(int32_t)(0u - (uint32_t)zoom));
    F.fxch(2);
    F.frndint();
    const int64_t b = x87::fist64(F.pop());
    F.fxch();
    const double mz = F.fstpd();
    F.fsin();
    F.fmul(mz);
    F.fld(angle);
    F.fxch();
    F.frndint();
    const int64_t c = x87::fist64(F.pop());
    F.fcos();
    F.fmul(dz);
    F.frndint();
    const int64_t d = x87::fist64(F.pop());
    const uint32_t ncx = 0u - (uint32_t)cx;
    const uint32_t u0 = ncx * (uint32_t)a - (uint32_t)cy * (uint32_t)c;
    const uint32_t v0 = ncx * (uint32_t)b - (uint32_t)cy * (uint32_t)d;
    mapper(m_.r32(0x2B4C4), tex, u0, v0, (int32_t)a, (int32_t)b, (int32_t)c, (int32_t)d, 0x28, 0x19, 0x140,
           mode ? 0x89 : 0x01);
}

}  // namespace lasse
