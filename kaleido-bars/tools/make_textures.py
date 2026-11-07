"""Writes data/bars.png and data/carbon.png from the original firmware.

usage: python3 -I tools/make_textures.py lft-kaleidoscopico.bin data/

Both textures are LZ-packed in the firmware (decompressor at 0x10000430); the port draws them
from these PNGs. They are indexed images: the palette index is the 4-bit pixel value the PIO
program reads (0 transparent, 4/6/8/10/12/14 the layer's six colours). The palette holds the
colours the copper lists give those values, so the files look right in an image viewer; the port
uses only the indices and still takes the colours from the copper lists.
"""
import struct, sys
from PIL import Image

def lz(b, src):
    a0 = src; out = bytearray(); a7 = 1
    def get(a2):
        nonlocal a7, a0
        while True:
            t0 = a7 & 1; a7 >>= 1
            if a7 == 0:
                a7 = struct.unpack_from('<I', b, a0)[0]; a0 += 4
                t0 = a7 & 1; a7 = (a7 >> 1) | 0x80000000
            a2 = ((a2 << 1) | t0) & 0xffffffff
            if a2 < 0x80000000: return a2
    while True:
        if get(0x80000000) == 0:
            n = get(0xe0000000)
            if n == 0: n = get(0xff000000) + 8
            for _ in range(n): out.append(get(0xff000000))
            continue
        if get(0x80000000) == 0:
            off = get(0xff000000); ln = 2
        else:
            ln = get(0xff000000)
            if ln == 0: return bytes(out)
            ln += 2; off = get(0xfff80000)
        p = len(out) - (off + 1)
        for i in range(ln): out.append(out[p + i])

def save(raw, width, colours, path):
    h = len(raw) * 2 // width
    px = bytearray()
    for byte in raw: px += bytes((byte & 15, byte >> 4))   # low nibble is the left pixel
    im = Image.frombytes('P', (width, h), bytes(px))
    pal = [255, 0, 255] * 16                                 # unused values: magenta
    pal[0:3] = [0, 0, 0]
    for n, c in colours.items(): pal[3 * n:3 * n + 3] = [(c >> 8 & 15) * 17, (c >> 4 & 15) * 17, (c & 15) * 17]
    im.putpalette(pal)
    im.save(path, transparency=0, optimize=False)

b = open(sys.argv[1], 'rb').read()
out = sys.argv[2]
# layer 1 colours from part 17's copper list (0x10000548), layer 0's from the background's (0x100036f8)
save(lz(b, 0x14228), 1024, {4: 0x210, 6: 0x643, 8: 0x886, 10: 0xcb9, 12: 0xfdc, 14: 0xfff}, out + '/bars.png')
save(lz(b, 0x270c8), 512, {4: 0x445, 6: 0x334, 8: 0x111, 10: 0x000, 12: 0x333, 14: 0x222}, out + '/carbon.png')
