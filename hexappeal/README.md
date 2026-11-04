# hexappeal

A C++17 / SDL3 port of the **end part of "HEX APPEAL"** (APPEAL.EXE), the
Cascada Demo Section's demo released at Assembly '93: the "slimy" scroller
with the credits and greetings, over the soundtrack LIBERTINE by Zodiak.
Scroller code by Iceman, font and marble by O'Hara. CMake, SDL3 located
through pkg-config, sources in `src/`, one test target.

Only the end part is ported: the rest of the demo (setup, intro blur, star
driver, cubes, IFS, texture cube) is not.

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/hexappeal                  # assets/libertine.mod
ctest --test-dir build             # the part against the original, frame by frame
```

`hexappeal [module]`. Esc fades out and quits, as in the original; at the end
of the text (about 2 min 12 s) it fades out and quits by itself.

The part ran in the screen mode the part before it left: mode 13h with
480-line timing, 59.60 Hz, so 200 lines of square pixels in a frame of 240.
The window is 1280x960 with the picture letterboxed in it.

## Sources

| File | Contents |
|---|---|
| `src/main.cpp` | SDL init, the retrace clock, audio, keys, headless hooks |
| `src/endpart.h/.cpp` | the end part: ring buffer, marble, text and shadow, wobble, fades |
| `src/modplayer.h/.cpp` | a ProTracker module player (no SDL) |
| `src/data/tables.h` | the sine table and the font's character set and widths, generated |
| `tools/extract_assets.py` | pulls everything in `assets/` and `src/data/` out of APPEAL.EXE |
| `tests/tests.cpp` | the part checked against the original; the player for sense |

## What the original does, and this port with it

APPEAL.EXE is a chain of seven MZ executables followed by the module: a
loader holding the music system, the setup (Turbo Pascal), five demo parts,
then LIBERTINE (6 channels, ProTracker format) and the setup's pictures. The
loader starts the music, then copies each part from extended memory and runs
it. The parts talk to the music system through `int 80h`. The end part uses
function 1Bh to have a routine of its own called at every vertical retrace,
19h/1Ah to read and clear a retrace counter, and 09h to set the master
volume.

The end part is the seventh executable, 16-bit real-mode code with 32-bit
offsets into a buffer above 64K (the loader leaves the CPU in "unreal" mode).
The offsets below are in its load image; every routine in `endpart.cpp`
names the one it translates.

- **The buffer** (allocated at start, 224 KB): rows of 400 pixels, a ring
  of 280 rows, followed by a mirror of it so a window can be read without
  wrapping. At start (`0092h`) it is filled with a checkerboard of two
  50x42 marble tiles.
- **At every retrace** (`0257h`): first the fade. The fade in takes 64
  retraces. The colours computed are sent to the DAC one retrace late, so
  the fade in ends one step short, at 63/64 of the palette, where the
  original stays. The fade out also lowers the music system's volume. Then,
  every second retrace, a new ring row (`3444h`):
  - fresh marble;
  - a row of the shadow: the marble's colours less 20h where the glyphs
    are, 4 pixels to the left and 4 rows behind the text;
  - a row of the text itself;
  - the row's copy in the mirror.
- **The text** (`33B2h`): 156 lines in a font of 53 glyphs of 24x25, each
  line centred in the 400 pixels by the glyphs' widths. When the text pass
  reaches the end, the part fades out and ends.
- **Each frame** (`39A8h`): a 320x200 window of the buffer is copied to the
  screen, starting 40 rows below the row being written and 40 pixels in.
  Each column is moved up or down by a sine whose amplitude itself swings
  with a sine (up to 74 rows). Each row is moved sideways the same way (up
  to 149 pixels). The original computes the column offsets every frame and
  patches them into its unrolled drawing loop as displacements.
- A quirk kept: the glyph loops step a 16-bit DI inside a 32-bit EDI, so a
  glyph row crossing a 64K boundary wraps back to the start of that 64K.

**The music.** The part before the end part leaves when the song reaches
position 19, row 55. It asks for position + 1 >= 14h and row + 1 >= 38h, as
the music system numbers them. So the port plays the module from the start
silently up to there and starts sound at that row. From there the song plays
to its last position, whose last row jumps back to position 21.

`modplayer.cpp` is a ProTracker player of my own, not a translation of the
demo's music system. Robban's player mixed for GUS, SoundBlaster or a DAC,
from a timer synchronised with the retrace. This one mixes at 48 kHz with
linear interpolation (the demo's "sampling interpolation" setup option) and
pans the channels left, right, right, left, left, right.

## The maths behind the effect

The whole effect is one formula, applied to every pixel in every frame: a
lookup into a scrolling picture, with the lookup address bent by sines. The
original does it all in integer arithmetic with one table, and so does the
port.

### The sine table

`kSine` holds 512 steps of a cosine scaled to 16 bits:

$$S[i] = \operatorname{round}\left(32767 \cos\frac{2\pi i}{512}\right), \qquad i = 0 \dots 511$$

Each phase variable is a byte offset into this table of words, so the step
used is `(phase & 3FEh) / 2`. Indices wrap at 512 for free. Multiplying by
a table value and keeping the high 16 bits of the product (`imul`, then DX)
scales a sine to any amplitude:

$$\operatorname{scale}(a, i) = \left\lfloor \frac{a \cdot S[i]}{65536} \right\rfloor \approx \frac{a}{2}\cos\frac{2\pi i}{512}$$

### The picture being looked at

The buffer is a ring of 280 rows of 400 pixels. Every second retrace one
new row is written at the ring position $P$, then $P$ moves on one row:

$$P \leftarrow (P + 400) \bmod (280 \cdot 400)$$

At 59.60 Hz that is 29.8 rows a second, the speed of the scroll. Because the
window starts 40 rows after $P$, a row written now first shows at the bottom
of the screen 40 rows (1.3 s) later, then climbs. Rows ahead of $P$ are the
oldest in the ring, so the window always shows old text scrolling up and out
while new text is written out of sight below it. The 280 rows are mirrored
just after the ring, so a read that runs past its end needs no wrapping.

### The two amplitudes

Two slow phases, $p_a$ and $p_b$, set how strong each wave is in this frame:

$$A_x = \operatorname{scale}(300, p_a/2) \in [-150, 149], \qquad A_y = \operatorname{scale}(150, p_b/2) \in [-75, 74]$$

$p_a$ grows by 4 a retrace (2 table steps), so $A_x$ goes through a full
swing every 256 retraces (4.3 s). $p_b$ grows by 1 (half a step), so $A_y$
swings every 1024 retraces (17.2 s). Since the amplitudes themselves are
sines, the waves fade to nothing, change sign and grow again: the surface
"breathes" instead of just rippling.

### The displacement

Every column $x$ gets a vertical shift and every row $y$ a horizontal one:

$$d_y(x) = \operatorname{scale}\bigl(A_y,\; p_c/2 + x\bigr), \qquad d_x(y) = \operatorname{scale}\bigl(A_x,\; p_r/2 + 2y\bigr)$$

The column wave advances one table step per column, so the screen's 320
columns show 5/8 of a period. The row index steps 5 bytes per row, but is
masked to even bytes each time, so it really moves 2 steps per row: 200
rows show 25/32 of a period. The phases $p_c$ (+12 a retrace) and $p_r$ (+6)
make both waves travel: 6 columns and 3 rows of the table per retrace.

The pixel on screen is then

$$\text{screen}(x, y) = B\bigl[P + 400\,(40 + y + d_y(x)) + (40 + x + d_x(y))\bigr]$$

Without the shifts, this is a plain 320x200 window, 40 pixels in from each
side of the 400-wide buffer and 40 rows below the row being written.

This warp is *separable*: the horizontal shift depends only on the row, and
the vertical shift only on the column. That is what makes it cheap.

- **Column offsets.** $400\,d_y(x) + x$ is computed once per column, 320
  values a frame. The original patches them straight into its unrolled copy
  loop as the displacements of its `mov al,[ebx+disp32]` instructions.
- **Row offset.** $400\,y + d_x(y)$ is computed once per row and goes in
  EBX.
- **Per pixel.** All that is left is an add and a load, two pixels per
  `stosw`.

Separable as it is, the eye reads it as a 2-D liquid surface. The vertical
lines of the checkerboard bend with the row wave and the horizontal ones
with the column wave, so the tiles become sheared, curved quads. The text
written into the picture bends with them.

Nothing clamps the horizontal shift. With $|d_x|$ up to 150 and only 40
pixels of margin, a row can be read from up to 110 pixels past either edge
of the buffer. Rows are contiguous in memory, so the read just continues
into the end of the row above or the start of the row below, and the result
stays seamless marble.

### Shadow and text

Each glyph row is drawn twice into the new buffer row.

- **The shadow** comes first: every marble pixel under the glyph becomes
  $c - 20\text{h}$. The palette is built for this: the marble uses colours
  230–246, and the 32 entries below them hold the same greys at about 40 %
  of the brightness (colour 246 is (33,33,33), colour 214 is (14,14,14)).
  Subtracting one constant from the colour index darkens whatever marble
  lies beneath, with no blending arithmetic.
- **The text** comes second, drawn 4 pixels to the right of the shadow and
  4 glyph rows ahead of it. So the shadow falls 4 pixels left and 4 rows
  below the letters.

Both are baked into the buffer before the warp, so they bend exactly as the
marble does.

### The fades

With a fade level $f$ from 0 to 64, every 6-bit DAC component is

$$c' = \left\lfloor \frac{c \cdot f}{64} \right\rfloor$$

The level steps by one per retrace, so a fade takes 64 retraces (1.07 s).
The value sent to the DAC is the one computed the retrace before, so the
fade in stops at $f = 63$. The fade out also hands $f$ to the music
system's master volume, so picture and sound go down together.

## Where the assets came from

Nothing is redrawn or re-entered by hand. `tools/extract_assets.py` takes it
all from APPEAL.EXE, at offsets read from the code that uses them:

```bash
python3 -I tools/extract_assets.py ../rea/DEMOS/appeal/appeal.exe .
```

- `libertine.mod` the module, unchanged.
- `font.bmp` the 53 glyphs one under another, `marble.bmp` the two tiles
  one under the other. Both are 8-bit indexed BMPs with the part's palette.
- `palette.dac` the 256 colours, 6-bit, as the part sets them up.
- `texts.txt` the scroll text, one line per line. A line holding one space is
  an empty line, as in the original. Characters the font lacks become spaces.
- `src/data/tables.h` the sine table, the character set and the glyph widths.

## Verification

The end part was run under a real-mode emulator harness in
`../rea/appeal-analisis`. It is Unicorn standing in for DOS, the music
system's `int 80h` and the VGA, and it records the screen, the DAC and the
volume after every retrace.

- **Video.** The port's frames are identical to the original's: pixels, DAC
  and volume, every retrace of the whole part (7856), and of a run with Esc
  pressed at retrace 1500 (1564). `tests/tests.cpp` checks both against
  CRC-32s of the recordings (`tests/data/`).
- **Music.** The player is checked for sense only: the song's course from
  position 19 row 55 (to 31, then back to 21), speed changes, levels,
  silence at volume 0, determinism. Its sound has not been compared with
  the demo's music system or with another module player.
- The harness assumes a machine fast enough to draw every frame within a
  retrace; the original waits as many retraces per frame as the last frame
  took, so on a slow machine it drops frames.

## Debug hooks

Headless and deterministic, for checking without a person watching:

```bash
SDL_VIDEODRIVER=offscreen SDL_AUDIODRIVER=dummy \
HEXAPPEAL_SHOT=/tmp/shot.bmp HEXAPPEAL_FRAME=2400 ./build/hexappeal
```

`HEXAPPEAL_DUMP=file` writes every retrace in the format of the harness's
`capture.py`, uncompressed. `HEXAPPEAL_KEYS=retrace:scancode,...` sets the
keyboard port at given retraces (hex; `1500:01,1502:81` presses and releases
Esc). `HEXAPPEAL_WAV=file` writes the sound. `HEXAPPEAL_ASSETS` overrides
the asset directory.
