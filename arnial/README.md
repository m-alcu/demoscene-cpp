# arnial

**ARNIAL** by LCUB (Martín Alcubierre, 1995), "the first demo from LCUB
(Spain)": rotation, zoom and pan of a 256x256 bitmap in mode X. It is
ported from its own assembler source (`ARNIAL.ASM`) to C++17 / SDL3.

## Building and running

```bash
tools/convert_inc.py ~/proy/rea/arnial data   # once (data/arnial.png is included)
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/arnial                                 # [--scale N] [--resol 1|2] [--data DIR]
ctest --test-dir build
```

Keys: **Space** pauses. Any other key quits and prints the original's
farewell text, as the DOS program did when it went back to text mode.
`--dump DIR [--frames N]` writes N frames (default 600) as PPM, plus
`frames.txt` with their CRCs.

`--resol 2` is the source's other setting (`resol = 2`): 240 rows instead
of 120. The shipped `ARNIAL.EXE` was built with `resol = 1`, so only that
setting is checked against the original.

## Checked against the original

The analysis is in `~/proy/rea/arnial-analisis`. Its harness `emu.py` runs
`ARNIAL.EXE` (packed, unpacked by its own stub) in real mode under Unicorn,
with a planar VGA model: map mask, display start, DAC and retrace. It
records the page shown at each retrace. The test steps the port through
the same **600 frames** and compares each picture and the palette: **all
match bit for bit**. That covers two full turns of the angle and more than
a full cycle of the pan.

## Data (from the .INC files)

| File | From | What |
|---|---|---|
| `arnial.png` | `ARNIAL1.INC`, `ARNIAL2.INC`, `ARNIAL3.INC` | the 256x256 bitmap (top and bottom halves; the assembler could not take one 64K file) with `PAL` as its palette |

`SINCOS.INC` is not used. Its 320 words (`Sine[0..255]`, amplitude ±256,
and `Cosine` = `Sine + 64`) are exactly `round(256 · sin(2πi/256))`, so the
port computes them with `std::sin` (`convert_inc.py` checks this).

`PAL` holds 8-bit values, and the program shifts them right by 2 for the
DAC, so the PNG keeps them unchanged.

## How it works

### The mode

320x480 mode X (Draeden/VLA's `@SetModeX x320, y480, 4, 320`) with a
cell height of 4. Each row of 80 bytes is repeated over 4 scan lines,
giving 120 rows. Each byte holds 4 pixels, one per plane. The program
writes planes 2 and 3 together, then 0 and 1 together, so the picture is
160x120 in pixel pairs. With the 320x480 pixel shape, those pixels are
square. Two pages, 19200 bytes apart, are flipped at every retrace.

### The frame

```
scale = (Sine[rot] + 256) * 16               0..8192: the zoom breathes with the angle
S = (Sine[rot]   * scale) >> 8               8.8 texels
C = (Cosine[rot] * scale) >> 8
per byte:  (ddx, ddy) = (2C, 2S)             the horizontal scan
per row:   (d2x, d2y) = (-S, C)              the vertical scan, at right angles
planes 2-3 start at (xx, yy); planes 0-1 at (xx - C, yy - S)
```

For each of the 120 rows and 80 bytes, the scan adds its step and reads
`bitmap[(v & 0xFF00) | u >> 8]`. The high bytes of the 8.8 coordinates
are the texel, so the 16-bit wrap tiles the bitmap. The second pair of
planes starts half a byte step back, so the two passes interleave into one
scan with step (C, S). The source comments call that "lo mejor".

Then `rot` goes up by 1, a full turn every 256 frames, and `yy` by 128,
half a texel down. The scale comes from the same sine as the rotation, so
the picture shrinks to one texel at `rot = 192`, the starting angle. The
first frames are therefore a single colour, and the image then grows out
of it.

### Timing

`Wait_FVR2` waits for every vertical retrace of the 480-line mode, at
25.175 MHz / (800 × 525) = 59.94 Hz, and draws one frame per retrace.
Each retrace shows the page drawn in the previous pass, so the very first
frame is the cleared page.

## Credits (from the original)

Mode X library by Draeden/VLA. The central routine (for linear mode) is
from Paul H. Kahler. The 386 detection is from Chc / Reset-Tvc. According
to the source, the bitmap is by "joaquim", shown at Party '93.
