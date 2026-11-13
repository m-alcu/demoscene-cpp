# ctslasse-pond

The start of part 8 of **Lasse Reinbøng** (Cubic Team & $eeN, 64K intro,
party version of December 1995), on its own, in C++17 / SDL3. A marble
texture is seen through water (the intro's "cubic team & $een" logo, embossed
in it there, is left out). Drops fall into it, and their rings run outwards, pushing the
picture aside and catching the light. In the intro this runs from 2:19.6
(cells 2:20 and 2:25 of `rea/ctslasse-analisis/sheet.png`). The picture is
320x200, shown at 4:3. By default it is drawn in 32-bit colour at
1280x800 (`--res WxH` for another size); **C** / `--256` shows the intro's
256 colours at 320x200. See [32-bit colour](#32-bit-colour).

It is cut out of the [ctslasse](../ctslasse/) port. There are two modes:

- **Endless pond** (the default): the intro's three drops, then more falling
  at random, every 1-2.7 s, or **where you click**. Each drop uses the
  intro's own ring formula. This is an extension, not the original's
  picture.
- **The intro, looped** (`--loop` / **L**): the part as the intro has it up
  to T 12 (8.2 s), translated routine by routine, with the order of every
  x87 operation kept. **All its frames match the original's** with the
  marble in place of the logo texture: the screen, the DAC and the grid
  (see Verification).

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/ctslasse-pond                     # [--loop] [--256] [--res WxH] [--marble 256] [--scale N]
ctest --test-dir build
```

| Key / mouse | Action |
|---|---|
| **click** | a drop where clicked (endless) |
| **D** | a drop somewhere (endless) |
| **L** | switch between the endless pond and the intro, looped |
| **C** | switch between 32-bit colour (hi-res) and the intro's 256 colours |
| **M** | the marble at 512x512 (smooth, the default) or 256x256 (the intro's), in 32-bit colour |
| **G** | the grid and the marble in the top left corner: the 41x26 points where they read the marble, joined as the mapper interpolates them, coloured by their light level |
| **R** | restart |
| **Space** / **Esc** | pause / quit |

Headless:

```bash
ctslasse-pond --dump DIR [--frames N] [--start SECONDS] [--loop] [--256] [--res WxH] [--marble 256]
```

This writes N frames, 70 a second, as `DIR/fNNNN.ppm`. The random drops
come from a fixed seed, so a dump is the same every time.

## How it works

Time is the intro's clock, in its own unit: T = ticks / 813440.24 (about
0.68 s).

### The texture

`precalc()` makes the texture as the intro's precalculation does, up to
the marble:

1. **Three fractals** (diamond-square: seeds 12345678h, 4D3h, 477h).
2. **The marble**: the first fractal is warped through two sine tables,
   ±70 texels, indexed by the other two.

The intro then embosses its logo into the marble (1820 bytes of runs,
blurred and used to displace it once more); that step is left out.

### The grid and the light

The picture is a grid of 41x26 points, one per 8x8 block. Each point holds
the texture's u and v and a light level, as 32-bit fixed point.

The **grid mapper** fills each block by stepping the four corners
bilinearly, and takes the whole part of each value modulo 256, so the
texture and the light levels wrap at 256. Down the left edge it steps by
the corners' difference / 8, and across each row by a step that itself
changes by 1/8 of the bottom edge's minus the top edge's each row. The
original works to 1/65536 (16 bits of fraction, split between registers
and joined by ADD/ADC): the corners, the steps and the change are rounded
down to that. The port does the same arithmetic in doubles, in texels and
levels: every value is a multiple of 1/65536 no larger than a few hundred,
which a double holds exactly, so the pixels are the same. (A float, with
its 24-bit mantissa, rounds the sums: 11 of the test's frames differ.)

A pixel is `light_table[level][texel]`. There are 65 levels, and level L
maps texel J to `J·f + 128(1 − f)`, where `f = e^(L/13 − 1.5) − 0.02`.
After those come 65 more levels for the highlights, which run towards
white.

### The drops

Each drop is a ring whose radius grows by 8 cells per T. The three drops
are centred at (20, 12), (10, 7) and (27, 9), and the second and third
start at T 1.25 and 2.25. For a point inside the ring:

- A = distance − radius (A < 0 inside the ring).
- The point is pushed out from the centre by `sin(A) · S` times its
  distance.
- `S = 2048·8/(8 − A)` for the first drop, and `2730.67·4/(4 − A)` for the
  others. So the front of the ring is strongest, and the ripples behind it
  die out like a wake.
- The light rises by `max(cos A, 0) · S · 50` over the base 3F000h. The
  crests catch the light, and the brightest go into the highlight levels.

### The intro's timeline

| T | What happens |
|---|---|
| 0-0.5 | The palette comes in from white, as greys. |
| 0.5-1.5 | The palette turns black-blue-white. |
| 8-12 | The palette turns to a red and yellow one. The **wobbling plane** blends in: three sines and a twist, plus a ring of light. |
| From 12 | The plane alone. The tunnel comes at T 33; it is not part of this project. |

### The endless pond

The endless pond uses the same ring per drop, in doubles, for any number of
drops. Once a ring's radius passes 56 cells it has left the screen. Its
strength then fades out by 80 cells, and the drop is removed. Without this
fade, the slow ripples left behind would jump when the drop disappeared.
The light is clamped to the last table level.

### 32-bit colour

The grid holds u, v and the light in 8.24 fixed point, but the grid mapper
keeps only whole texels and whole light levels, and the DAC has 6 bits per
channel. `toTrueColor()` draws the same water without these roundings, at
any size:

- Each pixel's centre is placed on the 320x200 screen, and u, v and the
  light there are interpolated between the water points around it, with
  their fractions kept. From the grid it is bilinear, between the four
  points around it; at 320x200 these are the mapper's own pixel positions.
  (The endless pond's water is computed at each pixel; drawn at another
  size, it is interpolated with Catmull-Rom, between the 4x4 points
  around.)
- The marble is sampled between its 4x4 nearest texels (Catmull-Rom):
  bilinear filtering, magnified, shows the texels as diamonds. It wraps at
  256, as the mapper's byte does.
- The light uses the tables' formula at the fractional level: below 64,
  `J·f + 128(1 − f)`; from 65, towards white by (L − 65)/64. Between 64
  and 65 the texel is left as it is, which both tables also give there.
- The palette index this gives is fractional too. The colour is read
  between two entries of the palettes, which are computed as the intro's
  gradients but without the integer division. The fades use the intro's
  own steps (64 per fade).

The water points are the grid's (41x26, 8 pixels apart) in `--loop`: that
is the intro's water, and a finer one would no longer be its picture. As u
and v wrap at 256 texels, each point is placed from its neighbour by
their difference, so that they interpolate without jumps. In the endless
pond, `pondFrame()` also computes the rings' formula at each pixel of the
32-bit picture, in floats: a ring's front is a step in the light, which
interpolated between points further apart shows as a zigzag. The step is
spread over a pixel, so the front is a clean circle. At 1280x800 with
about ten drops this takes about 6 ms; the 256-colour picture keeps the
grid.

The light formula is tabled per 1/256 level, and both the water and the
picture are computed in bands of rows, one per thread: the picture at
1280x800 takes about 3 ms.

The picture is the same, without the steps between texels and levels, and
without the banding of the 6-bit gradients. The palettes are curves, so a
frame still holds only a few hundred colours, but they change smoothly.
The few stray green pixels of the 256-colour picture in the endless pond
do not appear.

The 32-bit picture uses the marble at 512x512 by default (**M** /
`--marble 256`: the intro's tile). The intro's marble has steps: its warp
is tabled in whole texels, and a 1-level step of the fractals that drive
it moves the marble by up to 3.5 texels at once. At 1280x800 a texel
covers about 4 pixels, more where the rings stretch the picture, so these
steps show as jagged edges in the waves. The 512 marble is made the same
way without the roundings:

- the three fractals are made at 256 with the intro's random numbers, but
  with their means kept fractional (floats), spread over the even texels
  of a 512 tile, and given one more diamond-square level for the odd ones
  (half the last level's strength, the generator going on where it
  stopped);
- the warp is the intro's formula itself, twice as far, not its table, and
  the first fractal is read bilinearly at the place it gives.

It has the 256 marble's shapes (the test compares their 8x8-texel
blocks), with smooth edges and finer grain. It is made the first time it
is asked for (about 10 ms).

### Floating point

The intro's arithmetic is the x87's: 80 bits, rounding to nearest. The
code writes it as expressions in `long double`, which is that format with
GCC or Clang on x86. Each expression is evaluated in the intro's order and
rounded to float or double wherever the intro stores a value. Elsewhere
(MSVC, ARM) `long double` is another format and the build stops with a
`static_assert`.

The x87 instructions become `<cmath>`: FSQRT `std::sqrt`, FSIN and FCOS
`std::sin` and `std::cos` in long double, FRNDINT + FISTP `std::lrint`.
The intro's e^x (FLDL2E, FPREM, F2XM1, FSCALE, as Watcom compiles it) is
`std::exp`. The emulator the reference was logged under (QEMU) computes
FSIN, FCOS and F2XM1 through doubles instead, so they can differ in the
last bits. Here those differences never reach the results: the test gets
the same texture, light tables, screen, DAC and grid on every frame. Build
with
`-ffp-contract=off`, as CMakeLists does.

## Verification

`tests/ref.txt` is the ctslasse port's part 8, logged after each frame,
without the logo. It was logged from a scratch copy of the port; the copy
is not kept. The port matches the original under `rea/ctslasse-analisis` on
every frame. The copy has two changes:

- a print after each frame;
- the part's texture replaced by the marble. This is the tile the intro's
  precalculation holds just before it embosses the logo, after its third
  displacement.

Nothing else changes in the copy. Its DAC and grid are the same as those
of the unmodified port, frame for frame, because they do not depend on the
texture. The reference holds:

- the CRC32 of the marble and of the light tables;
- for the first 831 frames (T 0-17.4: the drops, the plane blending in and
  then alone), the clock the intro read and the CRC32 of the screen, of the
  DAC and of the grid.

The test draws each frame at its clock and compares. Everything matches.
So the picture is exactly what the intro would draw with the marble in
place of its logo texture.

The 32-bit picture has no reference. The test checks that the 512x512
marble has the 256 one's shapes: the means of their 8x8-texel blocks are
about 15 apart (24 at most), against 77 for two unrelated parts of the
marble. Every tenth frame, the
picture is compared with the 256-colour one, and the mean difference per channel
must stay under 16 (it reaches about 11, in the plane's red and yellow
palette, whose sharp steps the filtering softens).

The endless pond is not checked against anything, since the intro has no
such mode.
