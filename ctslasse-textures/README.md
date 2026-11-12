# ctslasse-textures

A workbench for the procedural textures of **Lasse Reinbøng** (Cubic Team &
$eeN, 1995), part 5: the knot. It takes the generators from
[ctslasse-knot](../ctslasse-knot/), turns their constants into sliders, and
shows the result tiled and coloured through the intro's palette. Change a
seed, the roughness of the noise or the waves of the warp, and look at the
shapes you get.

With their default values, the generators make **the intro's textures,
byte for byte**. The test compares their CRCs with the ones in
`ctslasse-knot/tests/ref.txt`, which were read from the original's memory.

## Building and running

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j
./build/ctslasse-textures                 # [--scale N]
./build/ctslasse-textures --dump DIR      # each texture at its defaults, DIR/<name>.ppm
ctest --test-dir build
```

The panel on the left (in Spanish) holds the parameters. The texture is
drawn on the right as N×N copies, so you can check that it wraps without
seams.

| Key | Action |
|---|---|
| **1**-**6** | the texture |
| **Space** | new random seeds |
| **A** | animate the phase of the warp's waves |
| **Esc** | quit |

The keys work when the panel does not have the keyboard focus. **Save BMP**
writes the coloured texture to the current directory.

## The textures

All of them are 256x256 tiles of bytes that wrap both ways.

### 1. Fractal noise (16DCAh)

A diamond-square. At each level the step halves from 256 down to 2:

- the **centre** of each square is the average of its 4 corners plus a
  random value × *centre weight*;
- the **midpoint of each side** is the average of its 2 corners and the 2
  centres beside it, plus a random value × *side weight*.

The random value comes from the intro's linear congruential generator
(`seed · 0x15A4E35 + 1`, the high half). It is scaled by the *amplitude*
(500), and the amplitude is multiplied by the *roughness* (0.5) from one
level to the next. Values are clamped to `0..2^bits − 1`.

- **Bits**: few bits saturate into hard-edged blobs; 8 bits gives smooth
  clouds.
- **Roughness**: low is smooth, near 1 is grainy at every scale.
- **Negative weights** turn the noise into ridges and cells.

### 2. The knot's material (18B76h, 16E81h)

A base noise (3 bits) read displaced. The displacement is across by
`TX[U]` and down by `TY[V]`, where U and V are two more noises (8 bits) at
the texel:

```
TX[i] = V[i] / div − amplitude · sin(freq · i + phase)
TY[i] = U[i] / div + amplitude · cos(freq · i + phase)
```

This is *domain warping*: the blobs of the base get stretched into marble.
Then `<< 5` turns 0-7 into the start of one of the 8 ramps of the
palette. The view adds 17 to the index, so each texel shows its ramp's
colour.

- **Amplitude** and **frequency** set how far and how wildly the base is
  dragged.
- **Phase** (animated with **A**) makes the marble flow.

### 3. Hexagons (185D5h, 16EA6h)

Three palette entries on a lattice of hexagons, then blurred with a 3x3
box. The lattice is made in integer arithmetic: bands down, every other
one shifted, and cells across with slanted sides. The cell number mod 3
picks the colour.

- **Step x** and **step y** stretch the lattice. Values that do not divide
  evenly give stripes and diamonds.
- **Blur** is the number of passes.

### 4. Light (18FF9h)

A soft spot with a hot centre. With R the squared distance to the centre
over radius², capped at *R max*:

```
(peak · (1 − R/div)^power + slope · (1 − R) + base) / scale
```

It is the shade within a ramp (0-31). The **power** sets the width of the
hot spot.

### 5. Knot (light + material)

The two added, as the knot's filler adds them: the material picks the
ramp, the light the shade. On the knot the light is environment-mapped,
so here it only shows how the two indices combine.

### 6. Palette (189ECh)

Eight ramps of 32 entries: black → the ramp's colour over *black → colour*
entries (18), then → white. The colours can be edited; they are 6-bit, as
in the VGA's DAC.

## Colouring

- **Grey**: from the lowest value to the highest.
- **Palette indices**: the byte plus an offset, through the palette.
- **One ramp**: the values stretched to the 32 shades of a ramp.

## Notes

- The floating-point steps (the warp's waves, the light) use plain
  doubles here, where the intro uses the x87. At the defaults they still
  give the same bytes.
- ImGui is vendored in `src/vendor/imgui`, copied from
  [lbm-viewer](../lbm-viewer/).
