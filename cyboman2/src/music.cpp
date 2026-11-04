#include "music.h"

#include <algorithm>
#include <cstring>

namespace cyb {

namespace {
constexpr uint32_t kChan = 0x2D42C;     // 16 channels of 3Fh bytes
constexpr uint32_t kSmp = 0x2B4F8;      // 31 samples of 50h bytes
constexpr uint32_t kVol = 0x2A1E8;      // the volume table (words)
constexpr uint16_t kVoicePort = 0x322, kRegPort = 0x323, kDataLo = 0x324, kDataHi = 0x325;

uint32_t rol16(uint32_t v) { return v << 16 | v >> 16; }
uint16_t swap16(uint16_t v) { return (uint16_t)(v << 8 | v >> 8); }
}  // namespace

Music::Music(const std::vector<uint8_t>& image, Gf1& gus) : m_(0x300000, 0), gus_(gus) {
    // the flat segment's offset 0 is the image's E90h
    const size_t n = std::min<size_t>(0x30000, image.size() > 0xE90 ? image.size() - 0xE90 : 0);
    if (n) std::memcpy(m_.data(), image.data() + 0xE90, n);
}

// 2A673h (from 2A68Eh: the port, IRQ and DMA come from ULTRASND=220,1,1,11,11):
// the GF1 reset, 16 voices, all silent at the centre, timer 2 at FDh.
void Music::init() {
    sw(0x2A19A, 0x220);
    b(0x2A1B7) = 11;
    out(0x220, 0x0B);
    sw(0x2A19C, 0x322), sw(0x2A19E, 0x323), sw(0x2A1A0, 0x324), sw(0x2A1A2, 0x327);
    out(kRegPort, 0x4C), out(kDataHi, 0);
    out(kDataHi, 1);
    out(kRegPort, 0x41), out(kDataHi, 0);
    out(kRegPort, 0x45), out(kDataHi, 0);
    out(kRegPort, 0x49), out(kDataHi, 0);
    out(kRegPort, 0x0E), out(kDataHi, 0xCF);
    for (int bl = 0x1F; bl >= 0; bl--)
        for (int twice = 0; twice < 2; twice++) {
            out(kVoicePort, (uint8_t)bl);
            out(kRegPort, 9), outw(kDataLo, 0);
            out(kRegPort, 0), out(kDataHi, 0);
            out(kRegPort, 0x0D), out(kDataHi, 3);
            out(kRegPort, 6), out(kDataHi, 0x10);
            out(kRegPort, 0x0C), out(kDataHi, 7);
        }
    out(0x22F, 5);
    out(0x220, 8);
    out(0x22B, 0);
    out(0x22F, 0);
    out(0x220, 0x4B);
    out(0x22B, b(0x2A1D4 + b(0x2A1B7)));
    out(0x220, 9);
    // the DRAM's size (4 banks of 256K here); its test bytes are written
    // over by the samples but for the last two
    out(kRegPort, 0x43), outw(kDataLo, 0xFFFF);
    out(kRegPort, 0x44);
    for (uint8_t cl = 3; !(cl & 0x10); cl += 4) {
        out(kDataHi, cl);
        gus_.poke((uint32_t)cl << 16 | 0xFFFF, 1);
        b(0x2A1A4)++;
    }
    out(kRegPort, 0x4C), out(kDataHi, 3);
    out(kRegPort, 0x47), out(kDataHi, b(0x2A1B8));
    out(kRegPort, 0x45), out(kDataHi, 8);
    out(0x228, 4);
    out(0x229, 2);
    sd(0x2A1B3, 0x293);                         // the callback: a RET for now
}

// 2A648h: the 32 voices' pans from the bytes at ESI.
void Music::setPans(uint32_t esi) {
    for (int v = 0; v < 32; v++) {
        out(kVoicePort, (uint8_t)v);
        out(kRegPort, 0x0C), out(kDataHi, b(esi++));
    }
}

// 2A5AEh: N bytes from the flat segment's SRC to the DRAM's DST, through
// the DRAM address registers and port 3x7.
void Music::upload(uint32_t src, uint32_t dst, uint32_t n) {
    b(0x2A1CF) = 0x43;                          // the register last selected
    for (uint32_t i = 0; i < n; i++) gus_.poke(dst + i, b(src + i));
}

// 2E786h: the module at 93Eh.
void Music::load() {
    const uint32_t mod = 0x93E;
    sd(0x2E782, mod);
    uint32_t esi = mod + 0x14;
    b(0x2AD23) = 0x10;                          // channels
    setPans(0x2AE25);
    uint32_t edi = kSmp;
    for (int k = 0; k < 31; k++, esi += 8, edi += 0x50) {
        esi += 0x16;
        uint32_t eax = (uint32_t)swap16(w(esi)) << 1;
        if (eax <= 2) eax = 0;
        sd(edi + 0x32, eax);                    // length
        const uint32_t ft = b(esi + 2) & 0x0F;
        b(edi + 0x3F) = (uint8_t)ft;
        sw(edi + 0x44, w(0x2AB50 + ft * 2));    // C-4 speed
        b(edi + 0x3E) = b(esi + 3);             // volume
        eax = (uint32_t)swap16(w(esi + 4)) << 1;
        sd(edi + 0x36, eax);                    // loop start
        uint32_t ebx = ((uint32_t)swap16(w(esi + 6)) - 1) << 1;
        eax += ebx;
        if (eax > d(edi + 0x32)) eax = d(edi + 0x32) - 1;
        sd(edi + 0x3A, eax + 2);                // loop end
        b(edi + 0x31) = (int32_t)ebx > 2 ? 1 : 0;
    }
    // the order list, the song's length, the number of patterns
    for (int k = 0; k < 0x80; k++) b(0x2AD25 + k) = b(mod + 0x3B8 + k);
    for (int k = 0; k < 0x80; k++) b(0x2ADA5 + k) = 0;
    b(0x2AD22) = b(mod + 0x3B6);
    b(0x2D40F) = b(0x2AD25);
    sd(0x2D410, b(0x2AD25) * 0x140u);
    uint8_t ah = 0;
    for (int k = 0; k < 0x80; k++) ah = std::max(ah, b(0x2AD25 + k));
    const uint8_t npat = (uint8_t)(ah + 1);
    b(0x2AD20) = npat;
    // a buffer of the patterns for each channel: 5 bytes a row, empty
    // (00 00 FFh 00 00)
    edi = kChan;
    for (int ch = b(0x2AD23); ch; ch--, edi += 0x3F) {
        const uint32_t a = alloc(npat * 0x145u);
        sd(edi, a);
        for (uint32_t k = 0; k < (uint32_t)npat << 6; k++) {
            sd(a + 5 * k, 0xFF0000);
            b(a + 5 * k + 4) = 0;
        }
    }
    // the patterns converted: note (octave << 4 | note + 1), sample, volume
    // (Cxx), effect, parameter
    sd(0x2E782, d(0x2E782) + 0x43C);
    sd(0x2D41F, 0);
    for (int p = npat; p; p--) {
        esi = d(0x2E782);
        uint32_t ebx = kChan;
        for (int ch = b(0x2AD23); ch; ch--, esi += 4) {
            edi = d(ebx) + d(0x2D41F);
            ebx += 0x3F;
            uint32_t s = esi, o = edi;
            for (int row = 0; row < 0x40; row++, s += b(0x2AD23) * 4u, o += 5) {
                const uint16_t period = swap16(w(s)) & 0xFFF;
                uint8_t note = 0;
                if (period) {
                    uint32_t t = 0x2AB74;
                    for (int n = 0x60; n; n--) {
                        if (period == w(t)) break;
                        t += 2;
                    }
                    const uint32_t idx = (t - 0x2AB74) >> 1;
                    note = (uint8_t)((idx / 12) << 4) + (uint8_t)(idx % 12 + 1);
                }
                b(o) = note;
                b(o + 1) = (uint8_t)((b(s) & 0xF0) | b(s + 2) >> 4);
                const uint8_t fx = b(s + 2) & 0x0F, prm = b(s + 3);
                if (fx == 0x0C) {
                    b(o + 2) = prm;
                } else {
                    b(o + 3) = fx;
                    b(o + 4) = prm;
                }
            }
        }
        sd(0x2D41F, d(0x2D41F) + 0x140);
        sd(0x2E782, d(0x2E782) + ((uint32_t)b(0x2AD23) << 8));
    }

    // 2E9AAh: the samples. The first two are in the module, as deltas
    // (6 * (byte - 16)); the rest are made from the 512-byte wave at 2EB9Dh.
    const uint32_t buf = alloc(0x90000);
    sd(0x2EB95, buf);
    edi = buf;
    esi = d(0x2E782);
    uint32_t ecx = d(0x2B52A);
    for (int dl = 2; dl; dl--) {
        uint8_t al = 0;
        for (; ecx; ecx--) {
            uint8_t bl = (uint8_t)(b(esi) - 0x10);
            bl = (uint8_t)(bl + bl);
            al = (uint8_t)(al + bl);
            bl = (uint8_t)(bl + bl);
            al = (uint8_t)(al + bl);
            b(edi++) = al;
            esi++;
        }
        ecx = d(0x2B57A);
    }
    {
        // a sweep: the wave read faster and faster, fading
        uint32_t si = 0, bx = 0x20000, cx = 0x20, bp = 0;
        for (int32_t dx = 0x3FFF; dx >= 0; dx--) {
            int32_t a = (int8_t)b(0x2EB9D + (si & 0x1FF));
            si = rol16(rol16(si) + bx);
            bp = (bp & 0xFFFF0000) | (cx & 0xFFFF);
            bx -= bp;
            cx = rol16(rol16(cx) - 0x80);
            a = (a * dx) >> 12;
            if (a < 0) {
                if (a < -0x80) a = -0x80;
            } else if (a > 0x7F) {
                a = 0x7F;
            }
            b(edi++) = (uint8_t)a;
        }
        sd(0x2EB99, edi);
        // six banks of 64K: the wave plus itself 1, 2, 4, 8, 16, 32 times
        // as fast (each 256 bytes a step further), halved
        uint32_t ebp = 0, s = 0, step = 1;
        for (sd(0x2EB91, 6); d(0x2EB91); sd(0x2EB91, d(0x2EB91) - 1), step += step) {
            for (int ch = 0; ch < 256; ch++) {
                const int32_t e = (int8_t)b(0x2EB9D + ebp);
                ebp = (ebp + 1) & 0x1FF;
                for (int cl = 0; cl < 256; cl++) {
                    b(edi++) = (uint8_t)(((int8_t)b(0x2EB9D + s) + e) >> 1);
                    s = (s + step) & 0x1FF;
                }
            }
        }
        // banks 6-8: banks 4, 3, 2 again
        const uint32_t base = d(0x2EB99);
        std::memmove(&m_[base + 0x60000], &m_[base + 0x40000], 0x10000);
        std::memmove(&m_[base + 0x70000], &m_[base + 0x30000], 0x10000);
        std::memmove(&m_[base + 0x80000], &m_[base + 0x20000], 0x10000);
        // each bank faded into the next
        uint32_t a = base, c = base + 0x10000;
        for (sd(0x2EB91, 8); d(0x2EB91); sd(0x2EB91, d(0x2EB91) - 1))
            for (int32_t e = 0xFFFF; e >= 0; e--) {
                const int32_t kc = e >> 8, kd = 255 - kc;
                b(a) = (uint8_t)(((int8_t)b(a) * kc + (int8_t)b(c) * kd) >> 8);
                a++, c++;
            }
        // 80000h on: bank 2 a third as long, louder
        a = base + 0x20000, c = base + 0x80000;
        for (int n = 0xC000; n; n--) {
            int32_t v = (int8_t)b(a) * 8;
            a += 3;
            v = std::clamp(v, -0x7F, 0x7F);
            b(c++) = (uint8_t)v;
        }
        // and all of it in 256-byte notes that die away
        c = base;
        for (int n = 8 * 256; n; n--)
            for (int32_t k = 0xFF; k >= 0; k--) {
                const int32_t v = std::clamp(((int8_t)b(c) * k) >> 7, -0x7F, 0x7F);
                b(c++) = (uint8_t)v;
            }
    }
    // 2ED9Dh: to the GUS, one after the other
    uint32_t ebp = d(0x2EB95);
    sd(0x2D41B, 0);
    esi = kSmp;
    for (int k = 0; k < 31; k++, esi += 0x50) {
        const uint32_t n = d(esi + 0x32);
        if (!n) continue;
        sd(esi + 0x40, d(0x2D41B));
        sd(0x2D41B, d(0x2D41B) + n);
        upload(ebp, d(esi + 0x40), n);
        ebp += n;
    }
}

// 2E689h: the channels cleared, the song from its start.
void Music::start() {
    uint32_t edi = kChan;
    for (int ch = 0x10; ch; ch--, edi += 0x3F) {
        b(edi + 0x13) = 0;
        sd(edi + 4, 0), sd(edi + 8, 0), sd(edi + 0xC, 0);
        b(edi + 0x10) = 0, b(edi + 0x11) = 0, b(edi + 0x12) = 0;
        sw(edi + 0x22, 0);
        sd(edi + 0x14, 0xFFFF), sd(edi + 0x18, 0xFFFF);
        sw(edi + 0x1C, 0xFF), sw(edi + 0x1E, 0);
        b(edi + 0x20) = 7, b(edi + 0x21) = 0;
        sd(edi + 0x24, 0);
        b(edi + 0x28) = 0, b(edi + 0x29) = 0;
        sw(edi + 0x2A, 0), sw(edi + 0x2C, 0), sw(edi + 0x2E, 0), sw(edi + 0x30, 0);
        b(edi + 0x3B) = 0, b(edi + 0x3C) = 0, b(edi + 0x3D) = 0, b(edi + 0x3E) = 0;
    }
    b(0x2D408) = 1;
    sw(0x2D40A, 0);
    b(0x2D409) = 0x3F;
    b(0x2D414) = 0x3F;
    b(0x2D415) = 0;
    b(0x2D416) = 0;
    b(0x2D40C)--;
    b(0x2D40E) = 1;
    b(0x2D418) = 0;
    b(0x2D417) = 0;
    tempo();
}

// 2A538h: the ticks' rate from the BPM, the counters, the callback on.
void Music::tempo() {
    const uint32_t edx = (uint32_t)(b(0x2AD1F) * 2 / 5);
    sd(0x2A1A5, (uint32_t)(((uint64_t)edx << 32) / 0x411));
    sd(0x2A1A9, 0);
    sw(0x2A1AD, 0x14);
    sd(0x2A1AF, 0);
    sd(0x2A1B3, 0x2A2C1);
}

// 2E771h (2A57Fh): the callback off, the 16 voices stopped.
void Music::stop() {
    sd(0x2A1B3, 0x293);
    for (int v = 0x0F; v >= 0; v--) {
        out(kVoicePort, (uint8_t)v);
        out(kRegPort, 0), out(kDataHi, 3);
    }
    b(0x2D40E) = 0;
}

// 2A268h: the timer acknowledged, the callback, the register selected
// before put back.
void Music::irq() {
    out(kRegPort, 0x45), out(kDataHi, 0), out(kDataHi, 8);
    if (d(0x2A1B3) == 0x2A2C1) voices();
    out(kRegPort, b(0x2A1CF));
}

// 2A2C1h
void Music::voices() {
    sd(0x2A1AF, d(0x2A1AF) + 1);
    sw(0x2A1AD, (uint16_t)(w(0x2A1AD) + 1));
    const uint64_t acc = (uint64_t)d(0x2A1A9) + d(0x2A1A5);
    sd(0x2A1A9, (uint32_t)acc);
    if (acc >> 32) {
        sw(0x2A1AD, 0);
        tick();
    }
    if (w(0x2A1AD) == 4) {
        // the voices of new notes ramped down (see the header for its bugs)
        uint32_t ebp = kChan, ecx = 0x0F;
        for (;;) {
            const uint32_t keep = ecx;
            ecx = (ecx & ~0xFFu) | b(ebp + 0x11);
            if (ecx & 8) {
                out(kVoicePort, (uint8_t)((ecx & 0xFF) ^ 0x0F));
                uint32_t ebx = (b(kEdi + 0x13) * d(0x2D423)) >> 6;
                uint16_t bx = w(kVol + ebx * 2);
                uint16_t bp = w(kVol);
                if (bx >= bp) std::swap(bx, bp);   // (and AH = 40h, for the ramp down...)
                ebp = (ebp & 0xFFFF0000) | bp;
                out(kRegPort, 7), outw(kDataLo, bx);
                out(kRegPort, 8), outw(kDataLo, bp);
                // ...but MOV AX, BP has replaced it: the ramp control is BP's
                // high byte, its stop bits set; no ramp runs
                out(kRegPort, 0x0D), out(kDataHi, (uint8_t)(bp >> 8));
            }
            ebp += 0x3F;
            ecx = keep;
            if (ecx-- == 0) break;
        }
    }
    if (w(0x2A1AD) == 5) {
        // the channels' changes to their voices
        sw(0x2A1AD, 1);
        uint32_t ebp = kChan, ebx = 0;
        for (int ch = 0x0F; ch >= 0; ch--, ebp += 0x3F) {
            out(kVoicePort, (uint8_t)(ch ^ 0x0F));
            out(kRegPort, 0x0D), out(kDataHi, 3);
            uint8_t cl = b(ebp + 0x11);
            b(ebp + 0x11) = 0;
            if (!cl) continue;
            if (cl & 8) {
                cl |= 7;
                out(kRegPort, 0), out(kDataHi, 3);
            }
            if (cl & 4) {                       // the frequency
                ebx = w(ebp + 0x2A);
                if (ebx) {
                    uint32_t eax = d(0x2ACC4) / ebx;
                    const uint64_t prod = (uint64_t)eax * 100;
                    eax = (uint32_t)(prod / 0xEB8);
                    const uint32_t rem = (uint32_t)(prod % 0xEB8);
                    ebx = 0xEB8 >> 1;
                    if (rem >= ebx) eax++;
                    sw(ebp + 0x22, (uint16_t)eax);
                }
                ebx = (ebx & 0xFFFF0000) | w(ebp + 0x22);
                if ((uint16_t)ebx != w(ebp + 0x1C)) {
                    sw(ebp + 0x1C, (uint16_t)ebx);
                    out(kRegPort, 1), outw(kDataLo, (uint16_t)ebx);
                }
            }
            if (cl & 2) {                       // the pan
                ebx = (ebx & ~0xFFu) | b(ebp + 0x10);
                if ((uint8_t)ebx != b(ebp + 0x20)) {
                    b(ebp + 0x20) = (uint8_t)ebx;
                    out(kRegPort, 0x0C), out(kDataHi, (uint8_t)ebx);
                }
            }
            // shrd bx, si, 7 / shr esi, 7: the address's high register and
            // the high byte of its low one
            auto address = [&](uint32_t esi, uint8_t hi, uint8_t lo) {
                const uint16_t bx = (uint16_t)(((esi & 0x7F) << 9) | ((ebx & 0xFFFF) >> 7));
                ebx = (ebx & 0xFFFF0000) | bx;
                out(kRegPort, hi), outw(kDataLo, (uint16_t)(esi >> 7));
                out(kRegPort, lo), out(kDataHi, (uint8_t)(bx >> 8));
            };
            if (cl & 8) {                       // the sample: loop, end, start
                uint32_t esi = d(ebp + 8);
                if (esi != d(ebp + 0x14)) {
                    sd(ebp + 0x14, esi);
                    address(esi, 2, 3);
                }
                esi = d(ebp + 0xC);
                if (esi != d(ebp + 0x18)) {
                    sd(ebp + 0x18, esi);
                    address(esi, 4, 5);
                }
                address(d(ebp + 4) + d(ebp + 0x24), 0x0A, 0x0B);
                out(kRegPort, 0), out(kDataHi, b(ebp + 0x12));
            }
            if (cl & 1) {                       // the volume
                ebx = (b(ebp + 0x13) * d(0x2D423)) >> 6;
                const uint16_t bx = w(kVol + ebx * 2);
                ebx = (ebx & 0xFFFF0000) | bx;
                out(kRegPort, 7), outw(kDataLo, w(kVol));
                out(kRegPort, 8), outw(kDataLo, bx);
                out(kRegPort, 9), outw(kDataLo, bx);
                out(kRegPort, 0x0D), out(kDataHi, 0);
            }
        }
    }
}

// The period of a note (octave << 4 | note + 1) for a C-4 speed:
// periods[note] * 20AB0h >> octave / speed.
uint32_t Music::notePeriod(uint8_t note, uint16_t c4) {
    const uint32_t oct = note >> 4;
    const uint32_t n = (uint32_t)((note & 0x0F) - 1);
    const uint32_t eax = (uint32_t)(w(0x2ABA4 + n * 2) * 0x20AB0u) >> (oct & 31);
    return c4 ? (eax / c4) & 0xFFFF : 0;
}

// 2DCC0h: a tick: on the first of a row the row (2DCEFh), on the others
// the effects run.
void Music::tick() {
    sd(0x2DCBC, d(0x2A1AF));
    if (--b(0x2D408) == 0) {
        b(0x2D408) = b(0x2AD1E);
        if (b(0x2D416) == 0) {
            row();
            return;
        }
        b(0x2D416)--;                           // a pattern delay: this tick
    }                                           // runs as the others do
    uint32_t edi = kChan;
    for (uint32_t ch = b(0x2AD23); ch; ch--, edi += 0x3F) {
        sd(0x2D428, ch);
        b(edi + 0x3D)++;
        if (++b(edi + 0x3A) == 3) b(edi + 0x3A) = 0;
        tickEffect(edi);
    }
}

// 2DCEFh: a row read (the next pattern at its end or after a break or a
// jump) and its notes, samples, volumes and effects started.
void Music::row() {
    if (b(0x2D409) == b(0x2D414)) {             // the pattern's end (or a break)
        const uint8_t row = b(0x2D415);
        b(0x2D409) = row;
        sw(0x2D40A, row);
        uint32_t pos = ++b(0x2D40C);
        if ((uint8_t)pos == b(0x2AD22)) pos = 0, b(0x2D40C) = 0;
        b(0x2D40D) = (uint8_t)pos;
        const uint8_t pat = b(0x2AD25 + pos);
        b(0x2D40F) = pat;
        sd(0x2D410, pat * 0x140u);
    } else {
        b(0x2D409)++;
    }
    b(0x2D415) = 0;
    b(0x2D414) = 0x3F;
    uint32_t edi = kChan;
    for (uint32_t ch = b(0x2AD23); ch; ch--, edi += 0x3F) {
        sd(0x2D428, ch);
        sw(0x2D40A, b(0x2D409));
        const uint32_t esi = b(0x2D409) * 5u + d(edi) + b(0x2D40F) * 0x140u;
        sd(edi + 0x24, 0);
        b(edi + 0x28) = b(esi + 3);
        b(edi + 0x29) = b(esi + 4);
        bool noNote = b(esi) == 0;
        if (!noNote) {
            b(0x2D427) = 0;
            uint8_t smp = b(esi + 1);
            if (smp == 0) {
                smp = b(edi + 0x21);
                if (smp == 0) noNote = true;
                else b(0x2D427) = 1;
            }
            if (!noNote) {
                b(edi + 0x21) = smp;
                const uint32_t ebx = (uint8_t)(smp - 1) * 0x50u + kSmp;
                b(edi + 0x3B) = b(esi);
                sw(edi + 0x32, w(ebx + 0x44));
                const uint16_t period = (uint16_t)notePeriod(b(esi), w(ebx + 0x44));
                sw(edi + 0x30, period);
                if (b(esi + 3) == 3 || b(esi + 3) == 5) {
                    noNote = true;      // a slide to the note: no new one
                } else {
                    sw(edi + 0x2A, period);
                    b(edi + 0x11) = 0x0C;
                    b(edi + 0x10) = 7;
                    b(edi + 0x12) = 0;
                    sw(edi + 0x2C, 0);
                    sd(edi + 0x24, 0);
                    const uint32_t at = d(ebx + 0x40);
                    sd(edi + 4, at);
                    sd(edi + 0xC, at + d(ebx + 0x32));
                    if (b(ebx + 0x31) & 1) {
                        sd(edi + 8, d(ebx + 0x36) + at);
                        sd(edi + 0xC, d(ebx + 0x3A) + at);
                        b(edi + 0x12) |= 0x18;
                    }
                    if (b(0x2D427) != 1) {
                        b(edi + 0x13) = std::min<uint8_t>(b(ebx + 0x3E), 0x3F);
                        b(edi + 0x11) |= 1;
                    }
                    if (b(esi + 3) == 0x0E && (b(esi + 4) >> 4) == 0x0D) b(edi + 0x11) = 0;
                }
            }
        }
        if (noNote && b(esi + 1) != 0) {   // 2DE91h: a sample alone
            const uint8_t smp = (uint8_t)(b(esi + 1) - 1);
            b(edi + 0x21) = smp;
            const uint32_t ebx = smp * 0x50u + kSmp;
            b(edi + 0x13) = std::min<uint8_t>(b(ebx + 0x3E), 0x3F);
            b(edi + 0x11) |= 1;
        }
        if (b(esi + 2) != 0xFF) {       // a volume (Cxx)
            b(edi + 0x11) |= 1;
            b(edi + 0x13) = std::min<uint8_t>(b(esi + 2), 0x3F);
        }
        b(edi + 0x3D) = 0;
        rowEffect(edi);
    }
}

// ---------------------------------------------------------------- effects ---

// 2E5ADh (arpeggio): the channel's note ADD semitones up (an octave being
// 11 of them here), as a period for its sample's C-4 speed.
uint16_t Music::arpPeriod(uint32_t edi, uint8_t add) {
    uint32_t ecx = b(edi + 0x3B);
    uint32_t eax = (ecx & 0x0F) - 1;
    ecx >>= 4;
    eax += add;
    if (eax > 0x0B) {
        ecx++, eax -= 0x0B;
        if (eax > 0x0B) ecx++, eax -= 0x0B;
    }
    if (b(0x2D419) == 1 && ecx >= 6) ecx = 5, eax = 0x0B;
    eax = (uint32_t)(w(0x2ABA4 + eax * 2) * 0x20AB0u) >> (ecx & 31);
    const uint32_t c4 = w(edi + 0x32);
    return c4 ? (uint16_t)(eax / c4) : 0;
}

// 2E2ECh / 2E34Ch: the volume slide of effects 5 and 6 (up by the high
// nibble, down by the low one, at once).
void Music::volumeSlide(uint32_t edi, uint8_t ah) {
    const uint8_t up = ah >> 4;
    const uint8_t down = (uint8_t)((ah & 0x0F) - up);
    uint8_t al = (uint8_t)(b(edi + 0x13) - down);
    if (al & 0x80) al = 0;
    if (al >= 0x40) al = 0x3F;
    b(edi + 0x13) = al;
}

// 2E29Eh / 2E311h: the period slid by AX towards the note's (effects 3, 5;
// the latter floors an underflow at 0 rather than at the note).
void Music::slideTo(uint32_t edi, uint16_t ax, bool zeroFloor) {
    const uint16_t dx = w(edi + 0x30);
    uint16_t bx = w(edi + 0x2A);
    if (bx < dx) {
        bx = (uint16_t)(bx + ax);
        if (bx > dx) sw(edi + 0x2A, dx);
    }
    if (bx > dx) {
        const bool borrow = bx < ax;
        bx = (uint16_t)(bx - ax);
        if (borrow) bx = zeroFloor ? 0 : dx;
        if (bx < dx) bx = dx;
    }
    sw(edi + 0x2A, bx);
}

// 2DEEFh: the first tick of a row (table at 2DF66h; Exy at 2DFAEh).
void Music::rowEffect(uint32_t edi) {
    const uint8_t fx = b(edi + 0x28);
    uint8_t ah = b(edi + 0x29);
    if (fx == 0x0E) {
        const uint8_t sub = ah >> 4;
        ah &= 0x0F;
        switch (sub) {
        case 0x1: {                             // fine slide up
            uint16_t p = (uint16_t)(w(edi + 0x2A) - (ah << 2));
            if (p < w(0x2AB72)) p = w(0x2AB72);
            sw(edi + 0x2A, p);
            b(edi + 0x11) |= 4;
            break;
        }
        case 0x2: {                             // fine slide down
            uint16_t p = (uint16_t)(w(edi + 0x2A) + (ah << 2));
            if (p > w(0x2AB70)) p = w(0x2AB70);
            sw(edi + 0x2A, p);
            b(edi + 0x11) |= 4;
            break;
        }
        case 0x5: {                             // finetune
            const uint16_t p = (uint16_t)notePeriod(b(edi + 0x3B), w(0x2AB50 + ah * 2));
            sw(edi + 0x30, p);
            sw(edi + 0x2A, p);
            break;
        }
        case 0x6:                               // pattern loop
            if (ah == 0) {
                b(0x2D417) = (uint8_t)w(0x2D40A);
                break;
            }
            if (b(0x2D418) == 0) {
                b(0x2D418) = ah;
            } else if (--b(0x2D418) == 0) {
                break;
            }
            b(0x2D414) = (uint8_t)w(0x2D40A);
            b(0x2D415) = b(0x2D417);
            b(0x2D40C)--;
            break;
        case 0x8:                               // pan
            b(edi + 0x10) = ah;
            b(edi + 0x11) |= 2;
            break;
        case 0xA:                               // fine volume up
            b(edi + 0x13) = (uint8_t)(b(edi + 0x13) + ah);
            if (b(edi + 0x13) > 0x3F) b(edi + 0x13) = 0x3F;
            b(edi + 0x11) |= 1;
            break;
        case 0xB: {                             // fine volume down
            const uint8_t v = b(edi + 0x13);
            b(edi + 0x13) = v < ah ? 0 : (uint8_t)(v - ah);
            b(edi + 0x11) |= 1;
            break;
        }
        case 0xD:                               // note delay: nothing yet
            b(edi + 0x11) = 0;
            break;
        case 0xE:                               // pattern delay
            b(0x2D416) = ah;
            break;
        default:
            break;
        }
        return;
    }
    switch (fx) {
    case 0x0:                                   // arpeggio: its three periods
        if (ah == 0) break;
        b(edi + 0x3A) = 0;
        sw(edi + 0x34, w(edi + 0x2A));
        sw(edi + 0x36, arpPeriod(edi, (uint8_t)(b(edi + 0x29) >> 4)));
        sw(edi + 0x38, arpPeriod(edi, (uint8_t)(b(edi + 0x29) & 0x0F)));
        break;
    case 0x3:                                   // slide to the note: its speed
        if (ah == 0) ah = b(edi + 0x3C);
        b(edi + 0x3C) = ah;
        b(edi + 0x29) = ah;
        break;
    case 0x4: {                                 // vibrato: speed, depth kept
        uint8_t al = ah & 0x0F, hi = ah & 0xF0;
        if (al == 0) al = b(edi + 0x2E);
        if (hi == 0) hi = b(edi + 0x2F);
        b(edi + 0x2E) = al;
        b(edi + 0x2F) = hi;
        b(edi + 0x29) = al | hi;
        break;
    }
    case 0x9: {                                 // sample offset
        uint32_t eax = (uint32_t)ah << 8;
        const uint32_t len = d(edi + 0xC) - d(edi + 4);
        if (eax >= len) eax = len - 1;
        sd(edi + 0x24, eax);
        b(edi + 0x11) |= 8;
        break;
    }
    case 0xB:                                   // position jump
        b(0x2D414) = (uint8_t)w(0x2D40A);
        b(0x2D40C) = (uint8_t)(ah - 1);
        break;
    case 0xD: {                                 // pattern break (decimal row)
        if (ah >= 0x64) ah = 0x63;
        b(0x2D415) = (uint8_t)((ah & 0x0F) + (ah >> 4) * 2 + (ah >> 4) * 8);
        b(0x2D414) = (uint8_t)w(0x2D40A);
        break;
    }
    case 0xF:                                   // speed (< 20h) or BPM
        if (ah == 0) break;
        if (ah > 0x1F) {
            b(0x2AD1F) = ah;
            const uint32_t edx = (uint32_t)(ah * 2 / 5);
            sd(0x2A1A5, (uint32_t)(((uint64_t)edx << 32) / 0x411));
        } else {
            b(0x2AD1E) = ah;
            b(0x2D408) = ah;
        }
        break;
    default:
        break;
    }
}

// 2DF4Eh: the other ticks (table at 2DFEEh; Exy at 2E036h).
void Music::tickEffect(uint32_t edi) {
    const uint8_t fx = b(edi + 0x28);
    uint8_t ah = b(edi + 0x29);
    if (fx == 0x0E) {
        const uint8_t sub = ah >> 4;
        ah &= 0x0F;
        if (ah != b(edi + 0x3D)) return;
        switch (sub) {
        case 0x9: {                             // retrigger
            b(edi + 0x11) |= 0x0D;
            b(edi + 0x3D) = 0;
            const uint32_t ebx = (uint8_t)(b(edi + 0x21) - 1) * 0x50u + kSmp;
            const uint32_t at = d(ebx + 0x40);
            sd(edi + 4, at + d(edi + 0x24));
            sd(edi + 0xC, at + d(edi + 0x24) + d(ebx + 0x32));
            if (b(ebx + 0x31) & 1) {
                sd(edi + 8, d(ebx + 0x36) + at);
                sd(edi + 0xC, d(ebx + 0x3A) + at);
                b(edi + 0x12) |= 8;
            }
            b(edi + 0x13) = std::min<uint8_t>(b(ebx + 0x3E), 0x3F);
            break;
        }
        case 0xC:                               // note cut
            b(edi + 0x13) = 0;
            b(edi + 0x11) |= 1;
            break;
        case 0xD:                               // note delay: now
            b(edi + 0x11) |= 0x0F;
            break;
        default:
            break;
        }
        return;
    }
    switch (fx) {
    case 0x0:                                   // arpeggio
        if (ah == 0) break;
        sw(edi + 0x2A, w(edi + 0x34 + b(edi + 0x3A) * 2u));
        b(edi + 0x11) = 4;
        break;
    case 0x1: {                                 // slide up
        uint16_t bp = w(edi + 0x2A);
        if (!bp) break;
        bp = (uint16_t)(bp - (ah << 2));
        if ((int16_t)bp < (int16_t)w(0x2AB72)) bp = w(0x2AB72);
        sw(edi + 0x2A, bp);
        b(edi + 0x11) |= 4;
        break;
    }
    case 0x2: {                                 // slide down
        uint16_t bp = w(edi + 0x2A);
        if (!bp) break;
        bp = (uint16_t)(bp + (ah << 2));
        if (bp > w(0x2AB70)) bp = w(0x2AB70);
        sw(edi + 0x2A, bp);
        b(edi + 0x11) |= 4;
        break;
    }
    case 0x3:                                   // slide to the note
        slideTo(edi, (uint16_t)(ah << 2), false);
        b(edi + 0x11) |= 4;
        break;
    case 0x4:                                   // vibrato
    case 0x6: {                                 // vibrato + volume slide
        if (fx == 0x6) {
            volumeSlide(edi, ah);
            ah = b(edi + 0x2E) | b(edi + 0x2F);
        }
        const uint8_t depth = ah & 0x0F;
        const uint8_t pos = (uint8_t)(b(edi + 0x2C) + ((ah & 0xF0) >> 2));
        b(edi + 0x2C) = pos;
        // [bx-27E4h] with 16-bit addressing: DS:D81Ch, not the table at 2D81Ch
        uint16_t ax = (uint16_t)((b(0xD81Cu + ((pos >> 2) & 0x1F)) * depth) >> 7);
        if (!(pos & 0x80)) ax = (uint16_t)-ax;
        ax = (uint16_t)((ax << 4) + w(edi + 0x30));
        if (fx == 0x4 ? (int16_t)ax < (int16_t)w(0x2AB72) : ax < w(0x2AB72)) ax = w(0x2AB72);
        if (ax > w(0x2AB70)) ax = w(0x2AB70);
        sw(edi + 0x2A, ax);
        b(edi + 0x11) |= fx == 0x4 ? 4 : 5;
        break;
    }
    case 0x5:                                   // slide to the note + volume slide
        volumeSlide(edi, ah);
        slideTo(edi, (uint16_t)(b(edi + 0x3C) << 2), true);
        b(edi + 0x11) |= 5;
        break;
    case 0xA: {                                 // volume slide
        uint8_t up = ah >> 4, down = ah & 0x0F;
        if (up) down = (uint8_t)-up;
        uint8_t al = (uint8_t)(b(edi + 0x13) - down);
        if (al & 0x80) al = 0;
        if (al >= 0x40) al = 0x3F;
        b(edi + 0x13) = al;
        b(edi + 0x11) |= 1;
        break;
    }
    default:
        break;
    }
}

}  // namespace cyb
