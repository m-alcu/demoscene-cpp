#!/usr/bin/env python3
# Extracts the three tables the checker feedback scene of Megablast (Orange, 1996) uses from its
# DATA.DAT, which has no directory (the offsets were found by running the demo):
#   tools/extract_data.py DATA.DAT data/
#
#   warp.bin     2998299  320x200 little-endian uint16: for each screen pixel, the texel it
#                         samples, (v << 8) | u, before the frame's shift is added
#   checker.png  3126299  the ColoRIX (RIX3) texture, 256x256 indexed; the PNG palette holds the
#                         6-bit VGA values times 4 (exact: the port shifts them back)
#   shade.bin    3192613  64 rows x 256: row r maps a colour to a darker one (rows 0..22 used)
import struct, sys
from PIL import Image

d = open(sys.argv[1], 'rb').read()
out = sys.argv[2]
open(out + '/warp.bin', 'wb').write(d[2998299:2998299 + 320 * 200 * 2])
o = 3126299
assert d[o:o + 4] == b'RIX3' and struct.unpack_from('<HH', d, o + 4) == (256, 256)
img = Image.frombytes('P', (256, 256), d[o + 10 + 768:o + 10 + 768 + 65536])
img.putpalette(bytes((c & 63) * 4 for c in d[o + 10:o + 10 + 768]))
img.save(out + '/checker.png', optimize=True)
open(out + '/shade.bin', 'wb').write(d[3192613:3192613 + 16384])
