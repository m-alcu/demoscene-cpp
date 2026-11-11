# scroll-sprites-raster

Raster bars, sprites and a sine scroller in the style of PC demos from 1990-1994. This is an
original effect in the classic manner, not a port. Everything is software: 320x200 with 256
colours (mode 13h), shown at 4:3, one frame per 70 Hz retrace.

## Build and run

```bash
cmake -S . -B build && cmake --build build -j
./build/scroll-sprites-raster [--scale N]   # R rasters, S sprites, T scroller (on/off), Esc quit
./build/scroll-sprites-raster --dump DIR [--frames N]   # PPMs at 70 fps
```

## How it works

The layers, back to front:

- **Raster bars.** Colour 0 of the palette gets a new value on every scan line, as a demo does by
  rewriting the DAC in each horizontal retrace. Every pixel left at colour 0 shows that line's
  colour, so the bars cost nothing in video memory. There are seven 16-line bars with a bright
  centre and dark edges, moving on phased sines, over a dark blue "copper" gradient. Bars whose
  cosine is negative are behind and drawn first, so the bars weave through each other.
- **Sprites.** Twelve balls on a Lissajous curve, sorted by depth. The ball is a 28x28 sphere
  generated at start-up as palette indices (a 64-entry red-to-white ramp, lit from the upper
  left). Colour 0 is transparent, and sprites are clipped at the screen edges.
- **Sine scroller.** A 5x7 font scaled ×4 (24 px per character). Every screen column takes one
  column of the text, shifted down by a sine of x and time, so the letters ride a wave. A black
  shadow is drawn 3 px down and to the right first. The glyph rows use 28 palette entries whose
  colours cycle each frame, giving the moving rainbow gradient.

| File | What |
|---|---|
| `src/demo.cpp` | font, sprite generation, the three layers, per-line colour 0 |
| `src/main.cpp` | SDL3 window, 70 Hz step, keys, `--dump` |
