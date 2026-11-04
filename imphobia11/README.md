# imphobia11

A C++17 / SDL3 port of **Imphobia Issue #11** (IMPHOB11.EXE, December
1995, "let's make things better"), the PC diskmag of the Belgian group
Imphobia. Main editor Darkness, code by The Wizard, graphics and design by
P.L., cover picture by BenJ, GUS replay by Robban/Cascada; background tunes
by The Rew, Necros, Evelred and Scorpik. CMake, SDL3 located through
pkg-config, sources in `src/`, one test target.

It was made from the port of issue #12 (`~/proy/imphobia12`): the two
readers are the same program, 97% instruction for instruction, so this is
that translation with the variables moved to where #11 has them and the
routines that differ translated again from IMPHOB11.EXE.

The whole reader is ported: the cover, the main menu, the sections
(editorial, charts, articles, interviews, credits), every article, the
scroll bar, the mouse, the music and the end screen. The configuration
screens are not: the port starts straight in the mag.

## Building and running

```bash
tools/extract_assets.py ~/proy/rea/Imphobia/IMPHOB11 data
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/imphobia11
ctest --test-dir build        # the mag against the original, frame by frame
```

`imphobia11 [--40col] [--data DIR] [--scale N]`

- **Keys:** arrows to move and to turn pages, Enter / Space / E to open, Esc
  to go back (at the main menu: quit, through the end screen). In an article
  Up and Down go to the previous and next article of the list. F saves the
  article as `NAME.TXT` in the current directory. F1-F4 change the tune, F5
  plays NFODAT.DAT ("CrapMas", the Christmas jingle), F9 turns the music off
  and on.
- **Mouse:** the cursor is drawn by the mag in the text area; left button
  opens, right button goes back, the left and right edges turn the page.
- `--40col` turns pages by one 40-column page instead of a whole screen.

`data/` holds what `tools/extract_assets.py` copies from the original
directory: `imphob11.img` (IMPHOB11.EXE without its header; it is not
compressed), `NFO11.DAT`, `DATA.001`-`DATA.004` and `NFODAT.DAT`. The BBS
files in the archive (KWXRRVEM.*, DRACKER.PCX) are not part of the mag.

## What changed from the original

As in the #12 port: no configuration screens (it behaves as with a Gravis
UltraSound and no printer, so all five tunes play, the two 8-channel ones
included), the music is the port's own module player, P (print) does
nothing, and changing the tune is immediate.

F (save) is translated as it is: unlike #12's, #11's routine writes correct
files (columns 1 to 38 of each page row).

## How #11 differs from #12

| | #11 | #12 |
|---|---|---|
| cover | LOGO.RAW 320x200, 256 colours, mode 13h; faded in and out in 32 steps written near the bottom of the picture | 640x480, 16 colours, mode 12h, loaded plane by plane |
| after the cover | SELECT.PAL's last colours from black in 8 steps (0700h) | the cover faded into them |
| screen | start address 10E0h, text at 3D40h, bottom panel from line 426 (1AAh), second split measured at 1A6h lines | 0FF0h, 3C50h, 429, 1A7h |
| text bank | faded to SELECT.PAL's third group (60h) | second (30h) |
| scroll bar | 639 pixels; the bar redrawn only where it moved, sprite 16 for the gaps | 620 pixels, redrawn every frame |
| main menu | entries XORed in planes 1 and 2 | planes 0 and 1 |
| tunes | F1-F5 on GUS (DATA.001-004, NFODAT.DAT) | F1-F4 |
| interviews | 24 entries at DS:180Eh | 12 |

The variables in the data segment are 0Ch further on from 1B34h (0Bh or so
before), those in the code segment 29h earlier; `mag.cpp` uses #11's
addresses throughout and names each routine by its #11 offset.

## Sources

| File | Contents |
|---|---|
| `src/main.cpp` | SDL: window, the 59.94 Hz frame clock, audio, keys, mouse; the headless dump mode |
| `src/mag.h/.cpp` | the reader, translated routine by routine from IMPHOB11.EXE |
| `src/vga.h/.cpp` | the VGA as the mag drives it, and its rendering with mid-frame register changes |
| `src/modplayer.h/.cpp` | module player (ProTracker rules, 4 and 8 channels, no SDL) |
| `tools/extract_assets.py` | copies the image and the data files into `data/` |
| `tests/tests.cpp` | six scenarios checked against captures of the original; the tunes for sense |
| `tests/data/*.txt` | the captures: inputs, then the sequence of video-memory and DAC CRCs |

The workings (NFO11.DAT, the article format, the raster splits, the timer's
state machine) are those described in the #12 port's README.

## Checking against the original

`~/proy/rea/imphobia11-analisis` holds the #12 harness adapted to #11
(Unicorn, register-level VGA, the program's own timer and keyboard
handlers). The six scenarios in `tests/data` are equal state for state with
it: the start (cover, fades, main menu), the interviews section with an
interview scrolled both ways, the articles section in 80- and 40-column
mode, the same driven by the mouse, and the end screen to the program's
exit.

Not checked against the original: the exact lines of the splits, and the
music (the port's player was not compared with the GUS replay).
