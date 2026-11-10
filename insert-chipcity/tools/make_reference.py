#!/usr/bin/env python3
"""Reference data for insert-chipcity from a round-trip apitrace dump of the original intro.

  apitrace-dump9 dump --color=never --calls=3573-4314,5721897-11962994 insert.trace | make_reference.py OUTDIR

(apitrace-dump9 = apitrace 11.1 built with max_digits10, rea/rzr-insert-analisis/apitrace32.)
Writes OUTDIR/lists.txt (display lists 1,3,4,5 as dumped) and OUTDIR/frames.txt: one line per
chip-city frame: index crc32 ncalls rotX rotY camY camZ y[0][0] y[15][15] (floats as %.9g, exact).
The canonical text of a frame is its calls without call numbers, joined by '\\n', up to but
excluding glXSwapBuffers.
"""
import re, sys, zlib, os

out = sys.argv[1]
lists, cur_list, frames = {}, None, []
frame, in_frames = [], False
for line in sys.stdin:
    m = re.match(r'(\d+) (\w+\(.*\))\s*$', line)
    if not m: continue
    no, call = int(m.group(1)), m.group(2)
    if no < 5721897:
        if call.startswith('glNewList('):
            cur_list = int(re.search(r'list = (\d+)', call).group(1)); lists[cur_list] = []
        elif call.startswith('glEndList('):
            cur_list = None
        elif cur_list is not None:
            lists[cur_list].append(call)
        continue
    if call.startswith('glXSwapBuffers('):
        frames.append(frame); frame = []
    else:
        frame.append(call)

def num(s): return re.findall(r'= (-?[\d.e+-]+|-?nan|-?inf)', s)
with open(os.path.join(out, 'lists.txt'), 'w') as f:
    for k in (1, 3, 4, 5):
        f.write('list %d %d\n' % (k, len(lists[k])))
        for c in lists[k]: f.write(c + '\n')
with open(os.path.join(out, 'frames.txt'), 'w') as f:
    f.write('# frame crc32 ncalls rotX rotY camY camZ y00 y1515\n')
    for i, fr in enumerate(frames):
        text = '\n'.join(fr).encode()
        rot = [c for c in fr if c.startswith('glRotatef(')]
        tr = [c for c in fr if c.startswith('glTranslatef(')]
        rx, ry = num(rot[0])[0], num(rot[1])[0]
        cam = num(tr[0]); y00 = num(tr[1])[1]
        last = [c for c in tr if c.startswith('glTranslatef(x = 15, ') and ', z = 15)' in c][-1]
        f.write('%d %08x %d %s %s %s %s %s %s\n' % (i, zlib.crc32(text), len(fr), rx, ry, cam[1], cam[2], y00, num(last)[1]))
print(len(frames), 'frames;', {k: len(v) for k, v in lists.items() if k in (1, 3, 4, 5)})
