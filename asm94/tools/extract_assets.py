#!/usr/bin/env python3
"""Unpacks ASM-94.EXE into the image the port runs on.

    python3 -I tools/extract_assets.py <ASM-94.EXE> <project dir>

The EXE is packed with PKLITE. Its stub is run under Unicorn (pip install
unicorn) twice, loaded at two segments, until it jumps to the unpacked
program (0000:03DBh of the load image: Tran's PMODE, whose flat 32-bit
segment starts at image offset EB0h). The words that differ between the
two images by the load distance are relocations, put back to load segment
0. Writes data/asm94.img: the flat segment, from image offset EB0h to where
PKLITE's stub was copied (84C10h).
"""

import hashlib
import struct
import sys
from pathlib import Path

from unicorn import Uc, UC_ARCH_X86, UC_MODE_16, UC_HOOK_CODE
from unicorn.x86_const import (UC_X86_REG_CS, UC_X86_REG_IP, UC_X86_REG_SS, UC_X86_REG_SP,
                               UC_X86_REG_DS, UC_X86_REG_ES)

ENTRY = 0x3DB
FLAT, END = 0xEB0, 0x84C10
SHA256 = '7feec3fd0b3bba7c0c816de873863fe48b0df2e48ed12818461bde1ed3ab74be'


def unpack(exe, psp):
    cblp, cp, crlc, hdr, mn, mx, ss, sp, ck, ip, cs, lr = struct.unpack_from('<12H', exe, 2)
    size = (cp - 1) * 512 + (cblp or 512) - hdr * 16
    load = psp + 0x10
    body = bytearray(exe[hdr * 16:hdr * 16 + size])
    for k in range(crlc):                       # the MZ relocations
        o, sg = struct.unpack_from('<HH', exe, lr + 4 * k)
        at = sg * 16 + o
        struct.pack_into('<H', body, at, (struct.unpack_from('<H', body, at)[0] + load) & 0xFFFF)
    u = Uc(UC_ARCH_X86, UC_MODE_16)
    u.mem_map(0, 0x110000)
    u.mem_write(load * 16, bytes(body))
    u.mem_write(psp * 16, b'\xcd\x20' + struct.pack('<H', 0x9F00))
    u.reg_write(UC_X86_REG_CS, (load + cs) & 0xFFFF)
    u.reg_write(UC_X86_REG_IP, ip)
    u.reg_write(UC_X86_REG_SS, (load + ss) & 0xFFFF)
    u.reg_write(UC_X86_REG_SP, sp)
    u.reg_write(UC_X86_REG_DS, psp)
    u.reg_write(UC_X86_REG_ES, psp)
    seen = {'away': False}

    def hook(uc, addr, size, ud):
        c = uc.reg_read(UC_X86_REG_CS)
        if c != load:
            seen['away'] = True
        elif seen['away'] and uc.reg_read(UC_X86_REG_IP) == ENTRY:
            uc.emu_stop()
    u.hook_add(UC_HOOK_CODE, hook)
    u.emu_start(((load + cs) & 0xFFFF) * 16 + ip, 0, 0, 500000000)
    return bytes(u.mem_read(load * 16, END)), load


def main():
    if len(sys.argv) != 3:
        sys.exit(__doc__)
    exe = Path(sys.argv[1]).read_bytes()
    a, la = unpack(exe, 0x1000)
    b, lb = unpack(exe, 0x1800)
    img = bytearray(a)
    for i in range(len(a) - 1):
        wa, wb = struct.unpack_from('<H', a, i)[0], struct.unpack_from('<H', b, i)[0]
        if wa != wb and (wb - wa) & 0xFFFF == lb - la:
            struct.pack_into('<H', img, i, (wa - la) & 0xFFFF)
    flat = bytes(img[FLAT:END])
    h = hashlib.sha256(flat).hexdigest()
    if h != SHA256:
        print('warning: data/asm94.img has SHA-256 %s, not the expected %s' % (h, SHA256))
    out = Path(sys.argv[2]) / 'data'
    out.mkdir(parents=True, exist_ok=True)
    (out / 'asm94.img').write_bytes(flat)
    print('data/asm94.img: %d bytes' % len(flat))


if __name__ == '__main__':
    main()
