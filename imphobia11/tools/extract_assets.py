#!/usr/bin/env python3
"""Prepares data/ for the port from an Imphobia #11 directory:

  data/imphob11.img   the load image of IMPHOB11.EXE (the file after its header)
  data/NFO11.DAT      the articles, fonts, sprites, pictures
  data/DATA.001..004  the modules for F1-F4, and NFODAT.DAT for F5

IMPHOB11.EXE is not compressed: the image is the file after its MZ header,
with its segment fix-ups as stored (the port only reads data from it).

usage: extract_assets.py <IMPHOB11 directory> [<data directory>]
"""

import hashlib
import os
import shutil
import struct
import sys

IMAGE_SIZE = 70935


def main():
    if len(sys.argv) < 2:
        print(__doc__)
        sys.exit(1)
    src = sys.argv[1]
    dst = sys.argv[2] if len(sys.argv) > 2 else os.path.join(os.path.dirname(__file__), '..', 'data')
    os.makedirs(dst, exist_ok=True)

    def find(name):
        for f in os.listdir(src):
            if f.upper() == name:
                return os.path.join(src, f)
        raise SystemExit('%s not found in %s' % (name, src))

    exe = open(find('IMPHOB11.EXE'), 'rb').read()
    hdr = struct.unpack_from('<H', exe, 8)[0] * 16
    img = exe[hdr:]
    if len(img) != IMAGE_SIZE or img[0x307C:0x3085] != b'nfo11.DAT':
        raise SystemExit('unexpected IMPHOB11.EXE: not Imphobia #11 as released?')
    open(os.path.join(dst, 'imphob11.img'), 'wb').write(img)
    print('imphob11.img', len(img), hashlib.sha1(img).hexdigest())
    for name in ['NFO11.DAT', 'DATA.001', 'DATA.002', 'DATA.003', 'DATA.004', 'NFODAT.DAT']:
        shutil.copyfile(find(name), os.path.join(dst, name))
        print(name)


if __name__ == '__main__':
    main()
