# cyboman2

A C++17 / SDL3 port of **"Cyboman 2: The Inner Loop"** (CYBOMAN2.EXE),
Complex's 64K intro from The Party '94: code JMagic, objects Reward, music
"Inner Mountain Flame" by Jugi, GUS replay by Phantom, PMODE by Tran. It is a
translation of the program, not a remake. The intro and its music replay are
translated routine by routine and checked against the original frame by frame
and GUS write by GUS write. The original ran under an emulation harness in
`../../rea/cyboman2-analisis`.

## Building and running

```bash
python3 -I tools/extract_assets.py CYBOMAN2.EXE .   # data/cyboman2.img (needs unicorn)
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/cyboman2                   # [--scale N] [--mute] [--data DIR]
ctest --test-dir build             # the port against the original
```

The intro runs 3 min 15 s and quits by itself. Esc works as in the original:
while objects move it quits at once, and on a text page it skips to the part
at 845Dh. The window shows the 320x200 picture at 4:3. Without an
audio device, a timer paces the frames.

Headless: `cyboman2 --dump DIR --frames N [--keys F,...] [--wav FILE]` writes
`DIR/frames.txt`, a CRC-32 of the screen and of the DAC per frame (Esc held
from the frames listed). `--wav` writes the music to a WAV file.

## Sources

| File | Contents |
|---|---|
| `src/intro.h/.cpp` | the intro: 3D engine, Gouraud filler, fades, typewriter, timer callback |
| `src/script.cpp` | the intro's script (7979h), generated from its stores and calls, the rest by hand |
| `src/music.h/.cpp` | Phantom's GUS replay: set-up, module and sample synthesis, interrupt, ticks, effects |
| `src/gf1.h/.cpp` | a GF1 at port level: register file, voices, volume ramps, mixing |
| `src/soundtrack.h/.cpp` | the music in time: the replay's timer interrupts and the GF1's samples |
| `src/runner.h` | the intro on its own thread, stepped a frame at a time |
| `src/main.cpp` | SDL window, audio stream, keys, headless dump |
| `tools/extract_assets.py` | unpacks CYBOMAN2.EXE (RNC) into `data/cyboman2.img` |
| `tools/gustrace.cpp` | prints the replay's GUS writes, for comparison with the harness's log |
| `tests/tests.cpp` | the intro's frames (whole run, and Esc at frame 3000), the music's GUS writes, the soundtrack for sense |

## The program

CYBOMAN2.EXE is packed with RNC. Unpacked, it holds three parts:

- Tran's PMODE 3.0;
- a 32-bit protected-mode main with the music replay;
- the intro itself, 16-bit real-mode code at segment 2FC9h of the image.

The 32-bit main sets up the GUS and loads the module. It calls the intro's
precalculation, starts the song, then calls the intro proper. When that
returns, it stops the music and exits. The GUS interrupt reaches the replay
in protected mode through real mode.

### The intro

The port keeps the program's memory as a flat copy of the image. Segments are
relative to the image (its relocations undone), so routines and variables keep
their offsets (`CS:xxxx`), and the polygon filler's self-modifying immediates
work as in the original.

- **Frame loops:**
  - 76D8h: the objects;
  - 7708h: a school of 100 fish ("blobs", 74BAh);
  - 7738h: a morph between two objects (vertices and normals weighted by
    CS:8C1Fh).

  Each loop iteration transforms, sorts (a radix sort, 7529h) and draws the
  faces, then waits for the timer's next frame. It then copies the frame
  buffer (39D0:0140h) to the screen and fills it again from the background
  (75BCh).
- **The filler** (66F0h, spans at 6550h): Gouraud triangles, two pixels at a
  time, with the colour steps patched into the span loop.
- **The text** (62E3h): typed straight into video memory, one character every
  three timer ticks, in a proportional font.
- **The timer:** the intro measures the frame with the PIT in mode 3, where
  the 8254 counts down by two. It then programs a one-shot count of 0.967
  frames: the interrupt comes just before the retrace, waits for it, and
  reprograms the counter. Its callback (61A0h) runs once a frame and does
  three things:
  - moves the objects (angles and positions by their speeds);
  - runs the white fade and the breaking up;
  - steps the morph and counts the frames.

  Everything is paced by that count, so on any PC fast enough to draw a
  frame in a frame, the intro runs exactly as here.

### The music

The replay is translated the same way: its variables stay at their offsets
in a copy of its flat segment, and it drives a GF1 through its ports.

- **Set-up:** 16 active voices, so the GF1 outputs 617400 / 16 = 38587 Hz.
  Timer 2 interrupts every 960 µs.
- **The module:** a 16-channel ProTracker module. At load the replay converts
  it to its own 5-byte rows per channel.
- **The samples:** all but two are synthesized from a 512-byte sine at load:
  sweeps, sums of the wave at 1x to 32x, banks cross-faded and enveloped.
  They are uploaded to the GUS one after the other.
- **Ticks:** a 32-bit phase accumulator counts the song's ticks from the
  timer (BPM × 2/5 a second). The voices' changes are sent every fourth
  interrupt.

Quirks of the original, kept because they change what the GUS gets:

- Before a new note, the replay means to ramp the voice down, and that loop
  has three bugs:
  - it takes the volume from `[EDI+13h]`, with EDI the interrupted code's
    (4300h);
  - it selects the voice from the channel's flags rather than its number;
  - it overwrites BP, the low word of its channel pointer, so the channels
    after the first new note are read from elsewhere in memory.

  Then `mov ax, bp` replaces the ramp direction it had set, so the ramp
  control gets BP's high byte, with its stop bits set. No ramp ever runs.
- The vibrato reads its table with 16-bit addressing, at DS:D81Ch, which is
  inside the module's patterns, instead of at 2D81Ch.
- Arpeggio counts an octave as 11 semitones. A sample-only row stores the
  sample number minus one.

### Timing

The harness takes frames mid-frame at 70 Hz. The callback runs at each
retrace from the fifth frame, and the main code then runs until it waits
again. The port does the same: the intro runs on its own thread and its
waits hand the frame back.

The music's first interrupt gets through at 72 ms, because the intro keeps
interrupts off while it measures the frame. After that one comes every 960
µs, and the GF1 renders the samples between them. In the window, the audio
stream paces the frames, so picture and music stay together.

## Verification

`ctest` runs the intro from start to end (13650 frames) and with Esc at frame
3000. It compares the CRC of the screen and of the DAC at every frame with
the original's under the harness. It also runs the replay through the whole
song (203050 interrupts, 1,189,176 GUS writes) and compares the writes with
the harness's log. The GF1 synthesis itself has no reference to check
against: the harness logs registers, not sound.
