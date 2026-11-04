# imphobia10

A C++17 / SDL3 port of **Imphobia Issue #10** (IMPHOB10.EXE, June 1995, the
tenth anniversary issue), the PC diskmag of the Belgian group Imphobia. Main
editor Darkness, code by The Wizard, graphics and design by P.L., GUS replay
by Robban/Cascada; tunes by Scorpik, The Rew, NHP and Claws. CMake, SDL3
located through pkg-config, sources in `src/`, one test target.

It was made from the port of issue #11 (`~/proy/imphobia11`), which came
from #12's (`~/proy/imphobia12`). The reader is the same program in all
three, 91% instruction for instruction with #11. This port is that
translation, with the variables moved to where #10 keeps them and the
routines that differ translated again from IMPHOB10.EXE.

The whole reader is ported: the cover, the main menu, the sections
(editorial, charts, articles, interviews, credits), every article, the
scroll bar, the mouse, the music and the end screen. The configuration
screens are not: the port starts straight in the mag.

## Building and running

```bash
tools/extract_assets.py ~/proy/rea/Imphobia/IMPHOB10 data
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/imphobia10
ctest --test-dir build        # the mag against the original, frame by frame
```

`imphobia10 [--data DIR] [--scale N]`

- **Keys:** arrows to move and to turn pages, Enter / Space / E to open, Esc
  to go back (at the main menu: quit, through the end screen). In an article
  Up and Down go to the previous and next article of the list. F saves the
  article as `NAME.TXT` in the current directory. F1-F4 change the tune, F9
  turns the music off and on.
- **Mouse:** the cursor is drawn by the mag in the text area; left button
  opens, right button goes back, the left and right edges turn the page.

`data/` holds what `tools/extract_assets.py` copies from the original
directory: `imphob10.img` (IMPHOB10.EXE without its header; not
compressed), `NFO10.DAT` and `DATA.001`-`DATA.004`. The other files in the
archive (IMP10_EX.ZIP with the example sources, IMPVDOOR.ZIP, the voting
form) are not part of the mag.

## What changed from the original

As in the #11 and #12 ports: no configuration screens (it behaves as with a
Gravis UltraSound, no compatibility mode and no printer, so all four tunes
play, the 8-channel one included), the music is the port's own module
player, P (print) does nothing, and changing the tune is immediate. F (save)
is translated as it is; #10's routine, like #11's, writes correct files.

## How #10 differs from #11

| | #10 | #11 |
|---|---|---|
| cover | P.L.'s, 640x480 in 16 colours (mode 12h), loaded plane by plane like #12's, faded in, held 100 retraces, faded into the mag's colours | BenJ's, 320x200 in 256 colours, mode 13h |
| directory of NFO10.DAT | in the data segment, 19-byte entries (16-bit sizes; LOGO.RAW, the last, runs to the end of the file) | in the code segment, 21-byte entries |
| page turns | by the width of the current page, from the per-page widths in the article's header | by a fixed step: 40, or 80 with the "full page" option |
| configuration | no 80-column option; a "compatibility mode" | 80-column option |
| raster | three CRTC offsets (lines 139-141), the bottom bank from line 421 (1A5h); with a compatibility mode the timer waited by counted port reads instead of for the lines | four offsets, line 422 |
| video memory | DECORS1's second sprite uploaded before the background, so the background sits after it | the background first |
| leaving a section | the text area is not cleared after the fade | cleared |
| tunes | F1-F4 (DATA.005 in the table is never available) | F1-F5 |
| lists | articles up to entry D7h, interviews 12 at DS:156Bh | FBh, 24 |

## Sources

| File | Contents |
|---|---|
| `src/main.cpp` | SDL: window, the 59.94 Hz frame clock, audio, keys, mouse; the headless dump mode |
| `src/mag.h/.cpp` | the reader, translated routine by routine from IMPHOB10.EXE (comments give #10's offsets) |
| `src/vga.h/.cpp` | the VGA as the mag drives it, and its rendering with mid-frame register changes |
| `src/modplayer.h/.cpp` | module player (ProTracker rules, 4 and 8 channels, no SDL) |
| `tools/extract_assets.py` | copies the image and the data files into `data/` |
| `tests/tests.cpp` | five scenarios checked against captures of the original; the tunes for sense |
| `tests/data/*.txt` | the captures: inputs, then the sequence of video-memory and DAC CRCs |

The workings (the article format, the raster splits, the timer's state
machine) are described in the #12 port's README.

## Checking against the original

`~/proy/rea/imphobia10-analisis` holds the harness adapted to #10. The
scenarios in `tests/data` are equal state for state with it: the start
(cover, fades, main menu), the interviews section with an interview
scrolled both ways, the articles section (turning the list's pages,
opening an article, its neighbours, saving it), the same driven by the
mouse, and the end screen to the program's exit.

Not checked against the original: the exact lines of the splits, and the
music (the port's player was not compared with the GUS replay).
