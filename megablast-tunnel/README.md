# megablast-tunnel

A re-creation of the bending checkerboard tunnel from **Megablast** by
Orange (PC, 1996), in C++17 / SDL3. It is drawn in software at 320x200 with
a 256-colour palette, as in mode 13h, and shown at 4:3.

**Superseded by `../megablast-feedback`**, a port made later from the
demo's code. It shows the real scene is not a tunnel but a video-feedback
effect. This project stays as the first guess.

This is **not a port**. The original's code was not reverse-engineered.
The technique is a reconstruction from a screenshot of the scene, and the
bends, speeds and shading were tuned by eye. The texture is the original's
own: the 256x256 marble checkerboard in `DATA.DAT`.

## Building and running

```bash
tools/extract_texture.py ~/proy/rea/megademo/DATA.DAT data   # once: makes data/checker.png
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/megablast-tunnel                     # [--scale N] [--data DIR]
ctest --test-dir build
```

`data/checker.png` is already included. The script is there to show where
it comes from: a ColoRIX (RIX3) image at offset 3126299 of `DATA.DAT`.

Keys: **Space** pauses and **Esc** quits. It runs until you quit.

Headless: `megablast-tunnel --dump DIR [--frames N] [--start SECONDS]`
writes N frames at 60 per second as `DIR/fNNNN.ppm`. The test is a smoke
test: the texture must load, the renderer must be deterministic, and each
frame must show black at the far end and both light and dark checks.

## How it works

### 1. A tube that bends away

The camera sits on the axis of a tube of radius 1 and looks down it. At
depth `w` in front of the camera, the axis has drifted sideways by:

```
X(w) = 2.2·(sin(0.35w + 0.7t) − sin(0.7t)) + 0.3·(sin(0.7w − 1.3t) − sin(−1.3t))
Y(w) = 1.5·(sin(0.27w + 0.5t + 1) − sin(0.5t + 1))
```

Both are 0 at `w = 0`, so the camera always stays inside. Further away
the tube swings left, right, up and down, and the bends travel as time
goes on. That is why the far end wanders around the screen and the near
walls bulge across the view.

### 2. One ray per grid point

For a screen point `(px, py)` (pixels over the focal length, with the
mode-13h aspect of 1.2), the ray is `(px·w, py·w, w)`. It hits the wall
when its distance from the axis reaches 1:

```
|(px·w − X(w), py·w − Y(w))| = 1
```

With a bent tube this has no closed form, and a ray can graze one bend
and hit a wall further on. So the ray is **marched**: the depth is stepped
forward (finer near the camera) until the ray is outside the tube, and then
the crossing is pinned down by 12 rounds of bisection. The hit gives:

- `u`, the angle round the tube (atan2 of the offset from the axis), plus a
  slow roll. The texture wraps round 3 times.
- `v = 80·w + 208·t`: 80 texels per unit of depth, flying forward at 2.6
  units per second.
- light `1 − w/12`: it gets darker with depth and is black from depth 12.

### 3. Interpolated on an 8x8 grid

Marching every pixel would be wasteful. As tunnels were drawn in the 90s,
the ray is solved only at the corners of 8x8-pixel cells (41x26 points).
Inside each cell, `u`, `v` and the light are interpolated bilinearly. `u`
is unwrapped against the cell's first corner, so the texture's seam doesn't
smear across a cell.

Where the near wall hides part of the far one, the depth jumps inside a
cell (the far corner is over 1.6 times deeper than the near one, plus a
little). Interpolating across the jump would draw a wobbly smear, so those
cells are traced pixel by pixel. That is only a few cells along the
outline of the bend.

### 4. Palette shading

The texture uses only 13 of its palette's colours. They are renumbered 0
to 12, and the 256-colour palette is built as 13 colours × 16 brightness
levels: the usual 8-bit way to shade by depth. A pixel is
`colour·16 + level`, so there is no per-pixel arithmetic on colours. The
16 visible bands of brightness down the tube are those levels.
