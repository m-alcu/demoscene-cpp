#!/usr/bin/env python3
"""Prepares data/ for the port from an Imphobia #12 directory:

  data/imphob12.img   the load image of IMPHOB12.EXE, unpacked (PKLITE)
  data/NFO12.DAT      the articles, fonts, sprites, pictures
  data/DATA.001..004  the four modules (F1-F4)

IMPHOB12.EXE is PKLITE-compressed. The stub is run under Unicorn (pip
install unicorn) until it jumps into the unpacked program, and the load
image is taken from memory. Relocations are not needed: the port only reads
the image's data, at fixed offsets.

usage: extract_assets.py <IMPHOB12 directory> [<data directory>]
"""

import hashlib
import os
import shutil
import struct
import sys

# Of the image as unpacked here, for a sanity check.
IMAGE_SIZE = 76526


def unpack_at(exe, psp):
    from unicorn import Uc, UC_ARCH_X86, UC_MODE_16, UC_HOOK_INTR, UC_HOOK_CODE
    from unicorn.x86_const import (UC_X86_REG_AX, UC_X86_REG_CS, UC_X86_REG_DS, UC_X86_REG_ES,
                                   UC_X86_REG_IP, UC_X86_REG_SP, UC_X86_REG_SS)
    load = psp + 0x10
    cblp, cp, crlc, hdr, mn, mx, ss, sp, ck, ip, cs, lr = struct.unpack_from('<12H', exe, 2)
    size = (cp - 1) * 512 + (cblp or 512) - hdr * 16
    code = bytearray(exe[hdr * 16:hdr * 16 + size])
    for i in range(crlc):
        off, seg = struct.unpack_from('<HH', exe, lr + 4 * i)
        a = seg * 16 + off
        struct.pack_into('<H', code, a, (struct.unpack_from('<H', code, a)[0] + load) & 0xFFFF)
    u = Uc(UC_ARCH_X86, UC_MODE_16)
    u.mem_map(0, 0x110000)
    u.mem_write(load * 16, bytes(code))
    u.mem_write(psp * 16, b'\xcd\x20' + struct.pack('<H', 0xA000))
    cs0 = (load + cs) & 0xFFFF
    u.reg_write(UC_X86_REG_CS, cs0)
    u.reg_write(UC_X86_REG_SS, (load + ss) & 0xFFFF)
    u.reg_write(UC_X86_REG_SP, sp)
    u.reg_write(UC_X86_REG_DS, psp)
    u.reg_write(UC_X86_REG_ES, psp)
    segs = []

    # The stub runs at the entry, moves itself up, unpacks, and jumps to the
    # program: the third code segment seen.
    def on_code(u, addr, sz, ud):
        c = u.reg_read(UC_X86_REG_CS)
        if not segs or segs[-1] != c:
            segs.append(c)
            if len(segs) == 3:
                u.emu_stop()

    def on_int(u, n, ud):
        ah = u.reg_read(UC_X86_REG_AX) >> 8
        if n == 0x21 and ah == 0x4A:
            return
        if n == 0x21 and ah == 0x30:
            u.reg_write(UC_X86_REG_AX, 5)
            return
        raise RuntimeError('unexpected int %02xh ah=%02xh in the PKLITE stub' % (n, ah))

    u.hook_add(UC_HOOK_CODE, on_code)
    u.hook_add(UC_HOOK_INTR, on_int)
    u.emu_start(cs0 * 16 + ip, 0, 0, 0)
    if len(segs) != 3 or segs[2] != load:
        raise RuntimeError('the stub did not jump to the program as expected')
    return bytes(u.mem_read(load * 16, IMAGE_SIZE)), load


def unpack(exe):
    """The image with its segment fix-ups undone: loaded at two places, the
    words that differ by the distance are the relocated ones."""
    a, la = unpack_at(exe, 0x1000)
    b, lb = unpack_at(exe, 0x2000)
    img = bytearray(a)
    for i in range(len(a) - 1):
        wa = struct.unpack_from('<H', a, i)[0]
        wb = struct.unpack_from('<H', b, i)[0]
        if wa != wb and (wb - wa) & 0xFFFF == lb - la:
            w = struct.unpack_from('<H', img, i)[0]
            struct.pack_into('<H', img, i, (w - la) & 0xFFFF)
    return bytes(img)


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

    exe = open(find('IMPHOB12.EXE'), 'rb').read()
    img = unpack(exe)
    # the directory of NFO12.DAT must be where the program looks for it
    if img[0x30E6:0x30EF] != b'NFO12.DAT':
        raise SystemExit('unexpected image: not Imphobia #12 as released?')
    open(os.path.join(dst, 'imphob12.img'), 'wb').write(img)
    print('imphob12.img', len(img), hashlib.sha1(img).hexdigest())
    for name in ['NFO12.DAT', 'DATA.001', 'DATA.002', 'DATA.003', 'DATA.004']:
        shutil.copyfile(find(name), os.path.join(dst, name))
        print(name)


if __name__ == '__main__':
    main()
