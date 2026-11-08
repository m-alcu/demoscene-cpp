# megablast-feedback

The checker scene of **Megablast** by Orange (PC, 1996), ported from the
demo's own code, in C++17 / SDL3. It renders at 320x200 with a 256-colour
palette, as in mode 13h, shown at 4:3 and 70 frames per second.

It replaces the guess in `../megablast-tunnel`: the scene is not a tunnel.
It is a **video feedback** effect. Every frame is drawn by looking up the
previous frame through a fixed lens, so earlier frames nest inside each
other as ever smaller, darker copies.

## Building and running

```bash
tools/extract_data.py ~/proy/rea/megademo/DATA.DAT data   # once (data/ is included)
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/megablast-feedback                   # [--scale N] [--data DIR] [--loop]
ctest --test-dir build
```

Keys: **Space** pauses, **Esc** quits. The scene plays once (769 frames,
about 11 s) and exits; `--loop` repeats it.
`--dump DIR` writes every frame as PPM plus `frames.txt` with their CRCs.

## Checked against the original

The analysis is in `~/proy/rea/megademo-analisis`. Its harness runs
`DEMO.EXE` under emulation and recorded, for this scene, every update tick
(with its song pattern) and every frame the demo drew. The test replays
the same ticks before each frame and compares every picture: **all 382
frames match the original bit for bit**. That covers the warp, the
feedback, the shade table, the movement and the palette fade.

The emulated CPU in the harness is slow, so it draws only every other
refresh (35 fps, two ticks per frame). The port, like the demo on a fast
enough PC, draws every refresh, with one tick per frame. The picture is
then the same algorithm at twice the frame rate. Because each frame feeds
the next, the nested copies are finer and the zoom twice as fast as in the
harness run. That is how the real demo looks at 70 fps.

## Data (from DATA.DAT)

| File | Offset | What |
|---|---|---|
| `warp.bin` | 2998299 | 320x200 uint16: the texel `(v << 8) \| u` each screen pixel samples |
| `checker.png` | 3126299 | the 256x256 marble checkerboard (a ColoRIX image) and its palette |
| `shade.bin` | 3192613 | 64 rows x 256: row r maps each colour to a darker one |

The PNG palette holds the 6-bit VGA values times 4, so they can be shifted
back exactly.

## How it works

### The frame (the demo's 19359h and 19226h)

Two 256x256 buffers, `src` and `dst`, both start as the checkerboard. For
every screen pixel `i = 320y + x`:

```
c = src[(warp[i] + si) mod 65536]          the 16-bit wrap is the texture's wrap in u and v
screen[i] = c
if x < 200:  dst[256y + x] = shade[level / 8][c]
```

Then `src` and `dst` swap. So the next frame's texture is this frame's
left 200x200, darkened, with the original checks still around it (texels
200-255 are never overwritten).

**The lens.** `warp.bin` is a precalculated, smooth, nonlinear map. Away
from the centre it is roughly a rotation with a mild zoom. Towards the
screen centre (160,100) it stretches strongly: there the steps between
neighbouring pixels grow from about 1 texel to over 10. Fed back on itself,
the map compounds every frame. Points flow towards the centre and earlier
frames shrink into it, giving the curved, ever finer grids. Because only the
left 200 columns feed back, the right part of the screen shows the
recursion without adding to it.

**Darkening.** Each pass through `shade` darkens the colours by one row's
worth, so a copy n frames deep has been darkened n times. That is the depth
cue. `level` grows from 0 to 176 over the first 88 frames, so the darkening
fades in.

### The update (the demo's 193C1h), 70 times a second

```
fade  += 4 up to 256          palette = texture palette · fade / 256 (fade in over 64 ticks)
level += 2 up to 176          only once drawing has started
on a new song pattern p:  w_new = 0, w_old = 256
pos += (V[p+1]·w_new + V[p]·w_old) >> 8;  w_old−−, w_new++ until w_old = 0
si = (pos.x >> 4) + ((pos.y >> 4) << 8)         16 bits: y in the high byte
```

`V` gives a velocity per song pattern, in 1/16 texel per tick. Pattern 24h
is (32, 12), 25h is (8, 16) and 26h is (32, −14). During a pattern the
velocity glides to the next pattern's over 256 ticks. The shift `si` moves
where the lens samples, so the whole recursion drifts and turns with the
music.

### Timing

The scene starts with song pattern 24h and ends when 26h begins. The
song's rows are 6 ticks long, so that is 2 × 64 × 6 = 768 ticks. Each frame
is one tick then one picture, and the frame after the last tick is shown
too.
