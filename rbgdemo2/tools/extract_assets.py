"""Extract the demo's data from the unpacked RBGDEMO2 image.

Usage: python3 -I tools/extract_assets.py <rbgdemo2.unpacked.bin> <muzik dir> <project dir>

The unpacked image is ../rea/rbgdemo2-analisis/rbgdemo2.unpacked.bin (the
PKLITE stub of RBGDEMO2.EXE run to completion, see ../rea/tsbdemo1-analisis).
The program is a real-mode stub plus a 32-bit protected-mode part whose code
and data selectors both have base linear 10580h, that is image offset 580h.
Every offset below is such a 32-bit offset ("c32"), read from the code that
uses it, not guessed from the bytes:

  assets/background.bmp  320x200 at 8200h, copied to VRAM pages 0-2 (1A294h)
  assets/balls.bmp       8 sheets of 114x15 at 4C90h + mode*6AEh (1A7F1h),
                         six 19x15 balls each; colour 0 is transparent
  assets/font.bmp        the 42 glyphs of the RLE font at 17F00h (1169h),
                         decoded side by side; colour 0 is transparent
  assets/palette.dac     the 256-colour palette at 17C00h (faded in by 1A3A7h)
  assets/texts.txt       the 89 lines the text writer can show (19379h)
  assets/muzik*.670      the original music files, copied unchanged

  src/data/tables.h      the numeric tables, each with its address
  src/data/objmem.h      object memory 1C34Bh..1DB37h: the motion state,
                         the object table, the point lists and the scripts.
                         The motion routines change it as they run, so the
                         port keeps it as the bytes it was, at its addresses.

The pictures are 8-bit indexed BMPs carrying palette.dac, so any viewer
shows them in their real colours; the port only reads the indices.
"""

import os
import shutil
import struct
import sys

CODE_BASE = 0x580          # image offset of c32 address 0


def bmp(pixels, width, height, dac):
    stride = (width + 3) & ~3
    palette = bytearray()
    for i in range(256):
        r, g, b = (v << 2 | v >> 4 for v in dac[i * 3:i * 3 + 3])
        palette += bytes((b, g, r, 0))
    rows = bytearray()
    for y in reversed(range(height)):
        rows += pixels[y * width:(y + 1) * width] + bytes(stride - width)
    offset = 14 + 40 + len(palette)
    return (b"BM" + struct.pack("<IHHI", offset + len(rows), 0, 0, offset)
            + struct.pack("<IiiHHIIiiII", 40, width, height, 1, 8, 0, len(rows),
                          2835, 2835, 256, 256)
            + palette + rows)


def c_array(name, ctype, values, per_line=16, fmt="{}"):
    lines = []
    for i in range(0, len(values), per_line):
        lines.append("    " + ", ".join(fmt.format(v) for v in values[i:i + per_line]) + ",")
    return f"inline constexpr {ctype} {name}[{len(values)}] = {{\n" + "\n".join(lines) + "\n};\n"


