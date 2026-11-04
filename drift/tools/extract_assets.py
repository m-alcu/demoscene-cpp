#!/usr/bin/env python3
"""Unpacks DRIFT.EXE into the image the port runs on.

    python3 -I tools/extract_assets.py <DRIFT.EXE> <project dir>

The EXE is packed with WWPack (a self-unpacking stub). The stub is run under
Unicorn (pip install unicorn) twice, loaded at two segments, until it jumps
to the program (0000:03FDh of the load image: Tran's PMODE 3.0, whose flat
32-bit segment starts at image offset EB0h); the words that differ between
the two images by the load distance are relocations, put back to load
segment 0. Writes data/drift.img.
"""

import hashlib
import struct
import sys
from pathlib import Path

from unicorn import Uc, UC_ARCH_X86, UC_MODE_16, UC_HOOK_CODE
from unicorn.x86_const import (UC_X86_REG_CS, UC_X86_REG_IP, UC_X86_REG_SS, UC_X86_REG_SP,
                               UC_X86_REG_DS, UC_X86_REG_ES)

SHA256_IMG = None   # filled in below once known
ENTRY = 0x3FD


def unpack(exe, psp):
    cblp, cp, crlc, hdr, mn, mx, ss, sp, ck, ip, cs, lr = struct.unpack_from('<12H', exe, 2)
    size = (cp - 1) * 512 + (cblp or 512) - hdr * 16
    load = psp + 0x10
    u = Uc(UC_ARCH_X86, UC_MODE_16)
    u.mem_map(0, 0x110000)
    u.mem_write(load * 16, exe[hdr * 16:hdr * 16 + size])
    u.mem_write(psp * 16, b'\xcd\x20' + struct.pack('<H', 0x9000))
    u.reg_write(UC_X86_REG_CS, load + cs)
    u.reg_write(UC_X86_REG_IP, ip)
    u.reg_write(UC_X86_REG_SS, load + ss)
    u.reg_write(UC_X86_REG_SP, sp)
    u.reg_write(UC_X86_REG_DS, psp)
    u.reg_write(UC_X86_REG_ES, psp)
    done = []

    def on_code(u, addr, sz, data):
        if u.reg_read(UC_X86_REG_CS) == load and u.reg_read(UC_X86_REG_IP) == ENTRY:
            done.append(1)
            u.emu_stop()

    u.hook_add(UC_HOOK_CODE, on_code)
    u.emu_start((load + cs) * 16 + ip, 0, 0, 300000000)
    if not done:
        raise RuntimeError('the stub did not reach the program')
    return bytes(u.mem_read(load * 16, 0x9E000 - load * 16)), load


def main():
    if len(sys.argv) != 3:
        print(__doc__)
        return 1
    exe = Path(sys.argv[1]).read_bytes()
    a, la = unpack(exe, 0x1000)
    b, lb = unpack(exe, 0x2000)
    n = min(len(a), len(b))
    im = bytearray(a[:n])
    relocs = 0
    for i in range(n - 1):
        wa = struct.unpack_from('<H', a, i)[0]
        wb = struct.unpack_from('<H', b, i)[0]
        if wa != wb and (wb - wa) & 0xFFFF == lb - la:
            struct.pack_into('<H', im, i, (wa - la) & 0xFFFF)
            relocs += 1
    end = len(im)
    while end and im[end - 1] == 0:
        end -= 1
    im = bytes(im[:end])
    out = Path(sys.argv[2]) / 'data'
    out.mkdir(parents=True, exist_ok=True)
    (out / 'drift.img').write_bytes(im)
    print('data/drift.img: %d bytes, %d relocations, sha256 %s' % (len(im), relocs, hashlib.sha256(im).hexdigest()))
    return 0


if __name__ == '__main__':
    sys.exit(main())
