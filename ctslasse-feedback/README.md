# ctslasse-feedback

Part 6 of **Lasse Reinbøng** (Cubic Team & $eeN, 64K intro, party version
of December 1995) on its own, in C++17 / SDL3: a feedback zoomer. Only the
picture in the middle is drawn, 256x198 with a 64-colour palette, shown at
the intro's 4:3 pixel aspect. The scroll of words down the screen's sides
is left out. In the intro the part runs from 1:08.6 to 1:46.8. By default
this starts at the part's 20th second, about 1:28.6 in the intro, where the
blue-red palette is coming in and the zoom starts to sway (the cells
1:30-1:45 of `rea/ctslasse-analisis/sheet.png`).

It is cut out of the [ctslasse](../ctslasse/) port. Only what this part
uses is kept, and it works over plain arrays instead of the intro's memory.
**All 3034 frames of the part match the intro's**: the picture, the DAC and
both of the effect's buffers (see Verification).

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/ctslasse-feedback                 # [--start SECONDS] [--loop] [--scale N]
ctest --test-dir build
```

The panel on the left (in Spanish) takes the effect apart while it runs.
The picture is on the right. See The workbench, below.

| Key | Action |
|---|---|
| **Space** / **N** | pause / one frame |
| **R** | restart (at `--start`) |
| **L** | switch between endless and the part's own timeline, looped |
| **C** | clear A and B to black |
| **B** / **F** | blur / feedback on and off |
| **I** | the intro's values |
| **Esc** | quit |
| click / drag on the picture | fix the point there |

The keys work when the panel does not have the keyboard focus.

- **`--start S`**: the part time in seconds to start at, 0-38 (20 by
  default). The effect feeds back on itself, so the frames before S are
  still drawn, unseen, from the part's start. That takes about 0.2 s.
- **Endless** (the default): it runs on past the part's end. Every motion
  is a sine of the time, so it never settles. It restarts after 30 minutes,
  when the intro's 32-bit clock would overflow.
- **`--loop`** (or **L**): it stops where the intro's part ends, T ≈ 38.2 s,
  and goes back to S.

Headless:

```bash
ctslasse-feedback --dump DIR [--frames N] [--start S] [--loop]
```

This writes N frames, at the effect's 79.5 a second, as `DIR/fNNNN.ppm`,
with the intro's values.

A frame takes about 0.4 ms (Release build).

## How it works

The part keeps three 64K tiles in one 64K-aligned block: A, B and the font.
Time is the intro's clock, PIT ticks since the part began, and
T = ticks / 1193182 is in seconds. The part draws at most one frame every
15000 ticks, which is 79.5 frames a second. Each frame:

1. **Palette**: over T 16-24 it is mixed in 64 steps. It goes from black,
   blue and white to grey, black, blue, red and yellow, in four gradients
   of 16 entries.
2. **The point**: a point on two sines,
   `(128 + 110 sin(0.4545T + 0.123), 100 + 85 sin(0.3448T + 123))`, is set
   to 3Fh in A for the first third of each 1/2.93 s.
3. **The dots**: 100 dots on Lissajous paths each draw a 5-pixel cross into
   A, in values 20h-3Fh. Their speeds and phases come from the part's
   generator (`seed * 15A4E35h + 1`, seed 1).
4. **The title**: "CUBIC TEAM SEEN" and "LASSE REINBONG" take turns on row
   160 of A, each for 8/2.93 s. The font is a 64K tile of 16x16 glyphs, a
   mask of runs of 0 and 3Fh (`src/font.inc`, from the intro's data at
   21EBAh).
5. **Blur**: A is averaged into B, each pixel from its 4 neighbours (15143h).
   It works four bytes at a time, and the low 2 bits of each sum are carried
   into the next four. Then B's border is cleared. A's row offsets reach into
   B, as in the intro.
6. **Shown**: B is what the intro copies to the screen (rows 1-198 at x=32).
7. **Fed back**: B is rotozoomed back onto A about the point (14BDBh, 32x25
   blocks of 8x8). It is kept register by register, as in the knot. The zoom
   depends on the time:
   - it shrinks from 1.0 to 0.75 (16.16) by T 8.3;
   - from T 15 it also grows and turns;
   - from T 20 it breathes, `62000 − 5000 cos(0.5(T − 20))` (0.87-1.02), and
     sways by `0.4π sin(0.286(T − 20) + 0.5)` radians.

   A step below 1 samples B closer to the point than the pixel being drawn,
   so the picture is pushed out from the point each frame (and drawn back in
   when the step goes above 1). See The trick, below.

The intro's initial noise in A and B is overwritten by the same fractal
(16DCAh, seed 17091977h). Only the generator's state is left of it, which
the dots use. The font's fractal is entirely covered by its mask, so it is
not made.

### The trick

This is video feedback, the effect you get by pointing a camera at its own
monitor. Very little is drawn from scratch each frame. Each frame is the
last one, enlarged about a point and blurred, plus a few new pixels:

```
        ┌──────────────────────────────────────────────────┐
        ▼                                                  │
  A ── seeds ──► A ── 4-neighbour blur ──► B ── rotozoom ──┘
      (point,                              │   (enlarge / turn
       100 dots,                           │    about the point)
       title)                              ▼
                                         screen
