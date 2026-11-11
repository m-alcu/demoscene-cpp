# metaballs

My own effect in the style of 1994-97 PC demos: five Gouraud-shaded blobs of a viscous
liquid. When two blobs come close they swell toward each other, a neck forms, and they flow
into one body. When they pull apart, the neck thins and snaps, and they become separate
drops again. It is drawn in software with 256 colours, at 640x480 by default (R switches
between 320x200 as in mode 13h, 640x400, 640x480, 800x600, 1024x768 and 1280x960), and
shown at 4:3, in C++17 / SDL3.

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j8
./build/metaballs           # [--scale N] [--res WxH] [--material M] [--grid N] [--view V]
ctest --test-dir build
```

Keys:

| Key | Action |
|---|---|
| **W** | view: solid → wireframe (hidden-line) → solid + wireframe |
| **R** | next screen resolution |
| **+/-** or **↑/↓** | mesh detail: grid cells per axis, 8 to 128 in steps of 4 (default 64); fewer cells, fewer and bigger triangles. Works on any keyboard layout, and repeats when held. The window title shows the triangle count |
| **M** | material: slime, mercury, lava |
| **G** | Gouraud or flat shading |
| **Space** / **Esc** | pause / quit |

The wireframe shows the triangles marching tetrahedra makes. They are easiest to read with
a coarser grid (hold `-` or ↓ for a moment).

Headless: `metaballs --dump DIR [--frames N] [--start SECONDS] [--res WxH] [--flat]
[--material M] [--grid N] [--view V]` writes N frames at 70 per second as `DIR/fNNNN.ppm`.

Build it in Release: a Debug build is about 10 times slower.

## How it works

### 1. The field

Each ball *i* has a centre `c_i` and a radius `r_i`, and adds `r_i² / |p − c_i|²` to a
scalar field. The surface is wherever the field equals 1. A ball on its own is a sphere of
radius `r_i`. Near another ball, the fields add up, so the surface bulges out toward it.
Once the two fields together exceed 1 at the midpoint, the two surfaces join. At that point
the meeting balls are 2·r·√2 apart, for two equal balls. Nothing in the code handles the
merge or the split. It all follows from the sum.

The balls move on Lissajous paths with frequencies that are not multiples of each other, so
the pattern of meetings never repeats exactly. Each radius also pulses by ±6%.

### 2. Triangles: marching tetrahedra

Every frame, the field is sampled on a 64³-cell grid spanning ±2.1 units. Each cell that
the surface crosses is split into six tetrahedra around its main diagonal (Kuhn's split).
Each tetrahedron then gives 0, 1 or 2 triangles, depending on which of its 4 corners are
inside. This needs no table of 256 cases, as marching cubes does. Neighbouring cells cut
their shared face along the same diagonal. Each edge crossing is also computed from the
edge's lower grid index. As a result, every cell touching an edge gets a bit-identical
vertex, and the mesh has no cracks. The border samples are forced to 0, so the mesh stays
closed even when a blob reaches the edge of the grid. A typical frame has about 30,000
triangles (15,000 to 20,000 with a 48³ grid).

### 3. Normals and light

The normal is not averaged from the faces. It is the analytic gradient of the field:
`−∇f = Σ 2 r_i² (p − c_i) / |p − c_i|⁴`. That gives a smooth normal even right at the neck
between two blobs, where face normals would show the facets. The light is computed per
vertex as `0.05 + 0.62·diffuse + 0.12·rim + 0.60·specular^28`, clamped to 1:

- the strong, tight highlight makes the surface look wet;
- the rim term `(1 − |n·z|)³` brightens the edges seen side-on, like the skin of a liquid.

The result becomes an index into a 192-entry palette ramp. For slime and mercury, the ramp
runs from near black to the body colour, then to white for the highlight. Lava runs from red
to orange, yellow and white.

### 4. Drawing, as in 1995

- Back-face culling in view space.
- A painter's sort of the faces by the sum of their three depths. There is no z-buffer.
  With triangles this small, the sort holds up even where blobs overlap.
- The scanline filler from `gouraud-torus`: vertices sorted by y, edges stepped in 16.16
  fixed point, and the palette index interpolated along the edges and across each span.
- A background with one palette entry per band of rows (a "copper" gradient), tinted to the
  material.
- The projection scales with the screen width, and the pixel aspect is chosen so that any
  screen size shows at 4:3. For 320x200, each pixel is 1.2 times taller than wide, as on a
  VGA monitor.
- **Wireframe** view: each face, still far to near, is filled with one dark colour and then
  outlined with Gouraud lines (the vertex shading interpolated along the line). Nearer faces
  cover the lines behind them, which is hidden-line removal with no extra work. In the
  *solid + wireframe* view, the lines are drawn darker over the shaded surface.

A frame takes about 8.5 ms on one core with a 64³ grid, at any screen size (4.5 ms with a
48³ grid). Building the mesh is most of it; the screen size hardly matters.

## Tests

`metaballs_tests` checks that:

- one ball comes out as a sphere of the right radius, with outward normals and every
  triangle wound outward;
- the mesh is closed: every edge, after welding the vertices, is shared by exactly two
  triangles;
- two balls give **one** piece when close (±0.30, ±0.45) and **two** when apart (±0.60,
  ±0.80), with the neck present only in the first case;
- the animated scene stays closed at 29 different moments;
- the renderer is deterministic;
- the wireframe covers the same pixels as the solid view, with lines brighter than the
  fill, and a smaller screen gives proportionally fewer pixels.
