# tunnel-rotozoom

A textured tunnel and a rotozoomer in the style of PC demos from 1993-1996. This is an original
effect in the classic manner, not a port. Everything is software: 320x200 with 256 colours
(mode 13h), shown at 4:3, one frame per 70 Hz retrace. The two effects alternate every 10 s.

## Build and run

```bash
cmake -S . -B build && cmake --build build -j
./build/tunnel-rotozoom [--scale N]   # Space switch effect (stops the automatic switch), Esc quit
./build/tunnel-rotozoom --dump DIR [--frames N]   # PPMs at 70 fps
```

## How it works

- **Texture.** One 256x256 procedural texture with values 0-63: an XOR pattern (x ^ y) under a
  grid of 32x32 tiles with light and dark bevelled edges, alternate tiles brighter. Coordinates
  wrap at 256, so the texture repeats with no checks.
- **Palette.** 4 brightness levels x 64 colours, with index = level·64 + texel. Darkening a
  texel is just a different level, with no arithmetic per pixel.
- **Tunnel.** Tables are precalculated at twice the screen size (640x400). For each pixel they
  hold the angle around the centre (texture u), the inverse of the distance (texture v: a small
  radius is far away) and a brightness level that falls towards the centre. Each frame reads a
  320x200 window of the tables at a moving offset, which steers the tunnel. Adding a constant to
  v flies forward, and adding one to u turns it. That is two table reads and one texel per
  pixel. The y distance is scaled by 1.2 for mode 13h's tall pixels.
- **Rotozoom.** The screen is a rotated, scaled window on the repeating texture. Each pixel steps
  (u, v) by (cos, sin)·zoom and each row by (−sin, cos)·zoom·1.2, all in 16.16 fixed point, so
  the inner loop is two additions and one lookup. The angle turns, the zoom breathes, and the
  centre of rotation drifts over the texture.

| File | What |
|---|---|
| `src/demo.cpp` | texture, palette, tunnel tables, tunnel, rotozoom |
| `src/main.cpp` | SDL3 window, 70 Hz step, keys, `--dump` |
