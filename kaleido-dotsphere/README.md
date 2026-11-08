# kaleido-dotsphere

A sphere of 1373 glowing dots, turning in 3D and bouncing to the beat, in
C++17 / SDL3. Everything is drawn in software into a 512x768 canvas, which
is shown in a 1024x768 window (every pixel two pixels wide). The scene is
based on the dot sphere (part 41) of *Kaleidoscopico* by LFT.

The scene lasts 848 frames (about 14.1 s at 60 fps):

1. **Dark** (frames 0-2): the part starts up.
2. **Build-up** (frames 3-88): 16 more dots per frame until all 1373 are
   there. Meanwhile the sphere settles down onto the floor.
3. **Bounce** (from about frame 97): it bounces once per beat (28 frames),
   squashing as it lands, while it turns and sways from side to side.
4. **Dissolve** (frames 787-839): the dots go, faster and faster, and the
   screen is empty until frame 847.

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/kaleido-dotsphere                    # [--scale N] [--loop] [--data DIR]
ctest --test-dir build                       # every frame against the reference
```

Esc quits. The scene plays once and then exits; `--loop` repeats it.

Headless: `kaleido-dotsphere --dump DIR [--ppm A:B]` writes
`DIR/frames.txt`, one line per frame with the frame number and the CRC-32
of the 512x768 RGB24 canvas. `--ppm` also saves frames A..B-1 as PPM
files. The test compares those CRCs with `tests/data/frames.txt`.

The reference is the original firmware, run in the kemu harness in
`~/proy/rea/kaleido-analisis` at 1x CPU speed (global frames
12868-13715). All 848 frames match exactly. At 1x speed the harness matches
the demo's video frame for frame. At 64x it runs one frame ahead, for the
reason explained under "One frame late" below.

## Sources

| File | Contents |
|---|---|
| `src/demo.h/.cpp` | the timeline, the 3D dots, the sprites and the renderer |
| `src/main.cpp` | window, 60 fps loop, headless dump |
| `data/points.bin` | 1374 points on a sphere of radius 32767: int16 x, y, z, little-endian |
| `data/squash.bin` | 1025 int16: the squash curve for vertical offsets -512..512 |
| `tools/make_data.py` | regenerates both files from the firmware (`lft-kaleidoscopico.bin`) |
| `tools/make_reference.py` | makes `tests/data/frames.txt` from the harness's frame dumps |

## How it works

Notation:

- `p` is the music position (frames, 60 per second). The scene starts at
  12682 and the first frame takes it to 12683.
- `c` counts the part's vertical blanks, starting at 1. `f` counts them
  again once `p` reaches 13468.
- `S(i) = floor(32767·sin(2πi/4096))` is a 4096-entry sine table, so 1024
  is a quarter turn. `C(i) = S(i + 1024)`.
- `>>` is an arithmetic shift, i.e. a floor division by a power of two.

Each frame runs the vertical-blank handler (dot count, sway, bounce) and
then one turn of the part's main loop (draw the dots into the back buffer,
then show it).

### The dots

Each point `(x, y, z)` is turned about the vertical axis by `7p`, then
about the horizontal axis by `9p`:

```
x1 = (x·C(7p) + z·S(7p)) >> 15        z1 = (z·C(7p) − x·S(7p)) >> 15
y2 = (y·C(9p) + z1·S(9p)) >> 15       z2 = (z1·C(9p) − y·S(9p)) >> 15
```

Then it is projected with perspective. The eye is one sphere radius in
front of the sphere's near side:

```
d   = (z2 >> 8) + 256                  128 (near) .. 383 (far)
col = x1 / d + sx + 252                truncating division
row = clamp(squash[y2 / d + sy] + 152, 0, 375)     in rows of two lines
```

Depth also picks one of six 9x9 sprites, `2 − (3·z2 >> 15)`. The farthest
is a dim 5-pixel cross and the nearest a bright ring 9 pixels wide. With
the colours 0x024, 0x125, 0x138, 0x24a, 0x26d and 0x59f on 0x012, the near
side of the sphere glows and the far side fades into the dark. Sprites are
drawn with a **max blend** (a pixel only gets brighter), so the order of the
dots doesn't matter and overlapping rings merge cleanly. The dots are not
clipped at the side edges: a dot past the right edge carries on at the left
of the next row, as it does in the original.

### The bounce and the squash

The handler sets the sway `sx = S(25c) >> 9` (±64 pixels) and the bounce
`sy`:

```
q = p + 3
q < 12782:  sy = ((S(16·min(12782 − q, 128) + 1024)·(−20)) >> 15) + 20    settles 39 → 0
q ≥ 12782:  sy = ((q mod 28) − 14)²·560 >> 10                              0 .. 107 per beat
```

A larger `sy` pushes the sphere down. The vertical position goes through
`squash.bin`, a curve that is the identity (×1.06) for small offsets and
flattens out towards ±270. When the bounce pushes the sphere's bottom down,
the lowest dots crowd together against an invisible floor: the ball
squashes on every beat without any extra code.

### The dot count

```
dots = max(min(16c, 1373) − (f² >> 1), 0)
```

The dots come in at 16 per frame, and leave once `p` reaches 13468. The
part ends when `f` passes 60.

### One frame late

The main loop clears a 512x384 buffer and draws every dot. In the original,
that takes longer than the vertical blank once there are more than 64 dots
(somewhere between 64 and 80). The buffer swap then happens after the next
frame has started, so that frame still shows the older buffer. Each picture
appears one frame later than the music position it was drawn for. When the
count rises past 64 (frame 7), one picture is shown twice. When it falls
back at the end (frame 837), one picture is skipped. The port does the same:
a buffer drawn with more than 64 dots is only shown from the frame after
next. The harness gives this behaviour at the original CPU speed, and so
does the video. With a faster CPU (the harness at 64x) everything would be
one frame earlier.
