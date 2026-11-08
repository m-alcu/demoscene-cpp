# kaleido-bars

Twisted vertical bars over a scrolling carbon-fibre background, in C++17 /
SDL3. Everything is drawn in software into a 512x768 canvas, which is shown
in a 1024x768 window (every pixel two pixels wide). The scene is based on
the vertical bars of *Kaleidoscopico* by LFT.

The scene lasts 887 frames (about 14.8 s at 60 fps):

1. **Blue** (frames 0-2): a dark blue screen in two shades.
2. **Wipe** (frames 3-123): two rotating parallel lines move apart and
   uncover the scrolling background.
3. **Bars** (frames 124-886): the bars slide in, sway, and leave again.
   From music position 4690 the background bounces to the beat.

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/kaleido-bars                         # [--scale N] [--loop] [--data DIR]
ctest --test-dir build                       # every frame against the reference
```

Esc quits. The scene plays once and then exits; `--loop` repeats it.

**`i` toggles an info panel** to the right of the picture. The window gets
wider, so the panel doesn't cover the bars. For every screen row, a yellow
curve shows which row of `bars.png` (0-127) that row displays: the `R(r)`
below. The red line is `2p mod 128`, the part that moves with time. The
curve is a sine wave travelling around that line, so neighbouring rows show
slightly different twist angles, and the bundle bulges and pinches instead
of turning as one piece. A legend gives `p` and the horizontal shift `s`,
which is the same for all rows. The panel is only drawn in the window: it
doesn't change the canvas, the `--dump` CRCs or the test.

Headless: `kaleido-bars --dump DIR [--ppm A:B]` writes `DIR/frames.txt`,
one line per frame with the frame number and the CRC-32 of the 512x768
RGB24 canvas. `--ppm` also saves frames A..B-1 as PPM files. The test
compares those CRCs with `tests/data/frames.txt`.

## Sources

| File | Contents |
|---|---|
| `src/demo.h/.cpp` | the timeline, the three parts and the software renderer |
| `src/main.cpp` | window, 60 fps loop, headless dump |
| `data/bars.png` | 1024x128, 128 cross-sections of the twisted bars |
| `data/carbon.png` | 512x256, tileable background |

Both images are indexed PNGs. Index 0 is transparent, and the palette
gives the colours (12-bit colours, each 4-bit channel times 17).

## How it works

Notation:

- `p` is the music position (frames, 60 per second, 112 per bar). The
  scene starts at 4553.
- `t` is a part's own frame counter, starting at 1.
- `S(i) = floor(32767·sin(2πi/4096))` is a 4096-entry sine table, so 1024
  is a quarter turn.
- `>>` is an arithmetic shift, i.e. a floor division by a power of two.

All the motion is integer arithmetic. Each frame `step()` draws the canvas
from the current state and then advances the timeline.

### The bars

**The texture is the 3D part.** Each of the 128 rows of `bars.png` is a
horizontal cross-section of a twisted bundle of shaded ribbons at one
twist angle. Consecutive rows are consecutive angles, and row 127 joins
row 0. The shading is already drawn in, so the lighting costs nothing.

**A slice per screen row.** The canvas has 384 bar rows. Bar row `r`
covers canvas lines `2r-1` and `2r` (row 0 only line 0, row 383 also line
767), and it shows texture row:

```
R(r) = ( 2p + (S(φ + 8r) >> 9) ) mod 128
φ    = 8 · ( p + (S(16·(p mod 256)) >> 8) )
```

- `2p` turns the twist: one full texture cycle every 64 frames.
- `S(φ + 8r) >> 9` is in -64..63. Down the screen the phase covers three
  quarters of a sine period, so the twist angle varies smoothly and the
  bars bulge and pinch instead of rotating rigidly.
- `φ` makes that wave travel (`8p`) and rock back and forth every 256
  frames.

**One horizontal offset for all rows.** Pixel `x` shows texture column
`(x + s) mod 1024`, with

```
s = −floor( (127 − min(t,127))⁴ / 2¹⁹ )                      slide in
    + floor( min(f,63)⁴ / 2¹⁵ )                               slide out
    + floor( S(29p − 2048) · (63 − min(f,63)) / 2¹⁵ )         sway
```

where `f` counts frames since the bars started leaving (position 5376).
The slide-in eases from -480 to 0 over 127 frames. The slide-out goes
from 0 to +480 over 64 frames. The sway is ±63 pixels with a period of
about 141 frames, and it dies away during the slide-out.

Where the bars texture is transparent, the background shows through.

### The wipe

Two parallel lines cross the screen, and the band between them shows the
background:

```
θ  = 8 · min(t, 110)                     rotation, stops at ≈ 77°
d  = floor( floor(595t / 256)² / 256 )   half-width of the band
y0 = 192 + max((128 − t) >> 1, 0)        centre of the band
line 1 through (256, y0) + d·(sin θ, cos θ)   value 4
line 2 through (256, y0) − d·(sin θ, cos θ)   value 8
```

They are drawn into a 512x384 mask (each mask row covers two canvas lines)
with an **XOR edge fill**:

1. Each line is stepped column by column with a 14-bit fixed-point slope.
   Its value is XORed into the one pixel where it crosses each column. The
   row is clamped, so a line above the screen flips the whole column.
2. Each column is then XOR-accumulated downwards, starting from 8.

A pixel's value then says which lines it is below:

| below line 2 | below line 1 | value | shows |
|---|---|---|---|
| no  | no  | 8 | blue (0x002) |
| yes | no  | 0 | the background |
| yes | yes | 4 | dark blue (0x001) |

The wipe ends once `d > 300` (t = 120). The finished mask stays on screen
for one more frame.

### The background

`carbon.png` tiles in both directions. Each texture row covers two canvas
lines. With `q = floor(p/4)`:

```
X = 2p + (S(36q) >> 10) + 16q − floor(64q/3)
Y = (S(36q + 1024) >> 11) + q + floor(floor(64q/3)/2) − B(p)
B(p) = floor( ((p mod 28) − 14)² / 16 )   for p ≥ 4690, else 0
```

Canvas pixel `(x, y)` shows texture pixel
`((X + x) mod 512, (Y + floor(y/2)) mod 256)`.

- `X` and `Y` drift diagonally (about 0.67 and 2.9 pixels per frame), and
  the sine terms bend the drift into a slow ellipse.
- `B` is a parabola of up to 12 rows that repeats every 28 frames (one
  beat), so the background bounces to the music.
