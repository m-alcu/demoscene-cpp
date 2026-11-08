# kaleido-snowflake

A bump-mapped snowflake lit by a wandering light, over a slowly filling
star field, in C++17 / SDL3. Everything is drawn in software into a
512x768 canvas, which is shown in a 1024x768 window (every pixel two pixels
wide). The scene is based on the snowflake part (part 27) of
*Kaleidoscopico* by LFT.

The scene lasts 686 frames (about 11.4 s at 60 fps):

1. **Dark** (frames 0-3): the part starts up.
2. **Light in** (frames 3-66): the light sweeps in from the left and the
   snowflake lights up.
3. **Light play** (frames 67-621): the light circles over the snowflake,
   which sways from side to side. Stars appear one per frame from frame 67.
4. **Light out** (frames 622-685): the light leaves to the right and the
   snowflake goes dark. The stars stay.

The look of the snowflake turning in 3D comes entirely from the moving
light: the image itself never changes.

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/kaleido-snowflake                    # [--scale N] [--loop] [--data DIR]
ctest --test-dir build                       # every frame against the reference
```

Esc quits. The scene plays once and then exits; `--loop` repeats it.

Headless: `kaleido-snowflake --dump DIR [--ppm A:B]` writes
`DIR/frames.txt`, one line per frame with the frame number and the CRC-32
of the 512x768 RGB24 canvas. `--ppm` also saves frames A..B-1 as PPM
files. The test compares those CRCs with `tests/data/frames.txt`.

The reference is the original firmware, run in the kemu harness in
`~/proy/rea/kaleido-analisis` (global frames 9309-9994). All 686 frames
match exactly, and the harness gives the same frames at 1x and 64x CPU
speed. The harness matches the demo's video too.

## Sources

| File | Contents |
|---|---|
| `src/demo.h/.cpp` | the timeline, the lighting, the star field and the renderer |
| `src/main.cpp` | window, 60 fps loop, headless dump |
| `data/normals.png` | 256x192, the snowflake's normal map |
| `data/stars.bin` | 1760 star positions, in the order they appear |
| `tools/make_data.py` | regenerates both files from the firmware (`lft-kaleidoscopico.bin`) |
| `tools/make_reference.py` | makes `tests/data/frames.txt` from the harness's frame dumps |

`normals.png` stores one byte per texel. Red is the high nibble ×17 and
green the low nibble ×17. Black is outside the snowflake. In flash, the
map is LZ-compressed. `stars.bin` is the original table of 32-bit words,
described under the star field below.

## How it works

Notation:

- `p` is the music position (frames, 60 per second). The scene starts at
  9123 and the first frame takes it to 9124.
- `c` counts the part's vertical blanks, starting at 1. `f` counts them
  again once `p` reaches 9744.
- `S(i) = floor(32767·sin(2πi/4096))` is a 4096-entry sine table, so 1024
  is a quarter turn.
- `>>` is an arithmetic shift, i.e. a floor division by a power of two.

As in the original, each frame runs the vertical-blank handler and then one
turn of the part's main loop. What they set up is what the next frame
shows. The part ends when `f` reaches 64.

### The snowflake: a normal map and a point light

Each texel of `normals.png` holds a normal `(nx, ny)`. Its two 4-bit
components are scaled by 16 and centred on 128. Every frame the main loop
relights all 256x192 texels:

```
dy = Ly − 96 + row        dx = Lx − 128 + column
u  = 16·nx − 128 − dy     v  = 16·ny − 128 − dx
I  = 240 − min((u² + v²) >> 6, 208)
value = 0 if I < 64, else 2·(I >> 5)        (4, 6, ..., 14)
```

`(Lx, Ly)` is the light. `(dx, dy)` is the direction from the texel to the
light, both in the snowflake's plane. A texel is brightest when its normal
points that way, and it fades with the squared mismatch. This is cheap
Phong shading with no square root and no 3D maths. As the light moves, the
ridges and facets drawn into the normal map catch it one after another,
and the flat image looks like a crystal turning in space. The diagonal
streaks next to the arms are part of the normal map: they light up like
glints when the light comes from the right side.

The six values map to 0x112, 0x335, 0x557, 0x77a, 0x99d and 0xeef. Value 0
(unlit, or outside the snowflake) is transparent.

**The light's path** is set in the vertical blank:

```
Lx = (S(22c − 1024) >> 9) + 4·(min(f,63)² >> 6) − 4·((63 − min(c,63))² >> 6)
Ly =  S(17c) >> 9
```

That is a Lissajous loop of ±64. The last two terms slide the light in
from 240 to the left over the first 64 frames, and out to the right over
the last 64. Far from the light, every texel is below the threshold, so the
snowflake simply disappears. The part has no colour fades.

**On screen**, every texel is 2 pixels wide and 4 lines tall. The whole
snowflake sways sideways by `S(11c) >> 11` pixels (±16), and wraps
around a 512-pixel width.

### The star field

Behind the snowflake is a 512x384 field (each pixel covers 2 lines), filled
with value 4 (0x001, the night colour). It scrolls diagonally and wraps
in both directions:

```
canvas (x, line) shows star field ((x + 493p) mod 512, (297p mod 384 + line/2) mod 384)
```

Every frame from frame 67 on, one star is added from `stars.bin`. Word `w`
gives the position `o = (w >> 1) & 0x1fffc` (a byte offset: row `o >> 8`,
column `2·(o & 0xfc) + (w & 7)`) and the value `(w >> 17) & 14`. Values 6,
8, 10, 12 and 14 are greys 0x444 to 0xccc. The original reaches about 620
of its 1760 stars before the part ends.

**Layers.** The snowflake is drawn over the star field. Before the part's
first vertical blank, the screen is 0x001.
