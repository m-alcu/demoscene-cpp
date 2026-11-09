# clubhoney-star

The chrome star of **Club Honey** by Acme (Bizarre '98 demo compo): an
environment-mapped mesh with the scene's keyframed camera flight, rendered in
software at 320x200 and shown at 4:3 with SDL3.

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/clubhoney-star            # [--scale N] [--loop] [--data DIR]
```

Keys: **Space** pauses, **Escape** quits.

## Data

| File | What |
|---|---|
| `data/star.txt` | the mesh: `v x y z nx ny nz` vertices with normals, `f a b c nx ny nz flags` faces with face normals (the `bbox` and other lines are ignored) |
| `data/pink.png` | the environment map, 256x256 with a palette |

## How it works (`src/star.cpp`)

- **Animation.** The camera position (10 keys) and target (2 keys plus the
  track's end marker) follow Hermite splines, played at 54 frames per second
  up to frame 965, where the original scene cuts away. The star itself
  does not move. Its rotation and position are constants.
- **Camera.** A 3D Studio camera: heading and pitch from the direction to the
  target, then the axes swapped so that z is depth and screen y points down.
- **Environment map.** Each vertex normal is rotated into view space, and its
  x and y, scaled by 127 plus 128, are the texture's U and V.
- **Rendering.** Back faces are culled with the face normals, triangles are
  clipped against the near plane (z = 0.5), and a barycentric rasterizer
  draws them with affine UVs and a 1/z depth buffer, over a flat green
  background.
