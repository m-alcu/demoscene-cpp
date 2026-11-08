#!/usr/bin/env python3
"""Converts the part's data from Future Crew's source release to the port's PNGs.

  convert.py WATER_DIR OUT_DIR

WATER_DIR is WATER/ of github.com/mtuomi/SecondReality. It holds BKG.CLX, MIEKKA.SCI and
WAT1.DAT-WAT3.DAT. These are byte for byte the data that was linked into the part (omf.py pulls
it out of the .OBJ files to check).

Writes to OUT_DIR:
  palette.png      16x16 swatches of the 256 colours, for looking at (not loaded)
  background.png   320x200 indexed: the raytraced picture (BKG.CLX, colours 0-191)
  sword.png        400x35 indexed: the sword (MIEKKA.SCI, colours 192-255; the demo uses
                   rows 0-33)
  wat1.png ...     320x200 RGB: the position tables drawn as the map they come from.
  wat3.png         A pixel listed in table n for strip pixel (column c, row r) is
                   R = c + 1 (1-158), G = 7 * (r + 1) (7-238), B = 0; black = not listed.

The indexed PNGs share the palette that the demo loads, MIEKKA.SCI's. BKG.CLX has its own
palette, which differs only in colours 192-255 (which the background doesn't use) and is
never loaded. The palette is stored as 8-bit values v << 2 | v >> 4, so v = value >> 2.

The table files list, for each strip pixel, its screen offsets. Within a table no screen
offset appears twice, so the map image holds the same information and the order of the
offsets does not change what is drawn. The script checks this by rebuilding the tables from
the images and comparing them, set by set, with the .DAT files.
"""
import os
import struct
import sys
import zlib

W, H, BW, BH = 320, 200, 158, 34


def png(path, w, h, raw_rows, color_type, palette=None):
    def chunk(t, d):
        return struct.pack('>I', len(d)) + t + d + struct.pack('>I', zlib.crc32(t + d))
    raw = b''.join(b'\0' + r for r in raw_rows)
    with open(path, 'wb') as f:
        f.write(b'\x89PNG\r\n\x1a\n')
        f.write(chunk(b'IHDR', struct.pack('>IIBBBBB', w, h, 8, color_type, 0, 0, 0)))
        if palette:
            f.write(chunk(b'PLTE', bytes(palette)))
        f.write(chunk(b'IDAT', zlib.compress(raw, 9)))
        f.write(chunk(b'IEND', b''))


def table(path):
    """[(strip pixel, [screen offsets])] in file order"""
    d = open(path, 'rb').read()
    words = struct.unpack('<%dH' % (len(d) // 2), d)
    p, out = 0, []
    for i in range(BW * BH):
        c = words[p]
        out.append(list(words[p + 1:p + 1 + c]))
        p += 1 + c
    assert p * 2 == len(d), path
    return out


def main():
    src, out = sys.argv[1], sys.argv[2]
    os.makedirs(out, exist_ok=True)
    bkg = open(os.path.join(src, 'BKG.CLX'), 'rb').read()
    sword = open(os.path.join(src, 'MIEKKA.SCI'), 'rb').read()
    assert bkg[:4] == sword[:4] == b'RIX3' and len(bkg) == 778 + W * H and len(sword) == 778 + 400 * 35
    pal6 = sword[10:778]
    pal8 = bytes((v << 2 | v >> 4) for v in pal6)
    assert all(v < 64 for v in pal6)

    pix = bkg[778:]
    png(os.path.join(out, 'background.png'), W, H, [pix[y * W:(y + 1) * W] for y in range(H)], 3, pal8)
    sp = sword[778:]
    png(os.path.join(out, 'sword.png'), 400, 35, [sp[y * 400:(y + 1) * 400] for y in range(35)], 3, pal8)
    sw = [bytes(k for k in range(y * 16, y * 16 + 16) for _ in range(12)) for y in range(16) for _ in range(12)]
    png(os.path.join(out, 'palette.png'), 192, 192, sw, 3, pal8)

    for n in (1, 2, 3):
        tab = table(os.path.join(src, 'WAT%d.DAT' % n))
        img = bytearray(W * H * 3)
        seen = set()
        for i, offs in enumerate(tab):
            c, r = i % BW, i // BW
            for o in offs:
                assert o < W * H and o not in seen, 'offset listed twice'
                seen.add(o)
                img[o * 3:o * 3 + 3] = bytes((c + 1, 7 * (r + 1), 0))
        png(os.path.join(out, 'wat%d.png' % n), W, H, [bytes(img[y * W * 3:(y + 1) * W * 3]) for y in range(H)], 2)
        # check: rebuild the table from the map, as the port does
        back = [set() for _ in range(BW * BH)]
        for o in range(W * H):
            R, G = img[o * 3], img[o * 3 + 1]
            if R or G:
                assert 1 <= R <= BW and G % 7 == 0 and 1 <= G // 7 <= BH
                back[(G // 7 - 1) * BW + R - 1].add(o)
        assert back == [set(o) for o in tab]
        print('wat%d.png: %d positions' % (n, len(seen)))
    print('done')


if __name__ == '__main__':
    main()
