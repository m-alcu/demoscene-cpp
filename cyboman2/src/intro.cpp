#include "intro.h"

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <utility>

namespace cyb {

namespace {
inline uint16_t lo(uint32_t r) { return (uint16_t)r; }
inline void setLo(uint32_t& r, uint16_t v) { r = (r & 0xFFFF0000u) | v; }
inline uint32_t rol16(uint32_t r) { return (r << 16) | (r >> 16); }
inline void xchgLo(uint32_t& a, uint32_t& b) {
    const uint16_t t = lo(a);
    setLo(a, lo(b));
    setLo(b, t);
}
// IDIV r/m32 with EDX:EAX from CDQ: the quotient (the original would fault
// on a zero divisor or an overflow; that does not happen in the intro).
inline int32_t idiv64(int64_t n, int32_t d) { return d ? (int32_t)(n / d) : 0; }
// IDIV r/m16: DX:AX / divisor, the quotient's low word
inline uint16_t idiv32(uint16_t dx, uint16_t ax, int16_t d) {
    const int32_t n = (int32_t)((uint32_t)dx << 16 | ax);
    return d ? (uint16_t)(n / d) : 0;
}
}  // namespace

Intro::Intro(Host& host, const std::vector<uint8_t>& image) : host_(host) {
    m_.assign(0x110000, 0);
    std::copy(image.begin(), image.begin() + std::min<size_t>(image.size(), 0xA0000), m_.begin());
}

void Intro::run() {
    init();
    main();
    finished_ = true;
}

// 8BF8h
uint32_t Intro::rand() {
    uint32_t eax = cd(0x8C17);
    const uint32_t edx = cd(0x8C1B);
    SD(0x8C1B, eax);
    eax += edx;
    eax = (eax << 13) | (eax >> 19);
    SD(0x8C17, eax);
    return (eax & 0xFFFF0000u) | (uint16_t)((eax & 0xFF) << 8 | (eax >> 8 & 0xFF));
}

// 2AF4h: the lighting table at CS:19E7h, 256 words of k * (k / 2).
void Intro::lightTable() {
    uint16_t di = 0x19E7;
    for (int cx = 0x100; cx; cx--) {
        const int16_t ax = (int16_t)(0x100 - cx), bx = (int16_t)((0x100 - cx) >> 1);
        SW(di, (uint16_t)(ax * bx));
        di += 2;
    }
}

// 2B10h: the sine table at CS:023Dh (1024 words) completed by symmetry.
void Intro::sineTable() {
    uint16_t si = 0x23D, di = 0xA3B;
    for (int cx = 0x200; cx; cx--) {
        SW(di, cw(si));
        si += 2;
        di -= 2;
    }
    si = 0x23D, di = 0xA3D;
    for (int cx = 0x400; cx; cx--) {
        SW(di, (uint16_t)-ci(si));
        si += 2, di += 2;
    }
    for (int k = 0; k < 0x400; k++) B(CS, (uint16_t)(0x123D + k)) = B(CS, (uint16_t)(0x23D + k));
}

// 2B3Dh: the vector at CS:5DE1h scaled to about 1024 (a cheap length:
// 16 max + 5 mid + 4 min, over 4).
void Intro::normalise() {
    int32_t a = (int16_t)cw(0x5DE1), b = (int16_t)cw(0x5DE3), c = (int16_t)cw(0x5DE5);
    a = a < 0 ? -a : a, b = b < 0 ? -b : b, c = c < 0 ? -c : c;
    if (!(a < b)) std::swap(a, b);
    if (!(b < c)) std::swap(b, c);
    if (!(a < b)) std::swap(a, b);
    int32_t ebx = a * 4 + b * 5 + c * 16;
    if (ebx == 0) ebx = 0x3E8;
    ebx >>= 2;
    for (uint16_t o : {0x5DE1, 0x5DE3, 0x5DE5}) {
        const int32_t v = (int32_t)(int16_t)cw(o) << 10;
        SW(o, (uint16_t)idiv64(v, ebx));
    }
}

// 2BD3h: an object's face normals (cross products, normalised) and vertex
// normals (the sums of the faces' around each vertex, normalised). Object:
// [0] vertices, [2] faces, [4] vertex offset (3 words), [6] face offset
// (colour, 3 vertex indices), [8] normal offset.
void Intro::normals(uint16_t fs) {
    uint16_t cx = W(fs, 2);
    if (cx == 0) return;
    uint16_t si = W(fs, 6), di = 0x2DB7;
    auto vtx = [&](uint16_t idx, uint16_t ox, uint16_t oy, uint16_t oz) {
        const uint16_t bp = (uint16_t)(idx * 6 + W(fs, 4));
        SW(ox, W(fs, bp)), SW(oy, W(fs, (uint16_t)(bp + 2))), SW(oz, W(fs, (uint16_t)(bp + 4)));
    };
    do {
        vtx(W(fs, (uint16_t)(si + 2)), 0x5DB7, 0x5DBD, 0x5DC3);
        vtx(W(fs, (uint16_t)(si + 4)), 0x5DB9, 0x5DBF, 0x5DC5);
        vtx(W(fs, (uint16_t)(si + 6)), 0x5DBB, 0x5DC1, 0x5DC7);
        auto d = [&](uint16_t a, uint16_t b) { return (int32_t)(int16_t)(uint16_t)(cw(a) - cw(b)); };
        SD(0x5DC9, d(0x5DB9, 0x5DB7)), SD(0x5DD1, d(0x5DBF, 0x5DBD)), SD(0x5DD9, d(0x5DC5, 0x5DC3));
        SD(0x5DCD, d(0x5DBB, 0x5DB7)), SD(0x5DD5, d(0x5DC1, 0x5DBD)), SD(0x5DDD, d(0x5DC7, 0x5DC3));
        auto cross = [&](uint16_t p, uint16_t q, uint16_t r, uint16_t s) {
            return (uint16_t)((int32_t)(cd(p) * cd(q) - cd(r) * cd(s)) >> 8);
        };
        SW(0x5DE1, cross(0x5DD1, 0x5DDD, 0x5DD9, 0x5DD5));
        SW(0x5DE3, cross(0x5DD9, 0x5DCD, 0x5DC9, 0x5DDD));
        SW(0x5DE5, cross(0x5DC9, 0x5DD5, 0x5DD1, 0x5DCD));
        normalise();
        SW(di, cw(0x5DE1)), SW((uint16_t)(di + 2), cw(0x5DE3)), SW((uint16_t)(di + 4), cw(0x5DE5));
        si += 8, di += 6;
    } while (--cx);
    uint16_t n = W(fs, 0);
    di = W(fs, 8);
    for (uint16_t bp = 0; n; n--, bp++) {
        SW(0x5DE1, 0), SW(0x5DE3, 0), SW(0x5DE5, 0);
        uint16_t f = W(fs, 2);
        si = W(fs, 6);
        uint16_t bx = 0;
        for (; f; f--, si += 8, bx += 6) {
            if (bp != W(fs, (uint16_t)(si + 2)) && bp != W(fs, (uint16_t)(si + 4)) && bp != W(fs, (uint16_t)(si + 6)))
                continue;
            SW(0x5DE1, (uint16_t)(cw(0x5DE1) + cw((uint16_t)(bx + 0x2DB7))));
            SW(0x5DE3, (uint16_t)(cw(0x5DE3) + cw((uint16_t)(bx + 0x2DB9))));
            SW(0x5DE5, (uint16_t)(cw(0x5DE5) + cw((uint16_t)(bx + 0x2DBB))));
        }
        normalise();
        SW(fs, di, cw(0x5DE1)), SW(fs, (uint16_t)(di + 2), cw(0x5DE3)), SW(fs, (uint16_t)(di + 4), cw(0x5DE5));
        di += 6;
    }
}

// 7626h: an object doubled by its mirror image in z: the vertices copied
// with z negated, the faces copied reversed, on the copies of the vertices
// off the mirror plane.
void Intro::mirror(uint16_t ds) {
    uint16_t cx = W(ds, 0), si = W(ds, 4);
    uint16_t di = (uint16_t)(si + cx * 6);
    for (; cx; cx--) {
        SD(ds, di, D(ds, si));
        SW(ds, (uint16_t)(di + 4), (uint16_t)-(int16_t)W(ds, (uint16_t)(si + 4)));
        si += 6, di += 6;
    }
    cx = W(ds, 2), si = W(ds, 6);
    di = (uint16_t)(si + cx * 8);
    const uint16_t dx = W(ds, 0);
    auto map = [&](uint16_t v) {
        const uint16_t bx = (uint16_t)(v * 6 + W(ds, 4));
        return W(ds, (uint16_t)(bx + 4)) != 0 ? (uint16_t)(v + dx) : v;
    };
    for (; cx; cx--) {
        SW(ds, di, W(ds, si));
        SW(ds, (uint16_t)(di + 2), map(W(ds, (uint16_t)(si + 6))));
        SW(ds, (uint16_t)(di + 4), map(W(ds, (uint16_t)(si + 4))));
        SW(ds, (uint16_t)(di + 6), map(W(ds, (uint16_t)(si + 2))));
        si += 8, di += 8;
    }
    SW(ds, 0, (uint16_t)(W(ds, 0) << 1));
    SW(ds, 2, (uint16_t)(W(ds, 2) << 1));
}

void Intro::mirrorAll() {   // 76A4h
    for (uint16_t s : {0x5D3B, 0x5E66, 0x5FDB, 0x6104, 0x623F, 0x62B8, 0x63EE}) mirror(s);
}

// 7807h: the data: mirrored objects, the morph's second shape, normals,
// the tables, 100 random positions, the morph's deltas.
void Intro::init() {
    mirrorAll();
    {
        const uint16_t ds = 0x665F, es = 0x676C;
        uint16_t si = W(ds, 6);
        const uint16_t n = (uint16_t)(W(es, 0) * 6 + W(es, 2) * 8);
        for (uint16_t k = 0; k < n; k++, si++) B(es, si) = B(ds, si);
    }
    {
        const uint16_t fs = 0x594A;
        uint16_t si = W(fs, 4);
        for (uint16_t cx = (uint16_t)(W(fs, 0) * 3); cx; cx--, si += 2) SW(fs, si, (uint16_t)(W(fs, si) << 1));
    }
    SW(0x19C9, 0);
    for (uint16_t si = 0x163D;; si += 0x38) {
        if (cw(si) == 0) break;
        if (cw(si) == 0xFFFF) continue;
        SW(0x19C9, (uint16_t)(cw(0x19C9) + W(cw(si), 2)));
        normals(cw(si));
    }
    for (uint16_t bx = 0; cw((uint16_t)(bx + 0x1985)); bx += 2) normals(cw((uint16_t)(bx + 0x1985)));
    sineTable();
    lightTable();
    normals(0x665F);
    normals(0x676C);
    for (uint16_t bx = 0, cx = 0x64; cx; cx--, bx += 4) {
        SD((uint16_t)(bx + 0x6D08), ((rand() & 0x3FF) - 0x200) << 11);
        SD((uint16_t)(bx + 0x6F98), ((rand() & 0x3FF) - 0x200) << 11);
        SD((uint16_t)(bx + 0x7228), ((rand() & 0x3FF) - 0x200) << 11);
    }
    {
        const uint16_t ds = 0x665F, fs = 0x676C;
        uint16_t si = W(ds, 4), di = 0x8C23;
        for (uint16_t cx = (uint16_t)(W(ds, 0) * 3); cx; cx--, si += 2, di += 2)
            SW(di, (uint16_t)(W(fs, si) - W(ds, si)));
        si = W(ds, 8), di = 0x8FB3;
        for (uint16_t cx = (uint16_t)(W(ds, 0) * 3); cx; cx--, si += 2, di += 2)
            SW(di, (uint16_t)(W(fs, si) - W(ds, si)));
    }
    for (uint16_t k = 0; k < 0x433 * 4; k++) B(0x6879, k) = B(0x676C, k);
}

// ------------------------------------------------------------- 3D ---

// 603Ch: the rotation matrix (CS:6018h-6038h, 15-bit fractions) from the
// angles at CS:5FF9h-5FFDh (2048 steps).
void Intro::matrix() {
    auto sc = [&](uint16_t a, uint16_t s, uint16_t c) {
        const uint16_t si = (uint16_t)((cw(a) & 0x7FF) * 2);
        SD(s, (uint32_t)(int32_t)ci((uint16_t)(si + 0x23D)));
        SD(c, (uint32_t)(int32_t)ci((uint16_t)(si + 0x63D)));
    };
    sc(0x5FF9, 0x6000, 0x600C);
    sc(0x5FFB, 0x6004, 0x6010);
    sc(0x5FFD, 0x6008, 0x6014);
    const int32_t sa = cl(0x6000), sb = cl(0x6004), sg = cl(0x6008);
    const int32_t ca = cl(0x600C), cb = cl(0x6010), cg = cl(0x6014);
    SD(0x6018, (uint32_t)((int32_t)((uint32_t)(cb * cg) - (uint32_t)(((sb * sa) >> 15) * sg)) >> 15));
    SD(0x601C, (uint32_t)((-ca * sg) >> 15));
    SD(0x6020, (uint32_t)((int32_t)((uint32_t)(sb * cg) + (uint32_t)(((cb * sa) >> 15) * sg)) >> 15));
    SD(0x6024, (uint32_t)((int32_t)((uint32_t)(cb * sg) + (uint32_t)(((sb * sa) >> 15) * cg)) >> 15));
    SD(0x6028, (uint32_t)((ca * cg) >> 15));
    SD(0x602C, (uint32_t)((int32_t)((uint32_t)(sb * sg) - (uint32_t)(((cb * sa) >> 15) * cg)) >> 15));
    SD(0x6030, (uint32_t)((-sb * ca) >> 15));
    SD(0x6034, (uint32_t)sa);
    SD(0x6038, (uint32_t)((cb * ca) >> 15));
}

// 5F10h: vertex SI (byte offset, 6 a vertex) of object FS rotated: CS:5EF8h,
// 5EFCh, 5F00h; returns the normal's z after the rotation (EDX).
uint32_t Intro::transform(uint16_t fs, uint16_t si) {
    const uint16_t n = (uint16_t)(si + W(fs, 8));
    const int32_t nx = (int16_t)W(fs, n), ny = (int16_t)W(fs, (uint16_t)(n + 2)), nz = (int16_t)W(fs, (uint16_t)(n + 4));
    const uint32_t edx = (uint32_t)nx * cd(0x6030) + (uint32_t)ny * cd(0x6034) + (uint32_t)nz * cd(0x6038);
    const uint16_t v = (uint16_t)(si + W(fs, 4));
    const uint32_t z = ((uint32_t)(int32_t)(int16_t)W(fs, (uint16_t)(v + 4)) + cd(0x19AF)) << 1;
    const uint32_t y = ((uint32_t)(int32_t)(int16_t)W(fs, (uint16_t)(v + 2)) + cd(0x19AB)) << 1;
    const uint32_t x = ((uint32_t)(int32_t)(int16_t)W(fs, v) + cd(0x19A7)) << 1;
    auto row = [&](uint16_t a, uint16_t b, uint16_t c) {
        return (uint32_t)((int32_t)(cd(a) * x + cd(b) * y + cd(c) * z + 3) >> 2);
    };
    SD(0x5EF8, row(0x6018, 0x601C, 0x6020));
    SD(0x5EFC, row(0x6024, 0x6028, 0x602C));
    SD(0x5F00, row(0x6030, 0x6034, 0x6038));
    return edx;
}

// 6439h: the object's vertices to the screen buffer at 4984h: per vertex a
// dword (y, x) at 4*n, the depth at 2D50h + 4*n, the colour (8.8, lit by
// the normal) at 2D52h + 4*n; n counts from CS:19D3h.
void Intro::project(uint16_t fs) {
    if (W(fs, 0) == 0) return;
    uint16_t si = (uint16_t)(cw(0x19D3) << 2);
    for (;;) {
        const uint16_t v = (uint16_t)((si >> 2) - cw(0x19D3));
        uint32_t edx = transform(fs, (uint16_t)(v * 6));
        if (cw(0x19D7) != 0) edx = (uint32_t)-(int32_t)edx;
        SD(0x5EF8, cd(0x5EF8) + (cd(0x19BD) << 8));
        SD(0x5EFC, cd(0x5EFC) + (cd(0x19C1) << 8));
        SW(GSEG, (uint16_t)(si + 0x2D50), (uint16_t)((uint16_t)(cl(0x5F00) >> 17) + 0x4000));
        const uint32_t eax = (uint32_t)(cl(0x5F00) >> 14);
        edx = (uint32_t)((int32_t)(edx * 5 + eax) >> 18);
        int16_t dx = (int16_t)(uint16_t)edx;
        if (dx < 0) dx = 0;
        else if (dx > 0xFF) dx = 0xFF;
        uint16_t ax = cw((uint16_t)(dx * 2 + 0x19E7));
        if ((int16_t)ax < 0) ax = 0;
        if (ax >= 0x3B00) ax = 0x3B00;
        SW(GSEG, (uint16_t)(si + 0x2D52), (uint16_t)(ax + 0x2400 + cw(0x1BF1)));
        const int32_t ebp = (int32_t)(cd(0x5F00) - (cd(0x19C5) << 8));
        const int32_t x = idiv64((int64_t)cl(0x5EF8) * 0x100, ebp);
        SW(GSEG, (uint16_t)(si + 2), (uint16_t)((uint16_t)x + 0xA0));
        int32_t y = idiv64((int64_t)cl(0x5EFC) * 0x100, ebp);
        y = (int32_t)((uint32_t)y * 3) >> 2;
        SW(GSEG, si, (uint16_t)((uint16_t)y + 0x64));
        si += 4;
        const uint16_t bx = (uint16_t)((si >> 2) - cw(0x19D3));
        if (!(bx < W(fs, 0))) break;
    }
}

// 6AC3h: the object's faces that face the camera to the list at 4984:5AA0h
// (a dword: the face's slot, the sum of its depths), their vertices to
// 4984:B540h/CBE8h/E290h (the third or'ed with the colour, rotated).
void Intro::faces(uint16_t fs) {
    const uint16_t nf = cw(0x6AC1);
    if (nf == 0) return;
    uint16_t si = (uint16_t)(cw(0x19D5) * 4), bp = (uint16_t)(cw(0x19D5) * 2);
    for (int16_t cx = (int16_t)(nf - 1); cx >= 0; cx--) {
        const uint16_t bx = (uint16_t)(((nf - 1 - cx) << 3) + W(fs, 6));
        const uint16_t dx0 = cw(0x19D3);
        const uint16_t a = (uint16_t)((W(fs, (uint16_t)(bx + 2)) + dx0) << 2);
        const uint16_t b = (uint16_t)((W(fs, (uint16_t)(bx + 4)) + dx0) << 2);
        const uint16_t c = (uint16_t)((W(fs, (uint16_t)(bx + 6)) + dx0) << 2);
        const uint16_t t1 = (uint16_t)((uint16_t)(W(GSEG, (uint16_t)(c + 2)) - W(GSEG, (uint16_t)(a + 2))) *
                                       (uint16_t)(W(GSEG, b) - W(GSEG, a)));
        const uint16_t t2 = (uint16_t)((uint16_t)(W(GSEG, (uint16_t)(b + 2)) - W(GSEG, (uint16_t)(a + 2))) *
                                       (uint16_t)(W(GSEG, c) - W(GSEG, a)));
        const int16_t ax = (int16_t)(uint16_t)(t2 - t1);
        const bool visible = cw(0x19D7) == 0 ? !(ax < 0) : (ax < 0);
        if (!visible) continue;
        const uint16_t dx = cw(0x19D3);
        uint16_t sum = 0;
        uint16_t di = (uint16_t)(W(fs, (uint16_t)(bx + 2)) + dx);
        sum = (uint16_t)(sum + W(GSEG, (uint16_t)(di * 4 + 0x2D50)));
        SW(GSEG, (uint16_t)(bp - 0x4AC0), di);
        di = (uint16_t)(W(fs, (uint16_t)(bx + 4)) + dx);
        sum = (uint16_t)(sum + W(GSEG, (uint16_t)(di * 4 + 0x2D50)));
        SW(GSEG, (uint16_t)(bp - 0x3418), di);
        di = (uint16_t)(W(fs, (uint16_t)(bx + 6)) + dx);
        sum = (uint16_t)(sum + W(GSEG, (uint16_t)(di * 4 + 0x2D50)));
        SW(GSEG, (uint16_t)(bp - 0x1D70), di);
        uint16_t col = W(fs, bx);
        col = (uint16_t)(col >> 1 | col << 15);
        SW(GSEG, (uint16_t)(bp - 0x1D70), (uint16_t)(W(GSEG, (uint16_t)(bp - 0x1D70)) | col));
        SD(GSEG, (uint16_t)(si + 0x5AA0), (uint32_t)sum << 16 | (uint16_t)(si >> 2));
        si += 4, bp += 2;
    }
    SW(0x19D5, (uint16_t)(bp >> 1));
    SW(0x19D3, (uint16_t)(cw(0x19D3) + W(fs, 0)));
}

// 6BCCh: object slot BX (CS:163Dh + 38h * n): segment, off flag, position
// (3 dwords), angles at +1Ch, the mirror flag at +2Ah, the offset at +2Ch;
// the camera's position and angles added.
void Intro::object(uint16_t bx) {
    if (bx > 0x194D) return;
    if (cw((uint16_t)(bx + 2)) != 0) return;
    const uint16_t fs = cw(bx);
    if (fs == 0) return;
    SW(0x5FF9, (uint16_t)((int16_t)(uint16_t)(cw((uint16_t)(bx + 0x1C)) + cw(0x1659)) >> 4));
    SW(0x5FFB, (uint16_t)((int16_t)(uint16_t)(cw((uint16_t)(bx + 0x1E)) + cw(0x165B)) >> 4));
    SW(0x5FFD, (uint16_t)((int16_t)(uint16_t)(cw((uint16_t)(bx + 0x20)) + cw(0x165D)) >> 4));
    SD(0x19BD, cd((uint16_t)(bx + 4)) + cd(0x1641));
    SD(0x19C1, cd((uint16_t)(bx + 8)) + cd(0x1645));
    SD(0x19C5, cd((uint16_t)(bx + 0xC)) + cd(0x1649));
    SD(0x19A7, cd((uint16_t)(bx + 0x2C)));
    SD(0x19AB, cd((uint16_t)(bx + 0x30)));
    SD(0x19AF, cd((uint16_t)(bx + 0x34)));
    SW(0x19D7, cw((uint16_t)(bx + 0x2A)));
    SW(0x6AC1, W(fs, 2));
    matrix();
    project(fs);
    faces(fs);
}

void Intro::endList() {   // 6CF6h
    SD(GSEG, (uint16_t)((cw(0x19D5) << 2) + 0x5AA0), 0xFFFFFFFFu);
}

// 6C64h: the scene: seven objects, the eighth with the second colour set,
// and nine copies of the animated object (its frames listed at 1985h).
void Intro::scene() {
    SW(0x19D3, 0), SW(0x19D5, 0), SW(0x1BF1, 0);
    for (uint16_t bx : {0x1675, 0x16AD, 0x16E5, 0x171D, 0x1755, 0x178D, 0x17C5}) object(bx);
    SW(0x1BF1, 0x4000);
    object(0x17FD);
    const uint16_t saved = cw(0x1853);
    SW(0x1BF1, 0);
    SW(0x1851, 0xFE00);
    for (int dx = 9; dx; dx--) {
        SW(0x19DB, (uint16_t)(cw(0x19DB) + 5));
        const uint16_t bx = (uint16_t)((cw(0x19DB) >> 1) & 0x1E);
        SW(0x1835, cw((uint16_t)(bx + 0x1985)));
        SW(0x1851, (uint16_t)(cw(0x1851) ^ 0x400));
        SW(0x1853, (uint16_t)(cw(0x1853) + 0xE38));
        object(0x1835);
    }
    SW(0x1853, saved);
    SW(0x19DB, (uint16_t)(cw(0x19DB) - 0x2D));
    endList();
}

// 74BAh: 100 blobs (the animated object) at the random positions.
void Intro::blobs() {
    SW(0x19D3, 0), SW(0x19D5, 0), SW(0x1BF1, 0);
    SW(0x74B8, 0x64);
    do {
        SW(0x19DB, (uint16_t)(cw(0x19DB) + 3));
        uint16_t bx = (uint16_t)((cw(0x19DB) >> 1) & 0x1E);
        SW(0x1835, cw((uint16_t)(bx + 0x1985)));
        bx = (uint16_t)((cw(0x74B8) & 0x3F) << 2);
        SD(0x1839, cd((uint16_t)(bx + 0x6D08)));
        SD(0x183D, cd((uint16_t)(bx + 0x6F98)));
        SD(0x1841, cd((uint16_t)(bx + 0x7228)));
        object(0x1835);
        SW(0x74B8, (uint16_t)(cw(0x74B8) - 1));
    } while (cw(0x74B8) != 0);
    SW(0x19DB, (uint16_t)(cw(0x19DB) - 0x12C));
    endList();
}

// 7529h: the face list sorted by depth: thirteen passes on bits 19-31 of
// the dwords, those with the bit clear kept in order, the others after them
// reversed.
void Intro::sortFaces() {
    const uint16_t ds = GSEG;
    SW(0x19B3, (uint16_t)((cw(0x19D5) << 2) + 0x87F0));
    for (uint32_t edx = 0x80000; edx; edx <<= 1) {
        uint16_t si = 0x5AA0, di = 0x87F0, bx = cw(0x19B3);
        for (;;) {
            const uint32_t eax = D(ds, si);
            if ((int16_t)(uint16_t)eax < 0) break;
            si += 4;
            if ((edx & eax) == 0) SD(ds, di, eax), di += 4;
            else SD(ds, bx, eax), bx -= 4;
        }
        SW(ds, di, 0xFFFF);
        si = 0x5AA0, di = 0x87F0, bx = cw(0x19B3);
        for (;;) {
            const uint32_t eax = D(ds, di);
            if ((int16_t)(uint16_t)eax < 0) break;
            SD(ds, si, eax), di += 4, si += 4;
        }
        for (;;) {
            const uint32_t eax = D(ds, bx);
            if ((int16_t)(uint16_t)eax < 0) break;
            SD(ds, si, eax), bx -= 4, si += 4;
        }
        SW(ds, si, 0xFFFF);
    }
}

// 6A12h: the sorted faces drawn, back to front.
void Intro::drawFaces() {
    for (uint16_t si = 0x5AA0; W(GSEG, si) != 0xFFFF; si += 4) {
        const uint16_t bx = (uint16_t)(W(GSEG, si) << 1);
        uint16_t a = W(GSEG, (uint16_t)(bx - 0x4AC0));
        uint16_t b = W(GSEG, (uint16_t)(bx - 0x3418));
        uint16_t c = W(GSEG, (uint16_t)(bx - 0x1D70));
        SW(0x19D9, (c & 0x8000) ? 1 : 0);
        c &= 0x7FFF;
        a = (uint16_t)(a << 2), b = (uint16_t)(b << 2), c = (uint16_t)(c << 2);
        const uint32_t eax = D(GSEG, a), ebx = D(GSEG, b), ecx = D(GSEG, c);
        const int32_t L = 0x1400000;
        if ((int32_t)eax >= L && (int32_t)ebx >= L && (int32_t)ecx >= L) continue;
        if ((int32_t)eax <= 0 && (int32_t)ebx <= 0 && (int32_t)ecx <= 0) continue;
        const uint16_t dx = (uint16_t)(cw(0x19D9) << 14);
        triangle(eax, ebx, ecx, (uint16_t)(W(GSEG, (uint16_t)(a + 0x2D52)) + dx),
                 (uint16_t)(W(GSEG, (uint16_t)(b + 0x2D52)) + dx), (uint16_t)(W(GSEG, (uint16_t)(c + 0x2D52)) + dx));
    }
}

// 6550h: EDX lines of a triangle into the buffer (segment CS:1BEFh):
// ESI/EDI the left and right edges' steps, CS:69F8h/69FCh the edges
// (16.16, offsets in the buffer), CX the colour (8.8) stepped by CS:6563h
// along a line and by CS:65D6h down the left edge. Two pixels at a time,
// the second sample in the first byte. With clipping (CS:6A0Eh) each line
// is cut to the line at CS:6A10h.
void Intro::spans() {
    SW(0x6545, lo(edx_));
    esi_ += 0x1400000;
    edi_ += 0x1400000;
    bp_ = cw(0x6563);
    const bool clip = cw(0x6A0E) != 0;
    uint16_t cx = lo(ecx_);
    auto pixels = [&](uint16_t& bx, uint16_t ax, uint16_t ds) {
        if (bx & 1) {
            B(ds, bx) = (uint8_t)(cx >> 8);
            cx = (uint16_t)(cx + bp_);
            ax--;
            bx++;
        }
        ax = (uint16_t)(ax >> 1 | ax << 15);
        for (uint8_t al = (uint8_t)ax; al; al--) {
            const uint8_t dh = (uint8_t)(cx >> 8);
            cx = (uint16_t)(cx + bp_);
            const uint8_t dl = (uint8_t)(cx >> 8);
            cx = (uint16_t)(cx + bp_);
            B(ds, bx) = dl, B(ds, (uint16_t)(bx + 1)) = dh;
            setLo(edx_, (uint16_t)(dh << 8 | dl));
            bx += 2;
        }
        if (ax & 0x8000) B(ds, bx) = (uint8_t)(cx >> 8);
    };
    const uint16_t ds = cw(0x1BEF);
    if (!clip) {
        xchgLo(edi_, esi_);
        esi_ = rol16(esi_), edi_ = rol16(edi_);
        SD(0x65DB, esi_), SD(0x65E2, edi_);
        esi_ = cd(0x69F8), edi_ = cd(0x69FC);
        xchgLo(edi_, esi_);
        esi_ = rol16(esi_), edi_ = rol16(edi_);
        SW(0x6543, cx);
        do {
            uint16_t ax = (uint16_t)(lo(edi_) - lo(esi_));
            uint16_t bx = lo(esi_);
            if ((int16_t)ax > 0) pixels(bx, ax, ds);
            setLo(ebx_, bx);
            SW(0x6543, (uint16_t)(cw(0x6543) + cw(0x65D6)));
            const uint64_t s = (uint64_t)esi_ + cd(0x65DB);
            esi_ = (uint32_t)s;
            const uint64_t t = (uint64_t)edi_ + cd(0x65E2) + (s >> 32);
            edi_ = (uint32_t)t;
            esi_ += (uint32_t)(t >> 32);
            SW(0x6545, (uint16_t)(cw(0x6545) - 1));
            cx = cw(0x6543);
        } while (cw(0x6545) != 0);
    } else {
        uint16_t dx = cw(0x6A10);
        xchgLo(edi_, esi_);
        esi_ = rol16(esi_), edi_ = rol16(edi_);
        SD(0x66B6, esi_), SD(0x66BD, edi_);
        SW(0x66B1, cw(0x65D6));
        esi_ = cd(0x69F8), edi_ = cd(0x69FC);
        xchgLo(edi_, esi_);
        esi_ = rol16(esi_), edi_ = rol16(edi_);
        SW(0x6543, cx);
        do {
            uint16_t ax = lo(edi_);
            uint16_t bx = lo(esi_);
            bool draw = true;
            if (bx < dx) {                               // starts left of the line: cut
                bx = (uint16_t)(bx - dx);
                bx = (uint16_t)((int16_t)bx * (int16_t)bp_);
                cx = (uint16_t)(cx - bx);
                bx = dx;
            } else {
                dx = (uint16_t)(dx + 0x140);
                if (bx >= dx) draw = false;              // right of the line: nothing
                else dx = (uint16_t)(dx - 0x140);
            }
            if (draw) {
                if (ax < dx) ax = dx;
                dx = (uint16_t)(dx + 0x140);
                if (!(ax < dx)) ax = dx;
                ax = (uint16_t)(ax - bx);
                if (ax != 0) {
                    const uint32_t keep = edx_;
                    pixels(bx, ax, ds);
                    edx_ = keep;
                }
            }
            setLo(ebx_, bx);
            SW(0x6543, (uint16_t)(cw(0x6543) + cw(0x66B1)));
            const uint64_t s = (uint64_t)esi_ + cd(0x66B6);
            esi_ = (uint32_t)s;
            const uint64_t t = (uint64_t)edi_ + cd(0x66BD) + (s >> 32);
            edi_ = (uint32_t)t;
            esi_ += (uint32_t)(t >> 32);
            SW(0x6545, (uint16_t)(cw(0x6545) - 1));
            cx = cw(0x6543);
        } while (cw(0x6545) != 0);
        setLo(edx_, dx);
    }
    setLo(ecx_, cx);
    esi_ = rol16(esi_), edi_ = rol16(edi_);
    xchgLo(edi_, esi_);
    SD(0x69F8, esi_), SD(0x69FC, edi_);
}

// 66F0h: a Gouraud triangle. EAX, EBX, ECX: the vertices (y in the low
// word, x in the high); SI, DI, BP their colours (8.8). Sorted by y, the
// edge steps and the colour steps computed (the latter patched into the
// span loop), drawn in two halves; lines 1-201 only.
void Intro::triangle(uint32_t eax, uint32_t ebx, uint32_t ecx, uint16_t si, uint16_t di, uint16_t bp) {
    if (!((int16_t)lo(eax) < (int16_t)lo(ebx))) std::swap(eax, ebx), std::swap(di, si);
    if (!((int16_t)lo(ebx) < (int16_t)lo(ecx))) std::swap(ecx, ebx), std::swap(bp, di);
    if (!((int16_t)lo(eax) < (int16_t)lo(ebx))) std::swap(eax, ebx), std::swap(di, si);
    if ((int16_t)lo(eax) > 0xC9 || (int16_t)lo(ecx) < 1) return;
    if (lo(eax) == lo(ebx) && !((int32_t)eax < (int32_t)ebx)) std::swap(eax, ebx), std::swap(di, si);
    SD(0x69E0, eax), SD(0x69E4, ebx), SD(0x69E8, ecx);
    SW(0x6A06, si), SW(0x6A08, di), SW(0x6A0A, bp);
    SW(0x6A0C, 1);
    {
        const uint32_t L = 0x1400000;
        const uint16_t dx = (uint16_t)-(int)((L < eax) + (L < ebx) + (L < ecx));
        SW(0x6A0E, dx);
        setLo(edx_, dx);
    }
    setLo(ecx, si);
    eax = ebx - eax;
    SW(0x6A00, lo(eax));
    if (lo(eax) != 0) {
        ebx = lo(eax);
        const int64_t n = (int32_t)eax;
        eax = (uint32_t)idiv64(n, (int32_t)ebx);
        edx_ = (uint32_t)(int32_t)(n % (int32_t)ebx);
        SD(0x69EC, eax);
        SW(0x6A0C, 0);
    }
    eax = cd(0x69E8) - cd(0x69E0);
    SW(0x6A02, lo(eax));
    if (lo(eax) == 0) return;
    ebx = lo(eax);
    {
        const int64_t n = (int32_t)eax;
        eax = (uint32_t)idiv64(n, (int32_t)ebx);
        edx_ = (uint32_t)(int32_t)(n % (int32_t)ebx);
        SD(0x69F0, eax);
    }
    eax = cd(0x69E8) - cd(0x69E4);
    SW(0x6A04, lo(eax));
    if (lo(eax) != 0) {
        ebx = lo(eax);
        const int64_t n = (int32_t)eax;
        eax = (uint32_t)idiv64(n, (int32_t)ebx);
        edx_ = (uint32_t)(int32_t)(n % (int32_t)ebx);
        SD(0x69F4, eax);
    }
    uint32_t esi = cd(0x69E0);
    SD(0x69F8, esi);
    esi += 0x7FFF;
    SD(0x69FC, esi);
    esi = cd(0x69EC);
    uint32_t edi = cd(0x69F0);
    ebx = cw(0x6A00);
    uint32_t ebp = esi - edi;
    auto cdqDx = [&]() { return (uint16_t)(((int16_t)lo(eax) < 0) ? 0xFFFF : 0); };   // cwd
    if (ebp == 0 || lo(ebx) == 0) {                  // 67F4h
        ebp = cd(0x69E4) - cd(0x69E0);
        if (ebp == 0) return;
        setLo(eax, 0);
    } else {
        ebp = ebp * ebx;
        if (!((int32_t)esi < (int32_t)edi)) {         // 680Fh
            setLo(eax, (uint16_t)(cw(0x6A0A) - cw(0x6A06)));
            const uint16_t q = idiv32(cdqDx(), lo(eax), (int16_t)cw(0x6A02));
            setLo(eax, q);
            SW(0x65D6, q);
            setLo(eax, (uint16_t)-(int16_t)q);
        } else {                                      // 683Dh
            setLo(eax, (uint16_t)(cw(0x6A08) - cw(0x6A06)));
            const uint16_t dxv = cdqDx();
            setLo(ebx, cw(0x6A00));
            if (lo(ebx) != 0) {
                const uint16_t q = idiv32(dxv, lo(eax), (int16_t)lo(ebx));
                setLo(eax, q);
                SW(0x65D6, q);
            }
            setLo(eax, (uint16_t)(cw(0x6A06) - cw(0x6A0A)));
            setLo(eax, idiv32(cdqDx(), lo(eax), (int16_t)cw(0x6A02)));
        }
        setLo(eax, (uint16_t)((int16_t)lo(eax) * (int16_t)cw(0x6A00)));   // 685Eh
    }
    setLo(eax, (uint16_t)(lo(eax) - cw(0x6A06) + cw(0x6A08)));           // 6863h
    eax <<= 16;
    eax = (uint32_t)idiv64((int32_t)eax, (int32_t)ebp);
    SW(0x6563, lo(eax));
    bool upper = true;                                // the first half drawn?
    if ((int16_t)cw(0x69E4) <= 1 || cw(0x6A0C) == 1) {     // 6885h: no first half
        eax = (uint32_t)(int32_t)(int16_t)cw(0x6A00);
        edi = edi * eax;
        setLo(eax, (uint16_t)((int16_t)lo(eax) * (int16_t)cw(0x65D6)));
        edi += cd(0x69F8);
        setLo(ecx, (uint16_t)(lo(ecx) + lo(eax)));
        esi = cd(0x69E4);
        if (!((int32_t)edi < (int32_t)esi)) std::swap(esi, edi);
        SD(0x69F8, edi);
        esi += 0x7FFF;
        SD(0x69FC, esi);
        uint16_t bx = cw(0x69E0);
        if ((int16_t)bx < 1) bx = 1;
        setLo(ebx, bx);
        ebx = (ebx * 5) << 22;
        SD(0x69F8, cd(0x69F8) + ebx);
        SD(0x69FC, cd(0x69FC) + ebx);
        upper = false;
    }
    if (upper) {                                      // 68DBh
        if (!((int32_t)esi < (int32_t)edi)) std::swap(edi, esi);
        if ((int16_t)cw(0x69E4) > 0xC9) SW(0x69E4, 0xC9);
        if ((int16_t)cw(0x69E0) < 1) {
            ebx = (uint16_t)(1 - cw(0x69E0));
            setLo(eax, lo(ebx));
            edx_ = ebx;
            ebx = ebx * esi;
            edx_ = edx_ * edi;
            setLo(eax, (uint16_t)((int16_t)lo(eax) * (int16_t)cw(0x65D6)));
            setLo(ecx, (uint16_t)(lo(ecx) + lo(eax)));
            SD(0x69F8, cd(0x69F8) + ebx);
            SD(0x69FC, cd(0x69FC) + edx_);
            SW(0x69E0, 1);
        }
        const uint16_t bx = cw(0x69E0);
        setLo(ebx, bx);
        const uint16_t dx = (uint16_t)(cw(0x69E4) - bx);
        setLo(edx_, dx);
        if (dx == 0) return;
        ebx = ebx * 5;
        setLo(ebx, (uint16_t)(lo(ebx) << 6));
        SW(0x6A10, lo(ebx));
        ebx <<= 16;
        SD(0x69F8, cd(0x69F8) + ebx);
        SD(0x69FC, cd(0x69FC) + ebx);
        eax_ = eax, ebx_ = ebx, ecx_ = ecx, esi_ = esi, edi_ = edi;
        spans();
        eax = eax_, ebx = ebx_, ecx = ecx_;
        esi = cd(0x69F0);
    }
    {                                                 // 695Bh: the second half
        const uint16_t bx = cw(0x6A04);
        setLo(ebx, bx);
        if (bx == 0) return;
        setLo(eax, (uint16_t)(cw(0x6A0A) - lo(ecx)));
        const uint16_t q = idiv32(cdqDx(), lo(eax), (int16_t)bx);
        setLo(eax, q);
        SW(0x65D6, q);
        esi = cd(0x69F0);
        edi = cd(0x69F4);
        if (!((int32_t)esi > (int32_t)edi)) std::swap(edi, esi);
        if (cw(0x69E8) > 0xC9) SW(0x69E8, 0xC9);
        if ((int16_t)cw(0x69E4) < 1) {
            ebx = (uint16_t)(1 - cw(0x69E4));
            setLo(eax, lo(ebx));
            edx_ = ebx;
            ebx = ebx * esi;
            edx_ = edx_ * edi;
            setLo(eax, (uint16_t)((int16_t)lo(eax) * (int16_t)cw(0x65D6)));
            setLo(ecx, (uint16_t)(lo(ecx) + lo(eax)));
            SD(0x69F8, cd(0x69F8) + ebx);
            SD(0x69FC, cd(0x69FC) + edx_);
            SW(0x69E4, 1);
        }
        const uint16_t b2 = cw(0x69E4);
        const uint16_t dx = (uint16_t)(cw(0x69E8) - b2);
        setLo(edx_, dx);
        if (dx == 0) return;
        setLo(ebx, (uint16_t)((uint16_t)(b2 * 5) << 6));
        SW(0x6A10, lo(ebx));
        eax_ = eax, ebx_ = ebx, ecx_ = ecx, esi_ = esi, edi_ = edi;
        spans();
    }
}

// ------------------------------------------------------------ frames ---

// 75BCh: waits for the timer's next frame, copies the buffer (39D0:0140h)
// to the screen and fills it again with the background: 80-byte rows of
// 38FEh, each repeated four times across, 42 rows repeated down.
void Intro::show() {
    while (cw(0x19CD) == 0) host_.frame();
    std::memcpy(&m_[0xA0000], &m_[lin(0x39D0, 0x140)], 64000);
    uint16_t di = 0x140;
    for (int bh = 5; bh; bh--) {
        uint16_t si = 0;
        for (int bl = 0x2A; bl; bl--) {
            if (di > 0xFA00) goto done;
            for (int k = 0; k < 4; k++) {
                std::memcpy(&m_[lin(0x39D0, di)], &m_[lin(0x38FE, si)], 0x50);
                di = (uint16_t)(di + 0x50);
                if (k < 3) si = (uint16_t)(si + 0x50 - 0x50);
            }
            si = (uint16_t)(si + 0x50);
        }
    }
done:
    SW(0x19CD, 0);
}

bool Intro::loop76D8(uint16_t cx) {
    SW(0x19CF, 0);
    SW(0x76D6, cx);
    do {
        scene();
        sortFaces();
        drawFaces();
        show();
        if (host_.escape()) {
            quit();
            return false;
        }
    } while (cw(0x76D6) > cw(0x19CF));
    return true;
}

bool Intro::loop7708(uint16_t cx) {
    SW(0x19CF, 0);
    SW(0x76D6, cx);
    do {
        blobs();
        sortFaces();
        drawFaces();
        show();
        if (host_.escape()) {
            quit();
            return false;
        }
    } while (cw(0x76D6) > cw(0x19CF));
    return true;
}

// 7738h: the morphing object: 676Ch + (6879h - 676Ch) * CS:8C1Fh / 256,
// vertices and normals, then three slots.
bool Intro::loop7738(uint16_t cx) {
    SW(0x19CF, 0);
    SW(0x76D6, cx);
    do {
        SW(0x19D3, 0), SW(0x19D5, 0);
        const uint16_t es = 0x6879, fs = 0x676C;
        const int32_t ebx = -(int32_t)cw(0x8C1F);
        uint16_t si = 0, di = W(es, 4);
        for (uint16_t n = (uint16_t)(W(es, 0) * 3); n; n--, si += 2, di += 2)
            SW(es, di, (uint16_t)((uint16_t)(((int32_t)(int16_t)cw((uint16_t)(si + 0x8C23)) * ebx) >> 8) + W(fs, di)));
        si = 0, di = W(es, 8);
        for (uint16_t n = (uint16_t)(W(es, 0) * 3); n; n--, si += 2, di += 2)
            SW(es, di, (uint16_t)((uint16_t)(((int32_t)(int16_t)cw((uint16_t)(si + 0x8FB3)) * ebx) >> 8) + W(fs, di)));
        SW(0x1BF1, 0x4000);
        object(0x18A5);
        SW(0x1BF1, 0);
        object(0x18DD);
        object(0x1915);
        endList();
        sortFaces();
        drawFaces();
        show();
        if (host_.escape()) {
            quit();
            return false;
        }
    } while (cw(0x76D6) > cw(0x19CF));
    return true;
}

// ------------------------------------------------------- the palette ---

// 629Ch: at the next retrace, 254 colours of SI scaled by BL / 256.
void Intro::fadeStep(uint16_t si, uint8_t bl) {
    dacIndex(0);
    waitRetrace();
    for (int k = 0; k < 0x2FA; k++) dacData((uint8_t)((B(CS, (uint16_t)(si + k)) * bl) >> 8));
}

// 62C5h: the palette at 1EF4h faded in.
void Intro::fadeIn() {
    unsigned bl = 0;
    do {
        fadeStep(0x1EF4, (uint8_t)bl);
        bl += 3;
    } while (bl < 0x100);
    dacIndex(0);
    for (int k = 0; k < 0x2FA; k++) dacData(B(CS, (uint16_t)(0x1EF4 + k)));
}

// 62E3h: the text at CS:[63BBh] typed straight to the screen: 8 colours of
// 6986h:000Ah from DAC entry 8, characters of the proportional font at
// 6986h:030Ah (rows of 1B9h bytes; widths at CS:63C1h, offsets the sum of
// those at CS:63FDh) one every three timer callbacks, from (0, 8), lines
// 15h apart, wrapping at 136h.
void Intro::typeText() {
    SW(0x63BD, 0);
    SW(0x63BF, 8);
    // waits for the retrace: the program runs at the start of a frame, in it
    dacIndex(8);
    for (int k = 0; k < 0x18; k++) dacData(B(0x6986, (uint16_t)(0xA + k)));
    uint16_t& cx = typeCx_;
    cx = 0;                                          // the frame loops leave CX = 0
    for (;;) {
        SW(0x19CD, 0);                               // 6311h
        for (;;) {
            const uint8_t al = B(CS, cw(0x63BB));
            if (al == 0) return;
            bool newline = al == 0x0D;
            if (!newline) {
                const uint16_t bx = (uint16_t)(al - 0x20);
                cx = (uint16_t)((cx & 0xFF00) | B(CS, (uint16_t)(bx + 0x63C1)));
                if ((uint8_t)cx >= 2) {
                    // the sum of the widths before (the first add comes before
                    // the test: for a space the byte at 63FCh)
                    uint16_t ax = 0;
                    int16_t d = (int16_t)(bx - 1);
                    do {
                        ax = (uint16_t)(ax + B(CS, (uint16_t)(d + 0x63FD)));
                    } while (--d >= 0);
                    uint16_t si = (uint16_t)(ax + 0x30A);
                    uint16_t di = (uint16_t)(cw(0x63BF) * 320 + cw(0x63BD));
                    const uint8_t w = (uint8_t)cx;
                    for (int row = 0; row < 16; row++) {
                        for (int k = 0; k < w; k++) {
                            const uint8_t v = B(0x6986, (uint16_t)(si + k));
                            if (v) B(VSEG, (uint16_t)(di + k)) = (uint8_t)(v + 8);
                        }
                        si = (uint16_t)(si + 0x1B9);
                        di = (uint16_t)(di + 0x140);
                    }
                    cx = w;                          // CH ran down to 0
                    SW(0x63BD, (uint16_t)(cw(0x63BD) + cx));
                    if (cw(0x63BD) >= 0x136) newline = true;
                }
            }
            if (newline) {                           // 6396h
                SW(0x63BD, 0);
                SW(0x63BF, (uint16_t)(cw(0x63BF) + 0x15));
            }
            SW(0x63BB, (uint16_t)(cw(0x63BB) + 1)); // 63A3h
            if (cx != 2) break;
        }
        while (cw(0x19CD) < 3) host_.frame();
    }
}

// --------------------------------------------------------- the timer ---

int Intro::callbacksPerFrame() {
    // the measurement (5E77h) takes the first four retraces, the first
    // interrupt comes in the fifth frame
    return timerFrames_ >= 5 ? 1 : 0;
}

void Intro::tick() {
    if (!timerOn_) return;
    timerFrames_++;
    for (int n = callbacksPerFrame(); n; n--) callback();
}

// 61A0h: the timer's callback: the objects moved (angles and positions by
// their speeds), the white fade (CS:19E1h), the breaking up (CS:19E5h), the
// morph's weight (CS:8C1Fh by 8C21h), the frame counters.
void Intro::callback() {
    SW(0x19DB, (uint16_t)(cw(0x19DB) + 2));
    for (uint16_t si = 0x163D;; si += 0x38) {
        if (cw((uint16_t)(si + 2)) != 0) continue;
        if (cw(si) == 0) break;
        for (int k = 0; k < 3; k++)
            SW((uint16_t)(si + 0x1C + 2 * k), (uint16_t)(cw((uint16_t)(si + 0x1C + 2 * k)) + cw((uint16_t)(si + 0x22 + 2 * k))));
        for (int k = 0; k < 3; k++)
            SD((uint16_t)(si + 4 + 4 * k), cd((uint16_t)(si + 4 + 4 * k)) + cd((uint16_t)(si + 0x10 + 4 * k)));
    }
    if (cw(0x19E1) != 0) {
        const uint16_t bx = cw(0x19E3);
        if (bx > 0xFF) {
            SW(0x19E1, 0);
        } else {
            uint16_t si = cw(0x19DF);
            dacIndex(0);
            for (int k = 0; k < 0x300; k++, si++)
                dacData((uint8_t)(0x3F - (((0x3F - B(CS, si)) & 0xFF) * (bx & 0xFF) >> 8)));
            SW(0x19E3, (uint16_t)(cw(0x19E3) + 2));
        }
    }
    if (cw(0x19E5) != 0) {
        const uint16_t fs = cw(0x17FD);
        uint16_t ax = W(fs, 2);
        if (ax < 6) ax = 0, SW(0x19E5, 0);
        else ax = (uint16_t)(ax - 6);
        SW(fs, 2, ax);
    }
    if (cw(0x8C21) != 0) {
        uint16_t ax = (uint16_t)(cw(0x8C1F) + cw(0x8C21));
        if ((int16_t)ax < 0) ax = 0, SW(0x8C21, 0);
        if (ax >= 0x100) ax = 0x100, SW(0x8C21, 0);
        SW(0x8C1F, ax);
    }
    SW(0x19CD, (uint16_t)(cw(0x19CD) + 1));
    if (cw(0x19CF) == 0xFFFF) {
        SW(0x19D1, 0);
        SW(0x19CF, 1);
    } else {
        SW(0x19CF, (uint16_t)(cw(0x19CF) + 1));
    }
}

// 844Eh, 8515h, 879Eh, 8B7Bh: waits until the timer's counter reaches N.
bool Intro::waitCounter(uint16_t n) {
    for (;;) {
        if (host_.escape()) return false;
        if (cw(0x19CD) >= n) return true;
        host_.frame();
    }
}

// 8BDAh: the end: the timer back (its measurement waits two retraces), text
// mode.
void Intro::quit() {
    timerOn_ = false;
    waitRetrace();
    waitRetrace();
    textMode_ = true;
}

}  // namespace cyb
