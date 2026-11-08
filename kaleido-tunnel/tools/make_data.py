#!/usr/bin/env python3
# Regenerates data/tunnel.png from the Kaleidoscopico firmware image.
#   tools/make_data.py lft-kaleidoscopico.bin data/
# Needs Pillow. The image is an indexed PNG whose pixel index is the 4-bit pixel value the
# chipset sees (0, 4, 8, 12). The palette is only for viewing: the colours come from the fades
# at run time.
import sys
from PIL import Image

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

main()
