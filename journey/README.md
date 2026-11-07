# journey

A C++17 / SDL3 port of the **Journey** music disks: *Journey I* and
*Journey II*, music by Purple Motion of Future Crew (December 1993). Both
disks are the same program, Future Crew's **MusicDiscPlayer V1.0**
(MDP.EXE). It reads a menu description (MDP.MDI) and plays the disk's
S3M and MOD modules on a Gravis UltraSound. So one port plays both disks,
or any other disk made for MDP.

MDP.EXE is a Turbo Pascal program with two pieces linked in: Sami
Tammilehto's Scream Tracker Music Interface Kit (STMIK) and STMIK's GUS
driver. All of its code is translated to C++ by a program (`src/gen`):
- the code an emulation harness saw it run (9,941 instructions);
- the code that code's direct branches reach (5,675 more).

That translation runs on a hand-written model of the machine. The port is
checked against the original frame by frame, VGA write by VGA write and
GUS write by GUS write, on both disks.

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/journey --disk 1         # or --disk 2, or --data DIR; [--scale N] [--mute]
ctest --test-dir build           # the port against the original
```

A disk is its directory as released: MDP.EXE, MDP.MDI and the modules.
`data/JOURNEY1` and `data/JOURNEY2` hold them. `--disk N` looks for
`JOURNEY<N>` in several places:
- `$JOURNEY_DATA`;
- the working directory and its parent;
- next to the executable;
- each of those with `data/` added.

`--data DIR` takes any MDP disk.

MDP.EXE is packed with LZEXE 0.91. The port unpacks it (`unlzexe` in
`dos.cpp`) and runs the unpacked program as DOS would load it.

### Keys

These are MDP's own keys.

| | menu | playing |
|---|---|---|
| Up / Down | choose a song (the menu scrolls) | |
| PgUp / PgDn | a page up / down | |
| Enter | play it | |
| Left / Right | | previous / next pattern in the order list |
| Esc | back to the playing screen | the menu (the song stops) |
| F10 | quit | quit |
| F7 | | DOS shell |

There is no COMMAND.COM, so F7 ends MDP the way the original does without
one: "Could not execute COMMAND.COM", exit code 1. Esc in the menu before
any song has played ends MDP with "Runtime error: 205 Floating point
over/underflow". That bug is the original's.

When MDP ends, the window closes. The port then prints MDP's text page,
the lines it wrote in text mode, and exits with MDP's exit code.

### Headless

```bash
journey --disk 1 --dump DIR --seconds S [--keys FILE] [--wav FILE] [--gus FILE]
```

This writes `DIR/frames.txt`, one line per frame:
- the frame number and its time;
- a CRC-32 of the picture: the bytes the CRTC reads, then the pel panning,
  the overscan colour and the attribute palette;
- a CRC-32 of the DAC;
- a CRC-32 of the VGA port writes since the frame before;
- a CRC-32 of the text page (B800:0000).

`--keys FILE` presses keys: one line each, "time scancode", with the scan
code in hex (bit 7 for a release). This is the format of the analysis's
captures. `--wav` writes the music and `--gus` the GUS register writes.
`JOURNEY_PPM=f1,f2,...` saves those frames as the window shows them.

## The program

At startup MDP runs these steps:
1. Prints its banner and the sound card it finds in text mode: "Soundcard
   Gravis Ultrasound", "Gus memory : 1024".
2. Probes the AdLib and the SoundBlaster ports, finding nothing.
3. Reads MDP.MDI and sets mode 12h. It reprograms the CRTC to a 512-dot-wide
   picture for the menu, which scrolls smoothly as the selection moves.

Enter loads the module, reading it twice, and switches to the playing
screen: 640 × 480 with the song's title, the order, pattern and row, and a
note display, one column per channel. STMIK's GUS driver plays from the
timer interrupt, with the PIT at 50 Hz.

| Disk | Songs |
|---|---|
| Journey I | Aquaphobia, Exploration, Global Motion, Inspiration, Purple Sky II, A Touch of Spring, Turbulence (all S3M) |
| Journey II | Shadowrun (MOD), Satellite One, Cool City vol 1.2, Day of the Lollipop, Minimum Velocity (S3M), Soul-O-Matic (MOD), Starshine (S3M) |

## Sources

| File | Contents |
|---|---|
| `src/machine.h/.cpp` | memory (16 MB, the VGA window routed to the VGA), ports, PIT counters 0 and 2, PICs, keyboard; time: the program's thread, its waits (3DAh line by line, the PIT latch reads), interrupts |
| `src/vga.h/.cpp` | the VGA register by register (write modes, latches, planar 16-colour modes), the BIOS's mode tables and default palettes, CRTC timing, attribute controller, DAC |
| `src/gus.h/.cpp` | the GUS as the player sees it, and the GF1's synthesis |
| `src/dos.h/.cpp` | DOS memory (MCBs), the LZEXE unpacker, MDP.EXE loaded and relocated, the disk's files |
| `src/demo.h/.cpp` | MDP.EXE's start, its text page |
| `src/cpu.h/.cpp` | what the translation works on: registers, segment bases, flags, the stack, string instructions, the x87 as far as Turbo Pascal's startup test goes, interrupts through the IVT, the BIOS and DOS services |
| `src/gen/code00.cpp` | MDP.EXE, translated (by `translate.py` in the analysis) |
| `src/font8x16.inc` | the window's text-mode font (code page 437, `tools/mkfont.py` from a Linux console font) |
| `src/main.cpp` | SDL window, keyboard, audio stream, headless dump |
| `tests/tests.cpp` | the scenarios against the original |

The runtime started as the Show port's (`../show`).

## The translation

`translate.py` (in `../../rea/journey-analisis`) works from what the
harness recorded while MDP ran a set of scenarios on both disks:
- every basic block with its bytes;
- the control-flow steps;
- every write into the code segments.

The scenarios are:
- each song once through, until STMIK's order goes back;
- every key of the menu and of the playing screen;
- F7, F10, and Esc before any song.

The traced code is only part of the program. From it, `translate.py`
follows every direct jump, call and fall-through into the code the harness
never ran, and translates that too. It does not cross into bytes the program
writes: MDP never modifies its code, so those bytes are data. This covers
paths the scenarios did not take. Twenty runs of random keys, of 300 s each
on both disks, never left the translation. Indirect jumps go only where the
harness saw them go. If the port reached an address it lacks, it would stop
and say where.

The whole program is one C++ function, entered at a linear address
through a switch, with a label for every block. Every instruction becomes
a line or two of C++, with the original instruction and its run count as a
comment. Flags are computed only where an instruction that reads them may
follow.

Turbo Pascal's System unit saves and restores registers with two helpers
that pop their return address and jump to it. A routine can therefore come
back to an address an outer call expects. A call that comes back elsewhere
handles that case two ways:
- it unwinds, if an outer call (inside the same interrupt handler) expects
  that address;
- otherwise, it goes on at that address.

## Time

As in the harness, the CPU is infinitely fast: running code takes no time,
and time moves only when the program waits.
- **Polling 3DAh:** the third same read of the bits the program tests jumps
  to their next change, or to an interrupt due before it.
- **Reading a latched PIT count:** this is Turbo Pascal's CRT `Delay`, used
  while detecting the card. Each read takes 1 ms.

An interrupt is taken at the first point where it can be: the flag set,
nothing of its priority in service. In the window, keys go to the machine
at its current time. Between steps the machine is stopped.

## Verification

`ctest` runs 20 scenarios, 10 on each disk:
- each song once through: 2 to 6 minutes. After it come every key (disk's
  first song) or Esc and F10;
- F7 from the playing screen;
- Esc in the menu before any song;
- F10 in the menu.

Each scenario is compared with the original under the harness, given the
same keys at the same instants:
- every frame: 172,058 in all, each with its picture, DAC, VGA writes,
  text page and time;
- every GUS register write with its instant: 2,573,063 in all;
- the exit and its instant.

The test takes about 80 seconds. The GF1's synthesis has no reference,
since the harness logs registers, not sound.