def main():
    if len(sys.argv) != 4:
        raise SystemExit(__doc__)
    image, muzik_dir, proj = sys.argv[1:]
    img = open(image, "rb").read()
    d = img[CODE_BASE:]
    u8 = lambda a: d[a]
    u16 = lambda a: struct.unpack_from("<H", d, a)[0]
    s16 = lambda a: struct.unpack_from("<h", d, a)[0]
    u32 = lambda a: struct.unpack_from("<I", d, a)[0]
    assets = os.path.join(proj, "assets")
    data = os.path.join(proj, "src", "data")
    os.makedirs(assets, exist_ok=True)
    os.makedirs(data, exist_ok=True)

    dac = d[0x17C00:0x17F00]
    open(os.path.join(assets, "palette.dac"), "wb").write(dac)
    open(os.path.join(assets, "background.bmp"), "wb").write(
        bmp(d[0x8200:0x8200 + 64000], 320, 200, dac))

    sheets = bytearray()
    for mode in range(8):
        assert u32(0x19137 + 4 * mode) == 0x4C90 + mode * 0x6AE
        sheets += d[0x4C90 + mode * 0x6AE:0x4C90 + (mode + 1) * 0x6AE]
    open(os.path.join(assets, "balls.bmp"), "wb").write(bmp(sheets, 114, 120, dac))

    # Font: a count, then that many offsets relative to the end of the table
    # (relocated by 1120h). Entry 0 is the space advance followed by the
    # characters in glyph order; entries 1.. are glyphs: width, height, then
    # rows of runs - n < FDh copies n bytes, FDh n skips n, FEh ends the row,
    # FFh ends the glyph.
    font = 0x17F00
    count = u32(font)
    base = font + 4 + 4 * count
    entry = [base + u32(font + 4 + 4 * i) for i in range(count)]
    space = u8(entry[0])
    chars = d[entry[0] + 1:entry[0] + count].decode("ascii")
    glyphs = []
    for i in range(1, count):
        g = entry[i]
        w, h = u16(g), u16(g + 2)
        px = bytearray(w * h)
        p, y, x = g + 4, 0, 0
        while True:
            c = d[p]; p += 1
            if c == 0xFF:
                break
            if c == 0xFE:
                y, x = y + 1, 0
            elif c == 0xFD:
                x += d[p]; p += 1
            else:
                px[y * w + x:y * w + x + c] = d[p:p + c]
                p += c
                x += c
        glyphs.append((w, h, px))
    fh = max(h for _, h, _ in glyphs)
    fw = sum(w for w, _, _ in glyphs)
    sheet = bytearray(fw * fh)
    widths = []
    ox = 0
    for w, h, px in glyphs:
        for y in range(h):
            sheet[y * fw + ox:y * fw + ox + w] = px[y * w:(y + 1) * w]
        widths.append(w)
        ox += w
    open(os.path.join(assets, "font.bmp"), "wb").write(bmp(sheet, fw, fh, dac))

    texts = []
    for i in range(89):
        p = u32(0x19379 + 4 * i)
        texts.append(d[p:d.index(b"\0", p)].decode("ascii"))
    with open(os.path.join(assets, "texts.txt"), "w") as f:
        f.write("\n".join(texts) + "\n")

    for name in ("muzik0.670", "muzik1.670"):
        shutil.copyfile(os.path.join(muzik_dir, name), os.path.join(assets, name))

    # --- tables -----------------------------------------------------------
    out = ["// Generated by tools/extract_assets.py from the unpacked RBGDEMO2 image.",
           "// Addresses are offsets in the 32-bit segment (base linear 10580h).",
           "#pragma once", "", "#include <cstdint>", "", "namespace rbg {", ""]
    out.append("// 1A8DEh: sine, 512 steps a turn, scaled by 512, plus a quarter turn more\n"
               "// so that cosine is the same table 80h entries (100h bytes) further on.")
    out.append(c_array("kSine", "int16_t", [s16(0x1A8DE + 2 * i) for i in range(640)]))
    out.append("// 19178h: palette entries the flip routine (1A419h) recolours, one a\n"
               "// frame, read through two cursors of different period (25 and 39).")
    out.append(c_array("kCycle", "uint8_t", list(d[0x19178:0x1919F]), fmt="0x{:02X}"))
    out.append("// 1A04Bh: the snowflakes are seeded from these bytes, which are the\n"
               "// code of the BIOS keyboard routine and what follows it (1E013h).")
    out.append(c_array("kSnowSeed", "uint8_t", list(d[0x1A04B:0x1A04B + 520]), fmt="0x{:02X}"))
    out.append("// 191D0h: the text script. A byte below FEh is a line of texts.txt and is\n"
               "// followed by the row to put it in (0..3); FEh n pauses n frames and\n"
               "// picks the next dissolve stride; FFh goes back to 19376h, the closing pause.")
    out.append(c_array("kTextScript", "uint8_t", list(d[0x191D0:0x19379]), fmt="0x{:02X}"))
    out.append("// 191B1h: dissolve strides, patched into the text dissolve (1A52Dh) one per\n"
               "// pause; the 7 wraps the list.")
    out.append(c_array("kStrides", "uint8_t", list(d[0x191B1:0x191B7]), fmt="0x{:02X}"))
    out.append("// 191B7h: the four text rows, as pixel offsets (row * 320).")
    out.append(c_array("kTextRows", "uint16_t", [u16(0x191B7 + 2 * i) for i in range(4)]))
    out.append(f"// 17F00h: the font's space advance and its characters in glyph order.\n"
               f"inline constexpr int kFontSpace = {space};\n"
               f"inline constexpr char kFontChars[] = \"{chars}\";\n")
    out.append(c_array("kGlyphWidth", "uint8_t", widths))
    out.append(f"inline constexpr int kGlyphHeight = {fh};\n")
    out.append("// B5Bh: scancode -> key code, as the keyboard handler (C4Bh) translates.")
    out.append(c_array("kKeyCodes", "uint8_t", list(d[0xB5B:0xB5B + 0x58]), fmt="0x{:02X}"))
    out.append("// --- the music driver ---------------------------------------------\n"
               "// 1260h: digital volume, 16 tables of 256: sample byte -> signed\n"
               "// contribution, added with wraparound into a buffer of 80h (3BC9h).")
    out.append(c_array("kVolume", "uint8_t", list(d[0x1260:0x2260]), fmt="0x{:02X}"))
    out.append("// 3260h: digital note -> step in 8.8 samples, octave * 12 + note (5 octaves).")
    out.append(c_array("kPeriods", "uint16_t", [u16(0x3260 + 2 * i) for i in range(60)]))
    out.append("// 3385h: FM note -> F-number.")
    out.append(c_array("kFnum", "uint16_t", [u16(0x3385 + 2 * i) for i in range(12)], fmt="0x{:03X}"))
    out.append("// 339Dh: operator register offsets; 33AFh/33B8h: channel -> modulator /\n"
               "// carrier operator.")
    out.append(c_array("kOpOffset", "uint8_t", list(d[0x339D:0x33AF]), fmt="0x{:02X}"))
    out.append(c_array("kModOp", "uint8_t", list(d[0x33AF:0x33B8])))
    out.append(c_array("kCarOp", "uint8_t", list(d[0x33B8:0x33C1])))
    out.append("// 3451h: pattern volume 0..15 -> OPL total level.")
    out.append(c_array("kVolToTl", "uint8_t", list(d[0x3451:0x3461]), fmt="0x{:02X}"))
    out.append("}  // namespace rbg\n")
    open(os.path.join(data, "tables.h"), "w").write("\n".join(out))

    lo, hi = 0x1C34B, 0x1DB38
    om = ["// Generated by tools/extract_assets.py from the unpacked RBGDEMO2 image.",
          "// Object memory: the bytes of 1C34Bh..1DB37h as the program starts.",
          "#pragma once", "", "#include <cstdint>", "", "namespace rbg {", "",
          f"inline constexpr uint32_t kObjMemBase = 0x{lo:X};",
          c_array("kObjMem", "uint8_t", list(d[lo:hi]), fmt="0x{:02X}"),
          "}  // namespace rbg", ""]
    open(os.path.join(data, "objmem.h"), "w").write("\n".join(om))
    print(f"font: {count - 1} glyphs, {fw}x{fh}; {len(texts)} texts")


if __name__ == "__main__":
    main()
