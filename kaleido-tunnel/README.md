# kaleido-tunnel

A hot-air balloon flying down a checkered tunnel, in C++17 / SDL3.
Everything is drawn in software into a 512x768 canvas, which is shown in a
1024x768 window (every pixel two pixels wide). The scene is based on the
tunnel part (part 46) of *Kaleidoscopico* by LFT.

The scene lasts 887 frames (about 14.8 s at 60 fps):

1. **Black** (frames 0-2): the part starts up.
2. **Fade in** (frames 3-18): the tunnel and the balloon fade up from black.
3. **Flight** (frames 19-853): the tunnel sways while the balloon bobs. From
   about frame 103 the balloon shrinks and drifts towards the far end.
4. **Fade out** (frames 854-886): everything fades to white.

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/kaleido-tunnel                       # [--scale N] [--loop] [--data DIR]
ctest --test-dir build                       # every frame against the reference
```

Esc quits. The scene plays once and then exits; `--loop` repeats it.

Headless: `kaleido-tunnel --dump DIR [--ppm A:B]` writes `DIR/frames.txt`,
one line per frame with the frame number and the CRC-32 of the 512x768
RGB24 canvas. `--ppm` also saves frames A..B-1 as PPM files. The test
compares those CRCs with `tests/data/frames.txt`.

## Sources

| File | Contents |
|---|---|
| `src/demo.h/.cpp` | the timeline, the part's main loop and blank handler, and the renderer |
| `src/main.cpp` | window, 60 fps loop, headless dump |
| `data/tunnel.png` | 768x2304, 8 images of the tunnel's top half, 288 rows each |
| `data/balloon.png` | 1024x192, the balloon's outline at every width |
| `tools/make_data.py` | regenerates both images from the firmware (`lft-kaleidoscopico.bin`) |
| `tools/make_reference.py` | makes `tests/data/frames.txt` from the harness's frame dumps |

Both images are indexed PNGs. The pixel index is the 4-bit value the
original video hardware gets: 0 is transparent, 4/8/12 are the tunnel's
three colours, and 4-14 (even) are the balloon's six. The palettes are only
for viewing, because the colours come from the fades at run time.

## How it works

Notation:

- `p` is the music position (frames, 60 per second). The scene starts at
  14575 and the first frame takes it to 14576.
- `c` counts the part's vertical blanks, starting at 1.
- `S(i) = floor(32767·sin(2πi/4096))` is a 4096-entry sine table, so 1024
  is a quarter turn.
- `>>` is an arithmetic shift, i.e. a floor division by a power of two.

As in the original, each frame runs the vertical-blank handler and then one
turn of the part's main loop. What the handler sets up is what the next
frame shows.

### The tunnel

**It is a precomputed animation.** `tunnel.png` holds 8 images of the
top half of the tunnel, 768x288 with 4 colours. The view shows image `p mod
8`, so the checkers rush past and the cycle repeats 7.5 times a second.
The original keeps them in flash at 2 bits per pixel. Every frame it
streams the window it needs (384 rows of 528 pixels) through a PIO state
machine that widens the pixels to 4 bits, and DMA writes them into the
back of two RAM buffers.

**One window, mirrored.** The main loop picks the scroll:

```
x = 120 + (S(19p − 1024)·120 >> 15)      0..240
y =  95 + (S(15p)·95 >> 15)              0..189
```

Canvas pixel `(px, line)` shows tunnel pixel `(x + px, row)`. For the
top half of the screen, `row` starts at `y` and goes down one row every two
lines. At line `2·(286 − y)` it reaches row 286, the vanishing point. A
copper write then reverses the step, so the rows go back up and the bottom
half is the top half mirrored. As `y` changes, the point where the halves
meet moves up and down.

**Double buffering.** The handler shows the view that the main loop
finished in the previous frame. So the picture runs one frame behind the
music position used for `x`, `y` and the image.

### The fades

The handler mixes every colour per 4-bit channel:
`mix(a, b, t) = a + ((b − a)·t >> 8)`.

- Fade in: from black, `t = 16·min(c, 16)`.
- Fade out: once `p` reaches 15428, the handler counts again from `f = 1`.
  It mixes from white (0xfff) with `t = 256 − 8·min(f, 32)`. The part ends
  when `f = 33`.

The colours are: background 0x000, tunnel 0x112, 0x33b and 0x44c, and
balloon 0xd33, 0xf55, 0xddd, 0xd62, 0x420 and 0x200.

### The balloon

**Position and zoom** (from the blank count `c`):

```
s  = max(256 − (3·max(c − 100, 0)² >> 13), 1)     zoom, 256 = full size
by = ( ((S(15c) >> 9) + 164)·s + (282 − y)·(256 − s) ) >> 8
bx = ( (S(13c − 512) >> 9)·s + (120 − x)·(256 − s) ) >> 8 + 4
```

`(x, y)` is the view the handler is about to show. While `s` shrinks, the
balloon slides from its bobbing path to the tunnel's far end. That end is at
column `120 − x`, row `282 − y`, in rows of two lines.

**Scaling with the copper.** The video hardware cannot scale an image.
Instead, `balloon.png` is drawn so that each row is the outline at one
width: rows 0-95 are cross-sections of the striped envelope, rows 96-143 the
basket and rows 144-191 the ropes. A 326-entry profile table (in
`demo.cpp`) gives the balloon's width at each step down from top to bottom.
The handler writes one copper entry per screen row (two lines):

```
step = 0x20000 / s
row r = by − s/4, then one row per step through the table:
  table 0-269    envelope   image row (w·s) >> 9
  table 270-293  ropes      image row ((w·s) >> 10) + 144
  table 294-325  basket     image row ((w·s) >> 10) + 96
```

At full zoom (`s = 256`) every table entry gets a row: the balloon is 163
rows (326 lines) tall. At zoom `s` it takes `s/256` of the rows, and the
widths shrink by the same factor, because a narrower outline is just a
lower image row. Canvas pixel `px` shows image column `(px − bx) mod 1024`.
The rows without an entry show image row 0, which is empty.

**Layers.** The balloon is drawn over the tunnel and the tunnel over the
background colour. Pixel value 0 is transparent in both.
