# asm94

A C++17 / SDL3 port of the **Assembly '94 invitation intro**, by Future
Crew and Sonic PC (April 1994: code mik/Sonic PC, graphics Marvel/FC and
Pixel/FC, music Purple Motion/FC, Tran's PMODE). It is a translation of the
program, not a remake. The intro and Mikko Sairio's music player are
translated routine by routine. They are checked against the original frame
by frame and GUS write by GUS write, with the original running under an
emulation harness in `../../rea/asm94-analisis`.

## Building and running

```bash
python3 -I tools/extract_assets.py ASM-94.EXE .   # data/asm94.img (needs unicorn)
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/asm94                       # [--scale N] [--mute] [--data DIR]
ctest --test-dir build              # the port against the original
```

The intro shows the organisers' names turning, the title, and the
invitation screen. The screen's text then loops until Esc, as in the
original. Esc works where the original checks it. During the names or the
title it ends the intro at once. During the text, the palette and the
music fade out first. The original's sound card menu and command-line
options are not ported: the port plays on the GUS, as the original's
autodetection finds it. The window shows the 320x240 picture at 4:3. The
music paces the frames; without an audio device, a timer does.

Headless: `asm94 --dump DIR --seconds S [--keys F,...] [--wav FILE] [--gus
FILE]` writes `DIR/frames.txt`. Each line holds a frame number, a CRC-32 of
the picture (the bytes the CRTC reads, then the pel panning and the
overscan colour) and a CRC-32 of the DAC. Esc goes down from the middle of
the frame before each frame listed, for three frames. `--wav` writes the
music, `--gus` the GUS register writes. `ASM94_RAW=f1,f2,...` saves those
frames' bytes and DAC.

## Sources

| File | Contents |
|---|---|
| `src/machine.h/.cpp` | memory (the flat segment, the VGA window routed to the VGA), ports, PIT, PIC, keyboard; time: the program's thread, its waits, the interrupts |
| `src/runtime.inc` | what PMODE and the sound card set-up leave by 4007h: memory, the GUS's registers (from the harness) |
| `src/vga.h/.cpp` | mode 13h unchained to 320x240 (Mode X): planes, read map, CRTC (start address, offset, line compare, timing), attribute controller (pel panning, overscan), DAC |
| `src/gus.h/.cpp` | the GUS as the player sees it (register file, timer 1, volume read-back), GF1 synthesis (from the DRIFT port) |
| `src/demo.h` | the program's routines, by address |
| `src/intro.cpp` | main, the parts, their timers, the heap |
| `src/player.cpp` | Player 1.68r's GUS half: the module's loading, the tick, the effects |
| `src/main.cpp` | SDL window, audio stream, keys, headless dump |
| `tools/extract_assets.py` | unpacks ASM-94.EXE (PKLITE) into `data/asm94.img` |
| `tests/tests.cpp` | 400 s of frames and GUS writes, Esc in each part |

## The program

ASM-94.EXE is packed with PKLITE. Unpacked, it is Tran's PMODE and one flat
32-bit segment (image offset EB0h, linear 8FB0h in the harness) with all the
code and data: the intro, the player, the module, the pictures and fonts.
PMODE enters protected mode itself (raw or XMS); it only uses DPMI or VCPI
when the CPU is already in V86 mode.

The port keeps that segment as its memory: routines and variables keep
their offsets. The code patches itself in several places, and the port
reads those bytes where the original does:
- the shift count of the sine routine's SHRD (0B99h: 10, then 13 for the
  text writer);
- a jump displacement into an unrolled run of pixel writes (1D22h) and the
  skip count of the shrinking scaler (1D44h);
- the screen's address in the ellipse code (3C8Bh and others);
- the colour mixer's second colour (212Ch) and where its loop goes back to
  (214Ah).

### The sequence

1. **Set-up** (3F1Dh, before the port's start): the command line, the menu
   ("hit any other key... to detect your GUS"), the GUS found at 220h, IRQ
   11.
2. **Mode X** (0BF4h): mode 13h, unchained, 480-line timing, 320x240.
3. **The names** (1EFBh): Accession, Future Crew, The Movement, Sonic PC and
   Carillon & Cyberiad, each turning about the vertical, its columns scaled.
   A 960 Hz timer keeps the angle and polls the music.
4. **The title** (3949h): ASSEMBLY '94 fades in from white. From here a
   140 Hz timer sets a frame flag every fifth tick, which the later parts
   wait for.
5. **The screen** (2462h): the title fades out. The invitation screen is
   drawn and scrolled in from the side with pel panning, and its palette
   fades in.
6. **The text writer** (30D7h): the invitation text, letter by letter, each
   letter fading in over twelve frames. A buffer's changed dwords go to the
   screen; a dotted ellipse turns around the text. The text loops. Esc
   fades the palette and the music volume out.
7. The text screen of the end (0C8Eh), and back to DOS.

### Time

The harness runs the original on an infinitely fast CPU: running code takes
no time, and time only moves when the program waits:
- **Polling 3DAh:** the third read in a row of the same retrace state jumps
  to the next edge, or to an interrupt due before it.
- **The frame flag** (31E2h): a spin on it jumps to the next interrupt or
  key.

The frames follow the CRTC's registers. A frame's period comes from the dot
clock (misc output), the character width and the horizontal and vertical
totals. That gives 70.09 Hz in mode 3 and mode 13h, and 59.71 Hz for this
Mode X. Each frame starts with the vertical retrace, where the CRTC latches
the start address and the pel panning, and is taken in its middle.

Interrupts come due while the program waits. They are taken there, on the
program's thread, in the PIC's priority order, if the interrupt flag is set
and nothing of the same or a higher priority is in service. A handler's STI
takes what is still pending, so the GUS's interrupt can arrive inside the
timer's handler, as on a PC.

## The music

Player 1.68r plays a packed ProTracker module, four channels and 31
samples. The order list and sample headers keep MOD's layout. Each
pattern note is unpacked to five bytes, and the samples' bytes are XORed
with 25h. The samples go to the GUS's DRAM at the start. GUS timer 1's
interrupt runs the tick every second or fourth interrupt, depending on the
tempo. Each channel switches between two GUS voices to start a note: the
old one ramps down while the new one starts. Volumes are ramps from the
volume the voice has reached, read back from the GUS.

The player is translated keeping its variables at their offsets. This
module uses effects 0, 2–6, 9, A–D, E9, ED and F; the code of the effects
it never reaches reports itself if ever run.

## Verification

`ctest` runs the intro for 400 s, 23906 frames. At every frame it compares
the CRC of the picture and of the DAC with the original's under the
harness. It compares all of the music's GUS register writes from the
port's start (269,115), and the runs with Esc pressed at frames 400, 900
and 3000. Everything matches. The GF1's synthesis itself has no reference:
the harness logs registers, not sound.

Not ported: the sound card menu and command line, the Sound Blaster and
Pro Audio Spectrum code.
