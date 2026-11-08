#!/usr/bin/env python3
# Regenerates data/tunnel.png and data/balloon.png from the Kaleidoscopico firmware image.
#   tools/make_data.py lft-kaleidoscopico.bin data/
# Needs Pillow. Both images are indexed PNGs whose pixel index is the 4-bit pixel value the
# chipset sees (tunnel: 0, 4, 8, 12; balloon: 0, 4, 6, 8, 12, 14). The palette is only for
# viewing: the colours come from the copper lists at run time.
import struct, sys
from PIL import Image

FLASH = 0x10000000

def lz(b, src):
    """The demo's LZ decompressor (0x10000430)."""
    a0 = src; out = bytearray(); a7 = 1
    def get(a2):
        nonlocal a7, a0
        while True:
            t0 = a7 & 1; a7 >>= 1
            if a7 == 0:
                a7 = struct.unpack_from('<I', b, a0)[0]; a0 += 4; t0 = a7 & 1; a7 = (a7 >> 1) | 0x80000000
            a2 = ((a2 << 1) | t0) & 0xffffffff
            if a2 < 0x80000000: return a2
    while True:
        if get(0x80000000) == 0:
            n = get(0xe0000000)
            if n == 0: n = get(0xff000000) + 8
            for _ in range(n): out.append(get(0xff000000))
            continue
        if get(0x80000000) == 0: off = get(0xff000000); ln = 2
        else:
            ln = get(0xff000000)
            if ln == 0: return out
            ln += 2; off = get(0xfff80000)
        p = len(out) - (off + 1)
        for i in range(ln): out.append(out[p + i])

def indexed(w, h, pix, pal):
    img = Image.new('P', (w, h))
    flat = []
    for c in pal: flat += [(c >> 8 & 15) * 17, (c >> 4 & 15) * 17, (c & 15) * 17]
    img.putpalette(flat + [0] * (768 - len(flat)))
    img.putdata(pix)
    return img

def main():
    fw = open(sys.argv[1], 'rb').read()
    out = sys.argv[2]
    # Tunnel: 2 bits per pixel, 192 bytes per row, LSB first, at 0x14033354 (uncached alias of
    # flash offset 0x33354). 8 frames of 288 rows. (The streaming also reads 96 rows past each
    # frame into buffer rows 288-383, which are never shown, so they are left out.)
    base, w, h = 0x33354, 768, 2304
    pix = [((fw[base + y * 192 + x // 4] >> (2 * (x & 3))) & 3) * 4 for y in range(h) for x in range(w)]
    pal = [0] * 16
    for i, c in zip((4, 8, 12), (0x112, 0x33b, 0x44c)): pal[i] = c
    indexed(w, h, pix, pal).save(out + '/tunnel.png', optimize=True)
    # Balloon: LZ-compressed 4 bits per pixel, 512 bytes per row, low nibble first.
    b = lz(fw, 0x100a0e04 - FLASH)
    assert len(b) == 512 * 192
    pix = [(b[y * 512 + x // 2] >> (4 * (x & 1))) & 15 for y in range(192) for x in range(1024)]
    pal = [0] * 16
    for i, c in zip((4, 6, 8, 10, 12, 14), (0xd33, 0xf55, 0xddd, 0xd62, 0x420, 0x200)): pal[i] = c
    indexed(1024, 192, pix, pal).save(out + '/balloon.png', optimize=True)
    # Row-width table of the balloon (326 bytes) for the source
    t = fw[0xa16c0:0xa1806]
    print('balloon profile (%d bytes):' % len(t))
    for i in range(0, len(t), 20): print('    ' + ', '.join(str(v) for v in t[i:i + 20]) + ',')

main()
