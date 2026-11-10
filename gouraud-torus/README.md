# gouraud-torus

A Gouraud-shaded torus, rotating about three axes, in the style of PC demos from 1993-1995.
This is an original effect in the classic manner, not a port. It also shows **the torus of
Cyboman 2** (Complex, The Party '94), with its own mesh and colours taken from the intro. Everything is software:
320x200 with 256 colours, as in mode 13h, shown at 4:3.

## Build and run

```bash
cmake -S . -B build && cmake --build build -j
./build/gouraud-torus [--scale N] [--model M]   # Space pause, G Gouraud/flat, M next model, Esc quit
./build/gouraud-torus --dump DIR [--frames N] [--start S] [--flat] [--model M]   # PPMs at 70 fps
```

Models: `0` our torus, `1` Cyboman 2's torus as at 6 s (green/gold rings), `2` as at 21 s
(copper/gold sawtooth).
```

## How it works

It uses the techniques of the time:

- **Mesh:** a 32x16 grid on the torus (1024 triangles), with analytic vertex normals.
- **Lighting per vertex only:** ambient, plus diffuse, plus a Blinn specular highlight. The
  result is a brightness, which becomes an index into a 192-entry palette ramp (black, blue,
  cyan, white). Palette entries 0-63 are the background "copper" gradient.
- **Visibility:** back faces are culled by the sign of the screen-space cross product. The
  remaining faces are drawn far to near, sorted by depth (the painter's algorithm), with no
  z-buffer.
- **Scanline filler:** in 16.16 fixed point. x and the colour index step along the long edge
  and the two short edges. The colour also steps across each span, with a sub-pixel start, so
  shading is continuous between triangles. That interpolation is all Gouraud shading is.
  With `G` (or `--flat`) each face takes the mean of its three colours instead, which shows
  the facets.
- **Aspect:** the y projection is scaled by 200/240, so the torus looks round on a 4:3 screen
  whose 320x200 pixels are 1.2 times taller than wide.

## The Cyboman 2 torus

Taken from the cyboman2 port's data (`demoscene-cpp/cyboman2`, analysis in
`rea/cyboman2-analisis`):

- **Mesh.** The model is at offset 594A0h of the unpacked intro image (segment 594Ah, drawn
  through object slot CS:17FDh). Its header holds the vertex and face counts and the offsets of
  the vertices, faces (flags + 3 indices) and normals. There are 576 vertices (24x24 around the
  y axis, ring radius about 5280, tube radius about 2920, coordinates up to ±8191) and 1152
  faces. Normals are int16 with length 127.
- **Materials.** In the file every face flag is 0. The intro writes the flags at run time; they
  were read from its memory at frames 420 and 1470. Faces come 48 per ring segment (2 per
  quad). At 6 s the flag is `k % 4 < 2` (bands of two quads, the rings); at 21 s it is
  `k % 6 >= 3` (runs of three triangles, the sawtooth). The draw routine (6A12h) adds 4000h to
  the 8.8 colours of a flagged face, i.e. +64 palette entries.
- **Colours.** Vertex colours are 2400h plus a light term plus the object's offset (4000h for
  the torus), in 8.8. So the torus uses ramps 100-159 (flag 0) and 164-223 (flag 1). The
  palettes are DAC entries 100-223 at frames 420 and 1470: green and gold ramps at 6 s, copper
  and gold at 21 s. Each ramp runs from dark to a white highlight.
- **Light curve.** The intro maps a light value k (0-255) through the table at CS:19E7h,
  k·(k>>1) capped at 3B00h, which gives a dark-to-white ramp with a hard highlight. This project
  uses the same curve. The value of k is our own: 20 + 160 × the diffuse term. The intro
  computes k from the rotated normal (×5) plus the vertex depth, and that part is not
  reproduced. Neither are its exact rotation, projection and depth sorting (a radix sort,
  7529h); the torus moves the way ours does.

`tools/extract_cyboman2.py` regenerates `src/cyboman2_torus.inc` from `cyboman2.img` and two
screen+DAC dumps of the cyboman2 port
(`CYBOMAN2_RAW=420,1470 cyboman2 --dump DIR --frames 1480`).

| File | What |
|---|---|
| `src/torus.cpp` | geometry, palettes, transform/lighting/projection, sort, triangle filler |
| `src/cyboman2_torus.inc` | Cyboman 2's torus: vertices, normals, faces, the two palettes (generated) |
| `src/main.cpp` | SDL3 window (4:3, nearest scaling), keys, `--dump` |
| `tools/extract_cyboman2.py` | the extractor |
