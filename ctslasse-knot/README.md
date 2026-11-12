# ctslasse-knot

Part 5 of **Lasse Reinbøng** (Cubic Team & $eeN, 64K intro, party version
of December 1995), on its own, in C++17 / SDL3: a trefoil knot made of a
twisted tube, environment-mapped and textured, turning in front of a
rocking rotozoomer of blurred hexagons. It is drawn at 320x200 with 256
colours (mode 13h) and shown at 4:3. In the intro it runs from 0:57.7 to
1:08.6 (frames 4040-4801).

It is cut out of the [ctslasse](../ctslasse/) port. Only what this part
uses is kept, and it works over plain arrays instead of the intro's memory.
The routines are translated one by one and keep the order of every x87
operation, 80-bit intermediates included. **All 762 frames are identical to
the original's**, the picture and the DAC (see Verification).

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/ctslasse-knot                     # [--hires] [--8bit] [--scale N] [--loop]
ctest --test-dir build
```

By default the palette comes in from white and the knot flies in, as in the
intro, and then it **runs on without end**. `--loop` (or **L**) plays the
part with its own timeline instead: about 10.9 s, fading out at the end,
over and over.

| Key | Action |
|---|---|
| **L** | endless / the part's timeline, looped |
| **R** | restart |
| **C** | switch the colours: 24-bit / the intro's 256 colours |
| **T** | show the precalculated textures in the corners: the lighting table (grey), the knot's texture (each ramp's colour), the hexagons, the palette |
| **Space** / **Esc** | pause / quit |

Headless: `ctslasse-knot --dump DIR [--hires] [--8bit] [--frames N] [--start SECONDS] [--loop]`
writes N frames at 70 per second as `DIR/fNNNN.ppm`.

`--hires` draws at 640x400 instead of 320x200. The projection, the
rotozoomer's 8x8 block grid, its zoom and centre, and the filler's
"flat triangle" threshold are scaled to match. The textures are still the
same 256x256 tiles, so the edges get sharper but the texels don't. Only
the 320x200 output is checked against the original.

It draws in **24-bit colour** by default (see below). `--8bit` (or **C**)
draws in the intro's 256 colours, which is the picture the tests check.

A frame takes about 0.4 ms in 256 colours and 0.8 ms in 24-bit at
320x200, and 1.2 ms and 2.6 ms at 640x400 (Release build).

### 24-bit colour

In 256 colours a pixel is a palette index. On the knot it is
`light + material`: the material picks one of the 8 ramps (×32) and the
light picks the shade (0-31). The background is shades of ramp 2. That
gives at most 256 colours, with visible banding in the light and blocky
texels. The 24-bit mode draws the same scene with the same geometry,
attributes and timing, but computes the colours differently:

- **Light**: the lighting table is kept as floats, from the value before
  it is rounded to 5 bits (18FF9h), and filtered bilinearly.
- **Ramps**: each ramp is evaluated as a continuous function of the shade
  (black → its colour over 0-18, → white over 18-32). At whole shades it
  gives the palette's entries before their 6-bit rounding.
- **Material**: the ramp colours of the four nearest texels are blended
  bilinearly. A ramp is linear in its colour, so this blends the ramps.
- **Background**: the hexagons are blurred without truncation, filtered
  bilinearly, and drawn per pixel instead of the 8x8-block mapper.
- **Fades**: they are done per pixel, from the unrounded part time,
  instead of on the 6-bit DAC.

The result is not the original's picture. In this mode `screen()` is not
drawn, and `toArgb()` returns the 24-bit picture.

## How it works

### Time

The part reads the intro's clock, PIT ticks at 1193182 Hz, and counts in
its own unit: T = ticks / 813440.24 (about 0.68 s). Over T 0-0.5 the
palette comes in from white. Over T 0-2 the knot flies in from behind and
above, along `(0, 3, 5) · (1 − cos(T − 2))`. Over T 15-16 the palette fades
out. The part ends when the music reaches order 10, at T ≈ 15.97.

### The background

The 256x256 texture is built in the precalculation:

1. **Hexagons** in three palette entries (45h, 4Ch, 54h), from a
   triangular grid in integer arithmetic (185D5h).
2. **Blurred** with a 3x3 box (16EA6h).

The **rotozoomer** (1B8E3h) draws it each frame over the whole screen.
Zoom is −0.5 (mirrored, the texels twice as big) and pixels are 5/6 as wide
as tall. The angle `1.5 · (|T mod 2 − 1| − 0.5)` rocks the hexagons back and
forth by 0.75 radians. The texture mapper (14BDBh) draws in 8x8 blocks with
a self-patching inner loop. Its 8.16 coordinates are split across two
registers, the fraction's carry going into the other register's integer
byte. It is kept register by register, because those carries decide which
texel a pixel gets.

### The knot

- **Path** (19C1Ah): a trefoil knot,
  `(1.8 cos 2u − cos u, 1.8 sin 2u + sin u, 0.8 sin 3u)`. The tube's radius
  is 0.4.
- **Tube** (1806Fh, 17F6Dh): 48 rings of 6 vertices. A frame is carried
  along the path: the up vector is turned by the turn of the tangent and
  kept orthogonal. Odd rings are offset by half a step. The whole tube is
  twisted by 3.8 radians over its length. That makes 288 vertices and 576
  triangles.
- **Camera and object**: the camera sits 3.8 units from the centre, rolling
  by 0.1·T. The knot turns about y (0.2436·T + 12), then about its own
  turned x axis (0.4025·T + 0.4).
- **Engine** (17942h):
  - back faces dropped;
  - a quicksort far to near on the sum of the vertices' squared distances,
    kept as is because it decides how equal depths are ordered;
  - projection to 16.16.
- **Shading**: each triangle is filled with **two textures added**:
  - **The light**: a table of a soft spot with a hot centre (18FF9h),
    values 0-31, at the **environment-mapped** coordinates, from the
    normal's x and z.
  - **The material**: a fractal noise of 8 levels (diamond-square, 16DCAh),
    displaced by two sine-warped tables made from two more noises (16E81h).
    Its values are ×32, at the tube's texture coordinates: once around,
    seven times along (see below).

  So the material picks one of the **8 colour ramps** of the palette, and
  the light picks the shade within it. Each ramp runs black → a colour (18
  steps) → white (14 steps), and the colours are greys, browns and greens
  (189ECh). The filler (16601h) steps the edges and four attributes in
  16.16, with the gradients from the triangle's plane.

### The knot's texture

The material looks random, but it is pseudo-random from fixed seeds, so it
comes out the same on every run (the tests check its CRC against the
intro's). `precalc()` builds it in three steps.

**1. Three fractal noises** (16DCAh):

```cpp
plasma(0x17091977, t0, 0x1F4, 3);   // the base: 3 bits, values 0-7
plasma(0x4D3,      t1, 0x1F4, 8);   // a helper noise: 8 bits, 0-255
plasma(0x477,      t2, 0x1F4, 8);   // another one
```

Each is a **diamond-square** over a 256x256 tile that wraps both ways:

- **Generator**: a linear congruential one, `seed = seed * 0x15A4E35 + 1`,
  taking the signed high half (−32768..32767).
- **Start**: `t[0]` gets a random value.
- **Eight levels**: the step starts at 256 and halves down to 1. A step of
  256 is kept as `dh = 0`, as the 8-bit register wraps. At each level:
  - the **centre** of each square is the average of its 4 corners plus a
    random value × 3;
  - the **midpoint of each side** is the average of its 4 neighbours plus
    a random value × 2.
- **Amplitude**: the random part is scaled by `amp` (1F4h = 500) and
  shifted right by 17, and the amplitude **halves at each level**. At the
  first level a centre moves by about ±94, so the large scales vary a lot
  and the small ones come out smooth.
- **Clamping**: each value is clamped to `[0, 2^bits − 1]`.

`t0` has only 3 bits (0-7), so at the first levels the random part is far
larger than the range and saturates. That gives blobs of 8 levels with
ragged edges.

**2. Two displacement tables** (18B76h), for `i` from 0 to 255, from the
first row of `t1` and `t2`:

```
tx[i] = round(t2[i]/2 − 80·sin(0.04·i))
ty[i] = round(t1[i]/2 + 80·cos(0.04·i))
```

Each is a wave of amplitude 80 with noise on top, computed on the emulated
x87 so the rounding matches the original.

**3. The base warped** (16E81h):

```cpp
dx = tx[t1[k]], dy = ty[t2[k]];
plasma_[k] = t0[(row + dy, column + dx)] << 5;
```

Each pixel of `t0` is read displaced. The displacement does not depend on
the pixel's position but on the **values of the noises `t1` and `t2` at
that pixel**, passed through the wave tables. This is what is now called
*domain warping*: the blobs of `t0` get stretched and twisted into a
marbled, camouflage-like pattern.

Finally `<< 5` multiplies by 32, so 0-7 become 0, 32, …, 224: the starts of
the **8 ramps** of the palette. The texture does not hold a colour but
**which ramp** each point uses. The light table gives the shade within the
ramp when the knot is drawn (`index = light + material`). In 24-bit mode
the ramp colours of the 4 nearest texels are blended.

Any other seed gives a different marble in the same style, but then the
8-bit picture no longer matches the original's. `0x17091977` reads like a
date (17-09-1977), probably the author's own touch.

### Floating point

As in the port: the x87 at 80 bits, the transcendentals as the harness's
CPU (QEMU) computes them, through doubles (`src/x87.h`, from the port). The
values the routines leave on the x87 stack are kept there. Build with
`-ffp-contract=off`, as CMakeLists does.

## Verification

`tests/ref.txt` comes from the original running under the analysis harness
(`rea/ctslasse-analisis`). The test checks:

- the CRC of the three textures and of the palette, read from the intro's
  memory at the start of the part;
- for each of the part's 762 frames, the clock the intro read in that frame
  and the CRC of the picture and of the DAC (from `ref/full.txt`).

The test draws each frame at that clock and compares. Everything matches.

The clocks do not follow a formula. Some frames start late, because the
music player takes time on the timer interrupt. They were logged from a
copy of the ctslasse port with one print added to part 5. The copy is not
kept: the port matches the original on all its frames, and `full.txt` is
the original's. The picture's CRC is taken as the reference takes it, over
the VGA's memory scanned plane by plane.
