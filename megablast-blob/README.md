# megablast-blob

A re-creation of the glowing jelly blob from **Megablast** by Orange (PC,
1996), in C++17 / SDL3. It is drawn in software at 320x200 with a
256-colour palette, as in mode 13h, and shown at 4:3.

This is **not a port**. The original's code was not reverse-engineered.
The technique is a reconstruction from a screenshot of the scene, and the
shapes, speeds and colours were tuned by eye. What the original files do
tell us is that the blob is computed, not played back. `DATA.DAT` holds
only pictures, two 256x256 textures, and a 160x80 pre-rendered landscape
clip, and nothing in it looks like the blob.

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/megablast-blob                       # [--scale N]
ctest --test-dir build
```

Keys: **B** toggles the blur, **W** shows the mesh, **Space** pauses, and
**Esc** quits. It runs until you quit.

Headless: `megablast-blob --dump DIR [--frames N] [--start SECONDS]` writes
N frames at 60 per second as `DIR/fNNNN.ppm`. The test is a smoke test: the
renderer must be deterministic, and each frame must have black around the
blob, a dim inside, and near-white rims.

## How it works

### 1. A wobbling sphere

The mesh is a **cube-sphere**: each face of a cube is split into a 22x22
grid, and every grid point is pushed out onto the unit sphere. That gives
2906 vertices and 5808 triangles, with no poles where thin triangles would
bunch up. Each vertex has a direction `d`, and its radius is pushed in and
out by travelling sine waves over that direction:

```
r = 1 + 0.13  · sin(2.3dx + 0.7t) · cos(2.1dz − 0.9t + 1.1dy)     big lumps and folds
      + 0.05  · sin(11dy + 2.1t) · sin(10dx − 1.3t + 7dz)         ripples
      + 0.035 · sin(13dz − 1.7t + 6dx)                            more ripples
point = r · d, stretched 1.18x vertically
```

The whole blob tumbles slowly about three axes and is projected with
perspective.

### 2. Glow where the surface is seen edge-on

This is the look of the effect. **Every triangle is drawn, front and
back**, and each one *adds* light into a 16-bit buffer. Nothing hides
anything, so the blob reads as translucent jelly.

How much light a vertex adds depends on how edge-on the surface is there.
With `c = |normal · direction to eye|`:

```
glow = 0.2 + 0.8 · (1 − c)^2.5
```

The triangles are Gouraud-shaded with that value. Facing the viewer, the
surface adds little, giving the dark teal inside. Near the outline, the
surface turns away and adds a lot, giving the bright rims. A glowing shell
looks like this: you see the most of it where your line of sight grazes it.
Wherever the bumps fold the surface over, an edge-on band forms inside the
outline too. Those are the bright ridges crossing the middle, and the back
of the blob shows through the front.

A plain additive fill with constant brightness would not work. Each pixel
of a convex shell is covered exactly twice (once by the front, once by the
back), so it would be uniformly flat. The edge-on weighting is what makes
the rims.

The normals come from the shape itself: the surface is stepped slightly
along two tangents and the two differences are crossed.

### 3. Soft, then palette

The light buffer gets two 3x3 box blurs, which give the soft, slightly
out-of-focus look (`B` turns it off). Then it is mapped to a palette index.
A single layer at full glow reaches index 175, so where front and back rims
overlap, the light saturates towards white. The palette goes black → deep
teal (0x021A22) → teal (0x228298) → pale cyan → white.

### How the original probably did it

The original would have used the same ingredients in a 1996 way. It would
have a precalculated sphere mesh with a sine-table wobble, 8-bit additive
fills into a saturating palette ramp (a table lookup instead of
`min(…, 255)`), and a fast blur pass over the 64000-byte screen. The glow
per vertex could have come from the z component of the rotated normal,
since `1 − |nz|` is the same edge-on term for a far viewer. An environment
map with a bright ring would give a similar rim. To know which one Orange
used, the scene's code in `DEMO.EXE` would have to be found and read.
