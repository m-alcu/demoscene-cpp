#!/usr/bin/env python3
# Regenerates data/normals.png and data/stars.bin from the Kaleidoscopico firmware image.
#   tools/make_data.py lft-kaleidoscopico.bin data/
# Needs Pillow.
#
# normals.png: 256x192 RGB. Each pixel is one byte of the snowflake's normal map: red = high
# nibble x 17 (the row direction), green = low nibble x 17 (the column direction). Black (byte
# 0) is outside the snowflake. On screen every pixel is 2 pixels wide and 4 lines tall.
#
# stars.bin: the 1760 star words, little-endian uint32, in the order they appear (one per frame).
# Word w puts value (w >> 17) & 14 at row o >> 8, column 2*(o & 0xfc) + (w & 7) of the 512x384
# star field, where o = (w >> 1) & 0x1fffc.
import struct, sys
from PIL import Image

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

def main():
    fw = open(sys.argv[1], 'rb').read()
    out = sys.argv[2]
    n = lz(fw, 0x153b0)            # 0x100153b0 -> 0x20010000
    assert len(n) >= 256 * 192, len(n)
    img = Image.new('RGB', (256, 192))
    img.putdata([((b >> 4) * 17, (b & 15) * 17, 0) for b in n[:256 * 192]])
    img.save(out + '/normals.png', optimize=True)
    open(out + '/stars.bin', 'wb').write(fw[0x2b234:0x2b234 + 4 * 1760])   # 0x1002b234

main()
