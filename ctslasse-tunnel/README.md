# ctslasse-tunnel

Part 8 of **Lasse Reinbøng** (Cubic Team & $eeN, 64K intro, party version
of December 1995), from T 12 to its end, on its own, in C++17 / SDL3. It
covers cells 2:30-3:05 of `rea/ctslasse-analisis/sheet.png`. The cell at
3:10 is already part 9.

A marble texture in red, yellow and blue moves on a plane of waves. Then a
tunnel fades in over it, and its walls ripple like water while it twists,
zooms and breathes. The part fades to black at T 72, which is 3:08.6 in the
intro. The picture is 320x200 with 256 colours, shown at 4:3.

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
./build/ctslasse-tunnel                   # [--start SECONDS] [--endless] [--logo] [--scale N]
ctest --test-dir build
```

- **Looped** (the default): it plays from `--start`, which is in seconds
  into the part, to the part's end. The default start is 8.2 s, T 12, where
  the plane is alone. The end is at 48.9 s (T 72), after the fade-out. Then
  it goes back to the start.
- **`--endless`** (or **E**): there is no fade-out, and it runs on with the
  tunnel turning and breathing.
- **`--logo`** (or **G**): the intro's texture, the original's picture.

| Key | Action |
|---|---|
| **E** | switch between looped and endless |
| **G** | turn the logo on or off |
| **Left** / **Right** | go 5 s back / forward |
| **R** | restart |
| **Space** / **Esc** | pause / quit |

Headless:

```bash
ctslasse-tunnel --dump DIR [--frames N] [--start S] [--endless] [--logo]
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
| 68-72 | The fade to black. |

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

Outside the test there are a few changes, none of which happen in the
intro:
- Without the logo, only the texture is different.
- When the time goes back (a loop or a seek), the palette is set again.
- In endless mode, the palette is held instead of faded.
