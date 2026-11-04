# imphobia8

A C++17 / SDL3 port of **Imphobia Issue #8** (IMPHOB8.EXE, October 1994),
the PC diskmag of the Belgian group Imphobia. Main editor Darkness, code by
The Wizard, graphics and design by P.L., GUS replay by Robban; tunes by
NHP/Anarchy PC, Scorpik/S!P, C.C.Catch/Renaissance and Black Lion. CMake,
SDL3 located through pkg-config, sources in `src/`, one test target.

It was made from the port of issue #9 (`~/proy/imphobia9`). #8's reader is
an earlier form of the one in #9-#12: the menus, the fades, the sprites,
the timer and the mouse are the same code (61% of the instructions match
#9's), and those were carried over with the variables moved to where #8
keeps them. Its page engine is its own and was translated from IMPHOB8.EXE.

The whole reader is ported: the cover, the main menu, the sections
(editorial, charts, articles, interviews, credits), every article and note,
the scroll bar, the mouse, the music and the exit. The configuration
screens are not: the port starts straight in the mag.

## Building and running

```bash
tools/extract_assets.py "~/proy/rea/Imphobia/IMPHOB#8" data   # needs unicorn
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/imphobia8
ctest --test-dir build        # the mag against the original, frame by frame
```

`imphobia8 [--data DIR] [--scale N]`

- **Keys:** arrows to move and to turn pages, Enter / Space / E to open, Esc
  to go back (at the main menu: quit). In an article opened from a list, Up
  and Down go to the previous and next entry. F1-F4 change the tune, F9
  turns the music off and on.
- **Mouse:** the cursor is drawn by the mag in the text area; left button
  opens, right button goes back, the left and right edges turn the page.

`data/` holds what `tools/extract_assets.py` makes from the original
directory: `imphob8.img` (IMPHOB8.EXE is PKLITE-compressed; the script runs
the stub under Unicorn and takes the unpacked load image), `NFO8.DAT` and
`DATA.001`-`DATA.004`. The other files in the archive (IMP8_EX!.ZIP with the
example sources, the voting form, the notes) are not part of the mag.

## What changed from the original

As in the #9-#12 ports: no configuration screens (it behaves as with a
Gravis UltraSound, no compatibility mode and no printer), the music is the
port's own module player, and changing the tune is immediate. #8 prints
('P') and saves ('F') an article only when a printer is configured, so
neither does anything here, as in the original on such a machine.

Two divisions by zero of the original are skipped (the scroll bar of a
screen count of 0, and of a one-page article in 182Bh, where the original
would stop with "Divide overflow").

## How #8 differs from #9

| | #8 | #9 |
|---|---|---|
| start | straight to the cover (P.L.'s "Imphobia 8"), faded in from black and out to black | the Underground Label logo first |
| section lists | text in the EXE (DS:164Fh on, made font indices at start), 12 rows a screen; Left/Right scroll to the next screen | IRF pages in NFO9.DAT |
| articles | .BIN files: a line count, then run-length coded lines; monochrome text in plane 3 over the background; 40-column pages, two on screen; turning scrolls the area a column at a time while the new columns are drawn | IRF pages with colour runs, 80-column screens |
| one-screen texts | type 2 entries (the charts' notes): 80 columns, no turning | |
| selection | a bar XORed in plane 3 | the row redrawn in reverse |
| scroll bar | ELEVATOR.SPR, ends moving a column a frame, also during the fades | ELEV.SPR, eased by pixels |
| keys | F1-F4 and F9 written out; P/F need a printer | a table of tunes; F saves |
| NFO8.DAT's directory | DS:0767h, no end marker | DS:1A87h |
| fades | to SELECT.PAL's colours at 90h | at F0h |

## Sources

| File | Contents |
|---|---|
| `src/main.cpp` | SDL: window, the 59.94 Hz frame clock, audio, keys, mouse; the headless dump mode |
| `src/mag.h/.cpp` | the reader, translated routine by routine from IMPHOB8.EXE (comments give #8's offsets) |
| `src/vga.h/.cpp` | the VGA as the mag drives it, and its rendering with mid-frame register changes |
| `src/modplayer.h/.cpp` | module player (ProTracker rules, no SDL) |
| `tools/extract_assets.py` | unpacks the EXE and copies the data files into `data/` |
| `tests/tests.cpp` | eight scenarios checked against captures of the original; the tunes for sense |
| `tests/data/*.txt` | the captures: inputs, then the sequence of video-memory and DAC CRCs |

The raster splits and the timer's state machine are #9's, described in the
#12 port's README.

## Checking against the original

`~/proy/rea/imphobia8-analisis` holds the harness adapted to #8. The
scenarios in `tests/data` are equal state for state with it (the original's
first state, the text screen before its configuration questions, is left
out): the start (cover, fades, main menu); the credits; the articles list
and an article; the interviews list (screens, an interview, its
neighbours, page turns, F); the charts list; a chart's note and the
editorial; the same driven by the mouse; and the exit.

Not checked against the original: the exact lines of the splits, and the
music (the port's player was not compared with the GUS replay).
`IMPHOBIA_STATE_DUMP=N IMPHOBIA_STATE_SCN=name imphobia8_tests .` writes the
port's state N of a scenario to `state_N.bin`, for `statediff.py` in the
harness.
