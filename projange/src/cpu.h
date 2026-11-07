// The state the translated programs work on: the 386's registers as the
// original code sees them, in real mode (and the few protected-mode
// moments the programs pass through to set up 32-bit code and 4 GB
// segments), and the helpers the translations call for what is more than
// a line of C++: flags, string instructions, the stack, interrupts.
//
// Memory is linear: an access is the segment's base (the hidden part of
// the segment register: selector x 16 in real mode, the descriptor's base
// when loaded in protected mode, kept when the program goes back to real
// mode) plus the offset (16 or 32 bits, as the instruction's address size).
//
// Flags are computed by the instructions whose flags something reads (the
// translator decides); the others leave them as they were.
#pragma once

#include <cstdint>
#include <cstdio>
#include <functional>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <vector>

#include "machine.h"

namespace angel {

class Demo;

union Reg {
    uint32_t e;
    uint16_t x;
    struct {
        uint8_t l, h;
    };
};

// A translated routine: entered at a linear address
using Code = void (*)(class Cpu&, uint32_t entry);

struct NotTranslated : std::runtime_error {
    using std::runtime_error::runtime_error;
};

class Cpu {
public:
    Cpu(Machine& m, Demo& d) : m(m), d(d) {}
    Machine& m;
    Demo& d;

    Reg a{}, b{}, c{}, dx_{}, si{}, di{}, bp{}, sp{};
    uint16_t cs = 0, ds = 0, es = 0, ss = 0, fs = 0, gs = 0;
    uint32_t csb = 0, dsb = 0, esb = 0, ssb = 0, fsb = 0, gsb = 0;
    uint32_t cr0 = 0x10;
    uint32_t ip = 0;                    // the instruction being run (for frames pushed)
    bool d32 = false;                   // ... in 32-bit code (the harness's frame then)
    uint32_t gdtBase = 0, ldtBase = 0;
    uint16_t gdtLimit = 0;

    // flags
    bool cf = false, zf = false, sf = false, of = false, pf = false, af = false, df = false;
    uint16_t iopl = 0;                  // IOPL and NT (bits 12-14: settable in real mode on a 386)

    // --- memory ------------------------------------------------------------
    uint8_t r8(uint32_t a) { return m.r8(a); }
    uint16_t r16(uint32_t a) { return m.r16(a); }
    uint32_t r32(uint32_t a) { return m.r32(a); }
    void w8(uint32_t a, uint32_t v) { m.w8(a, v); }
    void w16(uint32_t a, uint32_t v) { m.w16(a, v); }
    void w32(uint32_t a, uint32_t v) { m.w32(a, v); }

    // segment loads: real mode (base = sel x 16) or protected (the descriptor)
    uint32_t segBase(uint16_t sel) {
        if (!(cr0 & 1)) return (uint32_t)sel << 4;
        const uint32_t t = (sel & 4) ? ldtBase : gdtBase;
        const uint32_t d = t + (sel & ~7u);
        return (uint32_t)m.r16(d + 2) | (uint32_t)m.r8(d + 4) << 16 | (uint32_t)m.r8(d + 7) << 24;
    }
    // (a data segment loaded in protected mode: the CPU sets the
    // descriptor's accessed bit)
    uint32_t dataBase(uint16_t sel) {
        if ((cr0 & 1) && (sel & ~3u)) {
            const uint32_t d = ((sel & 4) ? ldtBase : gdtBase) + (sel & ~7u);
            m.w8(d + 5, m.r8(d + 5) | 1);
        }
        return segBase(sel);
    }
    void loadDs(uint16_t v) { ds = v, dsb = dataBase(v); }
    void loadEs(uint16_t v) { es = v, esb = dataBase(v); }
    void loadSs(uint16_t v) { ss = v, ssb = dataBase(v); }
    void loadFs(uint16_t v) { fs = v, fsb = dataBase(v); }
    void loadGs(uint16_t v) { gs = v, gsb = dataBase(v); }
    void loadCs(uint16_t v) { cs = v, csb = segBase(v); }

    // --- the stack (16-bit SP) ------------------------------------------------
    void push16(uint32_t v) {
        sp.x = (uint16_t)(sp.x - 2);
        w16(ssb + sp.x, v);
    }
    void push32(uint32_t v) {
        sp.x = (uint16_t)(sp.x - 4);
        w32(ssb + sp.x, v);
    }
    uint16_t pop16() {
        const uint16_t v = r16(ssb + sp.x);
        sp.x = (uint16_t)(sp.x + 2);
        return v;
    }
    uint32_t pop32() {
        const uint32_t v = r32(ssb + sp.x);
        sp.x = (uint16_t)(sp.x + 4);
        return v;
    }

