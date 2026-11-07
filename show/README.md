# show

A C++17 / SDL3 port of **Show**, by Majic 12: released at the Hammering '94
party (Budapest, April 1994), "the final bugfree version". Code by Maxwood,
Phantom and Little. The music is "Crossroads" by Chorus & Sid, played on
the Gravis UltraSound by Cascada's player.

The demo is SHOW.EXE: a small loader with the music player linked in, and
32 parts it reads from its own file and calls one after the other. All of
that code is translated to C++ by a program (`src/gen`): the code the
original runs, as an emulation harness traced it. That is about 24,000
instructions, plus 87,000 in the code two of the parts generate (110,324
in all). It runs on a
hand-written model of the machine. The port is checked against the
original frame by frame, VGA write by VGA write and GUS write by GUS write.

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/show --data DIR          # DIR: SHOW.EXE [--scale N] [--mute]
ctest --test-dir build           # the port against the original
```

The port needs the demo's own file, SHOW.EXE (1,954,074 bytes). It looks for
it in `--data DIR`, `$SHOW_DATA`, `data/` or next to the executable.

The demo runs eight minutes and 47 seconds and ends, as the original, by
leaving DOS's text behind; the port prints it. Esc closes the window. The
window shows each mode's picture at 4:3, each line in the palette of the
moment it was displayed (HAM changes it every few lines). The music paces
the frames; without an audio device, a timer does.

Headless: `show --dump DIR --seconds S [--wav FILE] [--gus FILE]` writes
`DIR/frames.txt`. Each line has:
- the frame number and its time;
- a CRC-32 of the picture: the bytes the CRTC reads in that frame, then the
  pel panning, the overscan colour and the attribute palette;
- a CRC-32 of the DAC;
- a CRC-32 of the VGA port writes since the frame before, each as
  "time port value".

`--wav` writes the music, `--gus` the GUS register writes.
`SHOW_PPM=f1,f2,...` saves those frames' pictures as the window shows them.

## How the demo is built

SHOW.EXE's load image is 17 KB:
- the loader;
- Cascada's GUS module player.

After it come the parts, each a .COD (code) and a .DAT (data), then a
directory and the module.

The loader:
1. looks for the GUS at 210h-260h;
2. starts the player with the module;
3. times the CPU, and on a fast machine plays KOM instead of COM;
4. for each part, reads the .COD into 1501:0000 and the .DAT into 2501:0000
   and far-calls the code.

A part gets the address of a player variable that changes with the music,
waits for it, and returns when its time is up.

| # | part | from (s) | |
|---|---|---|---|
| 0-3 | SKULL, START, QQ, ROT | 0 | "WELCOME", the Majic 12 logo, a rotating textured "SHOW" |
| 4 | CH | 32.9 | rings of dots, drawn by some 400 routines the part generates |
| 5-12 | COPPER, 16C, 1LAP, PIXEL, TMAP, DO, TRON, C | 52.3 | copper text, plasma, wireframes, texture mapping, cubes |
| 13 | DOOM | 163.8 | the scanned picture on the walls: 70 generated routines |
| 14-21 | NEWG, STOP, ART, ZZZ, INTER, CIR, FAST, RULES | 178.8 | greetings, Garfield, a painting and a zoom, interference, a dot sphere |
| 22-29 | CRED, NOTJUST, RAS, BIGS, CYC, BOB, KOM, HAM | 301.2 | credits, "not just amiga", plasmas, a landscape, palette per line |
| 30-31 | END, THE | 428.8 | the end texts, Garfield |

## Sources

| File | Contents |
|---|---|
| `src/machine.h/.cpp` | memory (16 MB, the VGA window routed to the VGA), ports, PIT counters 0 and 2, PICs, keyboard; time: the program's thread, its waits (3DAh line by line), interrupts |
| `src/vga.h/.cpp` | the VGA register by register (write modes, latches, chain-4, planar 16-colour modes), the BIOS's mode tables and default palettes, CRTC timing, attribute controller, DAC |
| `src/gus.h/.cpp` | the GUS as the player sees it, and the GF1's synthesis |
| `src/dos.h/.cpp` | DOS memory (MCBs), SHOW.EXE loaded and relocated, its file |
| `src/demo.h/.cpp` | SHOW.EXE's start, the parts' names |
| `src/cpu.h/.cpp` | what the translations work on: registers, segment bases, flags, the stack, string instructions, interrupts through the IVT, the BIOS and DOS services |
| `src/gen/code*.cpp` | SHOW.EXE (00) and the parts (01-32), translated (by `translate.py` in the analysis) |
| `src/main.cpp` | SDL window, audio stream, headless dump |
| `tests/tests.cpp` | the whole demo against the original |

## The translation

`translate.py` (in `../../rea/show-analisis`) works from what the harness
recorded while the demo ran:
- every basic block with its bytes;
- the control-flow steps;
- every write into code.

SHOW.EXE and each part become one C++ function each. A function is entered
at a linear address through a switch, with a label for every block. Every
instruction becomes a line or two of C++, with the original instruction as
a comment. Immediates and displacements the code patches are read from
memory. Flags are computed only where an instruction that reads them may
follow.

The code CH and DOOM generate is translated as they wrote it. It gets one
function per routine, and every block is checked against those bytes when
it runs.

Code the harness never ran is not in the translation. If the port reached
it, it would stop and say where. The demo takes no input, so the port
follows the same paths.

## Time

As in the harness, the CPU is infinitely fast: running code takes no time,
and time only moves when the program waits.
- **Polling 3DAh:** the third same read of the bits the program tests jumps
  to their next change, or to an interrupt due before it. Those bits are the
  vertical retrace (bit 3) or the display enable (bit 0), which changes
  twice a line.
- **A part's wait for the player's variable:** goes to the next interrupt.

The player's timer runs at 1000 Hz. An interrupt is taken at the first
point where it can be: the flag set, nothing of its priority in service.

## Verification

`ctest` runs the whole demo, to its DOS exit at 526.77 s, and compares it
with the original under the harness:
- 36,116 frames, each with its picture, DAC, VGA writes and time;
- all 471,037 GUS register writes and their instants;
- the end text.

The test takes about 11 seconds. The GF1's synthesis itself has no
reference, since the harness logs registers, not sound.
