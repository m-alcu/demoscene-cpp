// The Watcom C runtime's pieces the program uses: the heap (_nmalloc,
// _nfree and their miniheap allocator), memset, the console.
//
// The heap: main's first malloc (310000h bytes, to see that there is
// enough memory) makes Watcom get a block from PMODE/W (DPMI 0501h: at
// 200000h under the harness) and lay a "miniheap" in it, which the free
// right after leaves as one free block. The port starts from that state
// (heapInit) and runs the allocator itself; the program never needs the
// heap to grow.
//
// The miniheap header (at 200008h): +0 length, +4/+8 the previous/next
// miniheap, +C the rover (where a search starts), +10 the largest free
// block before the rover, +14 the largest free block (-1: unknown), +18
// blocks in use, +1C free blocks, +20 the free list's sentinel (length 0,
// +24 prev, +28 next). A block: a size word (bit 0: in use); a free one has
// its prev and next after it.
#include "demo.h"

namespace lasse {

namespace {
constexpr uint32_t kHeapBeg = 0x28A9C;      // __nheapbeg: the first miniheap
constexpr uint32_t kRover = 0x28AA0;        // __MiniHeapRover
constexpr uint32_t kLargest = 0x28AA4;      // __LargestSizeB4MiniHeapRover
constexpr uint32_t kMhb = 0x200008;
}  // namespace

// What main's malloc(310000h) and free leave (from the harness).
void Demo::heapInit() {
    m_.w32(0x200000, 1);
    m_.w32(0x200004, 0);
    const uint32_t h = kMhb;
    m_.w32(h + 0x00, 0x310FF4);
    m_.w32(h + 0x04, 0);
    m_.w32(h + 0x08, 0);
    m_.w32(h + 0x0C, 0x200034);
    m_.w32(h + 0x10, 0);
    m_.w32(h + 0x14, 0xFFFFFFFFu);
    m_.w32(h + 0x18, 0);
    m_.w32(h + 0x1C, 1);
    m_.w32(h + 0x20, 0);
    m_.w32(h + 0x24, 0x200034);
    m_.w32(h + 0x28, 0x200034);
    m_.w32(0x200034, 0x310FC8);
    m_.w32(0x200038, 0x200028);
    m_.w32(0x20003C, 0x200028);
    m_.w32(0x200034 + 0x310FC8, 0xFFFFFFFFu);
    // what the malloc split off (a free block's header and links), merged back by the free
    m_.w32(0x510038, 0xFC4);
    m_.w32(0x51003C, 0x200028);
    m_.w32(0x510040, 0x200028);
    m_.w32(kHeapBeg, kMhb);
    m_.w32(kRover, kMhb);
    m_.w32(kLargest, 0);
}

// 1DB40h: __MemAllocator: N bytes from the miniheap at MHB, or 0.
uint32_t Demo::memAllocator(uint32_t n, uint32_t mhb) {
    if (n == 0) return 0;
    uint64_t sz = (uint64_t)n + 7;
    if (sz > 0xFFFFFFFFu) return 0;
    uint32_t eax = (uint32_t)sz & ~3u;
    if (eax < 0x0C) eax = 0x0C;
    if (eax > m_.r32(mhb + 0x14)) return 0;
    uint32_t esi = m_.r32(mhb + 0x0C), edi = m_.r32(mhb + 0x10);
    if (!(eax > edi)) esi = m_.r32(mhb + 0x28), edi = 0;
    uint32_t edx;
    for (;;) {
        edx = m_.r32(esi);
        if (eax <= edx) break;
        if (edx > edi) edi = edx;                   // the largest seen
        esi = m_.r32(esi + 8);
        if (esi == mhb + 0x20) {
            m_.w32(mhb + 0x14, edi);
            return 0;
        }
    }
    edx -= eax;
    m_.w32(mhb + 0x10, edi);
    m_.w32(mhb + 0x18, m_.r32(mhb + 0x18) + 1);
    const uint32_t next = m_.r32(esi + 8);
    if (edx >= 0x0C) {                              // split: the rest stays free
        const uint32_t rest = esi + eax;
        m_.w32(mhb + 0x0C, rest);
        m_.w32(rest, edx);
        m_.w32(esi, eax);
        const uint32_t prev = m_.r32(esi + 4);
        m_.w32(rest + 4, prev);
        m_.w32(rest + 8, next);
        m_.w32(prev + 8, rest);
        m_.w32(next + 4, rest);
    } else {                                        // the whole block
        m_.w32(mhb + 0x1C, m_.r32(mhb + 0x1C) - 1);
        const uint32_t prev = m_.r32(esi + 4);
        m_.w32(prev + 8, next);
        m_.w32(next + 4, prev);
        m_.w32(mhb + 0x0C, prev);
    }
    m_.w32(esi, m_.r32(esi) | 1);
    return esi + 4;
}

// 1DBE8h: __MemFree: the block at P back to the miniheap at MHB, merged
// with free neighbours, linked in address order.
void Demo::memFree(uint32_t p, uint32_t mhb) {
    if (!p) return;
    uint32_t esi = p - 4;
    uint32_t eax = m_.r32(esi);
    if (!(eax & 1)) return;
    eax &= ~1u;
    uint32_t edi = esi + eax;                       // the block after
    if (!(m_.r32(edi) & 1)) {                       // free: absorb it, go on from its successor
        if (edi == m_.r32(mhb + 0x0C)) m_.w32(mhb + 0x0C, esi);
        eax += m_.r32(edi);
        m_.w32(esi, eax);
        const uint32_t b = m_.r32(edi + 4), d = m_.r32(edi + 8);
        m_.w32(b + 8, d);
        m_.w32(d + 4, b);
        m_.w32(mhb + 0x1C, m_.r32(mhb + 0x1C) - 1);
        edi = d;
    } else {
        m_.w32(esi, eax);
        // EDI: the first free block after ESI, found from the rover...
        edi = m_.r32(mhb + 0x0C);
        bool search = true;
        if (esi < edi) {
            if (esi > m_.r32(edi + 4)) search = false;
            else if (esi < (edi = m_.r32(mhb + 0x28))) search = false;
        } else {
            if (esi < (edi = m_.r32(edi + 8))) search = false;
            else if (edi = mhb + 0x20, esi > m_.r32(mhb + 0x24)) search = false;
        }
        if (search) {
            // 1DC50h: ...by walking the blocks after ESI, if that looks quicker
            const uint32_t na = m_.r32(mhb + 0x18), nf = m_.r32(mhb + 0x1C);
            uint32_t q = na / (nf + 1);
            bool found = false;
            if (q < nf) {
                q += q;
                if (!(na - nf > nf)) q = 0;
                for (uint32_t w = esi + m_.r32(esi);;) {
                    const uint32_t sz = m_.r32(w);
                    if (!(sz & 1)) {
                        edi = w, found = true;
                        break;
                    }
                    if (sz == 0xFFFFFFFFu) break;
                    w += sz & ~1u;
                    if (--q == 0) break;
                }
            }
            if (!found) {                           // 1DC85h: or along the free list
                edi = m_.r32(mhb + 0x0C);
                if (esi < edi) edi = m_.r32(mhb + 0x28);
                while (!(esi < edi)) edi = m_.r32(edi + 8);
            }
        }
    }
    // 1DCA6h: merge with the free block before, or link in between
    const uint32_t after = edi, before = m_.r32(edi + 4);
    uint32_t ecx = m_.r32(esi);
    if (before + m_.r32(before) == esi) {
        ecx += m_.r32(before);
        m_.w32(before, ecx);
        if (esi == m_.r32(mhb + 0x0C)) m_.w32(mhb + 0x0C, before);
        esi = before;
    } else {
        m_.w32(mhb + 0x1C, m_.r32(mhb + 0x1C) + 1);
        m_.w32(esi + 8, after);
        m_.w32(esi + 4, before);
        m_.w32(before + 8, esi);
        m_.w32(after + 4, esi);
    }
    m_.w32(mhb + 0x18, m_.r32(mhb + 0x18) - 1);
    if (esi < m_.r32(mhb + 0x0C) && ecx > m_.r32(mhb + 0x10)) m_.w32(mhb + 0x10, ecx);
    if (ecx > m_.r32(mhb + 0x14)) m_.w32(mhb + 0x14, ecx);
}

// 1DA5Ch: _nmalloc (one miniheap; it never has to grow)
uint32_t Demo::malloc(uint32_t n) {
    if (n == 0 || n > 0xFFFFFFD4u) return 0;
    uint32_t want = (n + 3) & ~3u;
    if (want < 0x0C) want = 0x0C;
    uint32_t mhb;
    if (want <= m_.r32(kLargest)) {
        m_.w32(kLargest, 0);
        mhb = m_.r32(kHeapBeg);
    } else {
        mhb = m_.r32(kRover);
        if (!mhb) {
            m_.w32(kLargest, 0);
            mhb = m_.r32(kHeapBeg);
        }
    }
    for (; mhb; mhb = m_.r32(mhb + 8)) {
        m_.w32(kRover, mhb);
        const uint32_t p = memAllocator(n, mhb);
        if (p) {
            m_.w8(0x2B521, 0);
            return p;
        }
        if (m_.r32(mhb + 0x14) > m_.r32(kLargest)) m_.w32(kLargest, m_.r32(mhb + 0x14));
    }
    return 0;                                       // (the original would grow the heap)
}

// 1D853h: _nfree (one miniheap)
void Demo::free(uint32_t p) {
    if (!p) return;
    uint32_t mhb = m_.r32(kHeapBeg);
    for (uint32_t next; (next = m_.r32(mhb + 8)) != 0; mhb = next)
        if (!(mhb > p) && p < next) break;
    memFree(p, mhb);
    if (mhb != m_.r32(kRover) && m_.r32(mhb + 0x14) > m_.r32(kLargest)) m_.w32(kLargest, m_.r32(mhb + 0x14));
    m_.w8(0x2B521, 0);
}

void Demo::memset(uint32_t p, uint8_t v, uint32_t n) {
    for (; n; n--) m_.w8(p++, v);
}

void Demo::print(uint32_t s) {
    for (uint8_t c; (c = m_.r8(s)) != 0; s++) console.push_back((char)c);
}

}  // namespace lasse