```

The rings, trails, spirals and smoke are not drawn anywhere. They come out
of that loop:

- **The zoom drives the motion.** `zoom` is the texture step per pixel
  (16.16). Below 65536, each pixel of A samples B closer to the point, so
  the picture is enlarged about the point and everything flows outward.
- **Most of the picture is the title.** It is the largest seed, a band of
  3Fh pixels 16 rows tall, and it is written sharp each frame. Its older
  copies are pushed away from the point, each one larger, as rays. Around
  T 12 they stack into a pyramid of titles. From T 20 they are turned and
  smeared into the big yellow wedges. Without the title, the wedges are
  dark.
- **The dots leave trails.** Their older copies are pushed further out and
  blurred more each frame, like comets flying away from the point.
- **The point leaves a disk.** Near the fixed point the picture hardly
  moves, so the point's value stays there and fills a disk around it. The
  disk is dark, because the point is 0 two thirds of the time. On its own
  the point leaves little else.
- **The straight grey bands are the border.** The blur clears the border to
  0, which is grey in the second palette. When the point is near an edge,
  the rotozoom pulls that border in and stretches it, and the turn sets its
  angle.
- **The blur stands in for physics.** Enlarging alone would only give fat
  pixels. With the blur, the picture behaves like a fluid: the blur
  diffuses and the zoom carries things outward.
- **The camera changes over time.** From T 15 the picture also turns each
  frame, so the echoes become spirals and fans. The turn reaches 72° a
  frame, more than the eye can follow at 79.5 frames a second. From T 20
  the step swings between 0.87 and 1.02. Above 1 the picture is drawn back
  in towards the point, so the flow breathes in and out.
- The start is the fractal plasma in A and B, which the zoom carries away.

The tricks of a 1995 implementation:

1. **The blur works four bytes at a time in one 32-bit register.** This is
   why the palette has 64 colours: 4 · 63 = 252 fits in a byte, so no sum
   overflows into the next byte. `(sum & FCFCFCFCh) >> 2` then divides all
   four by 4 without mixing them.
2. **The remainder is carried as dithering.** The 2 low bits lost in each
   division (`sum & 03030303h`) are added to the next four pixels. Without
   this error diffusion, the truncation would darken the picture a little
   each frame, and the feedback would add it up.
3. **The texture wraps for free.** It is 256x256, and the texel address is
   BX (BH the row, BL the column), so it wraps without any masking.
4. **The mapper interleaves its fixed-point registers.** EDX holds the
   fraction of u in its high half and the integer part of v in DL. ECX holds
   the reverse. One `add` and one `adc` step both coordinates, and each
   fraction's carry goes straight into the other register's integer byte.
   That is about 2 instructions per texel.
5. **The mapper modifies its own code.** The steps are patched in as
   immediates of the inner loop (14B14h), so they take no registers.
6. **The mapper works in 8x8 blocks.** It goes along rows or down columns of
   blocks, whichever follows the larger step, which keeps texture reads in
   the 486/Pentium's cache while the picture turns.

The effect has no model of what it draws, only a local rule (enlarge, turn,
blur) applied to its own output, plus a few pixels of input. That is also
why the port has to keep every x87 operation in order. Any difference of
one bit is fed back and grows frame after frame.

### The workbench

The panel changes the frame through `feedback::Params`. Its defaults are
the intro's, and with them `frame()` runs exactly the original. The test
checks this. A change only skips or replaces a step, and the x87's work is
still done, so turning a change off again gives back the intro's motion.

- **Estado**: T, the zoom step and how much the picture grows each frame,
  the turn in degrees a frame, and where the point is.
- **Tiempo**: pause, one frame, the frame rate (1-80), and how far T
  moves each frame. At 0, the camera and the seeds stop but the feedback
  goes on. **Ir a T** draws from T = 0 with the current values. **Limpiar
  A y B** sets both to black, and the effect builds itself again from the
  seeds.
- **1. Semillas**: the point (blinking, always lit, or not drawn), how
  many dots, and the title.
- **2. Blur**: on (or A copied to B as it is), and whether the 2 lost bits
  are carried on.
- **3. Rotozoom**: the feedback on (or A cleared each frame), the camera by
  hand (step 0.5-1.25 and turn ±90°), and the point fixed (sliders, or a
  click on the picture).
- **Vista**: B (the screen) or A (B fed back, which is where the next frame
  starts). The colours can be the intro's DAC, either of its palettes, or
  grey (the value 0-63). The point can be marked with a cross.

**Experimentos** set the intro's values with one change each. Each one
shows one part of the trick:

| | What it shows |
|---|---|
| Solo semillas | without feedback: all that is really drawn each frame |
| Ecos del título | the title alone, the point below it: its copies fan out in rays |
| Estelas | the dots alone, the point in the middle: comet trails |
| Espiral | the title turned 9° a frame |
| Bordes | the point near a corner and 63° a frame: the grey bands |
| Solo el punto | the point alone leaves almost nothing |
| Contraer | a step above 1: everything is drawn into the point |
| Sin blur | fat pixels, stretched |
| Sin acarreo | the truncation loses a little each frame, and the picture darkens |

### Floating point

As in the port: the x87 at 80 bits, with the transcendentals computed as
the harness's CPU (QEMU) computes them, through doubles (`src/x87.h`, from
the port). Build with `-ffp-contract=off`, as CMakeLists does.

## Verification

`tests/ref.txt` is the ctslasse port's part 6, logged after each frame. It
was logged from a scratch copy of the port with one print added; the copy
is not kept. The port matches the original under `rea/ctslasse-analisis` on
every frame. For each of the part's 3034 frames, the reference holds:

- the clock the intro read;
- the CRC32 of the picture shown (B's rows 1-198);
- the CRC32 of DAC entries 0-63;
- the CRC32 of the tiles A and B.

The test draws the frames in order at those clocks and compares. Everything
matches.

Outside the test, the frames are drawn at clocks 17046 + 15000·n. The
intro's own clocks drift by a few ticks, because the music player takes time
on the timer interrupt.

ImGui is vendored in `src/vendor/imgui`, copied from
[ctslasse-textures](../ctslasse-textures/).
