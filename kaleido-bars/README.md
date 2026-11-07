# kaleido-bars

A C++17 / SDL3 port of the **vertical bars** scene of **Kaleidoscopico** by LFT
(Linus Åkesson), a demo for the Raspberry Pi Pico 2 (RP2350, RISC-V cores)
released at Revision 2025. It translates the original firmware routine by
routine; it is not a remake. Every frame matches the original firmware run
under the harness in `../../rea/kaleido-analisis`.

The scene is parts 15-17 of the demo's part table, global frames 4739-5625
(song position 4553-5440, about 14.8 s):

- part 15: a dark blue screen in two shades;
- part 16: two rotating edges sweep away the blue and uncover the scrolling
  carbon-fibre background;
- part 17: the bars slide in, sway, and leave again. From position 4690 the
  background bounces to the beat.

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/kaleido-bars                         # [--scale N] [--loop] [--data DIR]
ctest --test-dir build                       # the port against the original
```

The window shows the 1024x768 VGA picture at 60.004 Hz. Esc quits. The
scene plays once and then exits; `--loop` repeats it. There is no sound:
the music is a 12-channel synthesizer that runs on core 1, and it is not
part of this port.

Headless: `kaleido-bars --dump DIR [--ppm A:B]` writes `DIR/frames.txt`,
one line per frame with the global frame number and the CRC-32 of the
512x768 RGB24 picture. `--ppm` also saves frames A..B-1 as PPM files.

## Data

The port needs only `data/bars.png` (1024x128) and `data/carbon.png`
(512x256). In the firmware both textures are LZ-packed (at 0x10014228 and
0x100270c8). Here they are indexed PNGs, where each palette index is the
4-bit pixel value the hardware reads: 0 is transparent and 4, 6, 8, 10, 12
and 14 are the layer's six colours. The palettes show the colours the
copper lists give those values, so the files look right in an image viewer.
The port reads only the indices and still takes the colours from the copper
lists. `SDL_LoadPNG` loads them (SDL 3.4).

`tools/make_textures.py lft-kaleidoscopico.bin data/` recreates both files
from the original firmware. It needs Pillow.

The other things the firmware supplied are in the source:

- the four copper-list templates, as constants in `src/demo.cpp`;
- the 4096-entry sine table, computed at start-up:
  `floor(32767·sin(2πi/4096))` over the first quarter, mirrored. It equals
  the firmware's table, and no value is close enough to an integer for a
  different libm to round it the other way.

## Sources

| File | Contents |
|---|---|
| `src/machine.h/.cpp` | the 520 KB SRAM, at its original addresses |
| `src/video.h/.cpp` | core 1's scanline loop: two copper lists, three layers fed by DMA (ring-wrapped reads, row modulos), and the PIO0 pixel program reduced to what reaches the pins |
| `src/demo.h/.cpp` | core 0: the vblank doorbell ISR, the part sequencer, the carbon background, parts 15, 16 and 17; texture loading, copper templates, sine table |
| `src/gpstate.inc` | core 1's register file (gp+0..127) at the start of frame 4739, from the harness |
| `tools/make_textures.py` | writes the two PNGs from the original firmware |
| `tests/tests.cpp`, `tests/data/frames.txt` | CRC of every frame of the scene, from the harness |

## How the original makes the picture

The details below come from the firmware and from the author's write-up.

- **Video timing.** The VGA mode is 1024x768 at 60 Hz (65 MHz pixel clock,
  806 lines of 2688 cycles at 130 MHz). One picture pixel is 4 cycles, two
  VGA pixels wide.
- **Core 1, the chipset.** It runs one loop pass per scanline. Each pass:
  - steps two copper lists of `(register, value)` halfword pairs relative to
    gp, where register 0 means "wait for this line";
  - for each of the three layers, pushes its six colours and a start delay
    (the fine scroll, 0-7 pixels) into a PIO FIFO, then starts a DMA
    channel: 65 words from the layer's read address, with the control word
    supplied by the copper (ring size for horizontal wrap);
  - adds the row modulos after every second and every fourth line;
  - synthesizes one stereo sample.
- **Frame reset.** At frame start, every layer's DMA control word is reset
  to 0 (transparent), so each part's copper list fully defines what is
  visible.
- **PIO0 pixel program.** State machines 0-2 run `out pc, 4`: each 4-bit
  pixel jumps straight to its instruction.
  - 0 is `mov pins, null`.
  - 2 is "no write".
  - 4..14 are `mov pins` from ISR, Y or X, plain or bit-reversed: six colours.
  - With OUT_STICKY and INLINE_OUT_EN (enable on data bit 15), a write with
    bit 15 clear stops that state machine driving the pins, so lower layers
    show through. The highest-numbered state machine that is driving wins.
    When none is driving, the pins keep their last value.
  - State machine 3 does the line timing and blanks the border.
- **Core 0.** At line 768 core 1 rings a doorbell. Core 0's interrupt
  handler advances the song position, runs the music playroutine, and calls
  the current part's vblank hook. The sequencer at 0x10008aec then calls the
  part's main routine.
- **The bars.** The bars are a 1024x128 texture of pre-drawn twisted bars
  (`data/bars.png`). Every frame, part 17's vblank rewrites a
  384-entry copper list: for each screen row, it picks the texture row
  `frame*2 + sin(...)`. A horizontal scroll that is shared by all rows makes
  the bars sway.

## Math behind

Notation:

- `p` is the song position (frames since the music started, 60 per second,
  112 per bar).
- `c` is a part's own frame counter, starting at 1 in its first vblank.
- `S(i) = floor(32767·sin(2πi/4096))` is the sine table, with period 4096,
  so 1024 is a quarter turn.
- `>>` is an arithmetic shift, i.e. a floor division by a power of two.

All of it is integer arithmetic on the RISC-V core: no floats and no
divisions per pixel.

### The bars (part 17)

**The texture is the 3D part.** `bars.png` is 1024x128. Each of its 128
rows is a horizontal cross-section of a twisted bundle of shaded ribbons at
one twist angle. Consecutive rows are consecutive angles, and row 127 joins
row 0, so the texture wraps vertically. The shading (dark brown to white,
six colours) is already drawn in, so the lighting costs nothing at run time.

**Choosing a slice per screen row.** Every frame, the vblank routine
rewrites the copper list so that screen row `r` (0..383) shows texture row:

```
R(r) = ( 2p + (S(φ + 8r) >> 9) ) mod 128
φ    = 8 · ( p + (S(16·(p mod 256)) >> 8) )
```

- `2p` turns the twist: the bundle rotates two angle steps per frame, one
  full texture cycle every 64 frames (about 1.07 s).
- `S(φ + 8r) >> 9` is in -64..63, half the texture's 128 angles. Down the
  screen the phase advances 8 per row, so the 384 rows span 3072/4096,
  three quarters of a sine period. The twist angle therefore varies smoothly
  down the screen, and the bars bulge and pinch instead of rotating rigidly.
- `φ` makes that wave travel. `8p` moves it a full period every 512 frames.
  `8·(S(16·(p mod 256)) >> 8)` (at most ±1024, a quarter period) rocks it
  back and forth every 256 frames.

The copper entry for row `r` sets layer 1's DMA read address to
`0x20020000 + 512·R(r) + 4·coarse`. The DMA's 512-byte ring wraps the read
within that texture row, so horizontally the texture is an endless
1024-pixel loop.

Because the copper changes the address at lines 1, 3, ..., 767, each
texture row covers two VGA lines. The exceptions are the first row (line 0
only) and the last (lines 765-767).

**One horizontal offset for the whole screen.** Screen pixel `x` shows
texture column `(x + s) mod 1024`, where:

```
s = −floor( (127 − min(c,127))⁴ / 2¹⁹ )                      slide in
    + floor( min(f,63)⁴ / 2¹⁵ )                               slide out
    + floor( S(29p − 2048) · (63 − min(f,63)) / 2¹⁵ )         sway
