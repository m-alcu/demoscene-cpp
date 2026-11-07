"""mkfont.py PSF OUT: the 8x16 font of the window's text mode (code page
437) from a Linux console font with a Unicode table (e.g.
/usr/share/consolefonts/Uni2-VGA16.psf.gz): OUT is a C array, 256 x 16
bytes. Characters the font lacks are blank."""
import gzip, struct, sys
d = gzip.open(sys.argv[1]).read() if sys.argv[1].endswith('.gz') else open(sys.argv[1], 'rb').read()
if d[:2] == b'\x36\x04':                               # PSF1
    mode, h = d[2], d[3]
    n = 512 if mode & 1 else 256
    glyphs = [d[4 + k * h:4 + (k + 1) * h] for k in range(n)]
    p = 4 + n * h
    uni = {}
    for g in range(n):
        while True:
            u = struct.unpack_from('<H', d, p)[0]; p += 2
            if u == 0xFFFF: break
            if u == 0xFFFE: continue
            uni.setdefault(u, g)
else:                                                  # PSF2
    _, ver, hs, flags, n, cs, h, w = struct.unpack_from('<8I', d)
    glyphs = [d[hs + k * cs:hs + (k + 1) * cs] for k in range(n)]
    p = hs + n * cs
    uni = {}
    for g in range(n):
        while d[p] != 0xFF:
            if d[p] == 0xFE: p += 1; continue
            c = bytes([d[p]]); k = 1
            b0 = d[p]
            ln = 1 if b0 < 0x80 else 2 if b0 < 0xE0 else 3 if b0 < 0xF0 else 4
            uni.setdefault(ord(d[p:p + ln].decode('utf8')), g); p += ln
        p += 1
assert h == 16
low = '\u0000☺☻♥♦♣♠•◘○◙♂♀♪♫☼►◄↕‼¶§▬↨↑↓→←∟↔▲▼'
out = []
for c in range(256):
    u = ord(low[c]) if c < 32 else 0x2302 if c == 0x7F else ord(bytes([c]).decode('cp437'))
    g = uni.get(u)
    out.append(glyphs[g] if g is not None and c else bytes(16))
with open(sys.argv[2], 'w') as f:
    f.write('// cp437 8x16 (tools/mkfont.py from %s)\n' % sys.argv[1].split('/')[-1])
    for c in range(256):
        f.write(''.join('0x%02x,' % b for b in out[c]) + '\n')
print('missing', [hex(c) for c in range(1, 256) if out[c] == bytes(16) and c not in (0x20, 0xFF)])