    // --- flags -----------------------------------------------------------------
    uint16_t flags() const {
        return (uint16_t)(0x0002 | (cf ? 1 : 0) | (pf ? 4 : 0) | (af ? 0x10 : 0) | (zf ? 0x40 : 0) | (sf ? 0x80 : 0) |
                          (m.intFlag() ? 0x200 : 0) | (df ? 0x400 : 0) | (of ? 0x800 : 0) | iopl);
    }
    void setFlags(uint16_t f) {
        cf = f & 1, pf = f & 4, af = f & 0x10, zf = f & 0x40, sf = f & 0x80, df = f & 0x400, of = f & 0x800;
        iopl = f & 0x7000;
        m.setIntFlag(f & 0x200);
    }
    static bool parity(uint32_t v) { return !__builtin_parity(v & 0xFF); }
    template <int N> static uint32_t mask() { return N == 8 ? 0xFFu : N == 16 ? 0xFFFFu : 0xFFFFFFFFu; }
    template <int N> static bool sign(uint32_t v) { return v >> (N - 1) & 1; }
    template <int N> void szp(uint32_t r) {
        r &= mask<N>();
        zf = r == 0, sf = sign<N>(r), pf = parity(r);
    }
    template <int N> uint32_t add(uint32_t x, uint32_t y, bool fl, uint32_t carry = 0) {
        const uint64_t r = (uint64_t)(x & mask<N>()) + (y & mask<N>()) + carry;
        const uint32_t res = (uint32_t)r & mask<N>();
        if (fl) {
            cf = r >> N & 1;
            of = sign<N>((x ^ res) & (y ^ res));
            af = ((x ^ y ^ res) >> 4) & 1;
            szp<N>(res);
        }
        return res;
    }
    template <int N> uint32_t sub(uint32_t x, uint32_t y, bool fl, uint32_t borrow = 0) {
        x &= mask<N>(), y &= mask<N>();
        const uint32_t res = (x - y - borrow) & mask<N>();
        if (fl) {
            cf = (uint64_t)x < (uint64_t)y + borrow;
            of = sign<N>((x ^ y) & (x ^ res));
            af = ((x ^ y ^ res) >> 4) & 1;
            szp<N>(res);
        }
        return res;
    }
    template <int N> uint32_t logic(uint32_t res, bool fl) {
        res &= mask<N>();
        if (fl) {
            cf = of = false, af = false;
            szp<N>(res);
        }
        return res;
    }
    template <int N> uint32_t inc(uint32_t x, bool fl) {
        const bool c0 = cf;
        const uint32_t r = add<N>(x, 1, fl);
        cf = c0;
        return r;
    }
    template <int N> uint32_t dec(uint32_t x, bool fl) {
        const bool c0 = cf;
        const uint32_t r = sub<N>(x, 1, fl);
        cf = c0;
        return r;
    }
    template <int N> uint32_t neg(uint32_t x, bool fl) {
        const uint32_t r = sub<N>(0, x, fl);
        if (fl) cf = (x & mask<N>()) != 0;
        return r;
    }
    // shifts and rotates (count already masked to 5 bits by the caller)
    template <int N> uint32_t shl(uint32_t x, int n, bool fl) {
        x &= mask<N>();
        if (!n) return x;
        const uint32_t r = (uint32_t)(((uint64_t)x << n) & mask<N>());
        if (fl) {
            cf = n <= N ? ((uint64_t)x >> (N - n)) & 1 : 0;
            of = sign<N>(r) != cf;
            szp<N>(r);
            af = false;
        }
        return r;
    }
    template <int N> uint32_t shr(uint32_t x, int n, bool fl) {
        x &= mask<N>();
        if (!n) return x;
        const uint32_t r = n >= 32 ? 0 : x >> n;
        if (fl) {
            cf = n <= N ? (x >> (n - 1)) & 1 : 0;
            of = n == 1 ? sign<N>(x) : false;
            szp<N>(r);
            af = false;
        }
        return r;
    }
    template <int N> uint32_t sar(uint32_t x, int n, bool fl) {
        x &= mask<N>();
        if (!n) return x;
        const int64_t sx = N == 8 ? (int8_t)x : N == 16 ? (int16_t)x : (int32_t)x;
        const uint32_t r = (uint32_t)(sx >> (n > N - 1 ? N - 1 : n)) & mask<N>();
        if (fl) {
            cf = (sx >> (n > N ? N - 1 : n - 1)) & 1;
            of = false;
            szp<N>(r);
            af = false;
        }
        return r;
    }
    template <int N> uint32_t rol(uint32_t x, int n, bool fl) {
        x &= mask<N>();
        if (!n) return x;
        const int k = n % N;
        const uint32_t r = k ? ((x << k) | (x >> (N - k))) & mask<N>() : x;
        if (fl) {
            cf = r & 1;
            of = sign<N>(r) != cf;
        }
        return r;
    }
    template <int N> uint32_t ror(uint32_t x, int n, bool fl) {
        x &= mask<N>();
        if (!n) return x;
        const int k = n % N;
        const uint32_t r = k ? ((x >> k) | (x << (N - k))) & mask<N>() : x;
        if (fl) {
            cf = sign<N>(r);
            of = sign<N>(r) != (bool)((r >> (N - 2)) & 1);
        }
        return r;
    }
    template <int N> uint32_t rcl(uint32_t x, int n) {
        x &= mask<N>();
        int k = N == 32 ? n : n % (N + 1);
        while (k--) {
            const bool c2 = sign<N>(x);
            x = ((x << 1) | (cf ? 1 : 0)) & mask<N>();
            cf = c2;
        }
        if (n == 1) of = sign<N>(x) != cf;
        return x;
    }
    template <int N> uint32_t rcr(uint32_t x, int n) {
        x &= mask<N>();
        int k = N == 32 ? n : n % (N + 1);
        if (n == 1) of = sign<N>(x) != cf;
        while (k--) {
            const bool c2 = x & 1;
            x = (x >> 1) | ((cf ? 1u : 0u) << (N - 1));
            cf = c2;
        }
        return x;
    }
    template <int N> uint32_t shld(uint32_t d, uint32_t s, int n, bool fl) {
        if (!n) return d;
        const uint64_t w = ((uint64_t)(d & mask<N>()) << N) | (s & mask<N>());
        const uint32_t r = (uint32_t)((w << n) >> N) & mask<N>();
        if (fl) {
            cf = (d >> (N - n)) & 1;
            of = sign<N>(r) != sign<N>(d);
            szp<N>(r);
        }
        return r;
    }
    template <int N> uint32_t shrd(uint32_t d, uint32_t s, int n, bool fl) {
        if (!n) return d;
        const uint64_t w = ((uint64_t)(s & mask<N>()) << N) | (d & mask<N>());
        const uint32_t r = (uint32_t)(w >> n) & mask<N>();
        if (fl) {
            cf = (d >> (n - 1)) & 1;
            of = sign<N>(r) != sign<N>(d);
            szp<N>(r);
        }
        return r;
    }
    // multiplications (flags: CF = OF = the high half matters)
    void mul8(uint8_t s) {
        a.x = (uint16_t)(a.l * s);
        cf = of = a.h != 0;
    }
    void mul16(uint16_t s) {
        const uint32_t r = (uint32_t)a.x * s;
        a.x = (uint16_t)r, dx_.x = (uint16_t)(r >> 16);
        cf = of = dx_.x != 0;
    }
    void mul32(uint32_t s) {
        const uint64_t r = (uint64_t)a.e * s;
        a.e = (uint32_t)r, dx_.e = (uint32_t)(r >> 32);
        cf = of = dx_.e != 0;
    }
    void imul8(uint8_t s) {
        a.x = (uint16_t)((int8_t)a.l * (int8_t)s);
        cf = of = (int16_t)a.x != (int8_t)a.l;
    }
    void imul16(uint16_t s) {
        const int32_t r = (int16_t)a.x * (int16_t)s;
        a.x = (uint16_t)r, dx_.x = (uint16_t)(r >> 16);
        cf = of = r != (int16_t)r;
    }
    void imul32(uint32_t s) {
        const int64_t r = (int64_t)(int32_t)a.e * (int32_t)s;
        a.e = (uint32_t)r, dx_.e = (uint32_t)((uint64_t)r >> 32);
        cf = of = r != (int32_t)r;
    }
    template <int N> uint32_t imul(uint32_t x, uint32_t y) {
        if (N == 16) {
            const int32_t r = (int16_t)x * (int16_t)y;
            cf = of = r != (int16_t)r;
            return (uint16_t)r;
        }
        const int64_t r = (int64_t)(int32_t)x * (int32_t)y;
        cf = of = r != (int32_t)r;
        return (uint32_t)r;
    }
    // divisions: false on a divide error (#DE: the caller takes int 0 and
    // runs the instruction again, as the CPU returns to it)
    bool div8(uint8_t s) {
        if (!s || a.x / s > 0xFF) return false;
        const uint16_t q = a.x / s, r = a.x % s;
        a.l = (uint8_t)q, a.h = (uint8_t)r;
        return true;
    }
    bool div16(uint16_t s) {
        const uint32_t n = (uint32_t)dx_.x << 16 | a.x;
        if (!s || n / s > 0xFFFF) return false;
        a.x = (uint16_t)(n / s), dx_.x = (uint16_t)(n % s);
        return true;
    }
    bool div32(uint32_t s) {
        const uint64_t n = (uint64_t)dx_.e << 32 | a.e;
        if (!s || n / s > 0xFFFFFFFFull) return false;
        a.e = (uint32_t)(n / s), dx_.e = (uint32_t)(n % s);
        return true;
    }
    bool idiv8(uint8_t s) {
        const int16_t n = (int16_t)a.x;
        if (!s) return false;
        const int32_t q = n / (int8_t)s;
        if (q > 127 || q < -128) return false;
        a.l = (uint8_t)q, a.h = (uint8_t)(n % (int8_t)s);
        return true;
    }
    bool idiv16(uint16_t s) {
        const int32_t n = (int32_t)((uint32_t)dx_.x << 16 | a.x);
        if (!s) return false;
        const int64_t q = (int64_t)n / (int16_t)s;
        if (q > 32767 || q < -32768) return false;
        a.x = (uint16_t)q, dx_.x = (uint16_t)(n % (int16_t)s);
        return true;
    }
    bool idiv32(uint32_t s) {
        const int64_t n = (int64_t)((uint64_t)dx_.e << 32 | a.e);
        if (!s) return false;
        if (n == INT64_MIN && (int32_t)s == -1) return false;
        const int64_t q = n / (int32_t)s;
        if (q > INT32_MAX || q < INT32_MIN) return false;
        a.e = (uint32_t)q, dx_.e = (uint32_t)(n % (int32_t)s);
        return true;
    }

