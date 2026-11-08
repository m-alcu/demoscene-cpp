#!/usr/bin/env python3
# Writes tests/data/frames.txt from kemu's PPM dumps (rea/kaleido-analisis):
#   kemu lft-kaleidoscopico.bin RUNDIR --frames 10000 --speed 64 --fast 9300 --dump 9300:10000
#   tools/make_reference.py RUNDIR > tests/data/frames.txt
# Port frame i is global frame 9309 + i; the scene has 686 frames.
import sys, zlib
run = sys.argv[1]
for i in range(686):
    data = open('%s/f%05d.ppm' % (run, 9309 + i), 'rb').read()
    pix = data[data.index(b'255\n') + 4:]
    assert len(pix) == 512 * 768 * 3
    print(i, '%08x' % zlib.crc32(pix))
