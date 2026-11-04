# rbgdemo2

A C++17 / SDL3 port of **"Black Glass ][" (RBGDEMO2.EXE)**, a vector demo
and `.670` music player coded by Tran of Renaissance, dated 18 July 1992,
with music by Mosaic (`muzik0.670`) and C.C.Catch (`muzik1.670`). CMake,
SDL3 located through pkg-config, sources in `src/`, a test target for the
music driver.

The original is a 386 protected-mode program: Tran's own small kernel
switches the CPU to protected mode and calls DOS through V86. Its demo part
draws balls with shading into an unchained VGA mode, mirrors them in a glass
floor and plays a hybrid FM + digital music format on an SB Pro. This port
keeps the same video state it kept (planar VRAM, map mask, latches, start
address, 6-bit DAC), runs translations of its own routines on it, and runs a
translation of its music driver on two emulated OPL2 chips.

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/rbgdemo2                   # muzik0.670, normal mode
./build/rbgdemo2 assets/muzik1.670 5
ctest --test-dir build             # the music driver against the original
```

`rbgdemo2 [muzik file] [mode]`: the original took the file name on its
command line and asked for the mode at a DOS prompt (0 normal, 1 happy,
2 evil, 3 bubbly, 4 "for the kiddies", 5 muzikal, 6 creepy, 7 "you're being
watched"). The keys are the original's:

| Key | |
|---|---|
| Space | next mode (each mode is a different set of ball sprites) |
| Left / Right | previous / next object |
| Enter | automatic object change on/off |
| F1 | the text again, once it has run out |
| Esc | fade out and quit |

The screen is mode 13h, 320x200 at 70 Hz on a 4:3 monitor; the window is
1280x960 with nearest-neighbour scaling, so pixels are as tall as they were.

## Sources

| File | Contents |
|---|---|
| `src/main.cpp` | SDL init, the clock (music ticks and retraces), audio, keys |
| `src/demo.h/.cpp` | VGA state and the demo's routines: balls, glass, snow, text, palette |
| `src/objects.cpp` | the 30 objects: table, scripts, motion routines |
| `src/player670.h/.cpp` | the `.670` driver: sequencer, FM voices, digital mixer (no SDL) |
| `src/opl2.h/.cpp` | a YM3812 (OPL2) |
| `src/data/*.h` | tables generated from the executable |
| `tools/extract_assets.py` | pulls everything in `assets/` and `src/data/` out of the executable |
| `tests/player_tests.cpp` | the driver checked tick by tick against the original |

## What the original does, and this port with it

Read from the code of the unpacked executable; addresses are offsets in its
32-bit segment (linear base 10580h) and every routine in `src/` names the one
it translates.

**Timing.** Everything hangs off the SoundBlaster interrupt: 140 samples at
8000 Hz, 57.14 a second. The main loop waits for two of them per frame, so
the demo runs at 28.57 frames a second, with page flips and palette changes
at the vertical retrace.

**Video.** Mode 13h unchained. VRAM holds four 320x200 pages: two drawn and
shown in turn (0000h, 4000h), a clean copy of the background (8000h), and the
six balls of the current mode in the four pixel alignments (C000h).

- **Balls.** The object's points are rotated (a 512-step sine table scaled
  by 512), moved, sorted by depth with an insertion sort, and projected with
  perspective 200h - z. Each ball is a 19x15 sprite copied VRAM to VRAM with
  the latches, its opacity mask as the map mask. Where it meets the floor
  line it is cut, and the same ball seen in the glass (sprite + 3) is drawn
  below, cut at line 207.
- **Erasing.** Every ball leaves a 24-pixel wide strip on a list; two frames
  later, when that page is drawn again, the strips are copied back from the
  clean page.
- **Snow.** 260 flakes, seeded from code bytes, fall and drift; each is
  drawn twice (colour 14h and its reflection 94h, mirrored about line 199),
  only over the sky, and put back from the clean page later.
- **Text.** 89 lines in a proportional RLE font, laid out on the background
  under one of four rows and dissolved in over 40 frames, 208 pixels a frame
  with a stride that changes at each pause. Each pixel goes to the page being
  drawn and to the clean page, and its reflection (colour + 80h) to both too.
- **Palette.** Faded in from black at start, and out at Esc. Each frame two
  cursors with periods 25 and 39 recolour one entry (and its reflection)
  from the palette: the twinkling of the stars.

**Objects.** A table of 30 records: points, init, motion routine, script,
start position, spin and velocity. Most move with a generic routine
(bounce in a box, spin, move) driven by a small script of spin, velocity,
bound and wait commands; the others have motion routines of their own:
springs, trails, snakes, a fountain, waves, and five that dance to the music
by reading the driver's note volumes. Their point lists are rewritten in
place and some are shared, so the port keeps that memory as the bytes it
was (`src/data/objmem.h`) and works on it at its original addresses.

**Music.** The driver plays `.670`, Renaissance's successor to the 669
format: an event stream per pattern, up to 4 digital channels and 9 FM
channels. On an SB Pro (what this port reproduces) every FM channel is
played on both OPL2 chips, left and right, with the F-number raised by
0..3 per voice: "incredible fm". The digital channels are mixed by a loop
the driver builds itself at load time (140 copies of
`lodsb; xlat; add [edi],al; inc edi; add ch,cl; adc esi,edx`) into an 8-bit
mono buffer at 8000 Hz, with 16 volume tables.

## Where the assets came from

Nothing here is redrawn or re-entered by hand. `tools/extract_assets.py`
takes it all from the unpacked executable
(`../../rea/rbgdemo2-analisis/rbgdemo2.unpacked.bin`), at offsets read from the
code that uses them:

```bash
python3 -I tools/extract_assets.py ../../rea/rbgdemo2-analisis/rbgdemo2.unpacked.bin ../../rea/rgbdemo2 .
```

- `background.bmp` the 320x200 scene, `balls.bmp` the eight modes' ball
  sheets (114x15 each: three colours and the same three in the glass),
  `font.bmp` the 42 glyphs, all 8-bit indexed BMPs with `palette.dac` as
  their colour table; colour 0 is transparent in balls and font.
- `palette.dac` the 256-colour palette, `texts.txt` the 89 lines.
- `muzik0.670`, `muzik1.670` the original music files, unchanged.
- `src/data/tables.h` the sine table, the text script, the colour cycle,
  the snow seeds, the key map, and the music driver's tables (volume,
  periods, F-numbers, operator offsets); `src/data/objmem.h` the object
  memory.

## Verification

The original was run under the 386 emulator harness in
`../../rea/rbgdemo2-analisis` (Unicorn plus planar VGA, PIC, PIT, DMA,
SoundBlaster and OPL ports), recording the page shown and the DAC at every
flip, and every OPL write and DMA block of every music tick.

- **Video.** The port's frames, dumped the same way, are identical to the
  original's: pixels and DAC, frame for frame, over 1175 frames untouched and 3300 frames with object, mode and Enter keys (see
  `../../rea/rbgdemo2-analisis/README.md` for which).
- **Music.** `tests/player_tests.cpp` replays the reference: the driver's
  OPL writes and its 140-byte digital blocks match the original's exactly,
  tick for tick (2000 ticks of `muzik0.670`, 303 of `muzik1.670`).
- The OPL2 itself is an emulation written for this port and cannot be
  compared with the chip here; the register stream it is fed is exact.

## Debug hooks

Headless and deterministic, for checking without a person watching:

```bash
SDL_VIDEODRIVER=offscreen SDL_AUDIODRIVER=dummy \
RBGDEMO2_SHOT=/tmp/shot.bmp RBGDEMO2_FRAME=600 ./build/rbgdemo2
```

`RBGDEMO2_DUMP=file` writes every flip in the format of the harness's
`capture.py`; `RBGDEMO2_KEYS=frame:scancode,...` presses keys after given
flips (scancodes in hex: 4D right, 4B left, 39 space, 1C Enter).
`RBGDEMO2_ASSETS` overrides the asset directory.
