# plasma-palette

Plasmas and palette effects in the style of PC demos from 1992-1995. This is an original effect
in the classic manner, not a port. Everything is software: 320x200 with 256 colours (mode 13h),
shown at 4:3, with a fixed 70 Hz frame step like a VGA retrace.

## Build and run

```bash
cmake -S . -B build && cmake --build build -j
./build/plasma-palette [--scale N]   # Space next plasma, P next palette, C cycling on/off, Esc quit
./build/plasma-palette --dump DIR [--frames N]   # PPMs at 70 fps
```

With no keys pressed, the demo runs its own script: the palette changes every 5 s and the
plasma every 10 s. Pressing Space or P switches to manual control.

## How it works

- **Byte plasmas.** Each pixel is a sum of lookups in a 256-entry sine table (128 + 127·sin),
  added as bytes, so the value wraps around the palette. Only the table offsets change each
  frame. There are three plasmas:
  - *classic*: horizontal and vertical waves, two sines each, plus a diagonal one; the row
    part is computed once per frame;
  - *circles*: rings around two centres that move on sine paths;
  - *interference*: a wave along a rotating direction, a ripple (x² + y²) and a diagonal.
- **Colour cycling.** The "DAC" is the palette rotated by one entry per frame. The pixels do not
  change; the colours flow through them.
- **Palette fades.** Each change blends the old palette into the new one over 64 frames, one
  step per frame, like a fade on the 6-bit VGA DAC.
- **Palettes.** There are four, each built from six key colours, interpolated and closed back on
  the first so the cycling has no seam: fire, ocean, rainbow and candy.

| File | What |
|---|---|
| `src/plasma.cpp` | sine table, palettes, the three plasmas, cycling and fades |
| `src/main.cpp` | SDL3 window, 70 Hz step, script, keys, `--dump` |
