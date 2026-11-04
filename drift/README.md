# drift

A C++17 / SDL3 port of **DRIFT**, Wild Light's 64K intro, winner of the
64K intro competition at Assembly '95 (code Vulture, Asmu, Odd Monk and
Preacher, music Nobody, PMODE by Tran). It is a translation of the
program, not a remake. The intro and its music player are translated
routine by routine and checked against the original frame by frame and GUS
write by GUS write. The original ran under an emulation harness in
`../../rea/drift-analisis`.

## Building and running

```bash
python3 -I tools/extract_assets.py DRIFT.EXE .    # data/drift.img (needs unicorn)
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/drift                       # [--scale N] [--mute] [--data DIR]
ctest --test-dir build              # the port against the original
```

The intro runs 3 min 41 s and quits by itself. Esc works as in the
original: it ends the intro in the fire logo, the Julia parts and the end
scroller's wait for the song to finish, and it cuts the vector part short.
The window shows the picture at 4:3, 320x200 or (the end scroller)
640x480. The music paces the frames; without an audio device, a timer
does.

Headless: `drift --dump DIR --frames N [--keys F,...] [--wav FILE] [--gus
FILE]` writes `DIR/frames.txt`: per frame, a CRC-32 of the picture (the
plane bytes the CRTC reads) and of the DAC. Esc is held from the frames
listed for three frames. `--wav` writes the music, `--gus` the GUS register
writes. `DRIFT_RAW=f1,f2,...` saves those frames' plane bytes and DAC.

## Sources

| File | Contents |
|---|---|
| `src/machine.h/.cpp` | memory (the flat segment), ports, the clock: PIT, GUS timer, retrace, frames; the program's thread and its waits |
| `src/pmode.inc` | what Tran's PMODE leaves in the segment when it calls the program (from the harness) |
| `src/vga.h/.cpp` | planar VGA: mode 13h, Mode X, mode 12h, start address, line compare, DAC |
| `src/gus.h/.cpp` | the GUS as the player sees it: register file, timer 1, volume read-back; GF1 synthesis |
| `src/player.h/.cpp` | ASMU's S3M player, its GUS half (2150h-3D47h) |
| `src/samples.cpp` | the module's samples, made at start-up (EAEAh) |
| `src/demo.h/.cpp` | the set-up, the timer interrupt and its callbacks, the parts' sequence |
| `src/fire.cpp` | part 1, the fire logo (FE86h-100D3h) |
| `src/engine.cpp`, `engine2.cpp` | the 3D engine: normals, rotation, projection, lighting, radix sort, clipping, Gouraud filler, the ripple (10918h-11EBCh) |
| `src/precalc.cpp` | the precalculation: objects made, pictures drawn (1B12Bh-1B739h) |
| `src/vectors.cpp`, `scenes.cpp` | the vector parts: timer step, shadows, Mode X switch, the scripts (1A896h-1BBD2h) |
| `src/julia.cpp` | the Julia morpher, the landscape, the greets (1C924h-1D39Eh) |
| `src/endscroll.cpp` | the end scroller in mode 12h (1D5DFh-1D83Dh) |
| `src/main.cpp` | SDL window, audio stream, keys, headless dump |
| `tools/extract_assets.py` | unpacks DRIFT.EXE (WWPack) into `data/drift.img` |
| `tests/tests.cpp` | the whole intro's frames, Esc at frame 6000, the music's GUS writes |

## The program

DRIFT.EXE is packed with WWPack. Unpacked, it is Tran's PMODE 3.0 and one
flat 32-bit segment (image offset EB0h, linear 10FB0h under the harness)
with all code and data: the intro, the S3M module (without its samples),
fonts, palettes, objects.

The port keeps that segment as its memory: routines and variables keep
their offsets, and memory written by one routine and read by another
(tables in code, immediates the code patches into itself) works as in the
original. The heap starts at 1EF050h (extended memory at 2 MB). PMODE's
selectors are reduced to their bases: A0000h, and the heap's start for the
frame buffer.

### The sequence

1. **Set-up** (213A5h, 21570h): the original asks for the sound card, its
   port and IRQ. The port takes the harness's answers (Gravis UltraSound,
   220h, IRQ 11) and has no menus. The timer gets 4297h (70 Hz). 39DF3h
   bytes of heap get the module and its synthesized samples. The objects
   and pictures are precalculated, the module goes to the GUS, the text
   screen fades, mode 13h is set, the song starts.
