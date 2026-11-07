#include "cpu.h"

#include <cstdio>
#include <cstdlib>
#include <map>

#include "demo.h"

namespace angel {

std::unordered_map<uint32_t, Code>& Cpu::registry(int program) {
    static std::map<int, std::unordered_map<uint32_t, Code>> r;
    return r[program];
}

Code Cpu::find(uint32_t lin) {
    auto& own = registry(program);
    auto it = own.find(lin);
    if (it != own.end()) return it->second;
    for (int p = 0; p < 4; p++) {               // the resident programs
        auto& r = registry(p);
        auto j = r.find(lin);
        if (j != r.end()) return j->second;
    }
    return nullptr;
}

void Cpu::notTranslated(uint32_t lin, const char* what) {
    char b[160];
    std::snprintf(b, sizeof b, "program %d: %s at %05X (not in the translation: never run in the harness)", program,
                  what, lin);
    throw NotTranslated(b);
}

void Cpu::traceSetup() {
    const char* e = std::getenv("PROJANGE_TRACE");
    if (!e) return;
    char file[400] = {};
    if (std::sscanf(e, "%lf,%lf,%399s", &traceT0, &traceT1, file) == 3) {
        traceOut = std::fopen(file, "w");
        tracing = traceOut != nullptr;
    }
}

void Cpu::traceAt(uint32_t lin) {
    const double t = m.now();
    if (t < traceT0) return;
    if (t > traceT1) {
        tracing = false;
        std::fclose(traceOut);
        return;
    }
    std::fprintf(traceOut, "%x %x %x %x %x %x %x %x %x %x %x\n", lin, a.e, b.e, c.e, dx_.e, si.e, di.e, bp.e, sp.x, ds, es);
}

void Cpu::badReturn(uint32_t lin) {
    char b[120];
    std::snprintf(b, sizeof b, "program %d: the call at %05X returned to %04X", program, lin, ip);
    throw NotTranslated(b);
}

void Cpu::callLinear(uint32_t lin) {
    if (lin == 0xF2000) {                       // HIMEM's entry (the harness's trap)
        service(-1);
        ip = pop16();
        loadCs(pop16());
        return;
    }
    Code f = find(lin);
    if (!f) notTranslated(lin, "far transfer");
    f(*this, lin);
}

void Cpu::intr(int n, uint32_t retIp) {
    const uint16_t off = m.r16(n * 4), seg = m.r16(n * 4 + 2);
    if (tracing && m.now() >= traceT0 && m.now() <= traceT1)
        std::fprintf(traceOut, "int %x at %.9f ip %x d32 %d\n", n, m.now(), retIp, d32 ? 1 : 0);
    if (seg == 0xF000 && off == 0x100 + n) {
        // the BIOS: an IRQ acknowledged (and the tick counted); a service
        // answered in place, as the harness does
        int irq = -1;
        if (n >= 8 && n < 16) irq = n - 8;
        else if (n >= 0x70 && n < 0x78) irq = n - 0x70 + 8;
        if (irq >= 0) {
            if (irq == 0) m.w32(0x46C, m.r32(0x46C) + 1);
            if (irq == 1) {                      // the keyboard: a key pressed to the buffer
                const uint8_t k = m.kbdData();
                if (k < 0x80) kbdBuffer.push_back((uint16_t)(k << 8 | (k == 1 ? 0x1B : k == 0x1C ? 0x0D : k == 0x39 ? 0x20 : 0)));
            }
            if (m.inService() >> irq & 1) m.ack(irq);
            return;
        }
        service(n);
        return;
    }
    // (from 32-bit code the harness's frame returns through its trap at
    // F000:3000, which brings the 32-bit CS back: the same words here)
    const bool fromD32 = d32;
    push16(flags());
    push16(fromD32 ? 0xF000 : cs);
    push16(fromD32 ? 0x3000 : retIp);
    const bool was = m.intFlag();
    m.cli();
    const uint16_t savedCs = cs;
    const uint32_t savedCsb = csb;
    loadCs(seg);
    const uint32_t lin = csb + off;
    Code f = find(lin);
    if (!f) notTranslated(lin, "interrupt handler");
    f(*this, lin);
    // (the handler's IRET popped the frame: ip, cs, flags)
    (void)was, (void)savedCs, (void)savedCsb;
}

void Cpu::iret() {
    ip = pop16();
    const uint16_t s = pop16();
    if (s == 0xF000 && ip == 0x3000) {
        // back into 32-bit code: CS and IP are the interrupted code's, which
        // the translation goes on with (the caller's frame)
    } else {
        loadCs(s);
    }
    setFlags(pop16());
}

// --- DOS and the BIOS, as the harness answers them ----------------------------------

void Cpu::service(int n) {
    Dos& dos = d.dos;
    const uint8_t ah = a.h, al = a.l;
    auto setCf = [&](bool c) { cf = c; };
    if (n == -1) {                              // XMS (HIMEM)
        switch (ah) {
        case 0x00: a.x = 0x0300, b.x = 0x0315, dx_.x = 1; break;
        case 0x03: case 0x04: case 0x05: case 0x06: a.x = 1; break;
        case 0x08: {
            const uint16_t free = (uint16_t)((0x1000000 - 0x110000) >> 10);
            a.x = free, dx_.x = free, b.l = 0;
            break;
        }
        case 0x09: {
            uint16_t h;
            dos.xmsAlloc(dx_.x, h);
            a.x = 1, dx_.x = h;
            break;
        }
        case 0x0C: {
            const uint32_t base = dos.xmsBase(dx_.x);
            a.x = 1, dx_.x = (uint16_t)(base >> 16), b.x = (uint16_t)base;
            break;
        }
        case 0x0D: a.x = 1; break;
        case 0x0A: a.x = 1; break;
        default: throw std::runtime_error("XMS function not in the harness");
        }
        return;
    }
    if (n == 0x21) {
        switch (ah) {
        case 0x09: break;                       // (messages: none on the way through)
        case 0x02: break;
        case 0x30: a.x = 0x0006, b.x = 0; break;
        case 0x25: m.w16(al * 4, dx_.x), m.w16(al * 4 + 2, ds); break;
        case 0x35: b.x = m.r16(al * 4), loadEs(m.r16(al * 4 + 2)); break;
        case 0x48: {
            uint16_t largest;
            const uint16_t s = dos.alloc(b.x, largest);
            if (!s) a.x = 8, b.x = largest, setCf(true);
            else a.x = s, setCf(false);
            break;
        }
        case 0x49:
            if (!dos.free(es)) a.x = 9, setCf(true);
            else setCf(false);
            break;
        case 0x4A: {
            uint16_t got;
            const int err = dos.resize(es, b.x, got);
            if (err) a.x = (uint16_t)err, b.x = got, setCf(true);
            else setCf(false);
            break;
        }
        case 0x4C: d.exitProgram(al);
        case 0x31: d.exitProgram(al, dx_.x);
        case 0x4D: a.x = dos.retcode; break;
        case 0x50: dos.psp = b.x; break;
        case 0x51: case 0x62: b.x = dos.psp; break;
        case 0x3D: {
            std::string name;
            for (uint32_t p = dsb + dx_.x; m.r8(p); p++) name += (char)std::toupper(m.r8(p));
            const size_t k = name.rfind('\\');
            if (k != std::string::npos) name = name.substr(k + 1);
            a.x = (uint16_t)dos.open(name);
            setCf(false);
            break;
        }
        case 0x3E: setCf(false); break;
        case 0x40: {                            // write: the end's text, to the screen
            std::string t;
            for (int i = 0; i < c.x; i++) t += (char)m.r8(dsb + (uint16_t)(dx_.x + i));
            d.text += t;
            a.x = c.x;
            setCf(false);
            break;
        }
        case 0x3F:
            a.x = dos.read(b.x, dsb + dx_.x, c.x);
            setCf(false);
            break;
        case 0x42: {
            const uint32_t pos = dos.seek(b.x, al, (int32_t)((uint32_t)c.x << 16 | dx_.x));
            a.x = (uint16_t)pos, dx_.x = (uint16_t)(pos >> 16);
            setCf(false);
            break;
        }
        case 0x2C: {
            const double s = m.now();
            c.x = (uint16_t)(12 << 8 | (int)(s / 60) % 60);
            dx_.x = (uint16_t)(((int)s % 60) << 8 | (int)(s * 100) % 100);
            break;
        }
        case 0x0B: a.l = 0; break;
        case 0x44:
            if (al == 0) dx_.x = b.x < 5 ? 0x80 : 0;
            setCf(false);
            break;
        case 0x2A: c.x = 1995, dx_.x = 0x0303, a.x = 0x2A05; break;
        case 0x19: a.l = 2; break;
        case 0x06: case 0x07: case 0x08: a.l = 0; break;
        default: throw std::runtime_error("int 21h function not in the harness");
        }
        return;
    }
    if (n == 0x2F) {
        if (a.x == 0x4300) a.l = 0x80;
        else if (a.x == 0x4310) loadEs(0xF000), b.x = 0x2000;
        return;
    }
    if (n == 0x10) {
        switch (ah) {
        case 0x00: d.setMode(al); break;
        case 0x0F: a.x = (uint16_t)(0x5000 | m.r8(0x449)), b.x = 0; break;
        case 0x10:
            if (al == 0x12) {
                const uint32_t p = esb + dx_.x;
                for (int i = 0; i < c.x; i++)
                    m.vga.setDac(b.x + i, m.r8(p + 3 * i), m.r8(p + 3 * i + 1), m.r8(p + 3 * i + 2));
            } else if (al == 0x17) {
                const uint32_t p = esb + dx_.x;
                const uint8_t* dac = m.vga.dac();
                for (int i = 0; i < c.x; i++)
                    for (int k = 0; k < 3; k++) m.w8(p + 3 * i + k, dac[((b.x + i) & 0xFF) * 3 + k]);
            } else if (al == 0x10) {
                m.vga.setDac(b.x, dx_.h, c.h, c.l);
            }
            break;
        case 0x12:
            if (b.l == 0x10) b.x = 0x0003, c.x = 0x0009;
            break;
        case 0x4F: a.x = 0x014F; break;
        case 0x1A: a.x = 0x001A, b.x = 8; break;
        case 0x03: dx_.x = 0, c.x = 0x0607; break;
        default: break;
        }
        return;
    }
    if (n == 0x16) {
        if (ah == 0 || ah == 0x10) {
            if (kbdBuffer.empty()) {
                a.x = 0x1C0D;
            } else {
                a.x = kbdBuffer.front();
                kbdBuffer.erase(kbdBuffer.begin());
            }
        } else if (ah == 1 || ah == 0x11) {
            zf = kbdBuffer.empty();
            if (!zf) a.x = kbdBuffer.front();
        }
        return;
    }
    if (n == 0x1A) {
        if (ah == 0) {
            const uint32_t t = m.r32(0x46C);
            c.x = (uint16_t)(t >> 16), dx_.x = (uint16_t)t, a.x = 0;
        }
        return;
    }
    if (n == 0x15) {
        if (ah == 0x88) a.x = 0, cf = false;
        else cf = true;
        return;
    }
    if (n == 0x12) {
        a.x = 640;
        return;
    }
    if (n == 0x33) {
        a.x = 0;
        return;
    }
    char b2[64];
    std::snprintf(b2, sizeof b2, "int %02Xh not in the harness", n);
    throw std::runtime_error(b2);
}

}  // namespace angel
