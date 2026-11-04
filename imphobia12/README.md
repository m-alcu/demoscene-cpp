# imphobia12

A C++17 / SDL3 port of **Imphobia Issue #12** (IMPHOB12.EXE, July 1996,
released at The Summer Party '96), the PC diskmag of the Belgian group
Imphobia. Main editor Darkness, code by The Wizard, graphics and cover by
P.L., GUS replay by Robban/Cascada; background tunes by Shad, Clawz, Dune and
Void. CMake, SDL3 located through pkg-config, sources in `src/`, one test
target.

The whole reader is ported: the cover, the main menu, the four sections
(editorial, charts, articles, interviews, credits), every article, the
scroll bar, the mouse, the music and the end screen. The configuration
screens are not: the port starts straight in the mag (see below).

## Building and running

```bash
tools/extract_assets.py ~/proy/rea/Imphobia/IMPHOB12 data   # needs: pip install unicorn
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/imphobia12
ctest --test-dir build        # the mag against the original, frame by frame
```

`imphobia12 [--40col] [--data DIR] [--scale N]`

- **Keys:** arrows to move and to turn pages, Enter / Space / E to open, Esc
  to go back (at the main menu: quit, through the end screen). In an article
  Up and Down go to the previous and next article of the list. F saves the
  article as `NAME.TXT` in the current directory. F1-F4 change the tune,
  F9 turns the music off and on.
- **Mouse:** as in the original: the cursor is drawn by the mag in the text
  area, left button opens, right button goes back, moving to the left or
  right edge turns the page.
- `--40col` turns pages by one 40-column page instead of a whole screen
  (the original asked "Do you want to force a FULL (80 columns) page
  scrolly"; the default here is yes, as in the configuration this port was
  made from).

`data/` must hold what `tools/extract_assets.py` makes from the original
directory: `imphob12.img` (the unpacked load image of IMPHOB12.EXE, whose
data segment holds the menus' article lists and the tune table),
`NFO12.DAT` and `DATA.001`-`DATA.004`.

## What changed from the original

- **No configuration screens.** The original asked for the sound card, its
  port, IRQ and DMA, a "compatibility mode", the printer and the scroll
  width, every time unless IMPHOBIA.CFG was there. The port behaves as with
  a Gravis UltraSound (all four tunes, including the two 8-channel ones that
  the SoundBlaster version could not play) and no printer.
- **Music** is played by the port's own module player
  (`src/modplayer.cpp`), not by a translation of the GUS/SB replay code.
  Volume and fades follow the mag's own volume variable, which the original
  passed to the GUS replay.
- **P (print)** does nothing: it sent the article to LPT1/LPT2.
- **F (save)** writes readable files. The original's routine stepped to
  the next row one byte short and dropped the last two columns, so its
  files slid one column left on every row.
- Loading a tune took a moment (the screen is black meanwhile); the port
  switches at once.

## Sources

| File | Contents |
|---|---|
| `src/main.cpp` | SDL: window, the 59.94 Hz frame clock, audio, keys, mouse; the headless dump mode |
| `src/mag.h/.cpp` | the reader, translated routine by routine from IMPHOB12.EXE |
| `src/vga.h/.cpp` | the VGA as the mag drives it, and its rendering with mid-frame register changes |
| `src/modplayer.h/.cpp` | module player (ProTracker rules, 4 and 8 channels, no SDL) |
| `tools/extract_assets.py` | unpacks IMPHOB12.EXE (PKLITE) and copies the data files into `data/` |
| `tests/tests.cpp` | six scenarios checked against captures of the original; the tunes for sense |
| `tests/data/*.txt` | the captures: inputs, then the sequence of video-memory and DAC CRCs |

## How the original works, and this port with it

IMPHOB12.EXE is PKLITE-compressed. Unpacked (76,526 bytes) it is
hand-written 16-bit assembler: the reader in the first code segment (to
`30E6h`), the directory of NFO12.DAT, the file routines; a second segment
with the SoundBlaster and GUS code; the data segment at `0E4Dh`. `mag.cpp`
keeps the program's variables where they were, in a copy of the data
segment (`DS:xxxx`) and of the code segment (`CS:xxxx`, where the timer and
font variables live), and each routine is named by its offset.

**NFO12.DAT** is 267 resources one after the other, located through the
directory in the EXE (13-byte name, offset, size). Articles (`.IRF`) have a
44-byte header (row length, number of colour runs, page width) followed by
15 rows of text, one byte per character as an index into the font (ASCII
minus 20h), and runs of colours. The pages of an article sit side by side
in those rows; the reader shows two 40-column pages and scrolls sideways.
A colour with bit 4 set marks a large character (SLCTBIG, 32 lines).
Menus are the same with 12 rows.

**The screen** is mode 12h (640x480, 16 colours), with the attribute
controller set so that the colour select register picks which 16 of the
256 DAC entries are used. The timer interrupt is reprogrammed once per frame
in one-shot mode, with counts measured at start from the retrace, into a
small state machine:

- at line 139 it writes the CRTC offset register on four consecutive lines.
  Together those four lines advance the display address by the scroll
  position, so the text area below starts anywhere in video memory: the
  sideways scroll costs drawing only two new columns per frame. Then it
  selects the text area's colour bank;
- at line 423 it selects the bottom panel's bank;
- before the vertical retrace it selects the top's bank and sets the frame
  flag the program waits on.

The bottom panel is a line-compare split showing video memory from 0; it
slides up and down by moving the line compare. The text is drawn by write
mode 3 with the character's colour in set/reset, over the background loaded
into the latches from a copy of it kept past the visible screen.

The port draws through `Vga`, a model of the VGA's planes, latches and
write modes, so video memory and the DAC hold what the original's held. The
program runs on its own thread; where it waited for the frame flag or the
retrace, it hands the frame to the main thread, which renders it with the
timer's register writes placed on their lines (`Mag::rasterWrites`), does
what the timer's last state did, and gives back the next keyboard scancode
and the mouse.

## Checking against the original

`rea/imphobia-analisis` has a Unicorn harness that runs the unpacked EXE
in real mode with a register-level VGA, the PIT and PIC timed by instruction
count, the program's own int 8 and int 9, and DOS, BIOS and mouse services
in Python (no sound card). `capture.py` records a CRC of the four planes and
of the DAC at every frame flag, while feeding keys and mouse positions at
given frames. The port's headless mode (`--dump DIR --frames N --keys ...
--mouse ...`) writes the same, and `compare.py` compares the two as
sequences of distinct states (the original spends some frames the port does
not, measuring the timer before the main menu).

The six scenarios in `tests/data` are equal state for state: the start
(cover, fades, main menu), the interviews section and an interview scrolled
both ways, the articles section in 80- and 40-column mode (turning the
list's pages, opening an article, going to its neighbours, saving it), the
same driven by the mouse, and the end screen to the program's exit.

What is not checked against the original: the exact lines where the timer's
splits fall (the harness's timing is approximate to a line or two; the port
uses the lines the measured counts stand for), and the music (the port's
player was not compared with the GUS replay).
