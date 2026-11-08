# 2ndreal-water

The **mirror spheres on water** part of **Second Reality** (Future Crew,
Assembly '93): a raytraced picture of chrome spheres over rippled water,
with a sword flying through it, reflected and refracted by the spheres and
the water. In the survey sheet (`~/proy/rea/2ndreal-analisis/sheet.png`)
this is row 8 frames 9–10 and row 9 frames 1–4 (6:57–7:25 of the demo).

It is ported to C++17 / SDL3 from the part's own source, `WATER/DEMO.PAS` and
`ROUTINES.ASM` (by PSI), in Future Crew's public-domain source release
(github.com/mtuomi/SecondReality, Unlicense, commit `071a82e`).

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/2ndreal-water            # [--scale N] [--loop] [--data DIR]
ctest --test-dir build
```

Keys: **Space** pauses, **Right** skips the wait for the music, **Escape**
quits. `--dump DIR [--frames N]` writes PPM frames and `frames.txt` with
their CRCs (the screen's indices and the DAC).

## Checked against the original

The reference is the shipped `SECOND.EXE` run in DOSBox
(`~/proy/rea/2ndreal-analisis`, shots every 0.5 s). All 58 shots of the
part (821–878) are matched to a port frame, and the test compares each one's
320x200 indices and 6-bit palette: **all 58 match bit for bit**. They cover
the fade-in, the wait, the whole scroll and the fade-out. The matching script
is `rea/2ndreal-analisis/water/ref.py`, a numpy model of the same code.

## Data

`data/` holds only PNGs, made by `tools/convert.py` from `WATER/` in the
source release (`BKG.CLX`, `MIEKKA.SCI`, `WAT1.DAT`–`WAT3.DAT`, which are byte
for byte the data linked into the part; `tools/omf.py` pulls it out of the
`.OBJ` files to check):

```bash
tools/convert.py ~/proy/rea/2ndreal-analisis/src-ref/SecondReality/WATER data
```

| File | From | What |
|---|---|---|
| `background.png` | `BKG.CLX` (`tausta`) | the raytraced picture, 320x200, colours 0–191 |
| `sword.png` | `MIEKKA.SCI` (`_miekka`) | the sword, 400x35 (the demo uses rows 0–33), colours 192–255 |
| `wat1.png`–`wat3.png` | `WAT1.DAT`–`WAT3.DAT` | the position tables, drawn as a map |
| `palette.png` | `MIEKKA.SCI` | the 256 colours as 16x16 swatches, only for looking at |

The two indexed PNGs share the palette the demo loads (the sword file's).
It is stored as `v << 2 | v >> 4`, so the 6-bit DAC value is `value >> 2`.
`BKG.CLX`'s own palette differs only in colours 192–255 and is never loaded.

In the map images, every screen pixel that a table lists for strip pixel
(column c, row r) is coloured **R = c + 1, G = 7·(r + 1), B = 0**. Black
means the table does not touch that pixel. The big striped shape is the
sword's strip seen directly, and the small pieces are where the spheres and
the water reflect it. The `.DAT` files hold the same thing turned around:
for each strip pixel, a word count and that many screen offsets. No offset
appears twice in a table, so the image keeps all of it, and the order of
the offsets doesn't change what gets drawn. `convert.py` rebuilds the tables
from the images and checks them against the `.DAT` files. The port groups
the pixels back into per-strip-pixel lists when it loads them.

## How it works

The sword is not rendered in 3D. A 158x34 buffer (`fbuf`) holds the visible
part of the sword. Every 3 frames it scrolls one column left, and the next
column of the 400-wide sword comes in on the right (the `move` shifts the
whole buffer as one strip; `fbuf[158 + x·158]`, the start of row x+1, is
the last column of row x after the shift).

Each `WAT` table lists, for every buffer pixel in order, a word count and
that many screen offsets. These are the places where the pixel shows:
directly, and in the reflections in the spheres and the water, precomputed
by the raytracer. `putrouts1` writes the pixel to each offset. If the pixel
is 0, it writes the background pixel there instead, which erases the
sword's trail. One table is drawn per frame, in turn (1, 2, 3), so each
scroll step is drawn once with each table.

So nothing about the spheres or the water is computed at run time. The
raytracer worked out every reflection in advance, and the demo copies
bytes: about 20 instructions per pass, with no geometry and no clearing.

### How the tables were made

The scene was rendered in POV-Ray (`R1.POV`–`R5.POV`, through `RAYT.BAT`),
with the sword rectangle textured by a coordinate picture instead of the
sword. In `RGB.TGA`, red grows steadily across the picture, giving the strip
column. A fixed mask, `GREEN.CLX`, gives the row (1–34). So each screen
pixel of a render holds the strip coordinate that its ray finally hit:
directly, after a bounce off a sphere, or after a bounce off or through the
water. `DATGEN.PAS` reads those renders and writes the tables. The nice
picture (`BKG.CLX`) is a separate normal render of the same scene with no
sword.

### Why three tables

The five POV files are the same scene with the rectangle nudged further
along its path each time (`Scroll translate` 0, −0.5, −1, −1.5, −2).
`DATGEN` builds each table from a pair of consecutive renders:

```
zeta(k1, k2 → wat1.dat)    position 0    vs −0.5
zeta(k2, k3 → wat2.dat)    position −0.5 vs −1
zeta(k3, k5 → wat3.dat)    position −1   vs −2
{zeta(k4, k5 → wat4.dat)}  commented out: WAT4.DAT and R4.POV are in the
                           release, so a 4-step version was probably tried
```

The scroll moves one column every 3 frames. Each table holds the sword
about a third of a column further on than the one before. You can see it
by following one row of the strip through the three tables:

| strip column | wat1 | wat2 | wat3 |
|---|---|---|---|
| 79 | (65,50) | (64,49) | (63,48) |
| 80 | (69,52) | (68,51) | (67,50) |
| 81 | (72,53) | (71,53) | (70,52) |

Neighbouring columns are 3–4 pixels apart on screen, and each table moves
the same strip pixel about 1 pixel along the path:

```
frame 0: wat1   column position c
frame 1: wat2   c + about 1/3
frame 2: wat3   c + about 2/3
         fbuf shifts one column, giving c + 1, and wat1 again
```

With one table, the sword would jump 3–4 pixels every third frame. With
three, it moves about a pixel every frame.

The tables share no screen pixels. `DATGEN` keeps only the pixels whose
coordinate changes between the two renders it compares (`r^[x] <> r1^[x]`)
and marks each pixel it uses (`sc^[x] := 40`), so later tables skip it. The
counts add up exactly: 6176 + 6145 + 8537 = 20858 different pixels. That is
also the speed trick: a frame writes only 6–8k pixels, about a third of the
work. The price is that a given screen pixel is redrawn only on its table's
frame, once every three. The smooth movement comes from different pixels
updating on different frames, and no single frame shows a complete sword
at one position.

None of this is stated in the source. It is inferred from `DATGEN.PAS`,
the POV files and the offsets in the tables.

### Timeline (70 Hz frames)

| Frames | What |
|---|---|
| 0–126 | Fade-in from black (one step every other frame) while the tables are drawn with an empty buffer |
| 127–643 | Waiting for the music: the next order, row ≥ 16 (`int 0FCh` function 6). 517 frames, measured from the DOSBox run (±2) |
| 644– | Main loop: the sword scrolls through and off (`scp` stops at column 390) |
| main + 1332 | The music sync value −11 starts the fade-out; 64 steps, then the part ends (2040 frames in all) |

The port has no music, so these two sync points are fixed frame numbers.
The fade-out frame is exact: the shots taken during the fade fit only that
starting frame.

### A quirk kept

Both fades use `for pf := 0 to 3` over 3-byte colours, so each step also
moves the next colour's red by one (and colour 255 touches `pal[768]`).
Reds fade at up to twice the speed. The DOSBox palettes show this, and the
port does the same.