    // --- string instructions ------------------------------------------------------
    // REP kinds: 0 none, 1 REP/REPE, 2 REPNE. A32: 32-bit addresses (ECX,
    // ESI, EDI), else 16-bit (CX, SI, DI).
    template <int N> uint32_t rdN(uint32_t a) { return N == 8 ? r8(a) : N == 16 ? r16(a) : r32(a); }
    template <int N> void wrN(uint32_t a, uint32_t v) {
        if (N == 8) w8(a, v);
        else if (N == 16) w16(a, v);
        else w32(a, v);
    }
    template <bool A32> uint32_t& idx(Reg& r) { return r.e; }
    template <bool A32> uint32_t count() const { return A32 ? c.e : c.x; }
    template <bool A32> void setCount(uint32_t n) {
        if (A32) c.e = n;
        else c.x = (uint16_t)n;
    }
    template <bool A32> uint32_t ofs(const Reg& r) const { return A32 ? r.e : r.x; }
    template <bool A32> void step(Reg& r, int d) {
        if (A32) r.e += (uint32_t)d;
        else r.x = (uint16_t)(r.x + d);
    }
    template <int N, bool A32> void movs(uint32_t srcBase, int rep) {
        const int d = (df ? -1 : 1) * (N / 8);
        if (!rep) {
            wrN<N>(esb + ofs<A32>(di), rdN<N>(srcBase + ofs<A32>(si)));
            step<A32>(si, d), step<A32>(di, d);
            return;
        }
        for (uint32_t n = count<A32>(); n; n--) {
            wrN<N>(esb + ofs<A32>(di), rdN<N>(srcBase + ofs<A32>(si)));
            step<A32>(si, d), step<A32>(di, d);
            setCount<A32>(n - 1);
        }
    }
    template <int N, bool A32> void stos(int rep) {
        const int d = (df ? -1 : 1) * (N / 8);
        const uint32_t v = N == 8 ? a.l : N == 16 ? a.x : a.e;
        if (!rep) {
            wrN<N>(esb + ofs<A32>(di), v);
            step<A32>(di, d);
            return;
        }
        for (uint32_t n = count<A32>(); n; n--) {
            wrN<N>(esb + ofs<A32>(di), v);
            step<A32>(di, d);
            setCount<A32>(n - 1);
        }
    }
    template <int N, bool A32> void lods(uint32_t srcBase, int rep) {
        const int d = (df ? -1 : 1) * (N / 8);
        uint32_t n = rep ? count<A32>() : 1;
        for (; n; n--) {
            const uint32_t v = rdN<N>(srcBase + ofs<A32>(si));
            if (N == 8) a.l = (uint8_t)v;
            else if (N == 16) a.x = (uint16_t)v;
            else a.e = v;
            step<A32>(si, d);
            if (rep) setCount<A32>(n - 1);
        }
    }
    template <int N, bool A32> void cmps(uint32_t srcBase, int rep) {
        const int d = (df ? -1 : 1) * (N / 8);
        if (!rep) {
            sub<N>(rdN<N>(srcBase + ofs<A32>(si)), rdN<N>(esb + ofs<A32>(di)), true);
            step<A32>(si, d), step<A32>(di, d);
            return;
        }
        for (uint32_t n = count<A32>(); n; n--) {
            sub<N>(rdN<N>(srcBase + ofs<A32>(si)), rdN<N>(esb + ofs<A32>(di)), true);
            step<A32>(si, d), step<A32>(di, d);
            setCount<A32>(n - 1);
            if ((rep == 1) != zf) break;
        }
    }
    template <int N, bool A32> void scas(int rep) {
        const int d = (df ? -1 : 1) * (N / 8);
        const uint32_t v = N == 8 ? a.l : N == 16 ? a.x : a.e;
        if (!rep) {
            sub<N>(v, rdN<N>(esb + ofs<A32>(di)), true);
            step<A32>(di, d);
            return;
        }
        for (uint32_t n = count<A32>(); n; n--) {
            sub<N>(v, rdN<N>(esb + ofs<A32>(di)), true);
            step<A32>(di, d);
            setCount<A32>(n - 1);
            if ((rep == 1) != zf) break;
        }
    }
    template <int N, bool A32> void outs(uint32_t srcBase, int rep) {
        const int d = (df ? -1 : 1) * (N / 8);
        uint32_t n = rep ? count<A32>() : 1;
        for (; n; n--) {
            const uint32_t v = rdN<N>(srcBase + ofs<A32>(si));
            if (N == 8) out8(dx_.x, (uint8_t)v);
            else out16(dx_.x, (uint16_t)v);
            step<A32>(si, d);
            if (rep) setCount<A32>(n - 1);
        }
    }

