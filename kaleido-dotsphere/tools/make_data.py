#!/usr/bin/env python3
# Regenerates data/points.bin and data/squash.bin from the Kaleidoscopico firmware image.
#   tools/make_data.py lft-kaleidoscopico.bin data/
#
# points.bin: 1374 points on a sphere of radius 32767, int16 x, y, z each, little-endian
#             (flash 0x100aa020; the part draws at most the first 1373).
# squash.bin: 1025 int16, the vertical squash curve for screen offsets -512..512
#             (flash 0x100ac054).
import sys

fw = open(sys.argv[1], 'rb').read()
out = sys.argv[2]
open(out + '/points.bin', 'wb').write(fw[0xaa020:0xaa020 + 6 * 1374])
open(out + '/squash.bin', 'wb').write(fw[0xac054:0xac054 + 2 * 1025])