```

Here `f` counts frames since the part's fade started, at position 5376.

- **Slide in.** It starts at -480 (the bars are off the right edge) and
  eases to 0 over 127 frames. The fourth power gives a fast start and a
  soft landing.
- **Slide out.** It goes the other way, from 0 to +480 over 64 frames,
  starting softly.
- **Sway.** It is ±63 pixels with a period of 4096/29 ≈ 141 frames
  (2.35 s), and it dies away linearly during the fade.

The hardware splits `s` in two:

- `s & 7` becomes the PIO start delay. The pixel state machine waits
  `29 − 4·(s & 7)` cycles, so the picture starts that many pixels early,
  under the left border.
- `(s >> 3) mod 128` becomes a word offset in the DMA read address
  (8 pixels per 32-bit word).

So the per-frame cost is 384 sine lookups and 384 halfword stores. Nothing
is drawn: the picture is entirely address arithmetic.

### The wipe (part 16)

Two parallel lines cross the screen, and the band between them shows the
background. Per frame:

```
θ  = 8 · min(c, 110)                     rotation, stops at 880/4096 ≈ 77°
d  = floor( floor(595c / 256)² / 256 )   ≈ 0.0211·c², the band's half-width
y0 = 192 + max((128 − c) >> 1, 0)        band centre, rising from 255 to 192
n  = (sin θ, cos θ)                      normal; the lines run along (cos θ, −sin θ)
line 1 through (256, y0) + d·n   value 4
line 2 through (256, y0) − d·n   value 8
```

`S` gives `sin θ` and `cos θ` scaled by 32767, and the products are scaled
back with `>> 15`. Each line is drawn as a segment with a half-length of 4096
pixels, so it always crosses the whole screen.

The mask (layer 2, 512x384 at 4 bits per pixel) is filled with an
**XOR edge fill**:

1. Each line is stepped column by column with a 14-bit fixed-point slope
   `((y₂−y₁)·2¹⁴)/(x₂−x₁)`. In each of the columns 0..511, the line's 4-bit
   value is XORed into the single pixel where it crosses that column, with
   the row clamped to 0..384.
2. Every column is then XOR-accumulated downwards, starting from 8, eight
   bytes (16 pixels) at a time:
   `v(x, y) = 8 ⊕ (XOR of the edge values at rows ≤ y in column x)`.

So a pixel's value says which lines it is below:

| below line 2 | below line 1 | value | shows |
|---|---|---|---|
| no  | no  | 8 ⊕ 0 = 8 | colour 2 (0x002, dark blue) |
| yes | no  | 8 ⊕ 8 = 0 | transparent: the carbon background |
| yes | yes | 8 ⊕ 8 ⊕ 4 = 4 | colour 1 (0x001, darker blue) |

Clamping the row means a line above the top of the screen flips the whole
column, which is exactly what a half-plane should do. The part ends once
`d > 300` (c ≈ 120), when the band covers the screen.

### The background (layer 0, parts 16-17)

The carbon texture is 512x256 and wraps in both directions: a 256-byte DMA
ring horizontally, and copper waits that reset the read address vertically.
With `q = floor(p/4)` and `t = 4q`:

```
X = 2p + (S(9t) >> 10) + 16q − floor(64q/3)                        ≈ 0.67 px/frame, ±32 wobble
Y = (S(9t + 1024) >> 11) + 8q + floor(floor(64q/3)/2) − 7q − B(p)  ≈ 2.9 rows/frame, ±16 wobble
B(p) = floor( ((p mod 28) − 14)² / 16 )   for p ≥ 4690, else 0
```

- `X` and `Y` drift diagonally, and the sine terms make the drift trace a
  slow ellipse.
- `B` is a parabola of up to 12 rows that repeats every 28 frames, one beat
  (a quarter of a bar), so from position 4690 the background bounces to the
  music.
- `X` goes to the hardware like `s` above: `X & 7` is the fine delay, and
  `(X >> 3)·4` is the byte offset.
- Each texture row is shown on two VGA lines, so `Y mod 256` picks the
  starting row. The copper then jumps back to row 0 at lines `512 − 2Y` and
  `1024 − 2Y`, which tiles the 256 rows over the 768 lines.

### Putting the layers together

Each layer streams 4-bit values, and each value drives the pins or not:

- 0 releases the pins (transparent);
- 2 keeps the previous state;
- 4..14 drive one of the layer's six 12-bit colours.

Layer 2 has priority over 1, and 1 over 0. If no layer is driving, the pins
keep their last colour.

- Part 16 shows layer 2 (the mask) over layer 0 (the carbon).
- Part 17 shows layer 1 (the bars, transparent around them) over layer 0.
  Layer 2 is off: core 1 sets every layer's DMA control word to 0 at each
  frame start, so a layer exists only in the frames whose copper list
  enables it.

## Timing model

Each frame the port runs core 0's vertical-blank work all at once: the
interrupt, the sequencer, and any part's prep and main routine. This is
exact for these parts. The harness runs core 0 interleaved with the
scanlines, and its frames for this range are identical at 1x and at 64x
CPU speed.
