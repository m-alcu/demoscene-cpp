# ctslasse-tunnel

Part 8 of **Lasse Reinbøng** (Cubic Team & $eeN, 64K intro, party version
of December 1995), from T 12 to its end, on its own, in C++17 / SDL3. It
covers cells 2:30-3:05 of `rea/ctslasse-analisis/sheet.png`. The cell at
3:10 is already part 9.

A marble texture in red, yellow and blue moves on a plane of waves. Then a
tunnel fades in over it, and its walls ripple like water while it twists,
zooms and breathes. The part fades to black at T 72, which is 3:08.6 in the
intro. The picture is 320x200 with 256 colours, shown at 4:3. By default it
is drawn in 32-bit colour at 1280x800 (`--res WxH` for another size);
**C** / `--256` shows the intro's 256 colours at 320x200. See
[32-bit colour](#32-bit-colour).

It is cut out of the [ctslasse](../ctslasse/) port, and the whole of part 8
is in it. Every frame depends only on the time, so it can start anywhere.
The routines are translated one by one, keeping the order of every x87
operation. **All 3435 frames of the part are identical to the original's**
with the intro's texture (`--logo`): the screen, the DAC and the grid (see
Verification).

By default the texture is the marble without the intro's embossed
"cubic team & $een" logo, as in [ctslasse-pond](../ctslasse-pond/).

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/ctslasse-tunnel                   # [--start SECONDS] [--endless] [--logo] [--256] [--res WxH] [--linear] [--scale N]
ctest --test-dir build
```

- **Looped** (the default): it plays from `--start`, which is in seconds
  into the part, to the part's end, 49.1 s (T 72), over and over, without a
  seam. The default start is 8.2 s, T 12, where the plane is alone. See
  [The loop](#the-loop).
- **`--endless`** (or **E**): it runs on with the tunnel turning and
  breathing.
- **`--logo`** (or **L**): the intro's texture, the original's picture.
- **`--256`** (or **C**): the intro's 256 colours at 320x200, exactly its
  picture; by default, 32-bit colour at `--res` (1280x800).
- **`--linear`** (or **I**): the 32-bit picture interpolates the grid
  bilinearly, as the mapper does; by default, smoothly (Catmull-Rom).

| Key | Action |
|---|---|
| **E** | switch between looped and endless |
| **L** | turn the logo on or off |
| **C** | switch between 32-bit colour (hi-res) and the intro's 256 colours |
| **I** | the 32-bit picture's interpolation: smooth or bilinear |
| **G** | the inspector, in the corners: top left, the grid on the texture (the 41x26 points where they read the 256x256 tile, wrapped, joined as the mapper interpolates them, coloured by their light level); top right, the light table through the palette (level 0-129 down, texel across), with the levels the grid's points use; bottom left, the palette (the DAC's 256 entries and their red, green and blue as curves); bottom right, the frame's parameters (T, what is drawn and the blend, the tunnel's twist, zoom, wave, phase, turn and depth, the light levels in use) |
| **Left** / **Right** | go 5 s back / forward |
| **R** | restart |
| **Space** / **Esc** | pause / quit |

Headless:

```bash
ctslasse-tunnel --dump DIR [--frames N] [--start S] [--endless] [--logo] [--256] [--res WxH] [--linear]
```

This writes N frames, 70 a second, as `DIR/fNNNN.ppm`.

## How it works

Time is the part's own unit: T = PIT ticks / 813440.24, about 0.68 s. The
picture is a grid of 41x26 points (texture u, v, light level), one per 8x8
block. The intro's **grid mapper** (14DF4h) fills each block between the
four corners and looks each texel up in a light table of 65 + 65 levels.
That mapper, the texture and the light tables are the same as in
ctslasse-pond. Each frame:

1. **Two grids.** The plane is the first, and the tunnel is written over it
   when the tunnel is in. They are blended,
   `grid = grid·a + grid2·b` with `a + b = 4096` (150BEh).
2. **The plane** (1CDF8h). The grid is turned by T/3 and pulled by three
   sines whose strengths grow with T. A ring of light moves out from the
   centre and pushes the points outwards.
3. **The tunnel** (1C5CBh). For each point, with r its distance from the
   screen's centre:
   - u is its angle in 256ths, plus a twist;
   - v is a depth, zoom / r, plus the forward movement (T·23.1·4096 per T);
   - the light falls off with the depth.

   The radius waves by `sin(angle · twist + phase) · wave`. That is the
   water on the walls.
4. **The light and the colours.** The palette is red-yellow and blue.
   Light levels above the base run towards white.

### The timeline

| T | What happens |
|---|---|
| 12-33 | The plane alone. |
| 33-38 | The tunnel blends in over the plane, `(1 + cos)/2`. |
| 38 | The tunnel alone. |
| 39-42 | The walls start to wave (eased in, 0.8). |
| 42-46 | The twist steps up, and the wave swings with `cos`. |
| 46-48 | Twist 5. The wave eases down to 0.2, and the phase spins. |
| 48-55.5 | The zoom breathes, `500 · (1 + A sin(π(T − 48)))`, A easing in to 0.8. |
| 55.5-60 | Twist 3, wave 0.6, the phase at 2T. |
| 60-66 | The wave dies out, swinging with `cos(π(T − 60))`. |
| From 62 | The zoom breathes at `sin(1.5T)`, ±85%. |
| 68-72 | The fade to black (in the intro; here, the loop's morph instead). |

### The loop

The intro fades the part out to black over T 68-72. Looped, the fade is
left out, and over the last 5 T (T 67-72, 3.4 s) the frame turns into the
frames that follow the start: at a time t in it, `morph()` makes the frame
at t and the frame at `start + (t − (end − 5 T))`, and mixes them:

- their grids, point by point: u and v by their difference, the shorter
  way round the 256-texel wrap; the light as it is;
- their DACs (with the default start both are the red palette).

The weight eases in and out, `(1 − cos)/2`, the curve of the intro's own
blend of the tunnel in over the plane (T 33-38), and as long. At the end
the frame *is* the one 5 T after the start, so the loop goes on from
there: the start itself is shown only the first time, and each loop after
lasts 49.1 − 8.2 − 3.4 = 37.5 s. With the default start the tunnel opens
out and swirls back into the waving plane. `--start` is held to 42.3 s at
most, so that a loop is at least as long as its morph. Endless mode does
not morph.

### 32-bit colour

The grid holds u, v and the light in 8.24 fixed point, but the grid mapper
keeps only whole texels and whole light levels, and the DAC has 6 bits per
channel. `toTrueColor()` draws the same grid without these roundings, at
any size (about 4 ms at 1280x800, in bands of rows, one per thread):

- Each pixel's centre is placed on the 320x200 screen, and u, v and the
  light there are interpolated between the grid's points around it, with
  their fractions kept. By default with Catmull-Rom, between the 4x4
  points around: the tunnel's depth, zoom / r, is curved, and bilinear
  shows it as 8x8 facets at this size. With **I** / `--linear`, bilinearly,
  as the mapper does (at 320x200 these are its own pixel positions).
- u and v wrap at 256 texels. The points around each pixel are placed from
  one of them by their differences, so they interpolate without jumps.
  ctslasse-pond unwraps the whole grid from one point; here that cannot
  work: the tunnel's u is its angle, once round the centre, and the rows
  above and below it would come out 256 texels apart (a seam of streaks
  to the right of the centre).
- The texture is sampled between its 4x4 nearest texels (Catmull-Rom),
  wrapping at 256 as the mapper's byte does.
- The light uses the table's formulas at the fractional level: under 64
  the fog, `J f + 128 (1 − f)` with `f = e^(1.5 − (64 − L)/13) − 0.02` (at
  most 1, so from level 45 the texel is as it is); from 65, towards white
  by (L − 65)/64.
- The palette index this gives is fractional too. The colour is read
  between two entries of the palettes, which are computed as the intro's
  gradients but without the integer division, faded with the intro's own
  steps (64 per fade), and held at 63 (the blue palette's middle is 64,
  which the 6-bit DAC wraps to 0).

The palette is not a ramp (green-grey, purple, light blue, black, red,
yellow), so an index between two texels is a third colour. The texture is
smooth enough that neighbouring texels are close in index, and the
picture keeps the intro's colours. Far into the tunnel, u and v change
faster than the grid can follow, in the intro too; there the fog leaves
only index 128, the light blue of the far end.

The texture stays the intro's 256x256 tile (with or without the logo):
ctslasse-pond's 512x512 marble is not made here.

### The inspector (G)

The panels show what each frame is made of: the grid's points on the
texture tile (the plane is a square mesh, waving and turning; the tunnel's
points are rings, u its angle across the tile, v its depth down it, moving
as it flies), the light table with the fog rows over the highlight rows and
how many points use each level, the DAC as it fades, and the parameters
`frame()` passed to the tunnel. None of this changes the picture: the
parameters are recorded as the routines are called (`Tunnel::info()`).

### Floating point

As in the port: the x87 at 80 bits, with the transcendentals computed as
the harness's CPU (QEMU) computes them (`src/x87.h`). Build with
`-ffp-contract=off`, as CMakeLists does.

## Verification

`tests/ref.txt` is the ctslasse port's part 8, logged after each frame. It
was logged from a scratch copy of the port with one print added; the copy
is not kept. The port matches the original under `rea/ctslasse-analisis` on
every frame. The reference holds:

- the CRC32 of the texture and of the light tables;
- for all 3435 frames of the part (T 0-72), the clock the intro read and
  the CRC32 of the screen, of the DAC and of the grid.

The test builds the texture with the logo, as the intro does, draws every
frame at its clock and compares. Everything matches.

The 32-bit picture has no reference. Every tenth frame, the test draws it
at 320x200 (bilinear) and compares it with the 256-colour one: the mean
difference per channel must stay under 24. It reaches about 18, where the
tunnel shows the texture shrunk: the mapper takes one texel per pixel, the
32-bit picture filters between them, and in this palette an index between
two others is another colour.

Outside the test there are a few changes, none of which happen in the
intro:
- Without the logo, only the texture is different.
- When the time goes back (a loop or a seek), the palette is set again.
- There is no fade-out: looped, the end morphs into the start; endless,
  the palette is held.
- The 32-bit picture, which is drawn from the same grid and DAC.
