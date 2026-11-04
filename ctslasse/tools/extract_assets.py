#!/usr/bin/env python3
"""Loads CTSLASSE.EXE's program into the image the port runs on.

    python3 -I tools/extract_assets.py <CTSLASSE.EXE> <project dir>

The EXE is PMODE/W 1.20's stub with the program appended in PMODE/W's own
format, PMW1: a header, an object table, LZ77-compressed fixup records and
LZ77-compressed object data. This does what PMODE/W's loader does: it
decompresses the two objects (code, data with its BSS) at the addresses
PMODE/W put them under the analysis harness (14B00h, 1E500h: linear, the
program's flat selectors have base 0) and applies the fixups. Writes
data/ctslasse.img: the bytes from 14B00h to the end of the data object.
"""

import hashlib
import struct
import sys
from pathlib import Path

BASES = (0x14B00, 0x1E500)
SHA256_EXE = 'aa6e74e6e933a2bbe2dc86db28fde5031df0528237c7b044291b110443e067a5'


def unlz(d, pos):
    """PMODE/W's LZ77: a 32-bit bit buffer, taken MSB first and refilled from
    the stream as it empties, between literal and offset bytes."""
    out = bytearray()
    st = [pos, 0, 0]                        # stream position, bits left, bit buffer

    def bit():
        if st[1] == 0:
            st[2] = struct.unpack_from('<I', d, st[0])[0]
            st[0] += 4
            st[1] = 32
        st[1] -= 1
        b = st[2] >> 31
        st[2] = (st[2] << 1) & 0xFFFFFFFF
        return b

    def byte():
        v = d[st[0]]
        st[0] += 1
        return v

    def bits(n):
        v = 0
        for _ in range(n):
            v = (v << 1) | bit()
        return v

    out.append(byte())
    while True:
        if not bit():                       # a literal
            out.append(byte())
            continue
        lo = byte()
        if bit():                           # a match: 0, 2 or 4 more offset bits, a length code
            hi = bits(2 + 2 * bit()) if bit() else 0
            length = None
            for n in (3, 4, 5, 6):
                if bit():
                    length = n
                    break
            if length is None:
                length = byte() + 15 if bit() else bits(3) + 7
            dist = (hi << 8 | lo) + 1
        elif bit():                         # two bytes, an 11-bit offset
            length, dist = 2, (bits(3) << 8 | lo) + 1
        elif lo:                            # two bytes, an 8-bit offset
            length, dist = 2, lo
        else:                               # the end
            return bytes(out), st[0]
        for _ in range(length):
            out.append(out[-dist])


def load(exe):
    mz = struct.unpack_from('<14H', exe)
    h = (mz[2] - 1) * 512 + (mz[1] or 512)
    magic, _ver, _eobj, _eip, _sobj, _esp, otab, nobj, ftab, data = struct.unpack_from('<4s9I', exe, h)
    assert magic == b'PMW1'
    objs = []
    pos = h + data
    for i in range(nobj):
        vsize, csize, _flags, foff, fblocks, usize = struct.unpack_from('<6I', exe, h + otab + 0x18 * i)
        body, end = unlz(exe, pos)
        assert len(body) == usize and end - pos == csize
        pos = end
        objs.append((bytearray(body) + bytes(vsize - usize), foff, fblocks))
    for img, foff, fblocks in objs:
        p = h + ftab + foff
        for _ in range(fblocks):
            csize, usize = struct.unpack_from('<HH', exe, p)
            recs, end = unlz(exe, p + 4)
            assert len(recs) == usize and end - p - 4 == csize
            p = end
            for r in range(0, usize, 10):
                typ, src, tobj, toff = struct.unpack_from('<BIBI', recs, r)
                assert typ == 7                     # a 32-bit offset
                struct.pack_into('<I', img, src, BASES[tobj - 1] + toff)
    assert BASES[0] + len(objs[0][0]) <= BASES[1]
    image = bytearray(BASES[1] + len(objs[1][0]) - BASES[0])
    for base, (img, _, _) in zip(BASES, objs):
        image[base - BASES[0]:base - BASES[0] + len(img)] = img
    return bytes(image)


def main():
    if len(sys.argv) != 3:
        sys.exit(__doc__)
    exe = Path(sys.argv[1]).read_bytes()
    digest = hashlib.sha256(exe).hexdigest()
    if digest != SHA256_EXE:
        print('warning: not the CTSLASSE.EXE this was made for (sha256 %s)' % digest)
    out = Path(sys.argv[2]) / 'data'
    out.mkdir(parents=True, exist_ok=True)
    img = load(exe)
    (out / 'ctslasse.img').write_bytes(img)
    print('data/ctslasse.img: %d bytes from %06Xh' % (len(img), BASES[0]))


if __name__ == '__main__':
    main()
