# ctslasse

A C++17 / SDL3 port of **Lasse Reinbøng**, the 64K intro by Cubic Team &
$eeN (party version, December 1995; PMODE/W 1.20, Gravis UltraSound only).
It is a translation of the program, not a remake. The intro, its 3D engine
and its music player are translated routine by routine. They are checked
against the original frame by frame and GUS write by GUS write, with the
original running under an emulation harness in `../../rea/ctslasse-analisis`.

## Building and running

```bash
python3 -I tools/extract_assets.py CTSLASSE.EXE .   # data/ctslasse.img
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/ctslasse                    # [--scale N] [--mute] [--data DIR]
ctest --test-dir build              # the port against the original
```

The intro runs 3 min 34 s and quits by itself. Esc works as in the
original: it ends the current part, skips all the parts after it, and the
intro quits. The window shows the 320x200 picture at 4:3. The music paces
the frames; without an audio device, a timer does.

Headless: `ctslasse --dump DIR --frames N [--keys F,...] [--wav FILE]
[--gus FILE]` writes `DIR/frames.txt`. Each line holds a frame number, a
CRC-32 of the picture (the bytes the CRTC reads) and a CRC-32 of the DAC.
Esc is held for three frames from each frame listed. `--wav` writes the
music, `--gus` the GUS register writes.

## Sources

| File | Contents |
|---|---|
| `src/machine.h/.cpp` | memory (linear, flat selectors), ports, PIT, retrace, frames; the program's thread and its waits |
| `src/runtime.inc`, `runtime.cpp` | what PMODE/W and Watcom's start-up leave in memory at `main`; the Watcom heap (`_nmalloc`, `_nfree`), `memset`, the console |
| `src/vga.h/.cpp` | mode 3 and mode 13h, the start address, the DAC |
| `src/gus.h/.cpp` | the GUS as the player sees it (register file, ramps, volume read-back), GF1 synthesis |
| `src/x87.h` | the x87 as the harness's CPU computes it: 80-bit arithmetic, its transcendentals, the register stack |
| `src/player.cpp` | the MXM player (15000h-15D40h), ticked by IRQ 0 |
| `src/demo.h/.cpp` | `main` (18883h): checks, heap, precalculation, music, the parts' sequence |
| `src/precalc.cpp` | the textures: noise, blurs, displacement, masks, polar map, lighting tables (18A6Ch) |
| `src/palette.cpp`, `vec.cpp` | palette fades and gradients; vectors and 3x4 matrices |
| `src/engine.cpp`, `tube.cpp` | the 3D engine (scene, clipping, sort, environment-mapped fillers) and the tube sweeper |
| `src/roto.cpp` | the rotozoomer and its self-patching texture mapper (1B8E3h, 14BDBh) |
| `src/part1.cpp` ... `part9.cpp`, `endpart.cpp` | the parts |
| `src/main.cpp` | SDL window, audio stream, keys, headless dump |
| `tools/extract_assets.py` | loads the PMW1 program (LZ77 objects, fixups) into `data/ctslasse.img` |
| `tests/tests.cpp` | the whole intro's frames and GUS writes, and Esc at frame 4500 |

## The program

CTSLASSE.EXE is PMODE/W's stub with the program appended in PMW1 format: a
code object and a data object, compressed. Unpacked at the addresses
PMODE/W gives them under the harness (14B00h and 1E500h, all flat), they are
the image the port runs on. Routines and variables keep their addresses.
Memory that one routine writes and another reads works as in the original:
tables, the scene, the texture mapper's patched immediates. So do the
Watcom heap (from 200000h) and the stack (around 2C530h). Some code aligns
tables on the stack, so the stack's addresses matter. In two places
(parts 7 and 9) the original reads stack memory before writing it. The
port puts there what the harness found.

### The parts

1. **Title** (1AE34h): the logo blurred 128 times, played backwards, then
   blurred to white.
2. **Title card** (1B238h): text on white on the song's rows, a texture in
   three pieces, then rippling layers.
3. **3D face** (192E6h): a morphing face and a second object over a
   rotozoomer.
4. **Layers** (1B9DDh): rotozoomed textures added on with the music, blurred.
5. **Knot tube** (19CEDh): a twisted tube along a knot, the camera inside.
6. **Feedback zoomer** (1BE6Ah): dots and text blurred and rotozoomed back on
   themselves, scrolling words at the sides.
7. **Moving tube** (1A14Bh): a tube along a moving path over a rotozoomer.
8. **Grid** (1C776h): a texture through a 41x26 grid. First bubbles, then a
   wobbling plane, then a tunnel, cross-faded.
9. **Finale** (1A56Ah): an object morphing between turned copies of itself,
   a tube around it, over a plasma-warped picture. It ends in white while
   the music fades out.
10. **Credits** (1B6F3h): text in two colours, faded by retraces polled at
    3DAh.

### Time

The original renders as fast as it can. The harness runs it on an
infinitely fast CPU, so time only moves where the program waits:

- **Esc check** (15D18h, once a frame): with no wait since the last one,
  it waits for the next frame's start (70 Hz).
- **Clock spins** (the clock is PIT ticks plus the PIT's count): they jump
  to when the clock reaches the target. A poll of the clock or the song's
  position that repeats waits for the next interrupt or retrace.
- **3DAh polls:** the third identical read jumps to the retrace's next edge.
- **GUS volume ramps:** waiting on a ramp's stop bit jumps to the ramp's
  end.

The port follows the same model: the program runs on its own thread, and
at each wait the caller moves time to the next event. That event is a PIT
tick (IRQ 0, where the player runs), a retrace, or the middle of a frame,
when the frame is taken.

### Floating point

The C code's x87 arithmetic is kept as compiled: 80-bit intermediates,
stored to float or double where the code stores, and the x87 register
stack where values stay on it across calls. The transcendentals (fsin,
fcos, fpatan, f2xm1, fyl2x, fprem, fscale) are computed as the harness's
CPU computes them, through double precision. The results are bit-exact
against it on random inputs. Build with `-ffp-contract=off` (as
CMakeLists does) so no fused multiply-add creeps in.

## The music

The player is assembly. It plays an MXM module (Cubic Player's format: 10
channels, instruments with volume envelopes, fadeout and auto-vibrato) on
the GUS from IRQ 0, reprogramming the PIT for each tick. It is translated
keeping its registers and its variables (at 295BCh). Part 9 fades the
song out by writing the player's master volume.

## Verification

`ctest` runs the whole intro, 14952 frames (213.6 s). At every frame it
compares the CRC of the picture and of the DAC with the original's under
the harness. It compares all 566,807 of the music's GUS register writes,
and the frames of a run with Esc pressed at frame 4500. Everything matches.
The GF1's synthesis itself has no reference: the harness logs registers,
not sound.

Not ported: the original's checks and messages for a missing GUS or too
little memory.
