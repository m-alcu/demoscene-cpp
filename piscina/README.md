# piscina

The pond from part 8 of **Lasse Reinbøng** (Cubic Team & $eeN, 64K intro,
party version of December 1995), moved into a swimming pool, in C++17 /
SDL3. Under the water is the bottom of a pool: a mosaic of small aqua tiles,
pale grout, and a dark blue lane line down the middle. Small waves run over
the water all the time. Drops fall into it, and their rings run outwards,
pushing the picture aside and catching the light. The sunlight that comes
through the surface is gathered on the bottom where the waves focus it:
these are the **caustics**, the bright lines that move over the bottom of a
pool on a sunny day.

The picture is 320x200, shown at 4:3. By default it is drawn in 32-bit
colour at 1280x800 (`--res WxH` for another size). **C** / `--256` shows
it in 256 colours at 320x200, as the intro's grid mapper draws it. See
[32-bit colour](#32-bit-colour).

It grew out of the [ctslasse](../ctslasse/) port's pond. The intro's three
drops come first, then more fall at random, every 1-2.7 s, or **where you
click**. Each drop uses the intro's own ring formula. The tiles, the small
waves, the caustics and the endless drops are this project's additions.
The intro's own three drops are still kept exactly, translated routine by
routine with the order of every x87 operation kept: **their grid up to T 8
matches the original's** (see [Verification](#verification)).

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/piscina        # [--256] [--res WxH] [--tiles 256] [--ripples S] [--no-caustics] [--no-drops] [--scale N]
ctest --test-dir build
```

Build in Release. A Debug build draws a frame about 3 times slower, too
slow for 60 frames a second at 1280x800.

| Key / mouse | Action |
|---|---|
| **click** | a drop where clicked |
| **D** | a drop somewhere |
| **B** | drops falling on / off (`--no-drops` starts with them off). When off, only the pool's small background waves and their caustics run. The rings already in the water finish, and a click or **D** still drops one |
| **W** | the small waves' strength: 0 (still), 0.5, 1 (the default), 1.5 (`--ripples S` sets any strength) |
| **K** | the caustics on / off (`--no-caustics` starts with them off) |
| **C** | switch between 32-bit colour (hi-res) and 256 colours |
| **M** | the tiles at 512x512 (smooth, the default) or 256x256 (the grid mapper's), in 32-bit colour (`--tiles 256`) |
| **G** | four panels in the corners. Top left: the grid over the tiles (the 41x26 points where they read the tiles, joined as the mapper interpolates them, coloured by their light level). Top right: the light table through the palette (step 0-64 down, texel across), with the steps the grid's points use. Bottom left: the palette (the DAC's 256 entries, and their red, green and blue as curves). Bottom right: the caustics map (1 = grey), with the screen framed in yellow |
| **R** | restart |
| **Space** / **Esc** | pause / quit |

`--scale N` sets the window's starting size (320x240 times N, default 3).

Headless:

```bash
piscina --dump DIR [--frames N] [--start SECONDS] [--256] [--res WxH] [--tiles 256] [--ripples S] [--no-caustics] [--no-drops]
```

This writes N frames (default 70), 70 a second, as `DIR/fNNNN.ppm`. The
random drops come from a fixed seed, so a dump is the same every time.

## How it works

Time is the intro's clock, in its own unit: T = ticks / 813440.24 (about
0.68 s).

### The bottom of the pool

`makeTiles()` draws the bottom as a function of the position, in texels of
a 256x256 tile that wraps:

- **The tiles**: squares of 8 texels, 32 to the tile, so the mosaic wraps
  with it. Each tile is aqua (palette index about 156), a little lighter
  or darker than its neighbours (a hash of its position).
- **The grout**: a texel wide between the tiles, pale (205).
- **The lane line**: four columns of dark blue tiles (58), texels
  144-176, down the middle of the screen.
- **The rim**: where a tile's glaze rounds off into the grout, a texel a
  little darker.
- **The mottling**: the intro's first fractal (diamond-square, seed
  12345678h) adds a faint unevenness to the glaze and the grout.

Each texel is the mean of 4x4 samples of this function, so the tiles'
edges are smooth. The same function is sampled at 256x256 (the grid
mapper's tile) and at 512x512 (the 32-bit picture's, twice the detail).

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
its 24-bit mantissa, would round the sums.)

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

This only works because the palette is a **ramp**: a higher index is a
brighter colour, so moving an index moves its brightness. The pool's
palette runs black (0) → lane blue (50) → deep aqua (110) → the tiles'
aqua (160) → pale cyan (210) → white (255). Towards 255 is whiter, towards
0 darker. Under a palette in any other order, the table would give noise.

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
   from below (the bottom, refracted: here the tiles) mixed with the light
   reflected from above (the sky, white): `seen = (1 − F)·bottom + F·sky`.
   With the sky at 255, this is the formula. A tilted crest
   reflects more of the sky.
2. **The "screen" blend**: with J in 0-1, `out = 1 − (1 − J)(1 − F)`.
   It adds light without passing white. A plain `J + s` would clip, and
   every bright texel would go flat white at once; this keeps them in
   order, lifts the dark ones more than the light ones, and the tiles
   still show in the glint until F nears 1.

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
129, row 64: the table's 65 rows are all the pool can reach.

The intro's own table has 130 rows: under these, levels 0-64 hold a fog
for the tunnel later in part 8. The pool never reaches them, so they are
not kept.

### The drops

Each drop is a ring whose radius grows by 8 cells per T. The intro's three
drops are centred at (20, 12), (10, 7) and (27, 9), and the second and
third start at T 1.25 and 2.25. For a point inside the ring:

- A = distance − radius (A < 0 inside the ring).
- The point is pushed out from the centre by `sin(A) · S` times its
  distance.
- `S = 2048·8/(8 − A)` for the first drop, and `2730.67·4/(4 − A)` for the
  others. So the front of the ring is strongest, and the ripples behind it
  die out like a wake.
- The light rises by `max(cos A, 0) · S · 50` over the base 3F000h. The
  crests catch the light, and the brightest go into the highlight levels.

After the intro's three, a drop falls at a random place every 1.5-4 T
(1-2.7 s), from T 4. The same ring is used for any number of drops. Once a
ring's radius passes 56 cells it has left the screen. Its strength then
fades out by 80 cells, and the drop is removed. Without this fade, the
slow ripples left behind would jump when the drop disappeared. The light
is clamped to the last table level.

### The small waves

Ten trains of sine waves run over the water all the time, each with its
own length (22 to 55 texels, about 13-33 cm with a texel of about 6 mm),
direction and speed:

- seven come from the wind's direction, spread over 100 degrees;
- three run across them, as if reflected from a wall;
- each is deep-water: its speed is `sqrt(g / k)`, slowed to half for a
  calm pool, so the long waves run faster than the short ones;
- each moves the bottom seen through it by `s · cos(phase)` along its
  direction, with the same steepness (`k · s` = 0.25) for all.

One train alone would barely move the tiles. Where several crests meet,
their curvature adds up and focuses the light into lines on the bottom.
The waves are added to the drops' u and v at every point of the grid, of
the 32-bit picture and of the caustics. **W** / `--ripples S` scales them
(0: still water).

### The caustics

The sun is taken overhead, behind the viewer. Its rays go down through the
surface as the eye's do and are bent by the same slope, so a ray that
enters the water at a point lands where the eye, looking down there, sees
the bottom: the water's u and v there, drops and waves.

- **Photons**: one is sent from every quarter texel of the surface, a
  little wider than the screen (1409x929 of them). Each lands at the
  water's u and v for its point.
- **The map**: each photon is added between the four nearest cells of a
  map of half-texel cells (768x528). At rest every cell gets the same
  light; where the waves bend neighbouring rays together, the light
  gathers, and between the lines there is less. The light is only moved,
  never made or lost.
- **The sun's disc**: a [1 2 1] blur across and down. The sun is a disc,
  not a point, so its image on the bottom is never a line of no width.
- **The light on a texel J**, E times the light at rest: darker where less
  falls (towards black, by half at most), towards white where it gathers
  (`1 − e^−x`, never past white). Up to 1.5 times is left as it is, so the
  bottom between the lines keeps the tiles' colour. A line five times as
  bright is half way to white, ten times nearly white.

The 256-colour picture lights each pixel's index this way and rounds it
back to an index. The 32-bit picture lights the texel before its light
level is applied, without rounding.

The photons are computed in bands of rows, one band per thread. Each band
adds its photons into its own map, touching only the rows they land on.
The maps are then summed and blurred in bands of the map's rows. At
1280x800 the caustics take about 10 ms on a 16-core machine.

### The palette

The pool's palette is the ramp of [Why a table](#why-a-table), 6-bit as the
DAC. Over T 0-1 it comes in from white, in 64 steps as the intro's fades
(the part before ends in white), and then stays.

### 32-bit colour

The grid holds u, v and the light in 8.24 fixed point, but the grid mapper
keeps only whole texels and whole light levels, and the DAC has 6 bits per
channel. `toTrueColor()` draws the same water without these roundings, at
any size:

- Each pixel's centre is placed on the 320x200 screen, and u, v and the
  light there are interpolated between the water points around it, with
  their fractions kept. From the grid it is bilinear, between the four
  points around it; at 320x200 these are the mapper's own pixel positions.
  From `pondFrame()`'s water at each pixel, it is Catmull-Rom, between the
  4x4 points around.
- The tiles are sampled between their 4x4 nearest texels (Catmull-Rom).
  Bilinear filtering, magnified, shows the texels as diamonds. They wrap
  at 256 texels, as the mapper's byte does.
- The caustics light the texel, read where the pixel sees the bottom.
- The light uses the table's formula at the fractional level: from 65,
  towards white by (L − 65)/64; under 65 the texel is left as it is.
- The palette index this gives is fractional too. The colour is read
  between two entries of the unrounded palette.

The water points are the grid's (41x26, 8 pixels apart) for the intro's
own drops (`frame()`, the test's): that is the intro's water, and a finer
one would no longer be its picture. As u and v wrap at 256 texels, each
point is placed from its neighbour by their difference, so that they
interpolate without jumps. In the pool, `pondFrame()` also computes the
drops and the waves at each pixel of the 32-bit picture, in floats: a
ring's front is a step in the light, which interpolated between points
further apart shows as a zigzag. The step is spread over a pixel, so the
front is a clean circle. The 256-colour picture keeps the grid.

The water and the picture are computed in bands of rows, one per thread,
on worker threads started once and reused for every frame. At 1280x800 the
water at each pixel takes about 6 ms and the picture about 4 ms.

The 32-bit picture uses the tiles at 512x512 by default (**M** /
`--tiles 256`: the grid mapper's). At 1280x800 a texel of the 256 tiles
covers about 4 pixels, more where the rings stretch the picture. The 512
tiles are the same function sampled at twice the detail, so the grout
lines stay thin and sharp.

### Floating point

The intro's arithmetic is the x87's: 80 bits, rounding to nearest. The
intro's drops (`bubbles()`) are written as expressions in `long double`,
which is that format with GCC or Clang on x86. Each expression is
evaluated in the intro's order and rounded to float or double wherever the
intro stores a value. Elsewhere (MSVC, ARM) `long double` is another format
and the build stops with a `static_assert`.

The x87 instructions become `<cmath>`: FSQRT `std::sqrt`, FSIN and FCOS
`std::sin` and `std::cos` in long double, FRNDINT + FISTP `std::lrint`.
Build with `-ffp-contract=off`, as CMakeLists does. The pool's own water,
waves and caustics are computed in floats and doubles; they have no
reference to match.

## Verification

`tests/ref.txt` was logged from the ctslasse port's part 8 (which matches
the original under `rea/ctslasse-analisis` on every frame), with a print
after each frame. For each frame it holds the clock the intro read and the
CRC32 of the screen, the DAC and the grid.

The grid does not depend on the texture or the palette, so it is still
the intro's. The test draws the intro's three drops (`frame()`) at each
logged clock up to T 8 (381 frames; after T 8 the intro goes on to effects
not kept here) and compares the grid's CRC32. Every frame matches. The
screen and the DAC are not compared, since the tiles and the pool's
palette are not the intro's.

The rest has no reference, so the test checks what it should look like:

- **The bottom**: the tiles are aqua, the grout paler than the tiles, the
  lane line dark blue, and the 512 tiles have the 256 ones' shapes (the
  means of their 8x8-texel blocks within 2 levels).
- **The caustics**: still water lights the bottom evenly (1 everywhere,
  within 1e-4). The small waves keep the mean light at 1 (within 3%),
  gather it into lines more than 3 times as bright, and leave less than 1
  on over half the bottom. The intro's drops at T 3 gather the light at
  their rings' fronts.
