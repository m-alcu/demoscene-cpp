# imphobia9

A C++17 / SDL3 port of **Imphobia Issue #9** (IMPHOB9.EXE, February 1995),
the PC diskmag of the Belgian group Imphobia. Main editor Darkness, code by
The Wizard, graphics and design by P.L., cover picture by Zebig/Speed, GUS
replay by Robban/Cascada; tunes by Basehead, Scorpik, Zodiak and NHP.
CMake, SDL3 located through pkg-config, sources in `src/`, one test target.

It was made from the port of issue #10 (`~/proy/imphobia10`), which came
from #11's and #12's (`~/proy/imphobia11`, `~/proy/imphobia12`). The reader
is the same program in all four: #9's is 97% the same as #10's, instruction
for instruction. This port is #10's translation with the variables moved to
where #9 keeps them, and the routines that differ translated again from
IMPHOB9.EXE.

The whole reader is ported: the Underground Label logo, the cover, the main
menu, the sections (editorial, charts, articles, interviews, credits), every
article, the scroll bar, the mouse, the music and the exit. The
configuration screens are not: the port starts straight in the mag.

## Building and running

```bash
tools/extract_assets.py ~/proy/rea/Imphobia/IMPHOB#9 data
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/imphobia9
ctest --test-dir build        # the mag against the original, frame by frame
```

`imphobia9 [--data DIR] [--scale N]`

- **Keys:** arrows to move and to turn pages, Enter / Space / E to open, Esc
  to go back (at the main menu: quit). In an article
  Up and Down go to the previous and next article of the list. F saves the
  article as `NAME.TXT` in the current directory. F1-F4 change the tune, F9
  turns the music off and on.
- **Mouse:** the cursor is drawn by the mag in the text area; left button
  opens, right button goes back, the left and right edges turn the page.

`data/` holds what `tools/extract_assets.py` copies from the original
directory: `imphob9.img` (IMPHOB#9.EXE without its header; not
compressed), `NFO9.DAT` and `DATA.001`-`DATA.004`. The other files in the
archive (IMP9_EX!.ZIP with the example sources, IMPVDOOR.ZIP, the voting
form) are not part of the mag.

## What changed from the original

As in the #10, #11 and #12 ports: no configuration screens (it behaves as
with a Gravis UltraSound, no compatibility mode and no printer, so all four
tunes play), the music is the port's own module player, P (print) does
nothing, and changing the tune is immediate. F (save) is translated as it
is; #9's routine, like #10's and #11's, writes correct files.

## How #9 differs from #10

| | #9 | #10 |
|---|---|---|
| start | the Underground Label logo (UNDLABEL.SPR, ULABEL.PAL), faded in and out while it scrolls up; then the cover | straight to the cover |
| cover | Zebig's Picasso, 640x480 in 16 colours, faded in, held 140 retraces, faded to black | P.L.'s, held 100 retraces, faded into the mag's colours |
| exit | the mag fades out, text mode | the CLINCOL end screen |
| fades | a fixed step of 3 | a step in CS:1F9Dh: 3, and 1 for the end screen |
| raster | the offsets on lines 143-145, the middle bank from 146 (8Fh), the bottom from 420 (1A4h); text area at 3DE0h | lines 139-141, 142, 421; text area at 3D40h |
| pages | colours faded to SELECT.PAL's at C0h; the text area cleared after the bank switch | at 60h; cleared before |
| main menu | the entries are not drawn before the fade | drawn (XOR) |
| lists | articles up to entry 9Bh, interviews 0Bh | FBh, 17h |
| scroll bar | the right end measured 7 pixels back, not 8 | 8 |
| directory of NFO9.DAT | in the data segment (DS:1A87h points at it), 19-byte entries | the same at DS:1DB0h |

## Sources

| File | Contents |
|---|---|
| `src/main.cpp` | SDL: window, the 59.94 Hz frame clock, audio, keys, mouse; the headless dump mode |
| `src/mag.h/.cpp` | the reader, translated routine by routine from IMPHOB9.EXE (comments give #9's offsets) |
| `src/vga.h/.cpp` | the VGA as the mag drives it, and its rendering with mid-frame register changes |
| `src/modplayer.h/.cpp` | module player (ProTracker rules, 4 and 8 channels, no SDL) |
| `tools/extract_assets.py` | copies the image and the data files into `data/` |
| `tests/tests.cpp` | five scenarios checked against captures of the original; the tunes for sense |
| `tests/data/*.txt` | the captures: inputs, then the sequence of video-memory and DAC CRCs |

The workings (the article format, the raster splits, the timer's state
machine) are described in the #12 port's README.

## Checking against the original

`~/proy/rea/imphobia9-analisis` holds the harness adapted to #9. The
scenarios in `tests/data` are equal state for state with it: the start
(the label, the cover, fades, main menu), the interviews section with an interview
scrolled both ways, the articles section (turning the list's pages,
opening an article, its neighbours, saving it), the same driven by the
mouse, and the exit to text mode.

Not checked against the original: the exact lines of the splits, and the
music (the port's player was not compared with the GUS replay).
