# ctslasse-pond

The start of part 8 of **Lasse Reinbøng** (Cubic Team & $eeN, 64K intro,
party version of December 1995), on its own, in C++17 / SDL3. A marble
texture is seen through water (the intro's "cubic team & $een" logo, embossed
in it there, is left out). Drops fall into it, and their rings run outwards, pushing the
picture aside and catching the light. In the intro this runs from 2:19.6
(cells 2:20 and 2:25 of `rea/ctslasse-analisis/sheet.png`). The picture is
320x200, shown at 4:3, in 32-bit colour by default (**C** / `--256` shows
the intro's 256 colours; see [32-bit colour](#32-bit-colour)).

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
./build/ctslasse-pond                     # [--loop] [--256] [--scale N]
ctest --test-dir build
```

| Key / mouse | Action |
|---|---|
| **click** | a drop where clicked (endless) |
| **D** | a drop somewhere (endless) |
| **L** | switch between the endless pond and the intro, looped |
| **C** | switch between 32-bit colour and the intro's 256 colours |
| **R** | restart |
| **Space** / **Esc** | pause / quit |

Headless:

```bash
ctslasse-pond --dump DIR [--frames N] [--start SECONDS] [--loop] [--256]
```

This writes N frames, 70 a second, as `DIR/fNNNN.ppm`. The random drops
come from a fixed seed, so a dump is the same every time.

## How it works

Time is the intro's clock, in its own unit: T = ticks / 813440.24 (about
0.68 s).

### The texture

`precalc()` makes the texture as 18A6Ch does, up to the marble:

1. **Three fractals** (diamond-square: seeds 12345678h, 4D3h, 477h).
2. **The marble**: the first fractal is warped through two sine tables,
   ±70 texels, indexed by the other two.

The intro then embosses its logo into the marble (the 1820 bytes of runs at
2179Eh, blurred and used to displace it once more); that step is left out.

### The grid and the light

The picture is a grid of 41x26 points, one per 8x8 block. Each point holds
the texture's u and v and a light level, as 32-bit fixed point.

The **grid mapper** (14DF4h) fills each block by stepping the four corners
bilinearly. It keeps its variables in memory at 1E500h. Some of them are
read as dwords that straddle two variables, and each texel lands in the
low byte of a sum. The mapper is translated as it is, over a flat memory
with those variables at offsets 0-7Fh.

A pixel is `light_table[level][texel]`. There are 65 levels, and level L
maps texel J to `J·f + 128(1 − f)`, where `f = e^(L/13 − 1.5) − 0.02`.
After those come 65 more levels for the highlights, which run towards
white.

### The drops (1CB2Bh)

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
| 8-12 | The palette turns to a red and yellow one. The **wobbling plane** (1CDF8h) blends in: three sines and a twist, plus a ring of light. |
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
channel. `toTrueColor()` draws the same grid without these roundings:

- In each 8x8 block, u, v and the light are interpolated bilinearly at the
  mapper's pixel positions, with their fractions kept.
- The marble is sampled bilinearly between its four nearest texels. It
  wraps at 256, as the mapper's byte does.
- The light uses the tables' formula at the fractional level: below 64,
  `J·f + 128(1 − f)`; from 65, towards white by (L − 65)/64. Between 64
  and 65 the texel is left as it is, which both tables also give there.
- The palette index this gives is fractional too. The colour is read
  between two entries of the palettes, which are computed as the intro's
  gradients but without the integer division. The fades use the intro's
  own steps (64 per fade).

The picture is the same, without the steps between texels and levels, and
without the banding of the 6-bit gradients. The palettes are curves, so a
frame still holds only a few hundred colours, but they change smoothly.
The few stray green pixels of the 256-colour picture in the endless pond
do not appear.

### Floating point

As in the port: the x87 at 80 bits, with the transcendentals computed as
the harness's CPU (QEMU) computes them (`src/x87.h`). Build with
`-ffp-contract=off`, as CMakeLists does.

## Verification

`tests/ref.txt` is the ctslasse port's part 8, logged after each frame,
without the logo. It was logged from a scratch copy of the port; the copy
is not kept. The port matches the original under `rea/ctslasse-analisis` on
every frame. The copy has two changes:

- a print after each frame;
- the part's texture replaced by the marble. This is the tile the intro's
  precalculation holds just before it embosses the logo: T+10000h after its
  third displacement.

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

The 32-bit picture has no reference. Every tenth frame of the test, it is
compared with the 256-colour one, and the mean difference per channel
must stay under 16 (it reaches about 11, in the plane's red and yellow
palette, whose sharp steps the filtering softens).

The endless pond is not checked against anything, since the intro has no
such mode.
