# kaleido-tunnel

A spinning faceted solid flying down a checkered tunnel, in C++17 / SDL3.
Everything is drawn in software into a 512x768 canvas, which is shown in a
1024x768 window (every pixel two pixels wide). The scene is based on the
tunnel part (part 46) of *Kaleidoscopico* by LFT. The original's hot-air
balloon is replaced by the rotating solid from the demo's part 7.

The scene lasts 887 frames (about 14.8 s at 60 fps):

1. **Black** (frames 0-2): the part starts up.
2. **Fade in** (frames 3-18): the tunnel and the solid fade up from black.
3. **Flight** (frames 19-853): the tunnel sways while the solid spins and bobs.
   From about frame 103 it shrinks and drifts towards the far end.
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

**Checks.** With the balloon, all 887 frames matched the original exactly.
The reference was the kemu harness in `~/proy/rea/kaleido-analisis`, which
runs the firmware. The solid's face, edge and fill code was also checked
against the original's own buffer, from a RAM snapshot of part 7 at frame
1900: it matches pixel for pixel. The scene with the solid has no original
to compare with, so `tests/data/frames.txt` now holds the port's own output.
It is a regression test.

## Sources

| File | Contents |
|---|---|
| `src/demo.h/.cpp` | the timeline, the part's main loop and blank handler, the solid, and the renderer |
| `src/main.cpp` | window, 60 fps loop, headless dump |
| `data/tunnel.png` | 768x2304, 8 images of the tunnel's top half, 288 rows each |
| `tools/make_data.py` | regenerates the image from the firmware (`lft-kaleidoscopico.bin`) |

`tunnel.png` is an indexed PNG. The pixel index is the 4-bit value the
original video hardware gets: 0 is transparent, and 4/8/12 are the
tunnel's three colours. The palette is only for viewing, because the
colours come from the fades at run time.

## How it works

Notation:

- `p` is the music position (frames, 60 per second). The scene starts at
  14575 and the first frame takes it to 14576.
- `c` counts the part's vertical blanks, starting at 1.
- Rows are canvas rows of two lines (384 of them). The tunnel and the solid
  are both drawn in rows.
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

The colours are: background 0x000, and tunnel 0x112, 0x33b and 0x44c. The
solid's colours for values 4, 6, 12 and 14 are 0x324, 0x658, 0xccc and
0xfff on even rows, and 0x213, 0x547, 0xaaa and 0xddd on odd rows. Part 7
alternates its colours like this from one copper entry to the next, which
gives the solid a fine horizontal stripe.

### The solid

**Its path** is the one the balloon had in the original. It is set from
the blank count `c`:

```
s  = max(256 − (3·max(c − 100, 0)² >> 13), 1)     zoom, 256 = full size
by = ( ((S(15c) >> 9) + 164)·s + (282 − y)·(256 − s) ) >> 8
bx = ( (S(13c − 512) >> 9)·s + (120 − x)·(256 − s) ) >> 8 + 4
centre = (256 + bx, by + s/16),   size a = 56·s >> 8
```

`(x, y)` is the view the handler is about to show. While `s` shrinks, the
solid slides from its bobbing path to the tunnel's far end. That end is at
column `384 − x`, row `286 − y`.

**The shape** is a tetrakis hexahedron: a cube whose six faces each carry
a low pyramid, giving 24 triangles. The 8 cube corners are at `(±a, ±a,
±a)`. The 6 pyramid tips are at `±b` on the axes, with
`b = a·442/256 ≈ a√3`, so all 14 vertices lie on one sphere. The triangles
alternate between values 4 and 6, like a checkerboard.

**Rotation and projection** use part 7's speeds, from the music position:
first about the vertical axis by `11p`, then about the horizontal one by
`9p`, both in sine-table units:

```
x' = (x·S(11p+1024) + z·S(11p)) >> 15      z' = (z·S(11p+1024) − x·S(11p)) >> 15
y' = (y·S(9p+1024) + z'·S(9p)) >> 15
screen = centre + (x', y')                  (no perspective)
```

**XOR filling.** This is the same trick as part 7. Each triangle is drawn
only as its three edges. An edge XORs its value into one pixel per column it
crosses (16-bit fixed point; rows clamped to 0..383, so the part of an edge
above the screen flips the whole column). Then each column is
XOR-accumulated from the top. Every pixel ends up with the XOR of all the
triangles that cover it.

The solid is convex, so each pixel inside its outline has exactly one
triangle facing the viewer and one facing away. Triangles facing the viewer
are drawn with their own value (4 or 6). Of those facing away, only the
"4" ones are drawn, with value 8. A pixel is therefore 4 or 6 from the
front, plus 8 when a "4" triangle is behind it. That gives four shades,
4, 6, 12 and 14, and the back of the solid shows through as a second,
crossed pattern. The facing test is the sign of the 2D cross product of the
triangle's projected edges.

**Layers.** The solid is drawn over the tunnel and the tunnel over the
background colour. Pixel value 0 is transparent in both.
