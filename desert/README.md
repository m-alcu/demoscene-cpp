# desert

A C++17/SDL3 port of **Desert Fractal**, a 128-byte intro by malcolm of
ETERNAL (fixed by kirshe), first place in the 128-byte compo at BYTEFALL'96.
The original, `original/DESERT.COM`, is 103 bytes; its source is
`original/DESERT.ASM`.

It draws an endless sand surface scrolling up the screen, one line per
vertical retrace.

## Build and run

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
./build/desert          # any key quits, as in the original
ctest --test-dir build  # or ./build/desert_tests
```

`DESERT_SHOT=out.bmp DESERT_SHOT_FRAME=300 ./build/desert` runs 300 retraces
without waiting, saves the window as a BMP and exits.

| File | What it is |
|---|---|
| `src/desert.h/.cpp` | the intro's registers and its three routines, no SDL |
| `src/main.cpp` | window, 70 Hz stepping, DAC to RGB |
| `tests/desert_tests.cpp` | palette, scroll, and a screen checked against the original |
| `original/` | `DESERT.ASM`, `DESERT.COM` and `FILE_ID.DIZ` as released |

## How it works

Everything lives in registers, and the picture depends on exactly which
register holds what. So `desert.cpp` doesn't re-derive the algorithm: it keeps
AX, BX, CX, DX, SI, DI and BP and runs the intro's instructions on them, with
each line of assembly next to its C++.

**Palette** (`@pal_loop`). 255 passes, counted down by CX from `00FFh`. Each
pass writes one DAC entry as R = G = AL, B = AL + 15h, and then sets
AL = -(CL sar 2). The DAC keeps 6 bits, so the values wrap: entries 1..128
rise from dark to a light blue-grey, and 129..254 rise again from the middle.
There is no OUT to 3C8h first; the BIOS has just loaded the palette, so the
write index is back at 0. Entry 0 gets whatever AL the BIOS returned from
setting the mode. Entry 255 is never written and stays black.

**Lines** (`@y_loop`, `@x_loop`). Each line is computed from the one above:

```
pixel = (above[x] + above[x+1]) / 2  +  random 0..17  -  8  -  carry
```

The sum of the two pixels wraps at 256 before it is halved. That wrap is what
makes the sharp ridges and the dark streaks. The `+ 1` neighbour makes the
streaks slant to the right.

**Random numbers**. Each pixel does `xchg ax,bp`, then AX × 8405h, then × 18,
and takes the high word of the last product as 0..17 in DX. But AX then loads
the pixel (`lodsb`), and the `xchg` swaps it out to BP. So two generator
states take turns, each carrying the low byte of the last pixel it made. A
"cleaner" generator would draw a different desert.

**Scroll**. After the first full screen, the main loop waits for the retrace
and moves VRAM 320..64319 up one line with `rep movsd`. The new bottom line is
computed below the visible 64000 bytes, at 64000..64319, and the next
`rep movsd` scrolls it into view. Line 0 is never written, so the top line
stays colour 0.

The retrace wait and the key check leave AX at `0100h`, and that feeds the
generator too.

## Start state

The intro reads registers it never sets. The port starts from what MS-DOS and
DOSBox leave when they start a `.COM`, and what the BIOS returns after
setting mode 13h:

| Register | Value | Used for |
|---|---|---|
| AX | `0020h` | AL is entry 0 of the palette (BIOS returns AL = 20h) |
| BX | `0000h` | first line read |
| CX | `00FFh` | palette loop count |
| BP | `091Ch` | the second generator state |

Other values give the same kind of desert, but a different one. If your BIOS
returns AL = 13h, colour 0 (the top line) changes. `desert::StartState` holds
these values.

## Verification

`original/DESERT.COM` was run, byte by byte, in a small interpreter written
only for the instructions it contains, starting from the same state. After 1,
2, 3, 5, 300 and 1000 retraces its VRAM and DAC were identical to the port's.
`desert_tests` checks the screen after 501 retraces against that run.

That confirms the port does what the bytes do. It has not been compared with
the intro running on real hardware or in DOSBox, so the start state above is
the one assumption left.