2. **Fire logo** (FECBh): a fire buffer feeds noise under the logo's points.
   It grows to 678h points, and the picture fades in from white. It runs
   two frames a picture and ends with two palette fades.
3. **Vectors** (1A896h): a room and flying objects with shadows, Gouraud
   shaded, in a scripted sequence. It has fades, a white flash, a ripple
   precalculated in eight frames inside a growing circle, and the room
   spinning. It ends switching to Mode X.
4. **Julia morpher** (1CAADh): a Julia set computed on a 160x100 grid, its
   parameter moving between keyframes. It is shown as a landscape in Mode X
   pages.
5. **Julia and vectors** (21909h, 21944h, 21989h): the same, drawn into the
   frame buffer with the vector objects over it, then copied to a page. In
   the second of these, the greets are written into the grid a word at a
   time.
6. **Vector ending** (1AD70h): back to mode 13h, a last vector scene. Then
   mode 12h: the last picture in two colours, doubled across and stretched
   6/5 down, faded in.
7. **End scroller** (1D5DFh): 640x480, a 480-line circular buffer scrolled
   by the start address with the line compare register.
8. The program waits for the song's end (position 1300h) and quits.

The timer's callback depends on the part (state at 2097Ch, table at
20980h). It moves the objects and the light, steps fades, moves the Julia
parameter and the greets.

### Time

The original renders as fast as it can. Some loops wait for the retrace,
others don't, so on a real PC what is shown depends on the CPU's speed. The
harness runs it on an infinitely fast CPU (10^13 instructions a second), so
the program only ever waits. Its waits are:

- **Polling 3DAh:** the third read in a row of the same value jumps to the
  next edge of the retrace (6 % of a 70 Hz frame), or to an interrupt due
  before it. The end scroller's waits give up after 1.5 times the polls a
  frame took when it started. Those counts follow the same rule.
- **Presents:** a copy of the frame buffer to the screen (1B758h), or a page
  flip (1CFD0h), with no retrace wait since the previous one waits for the
  next timer tick. Loops that never wait for the retrace thus draw once a
  tick.
- **The music position:** a spin on it waits for the next interrupt.

The port follows the same model. The program runs on its own thread. At
each wait it hands over to the caller, which moves time on event by event:
PIT ticks, GUS timer interrupts, the retrace's start (the CRTC latches the
start address there), and the middle of each frame, when the frame is
taken. Times land just past the moment as the harness's instruction count
does (10^-13 s), which the GUS timer's arithmetic depends on.

## The music

ASMU's player plays the S3M (8 channels, 42 patterns, 14 instruments) on
the GUS. It is translated keeping the registers, because some results
depend on what a register happens to hold. Its variables stay at their
offsets.

- **Samples:** none are in the file. Eleven are morphs between short
  single-cycle waves (a wave list and an index sequence per instrument,
  each pair cross-faded over a number of cycles). Two are short waves
  stretched by linear interpolation, one is copied as it is. 200h bytes
  follow each one: the loop continued, or silence.
- **Timer:** GUS timer 1, 30D4h / (2 × tempo) units of 80 µs. Every other
  interrupt is a tick.
- **GUS:** 16 active voices (38587 Hz output). Volume changes are ramps from
  the voice's current volume, which the player reads back (89h).

Quirks of the original, kept because they change what the GUS gets:

- When a vibrato ends (370Ah), 3B24h returns the caller's EAX in EBX. That,
  not the period, is what 23F1h turns into the voice's frequency.
- Before stopping a voice for a new note, the player means to stop its
  volume ramp. It writes value 0Dh to register 3 (the sample start)
  instead of value 3 to register 0Dh.
- What the player reads back from the GUS is the harness's model of it:
  the register file as written, with the volume ramps following a closed
  formula (see `Gus::volume`). Two bugs in the harness's first model were
  fixed during the port. Reads of 80h-8Fh read the global registers, so
  the player saw volume 0 and every volume change ramped from silence.
  8-bit registers read through 3x5 gave their high byte.

## Verification

`ctest` runs the intro from where the port starts (frame 133, 1.9 s, after
the original's menus) to its end, 15456 frames. It compares the CRC of the
picture and of the DAC at every frame with the original's under the harness.
It does the same with Esc pressed at frame 6000, and compares all of the
music's GUS register writes (about 221,000) with the harness's log. The GF1's
synthesis itself has no reference: the harness logs registers, not sound.

Not ported: the setup menus and the Sound Blaster player.
