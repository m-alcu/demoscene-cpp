#!/usr/bin/env python3
# Writes tests/data/frames.txt from kemu's PPM dumps (rea/kaleido-analisis):
#   tools/make_reference.py RUNDIR > tests/data/frames.txt
# Port frame i is global frame 14761 + i; the scene has 887 frames.
import sys, zlib
run = sys.argv[1]
for i in range(887):
    data = open('%s/f%05d.ppm' % (run, 14761 + i), 'rb').read()
    pix = data[data.index(b'255\n') + 4:]
    assert len(pix) == 512 * 768 * 3
    print(i, '%08x' % zlib.crc32(pix))