    // --- ports -------------------------------------------------------------------
    uint8_t in8(uint16_t p) { return m.in8(p); }
    uint16_t in16(uint16_t p) { return m.in16(p); }
    void out8(uint16_t p, uint8_t v) { m.out8(p, v); }
    void out16(uint16_t p, uint16_t v) { m.out16(p, v); }

    // --- control ---------------------------------------------------------------
    // CR0: PE on or off (the descriptors are read when segments are loaded)
    void setCr0(uint32_t v) { cr0 = v; }
    // int n: the flags, CS and IP on the stack (IP: the next instruction),
    // then the vector's handler: a translated routine, or the BIOS/DOS
    // service when the vector is still at F000:0100+n. Returns when the
    // handler's IRET has run.
    void intr(int n, uint32_t retIp);
    // the IRET at the end of a handler: IP, CS, flags from the stack
    void iret();
    // a far transfer to a linear address (call/jmp far, retf to code that is
    // not the caller): runs the routine there
    void callLinear(uint32_t lin);

    // The translated routines, by program and the linear address they
    // start at. A lookup tries the running program, then the resident ones.
    static std::unordered_map<uint32_t, Code>& registry(int program);
    Code find(uint32_t lin);
    int program = -1;                   // the program running (Demo's index)
    [[noreturn]] void notTranslated(uint32_t lin, const char* what);
    // a near call came back elsewhere than after the call
    [[noreturn]] void badReturn(uint32_t lin);

    // debugging (PROJANGE_TRACE=t0,t1,file): the registers at every label
    // the program reaches between those times
    std::vector<uint16_t> kbdBuffer;    // the BIOS's: (scan code << 8) | ASCII
    bool tracing = false;
    void traceAt(uint32_t lin);
    void traceSetup();
    double traceT0 = 0, traceT1 = 0;
    FILE* traceOut = nullptr;

    // the BIOS and DOS (vectors still at F000:0100+n), DOS functions as the
    // harness's (emu.py service)
    void service(int n);
};

struct Register {
    Register(int program, std::initializer_list<uint32_t> entries, Code f) {
        for (uint32_t e : entries) Cpu::registry(program)[e] = f;
    }
};

}  // namespace angel
