# wish-bars

The red/green bars of **Wish** by Majic 12 (Hungary, 1993; winner of the In Bloom '93 demo
compo; code Maxwood). This is the first of the two parts announced as "using the full
processor time, so there is no music" (`~/proy/rea/wish-analisis/sheet.png`, row 9, frames
3–7). It is ported from the part's 8086 code in `WISH.EXE` to C++17 / SDL3.

## The effect

The part sets the CRTC offset (register 13h) to 0. Every one of the 200 rows of mode 13h then
shows the same 320 bytes at A000:0000. The part rewrites that one line while the beam runs down
the screen. It waits for a horizontal blank and writes a 16-pixel bar (colours 1–16: a red ramp
into white, then a green ramp) at x = sum of three sines. That is one bar every two scan lines,
199 per frame. The line is never cleared during the frame, so row r shows bars 0..r-1 on top of
each other. Each bar trails down to the bottom, and the trails form a twisting ribbon. The
three sine phases advance per line and per frame.

There are four motions of 400 frames each, each with its own steps. Each fades in over 64 frames,
and the first three fade out over 65 frames. The last one ends with a wipe: the top rows lose
their bars, one more per frame, for 200 frames. That makes 1995 frames, 28.5 s at 70 Hz. Esc
fades the palette out over 72 frames and ends the part. The fade subtracts up to 88h from the
colours with a signed test, so near its end the colours wrap to bright values for a few frames.
The port does the same.

DOSBox draws the screen in 50-row blocks, not scan line by scan line, so it shows three flat
slabs instead of this. The demo's readme says it runs right only on Trident cards. This part
works on any VGA that keeps the display start and the line fetch per scan line, as real cards
do.

## Building and running

```bash
tools/extract.py ~/proy/rea/wish/WISH.EXE src/bars_data.h   # once (the header is included)
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/wish-bars            # [--scale N] [--loop]
ctest --test-dir build
```

Keys: **Esc** as in the demo (the fade, then the program ends). **Space** pauses. The program
ends with the part, unless `--loop` is given. `--dump DIR [--esc FRAME]` writes every frame
as PPM, plus `frames.txt` with the CRCs of the picture and the palette.

| File | What |
|---|---|
| `src/bars.h`, `src/bars.cpp` | the part: one `step()` per 70 Hz frame, commented with the code offsets of the original |
| `src/bars_data.h` | the part's data blob from `WISH.EXE`: palette, bar, sine table (0–100; entry 128 is 49, not floor(50+50 sin π) = 50, so it is kept as a table), the 4 motions |
| `src/main.cpp` | SDL3 window (320x200 at 4:3), 25.175 MHz / (800x449) = 70.09 Hz pacing, `--dump` |
| `tests/` | the check against the original |

## Checked against the original

The harness is `~/proy/rea/wish-analisis/bars/emu.py`. It loads the part's two blobs from
`WISH.EXE` (data 296h bytes at 58691h, code 243h bytes at 58927h) and runs the code under
Unicorn in real mode. Its VGA has a beam model:

- 449 scan lines per frame, 400 shown, 2 per row.
- Time passes only while the code polls 3DAh: a second read from the same instruction moves
  the beam to its next state (scan line shown → its blank → next scan line).
- Row r is the line as it is when the row's first scan line starts.
- The palette of a frame is the one set when its scan line 0 starts.

One choice is made by hand. Right after its last bar, the part clears the line while the
bottom row is on screen. The model takes that row from the line before the clear, because the
beam reads the line much faster than ISA writes can clear it.

The test runs the port through both recordings and compares the CRC of every picture and
palette. All of them match bit for bit:

| Recording | Frames |
|---|---|
| `tests/data/frames.txt`: the whole part, no keys | 1995 |
| `tests/data/frames_esc500.txt`: Esc from frame 500 | 572 |
