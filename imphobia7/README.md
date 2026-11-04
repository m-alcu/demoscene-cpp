# imphobia7

A C++17 / SDL3 port of **Imphobia Issue #7** (IMPHOB7.EXE, December 1993),
the PC diskmag of the Belgian group Imphobia. Code by The Wizard, graphics
by P.L., SoundBlaster routines by The Wizard and Numerus. CMake, SDL3
located through pkg-config, sources in `src/`, one test target.

It was made from the port of issue #8 (`~/proy/imphobia8`). #7's reader is
the one #8's grew from (71% of the instructions match): the same page
engine, fades, sprites and lists, carried over with the variables moved to
where #7 keeps them; what differs was translated from IMPHOB7.EXE.

The whole reader is ported: the cover, the main menu, the sections
(edito, charts, articles, interviews, credits), every article and note, the
scroll bar, the mouse, the music and the exit. The setup questions are not:
the port starts straight in the mag.

## Building and running

```bash
tools/extract_assets.py "~/proy/rea/Imphobia/IMPHOB#7" data
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/imphobia7
ctest --test-dir build        # the mag against the original, frame by frame
```

`imphobia7 [--data DIR] [--scale N]`

- **Keys:** in #7 the keys drive the mouse cursor. Up and Down move it a
  row (in the main menu, an entry), Left and Right push it to the screen's
  edge, which turns the page; Enter / Space / E click, Esc goes back (at the
  main menu: quit). F1-F4 change the tune, F9 turns the music off and on.
- **Mouse:** left button opens, right button goes back; the left and right
  edges turn the page.

`data/` holds what `tools/extract_assets.py` copies from the original
directory: `imphob7.img` (IMPHOB7.EXE without its header; not compressed),
`NFO7.DAT` and `DATA.001`-`DATA.004`. The other files in the archive
(IPLAY10B.ZIP, ZOOM_EX.ZIP, the voting form, the results) are not part of
the mag.

## What changed from the original

No setup questions: #7 asks, when started as `IMPHOB7 !`, for a
SoundBlaster setup (or automatic detection, or silence) and a compatibility
mode; otherwise it looks for a SoundBlaster and stops without one. The port
behaves as with a SoundBlaster and no compatibility mode, and plays the
tunes with its own module player; changing the tune is immediate.

A division by zero of the original is skipped (the scroll bar of a screen
count of 0).

## How #7 differs from #8

| | #7 | #8 |
|---|---|---|
| setup | `IMPHOB7 !` asks; else SoundBlaster detection; no GUS | IMPHOBIA.CFG, GUS or SoundBlaster |
| cover | PLANE1.VGA-PLANE4.VGA, a file a plane | LOGO.RAW |
| keys | move the mouse cursor (DS:4BEEh/4BF0h); the hotspots do the rest | act directly (Up/Down select, Left/Right turn) |
| main menu | the entry under the cursor's height, 15h lines each | a hotspot table |
| articles | no Up/Down to the neighbours, no P/F | neighbours, P/F with a printer |
| text | READFNT with 17 bytes a character | 16 |
| timer | three states with constant counts (19B4h, 295Eh, 8C4h PIT ticks); the frame flag at the end of the retrace | measured counts |
| scroll bar | ends at 693h, 48h columns, no erasing | 7D0h, 4Fh |
| fades | out to SELECT.PAL's colours at 1E0h; the panel's fade-out takes two banks | 90h, one |

## Sources

| File | Contents |
|---|---|
| `src/main.cpp` | SDL: window, the 59.94 Hz frame clock, audio, keys, mouse; the headless dump mode |
| `src/mag.h/.cpp` | the reader, translated routine by routine from IMPHOB7.EXE (comments give #7's offsets) |
| `src/vga.h/.cpp` | the VGA as the mag drives it, and its rendering with mid-frame register changes |
| `src/modplayer.h/.cpp` | module player (ProTracker rules, no SDL) |
| `tools/extract_assets.py` | copies the image and the data files into `data/` |
| `tests/tests.cpp` | eight scenarios checked against captures of the original; the tunes for sense |
| `tests/data/*.txt` | the captures: inputs, then the sequence of video-memory and DAC CRCs |

## Checking against the original

`~/proy/rea/imphobia7-analisis` holds the harness adapted to #7 (run
silent, no compatibility mode). The scenarios in `tests/data` are equal
state for state with it (the original's first state, the text screen
before its questions, is left out): the start (cover, fades, main menu);
the edito with a page turned both ways; the articles list (its screens,
an article, its pages); the interviews; the charts and a note; the credits;
the same driven by the mouse; and the exit.

Not checked against the original: the exact lines of the splits, and the
music (the port's player was not compared with the SoundBlaster routines,
and the captures were made in silence).
