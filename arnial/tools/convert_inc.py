#!/usr/bin/env python3
"""Converts the original's assembler data to the port's data files.

  convert_inc.py SRC_DIR OUT_DIR

SRC_DIR holds ARNIAL1.INC and ARNIAL2.INC (the 256x256 bitmap, top and
bottom 256x128 halves, as db lines) and ARNIAL3.INC (PAL: 768 bytes, 8-bit
values that the program shifts right by 2 for the DAC).

Writes OUT_DIR/arnial.png (256x256, 8-bit indexed, with PAL as its palette).
SINCOS.INC (Sine: 256+64 words, Cosine = Sine + 64) is not converted: the
port computes it as round(256 sin(2 pi i / 256)), and this script only checks
that the formula gives every entry.
"""
import math
import os
import re
import struct
import sys
import zlib


def values(path):
    out = []
    for line in open(path, encoding='latin-1'):
        m = re.search(r'\b(db|dw)\b([^;]*)', line, re.I)
        if m:
            out += [int(v) for v in m.group(2).split(',') if v.strip()]
    return out


def png(path, w, h, pixels, palette):
    def chunk(t, d):
        return struct.pack('>I', len(d)) + t + d + struct.pack('>I', zlib.crc32(t + d))
    raw = b''.join(b'\0' + pixels[y * w:(y + 1) * w] for y in range(h))
    with open(path, 'wb') as f:
        f.write(b'\x89PNG\r\n\x1a\n')
        f.write(chunk(b'IHDR', struct.pack('>IIBBBBB', w, h, 8, 3, 0, 0, 0)))
        f.write(chunk(b'PLTE', bytes(palette)))
        f.write(chunk(b'IDAT', zlib.compress(raw, 9)))
        f.write(chunk(b'IEND', b''))


def main():
    src, out = sys.argv[1], sys.argv[2]
    img = values(os.path.join(src, 'ARNIAL1.INC')) + values(os.path.join(src, 'ARNIAL2.INC'))
    pal = values(os.path.join(src, 'ARNIAL3.INC'))
    sincos = values(os.path.join(src, 'SINCOS.INC'))
    assert len(img) == 65536 and len(pal) == 768 and len(sincos) == 320
    assert sincos == [round(256 * math.sin(2 * math.pi * i / 256)) for i in range(320)]
    os.makedirs(out, exist_ok=True)
    png(os.path.join(out, 'arnial.png'), 256, 256, bytes(img), pal)


if __name__ == '__main__':
    main()
