#!/usr/bin/env python3
"""Unpacks CYBOMAN2.EXE into the image the port runs on.

    python3 -I tools/extract_assets.py <CYBOMAN2.EXE> <project dir>

The EXE is packed (Rob Northen's RNC, a self-unpacking stub). The stub is
run under Unicorn (pip install unicorn) twice, loaded at two segments,
until it jumps to the program; the words that differ between the two
images by the load distance are the relocations, put back to load segment
0. Writes data/cyboman2.img (the load image, its entry at 0000:03D7h: Tran's
PMODE 3.0, the 32-bit main with the music, the 16-bit intro at 2FC9h).
"""

import hashlib
import struct
import sys
from pathlib import Path

from unicorn import Uc, UC_ARCH_X86, UC_MODE_16, UC_HOOK_CODE, UC_HOOK_INTR
from unicorn.x86_const import (UC_X86_REG_CS, UC_X86_REG_IP, UC_X86_REG_SS, UC_X86_REG_SP,
                               UC_X86_REG_DS, UC_X86_REG_ES)

SHA256 = '5b5ca3ffd4271b7fe6604b0220173601ec9a2b371c0f219e81b891c9129184e1'


def unpack(exe, psp):
    cblp, cp, crlc, hdr, mn, mx, ss, sp, ck, ip, cs, lr = struct.unpack_from('<12H', exe, 2)
    size = (cp - 1) * 512 + (cblp or 512) - hdr * 16
    load = psp + 0x10
    u = Uc(UC_ARCH_X86, UC_MODE_16)
    u.mem_map(0, 0x110000)
    u.mem_write(load * 16, exe[hdr * 16:hdr * 16 + size])
    u.mem_write(psp * 16, b'\xcd\x20' + struct.pack('<H', 0xA000))
    u.reg_write(UC_X86_REG_CS, load + cs)
    u.reg_write(UC_X86_REG_IP, ip)
    u.reg_write(UC_X86_REG_SS, load + ss)
    u.reg_write(UC_X86_REG_SP, sp)
    u.reg_write(UC_X86_REG_DS, psp)
    u.reg_write(UC_X86_REG_ES, psp)
    entry = []

    def on_code(u, addr, sz, data):
        if u.reg_read(UC_X86_REG_CS) == load and not entry:
            entry.append(u.reg_read(UC_X86_REG_IP))
            u.emu_stop()

    def on_int(u, n, data):
        raise RuntimeError('the stub called int %02xh' % n)

    u.hook_add(UC_HOOK_CODE, on_code)
    u.hook_add(UC_HOOK_INTR, on_int)
    u.emu_start((load + cs) * 16 + ip, 0, 0, 100000000)
    if not entry:
        raise RuntimeError('the stub did not jump to the program')
    end = (load + mn + (size >> 4)) * 16
    return bytes(u.mem_read(load * 16, end - load * 16)), load, entry[0]


def main():
    if len(sys.argv) != 3:
        sys.exit(__doc__)
    exe = Path(sys.argv[1]).read_bytes()
    root = Path(sys.argv[2])
    a, la, ip = unpack(exe, 0x1000)
    b, lb, _ = unpack(exe, 0x2000)
    img = bytearray(a)
    relocs = 0
    for i in range(len(a) - 1):
        wa, wb = struct.unpack_from('<H', a, i)[0], struct.unpack_from('<H', b, i)[0]
        if wa != wb and (wb - wa) & 0xFFFF == lb - la:
            struct.pack_into('<H', img, i, (wa - la) & 0xFFFF)
            relocs += 1
    n = len(img)
    while n and img[n - 1] == 0:
        n -= 1
    out = root / 'data' / 'cyboman2.img'
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(img[:n])
    digest = hashlib.sha256(img[:n]).hexdigest()
    print('%s: %d bytes, entry %04xh, %d relocations' % (out, n, ip, relocs))
    if digest != SHA256:
        print('warning: sha256 %s, not the one the port was checked with' % digest)


if __name__ == '__main__':
    main()
