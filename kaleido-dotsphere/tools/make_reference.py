#!/usr/bin/env python3
# Writes tests/data/frames.txt from kemu's PPM dumps (rea/kaleido-analisis), run at 1x speed:
#   kemu lft-kaleidoscopico.bin RUNDIR --frames 13730 --speed 1 --fast 12860 --dump 12860:13730
#   tools/make_reference.py RUNDIR > tests/data/frames.txt
# Port frame i is global frame 12868 + i; the scene has 848 frames.
import sys, zlib
run = sys.argv[1]
for i in range(848):
    data = open('%s/f%05d.ppm' % (run, 12868 + i), 'rb').read()
    pix = data[data.index(b'255\n') + 4:]
    assert len(pix) == 512 * 768 * 3
    print(i, '%08x' % zlib.crc32(pix))
