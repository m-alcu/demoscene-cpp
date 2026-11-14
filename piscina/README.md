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

It is cut out of the [ctslasse](../ctslasse/) port, and keeps only what the
pond needs. The intro's three drops come first, then more fall at random,
every 1-2.7 s, or **where you click**. Each drop uses the intro's own ring
formula; the endless drops are an extension, not the original's picture.
The intro's own three drops are also kept exactly, translated routine by
routine with the order of every x87 operation kept, for the test: **its
frames up to T 8 match the original's** with the marble in place of the
logo texture (see [Verification](#verification)). What the intro shows
after T 8 (a wobbling plane, a red palette, a tunnel) is not part of this
project.

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/ctslasse-pond                     # [--256] [--res WxH] [--marble 256] [--scale N]
ctest --test-dir build
```

| Key / mouse | Action |
|---|---|
| **click** | a drop where clicked |
| **D** | a drop somewhere |
| **C** | switch between 32-bit colour (hi-res) and the intro's 256 colours |
| **M** | the marble at 512x512 (smooth, the default) or 256x256 (the intro's), in 32-bit colour |
| **G** | top left: the grid and the marble (the 41x26 points where they read the marble, joined as the mapper interpolates them, coloured by their light level); top right: the light table through the palette (step 0-64 down, texel across), with the steps the grid's points use; bottom left: the palette (the DAC's 256 entries, and their red, green and blue as curves) |
| **R** | restart |
| **Space** / **Esc** | pause / quit |

Headless:

```bash
ctslasse-pond --dump DIR [--frames N] [--start SECONDS] [--256] [--res WxH] [--marble 256]
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
bilinearly, and takes the whole part of each value: the texture wraps at
256 texels, and the light level picks a row of the table. Down the left edge it steps by
the corners' difference / 8, and across each row by a step that itself
changes by 1/8 of the bottom edge's minus the top edge's each row. The
original works to 1/65536 (16 bits of fraction, split between registers
and joined by ADD/ADC): the corners, the steps and the change are rounded
down to that. The port does the same arithmetic in doubles, in texels and
levels: every value is a multiple of 1/65536 no larger than a few hundred,
which a double holds exactly, so the pixels are the same. (A float, with
its 24-bit mantissa, rounds the sums: 11 of the test's frames differ.)

A pixel is `light_table[level][texel]`: see [The light table](#the-light-table).

### The light table

#### Why a table

In mode 13h a pixel is a byte, an **index** into the palette (the DAC), not
a colour. An index cannot be multiplied by a brightness: 100 × 1.2 = 120 is
whatever colour entry 120 happens to hold. So the intro decides beforehand
what each pair (light level, texel) becomes, and stores the answers:

```
pixel = light[s][texel],       s = level − 65, held to 0-64
```

65 rows (s 0-64) of 256 bytes, about 16K. The grid mapper's inner loop is
two reads per pixel and no arithmetic on colours.

This only works because the palette is a **ramp**. The pond's blue palette
runs black (0) → water blue (128) → white (255), so a higher index is a
brighter colour, and moving an index moves its brightness: towards 255 is
whiter, J itself is unchanged. Under a palette in any other order, the
table would give noise.

#### The formula: the sky's reflection

```
out = J + ((255 − J) · s >> 6)          s = 0-64
```

Row s moves every texel the fraction s/64 of the way towards white. Row 0
is the texel as it is: the water at rest (level 63) and everything up to
65 use it. Row 64 (level 129) is all white.

**Why 64.** It is the number of steps from "as it is" to "white", and it is
2^6: `/ 64` is the shift `>> 6`, one cheap instruction where a division cost
the 486 about 40 cycles. `(255 − J) · s` is never negative, so the shift
gives exactly the division's result.

This is a **linear interpolation of the index towards white**, and it can
be read two ways, which come to the same (with F = s/64):

1. **A Fresnel mix**, as water looks. What is seen on water is the light
   from below (the bottom, refracted: here the marble) mixed with the light
   reflected from above (the sky, white): `seen = (1 − F)·bottom + F·sky`.
   With the sky at 255, this is the formula. A tilted crest
   reflects more of the sky.
2. **The "screen" blend**: with J in 0-1, `out = 1 − (1 − J)(1 − F)`.
   It adds light without passing white. A plain `J + s` would clip, and
   every bright texel would go flat white at once; this keeps them in
   order, lifts the dark ones more than the light ones, and the marble
   still shows in the glint until F nears 1.

The mapper interpolates the level across each 8x8 block: between a point at
rest (63) and one on a crest (85), the pixels step 63, 66, 69…, through the
rows in turn.

#### Where the level comes from

A drop's ring moves the texture by `sin A` and lights it by `cos A` (see
[The drops](#the-drops)):

```
offset ∝ sin A · S          light += max(cos A, 0) · S · 50
```

cos A is the derivative of sin A, so the light follows the wave's
**slope**, not its height. The slope is what a surface normal measures:
this is a cheap `N · L`. `max(…, 0)` keeps the slopes that face the
viewer: those catch the sky. S · 50 puts a crest about 25 levels over
rest (63 → about 88), row 23, about a third of the way to white. The light
only rises from 63, so under 65 it is always row 0, and it is clamped at
129, row 64: the table's 65 rows are all the pond can reach.

#### The intro's other rows

The intro's table has 130 rows, indexed by the level itself: under these,
levels 0-64 pull the texel
towards 128, the water's blue (`J·f + 128(1 − f)`, f falling
exponentially: fog, for the tunnel later in part 8, which reads them by
depth). The pond never reaches them, so they are not kept. The test still
builds the intro's whole table, to check it against the reference and
that the pond's rows are its rows 65-129.

#### The palette's index 128

The blue palette (the intro's pal2) is two gradients: black to (10h, 20h,
40h) over indices 0-127, and (10h, 20h, 40h) to white over 128-255. Its
middle blue, 40h = 64, is one over the 6-bit DAC's 3Fh. The first gradient
stops a step short (index 127 gets 63), but the second starts on it: index
128 gets blue 64, which the VGA keeps as its low 6 bits, 0, an olive green
(16, 32, 0). The marble's texels at 128 show it at rest, as dark green
specks in the intro.

`dac_` keeps the intro's bytes, so the test's DAC still matches. The picture
is drawn from `shown_` (`shownDac()`), the same DAC with 64 held at 63, so
index 128 is the blue the ramp means; the 32-bit palette is held at 63 too.
The palette panel (**G**, bottom left) shows the ramp and its curves.

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

### The palette

| T | What happens |
|---|---|
| 0-0.5 | The palette comes in from white, as greys (black - white). |
| 0.5-1.5 | The greys turn to the blue palette (black - blue - white). |
| From 1.5 | The blue palette stays. |

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
- The light uses the table's formula at the fractional level: from 65,
  towards white by (L − 65)/64; under 65 the texel is left as it is.
- The palette index this gives is fractional too. The colour is read
  between two entries of the palettes, which are computed as the intro's
  gradients but without the integer division. The fades use the intro's
  own steps (64 per fade).

The water points are the grid's (41x26, 8 pixels apart) for the intro's
own drops (`frame()`, the test's): that is the intro's water, and a finer
one would no longer be its picture. As u
and v wrap at 256 texels, each point is placed from its neighbour by
their difference, so that they interpolate without jumps. In the endless
pond, `pondFrame()` also computes the rings' formula at each pixel of the
32-bit picture, in floats: a ring's front is a step in the light, which
interpolated between points further apart shows as a zigzag. The step is
spread over a pixel, so the front is a clean circle. At 1280x800 with
about ten drops this takes about 6 ms; the 256-colour picture keeps the
grid.

Both the water and the picture are computed in bands of rows, one per
thread: the picture at 1280x800 takes about 3 ms.

The picture is the same, without the steps between texels and levels, and
without the banding of the 6-bit gradients. The palettes are curves, so a
frame still holds only a few hundred colours, but they change smoothly.

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
The intro's e^x (FLDL2E, FPREM, F2XM1, FSCALE, as Watcom compiles it),
needed only for the test's copy of the intro's shading rows, is
`std::exp`. The emulator the reference was logged under (QEMU) computes
FSIN, FCOS and F2XM1 through doubles instead, so they can differ in the
last bits. Here those differences never reach the results: the test gets
the same texture, light table, screen, DAC and grid on every frame. Build
with `-ffp-contract=off`, as CMakeLists does.

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

- the CRC32 of the marble and of the light tables (all 130 rows);
- for the first 831 frames (T 0-17.4), the clock the intro read and the
  CRC32 of the screen, of the DAC and of the grid.

The test builds the intro's whole light table, checks its CRC, and checks
that the pond's 65 rows are its rows 65-129. Then it draws each frame up
to T 8 (381 frames: the drops; after T 8 the intro goes on to effects not
kept here) at its clock and compares. Everything matches. So the picture
is exactly what the intro would draw with the marble in place of its logo
texture.

The 32-bit picture has no reference. The test checks that the 512x512
marble has the 256 one's shapes: the means of their 8x8-texel blocks are
about 15 apart (24 at most), against 77 for two unrelated parts of the
marble. Every tenth frame, the
picture is compared with the 256-colour one, and the mean difference per channel
must stay under 16 (it reaches about 10).

The endless pond is not checked against anything, since the intro has no
such mode.
