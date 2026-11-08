#!/usr/bin/env python3
# Extracts the marble checkerboard texture from Megablast's DATA.DAT into data/checker.png.
#   tools/extract_texture.py DATA.DAT data/
# Needs Pillow. The texture is a ColoRIX (RIX3) image at offset 3126299: "RIX3", width and height
# (16-bit), palette type 0xAF, storage type 0, a 768-byte palette in 6-bit VGA values, then
# 256x256 pixels. The PNG keeps the 256-colour palette (scaled to 8 bits).
import struct, sys
from PIL import Image

d = open(sys.argv[1], 'rb').read()
o = 3126299
assert d[o:o + 4] == b'RIX3'
w, h = struct.unpack_from('<HH', d, o + 4)
assert (w, h) == (256, 256)
pal = d[o + 10:o + 10 + 768]
px = d[o + 10 + 768:o + 10 + 768 + w * h]
img = Image.frombytes('P', (w, h), px)
img.putpalette(bytes((c & 63) * 255 // 63 for c in pal))
img.save(sys.argv[2] + '/checker.png', optimize=True)
