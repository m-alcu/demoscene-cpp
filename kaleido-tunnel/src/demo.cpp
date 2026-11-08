#include "demo.h"
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <utility>

namespace kt {

namespace {

// Timeline, in music positions
constexpr uint32_t kStartPos = 14575;  // position before the first frame
constexpr uint32_t kFadePos = 15428;   // the fade to white starts
constexpr int32_t kSolidSize = 56;     // half the cube's edge at full size, in pixels

// 4096-entry sine table, period 4096 (1024 = a quarter turn), amplitude 32767.
int16_t sine_table[4096];

void make_sine() {
    // floor(32767 sin) over the first quarter, mirrored: exactly symmetric, and no value is
    // close enough to an integer for a different libm to round it the other way
    for (int i = 0; i < 4096; i++) {
        const int j = i & 2047, k = j <= 1024 ? j : 2048 - j;
        const int v = (int)std::floor(32767.0 * std::sin(2.0 * M_PI * k / 4096.0));
        sine_table[i] = (int16_t)(i < 2048 ? v : -v);
    }
}

int32_t S(uint32_t i) { return sine_table[i & 4095]; }

// Colours: 12-bit 0xRGB.
constexpr uint16_t kTunnel[3] = {0x112, 0x33b, 0x44c};                       // pixel values 4, 8, 12
// The solid's colours for pixel values 4, 6, 12 and 14: one set on even rows, a darker one on odd
// rows.
constexpr int kSolidValues[4] = {4, 6, 12, 14};
constexpr uint16_t kSolid[2][4] = {{0x324, 0x658, 0xccc, 0xfff}, {0x213, 0x547, 0xaaa, 0xddd}};

// The solid: a tetrakis hexahedron, i.e. a cube with a low pyramid on each face. Vertices 0-7 are
// the cube's corners (±1, ±1, ±1)·a, 8-13 the pyramid tips on the axes at ±b, b = a·442/256 ≈ a√3,
// so all 14 lie on one sphere.
struct Face { uint8_t a, b, c, value; };
constexpr Face kFaces[24] = {
    {0, 12, 2, 4}, {2, 12, 3, 6}, {3, 12, 1, 4}, {1, 12, 0, 6}, {1, 9, 3, 6}, {3, 9, 7, 4},
    {7, 9, 5, 6}, {5, 9, 1, 4}, {5, 13, 7, 4}, {7, 13, 6, 6}, {6, 13, 4, 4}, {4, 13, 5, 6},
    {4, 8, 6, 6}, {6, 8, 2, 4}, {2, 8, 0, 6}, {0, 8, 4, 4}, {0, 10, 1, 4}, {1, 10, 5, 6},
    {5, 10, 4, 4}, {4, 10, 0, 6}, {3, 11, 2, 4}, {2, 11, 6, 6}, {6, 11, 7, 4}, {7, 11, 3, 6},
};

// Per channel a + (b - a)·t/256, rounded down
uint16_t mix(uint32_t a, uint32_t b, int32_t t) {
    uint32_t r = 0;
    for (int sh = 0; sh <= 8; sh += 4) {
        const int32_t ca = (int32_t)(a >> sh & 15), cb = (int32_t)(b >> sh & 15);
        r |= (uint32_t)(ca + (((cb - ca) * t) >> 8)) << sh;
    }
    return (uint16_t)r;
}

constexpr uint32_t argb(uint32_t c) {
    return 0xff000000u | ((c >> 8 & 15) * 17) << 16 | ((c >> 4 & 15) * 17) << 8 | (c & 15) * 17;
}

// An indexed PNG of the given size; the pixel index is the 4-bit pixel value.
bool load_image(const std::string& path, int w, int h, Image& img) {
    SDL_Surface* s = SDL_LoadPNG(path.c_str());
    if (!s) { std::fprintf(stderr, "kaleido-tunnel: %s: %s\n", path.c_str(), SDL_GetError()); return false; }
    const bool ok = s->format == SDL_PIXELFORMAT_INDEX8 && s->w == w && s->h == h;
    if (ok) {
        img.w = w; img.h = h;
        img.px.resize(w * h);
        for (int y = 0; y < h; y++) {
            const uint8_t* row = (const uint8_t*)s->pixels + y * s->pitch;
            for (int x = 0; x < w; x++) img.px[y * w + x] = row[x] & 15;
        }
    } else {
        std::fprintf(stderr, "kaleido-tunnel: %s is not a %dx%d indexed image\n", path.c_str(), w, h);
    }
    SDL_DestroySurface(s);
    return ok;
}

}  // namespace

bool Demo::init(const std::string& data) {
    if (!load_image(data + "/tunnel.png", 768, 2304, tunnel)) return false;
    make_sine();
    pos = kStartPos;
    return true;
}

void Demo::step() {
    draw();
    if (phase == End) { done = true; return; }
    tick();
    frame_++;
}

// One frame of the original: the vertical-blank interrupt (music position, then the part's
// handler), then one turn of the part's main loop.
void Demo::tick() {
    pos++;
    if (blank_on) vblank();
    switch (phase) {
    case Prep:   // the part starts: one view is made at once, the handler goes in a frame later
        front = 0;
        main_loop();
        phase = Arm;
        return;
    case Arm:
        blank_on = true;
        phase = Run;
        return;
    case Run:
        main_loop();
        if (pos >= kFadePos) phase = Fade;
        return;
    case Fade:
        main_loop();
        if (fade > 32) phase = End;
        return;
    case End:
        return;
    }
}

// Fills the back view and makes it the front one. In the original this streams 384 rows of
// the current tunnel image from flash, through a PIO state machine that widens the 2-bit pixels
// to 4 bits, into a 528x384 buffer.
void Demo::main_loop() {
    View& v = views[front ^ 1];
    v.x = 120 + ((S(19 * pos - 1024) * 120) >> 15);
    v.y = 95 + ((S(15 * pos) * 95) >> 15);
    v.image = pos & 7;
    front ^= 1;
}

// Colours (fade in from black over 16 frames, fade out to white over 32) and the solid.
void Demo::vblank() {
    count++;
    if (phase == Fade || phase == End) fade++;
    const bool out = fade != 0;
    const uint32_t from = out ? 0xfff : 0;
    const int32_t t = out ? 256 - (int32_t)(std::min(fade, 32u) << 3) : (int32_t)(std::min(count, 16u) << 4);

    screen.on = true;
    screen.view = views[front];
    screen.back = mix(from, 0, t);
    for (int i = 0; i < 3; i++) screen.tunnel[4 + 4 * i] = mix(from, kTunnel[i], t);
    for (int r = 0; r < 2; r++)
        for (int i = 0; i < 4; i++) screen.solid[r][kSolidValues[i]] = mix(from, kSolid[r][i], t);

    // The solid bobs on two sines and, from frame 100, shrinks towards the far end of the
    // tunnel, which the current view puts at column 384 - x, row 286 - y.
    int32_t y = (S(15 * count) >> 9) + 164;
    int32_t x = S(13 * count - 512) >> 9;
    const int32_t late = std::max((int32_t)count - 100, 0);
    const int32_t scale = std::max(256 - (int32_t)((uint32_t)(3 * late * late) >> 13), 1);
    const View& cur = views[front];
    y = (y * scale + (282 - cur.y) * (256 - scale)) >> 8;
    x = ((x * scale + (120 - cur.x) * (256 - scale)) >> 8) + 4;
    draw_solid(x + 256, y + (scale >> 4), (kSolidSize * scale) >> 8);
}

// ---- the solid ----

// XORs one edge into the solid's buffer: in each column it crosses, its value goes into the one
// pixel where it passes (the row clamped to 0..383, so an edge above the screen flips the whole
// column). 16-bit fixed point; columns x0..x1-1, at most up to 510.
void Demo::edge(int32_t x0, int32_t y0, int32_t x1, int32_t y1, uint8_t value) {
    if (x0 >= x1) { std::swap(x0, x1); std::swap(y0, y1); }
    if (x0 == x1) return;
    const int32_t slope = (int32_t)((uint32_t)(y1 - y0) << 16) / (x1 - x0);
    int32_t y = (int32_t)((uint32_t)y0 << 16);
    x1 = std::min(x1, W - 1);
    if (x0 < 0) { y -= (int32_t)((uint32_t)x0 * (uint32_t)slope); x0 = 0; }
    for (int32_t x = x0; x < x1; x++, y += slope)
        screen.pix[std::clamp(y, 0, (kRows - 1) << 16) >> 16][x] ^= value;
}

// Draws the solid centred on column x, row y (rows of two lines). It is turned about the
// vertical axis, then about the horizontal one, and projected straight onto the screen.
//
// Every face is drawn as three XORed edges, and each column is then XOR-accumulated downwards, so
// a pixel ends up with the XOR of all the faces over it. The faces turned towards the viewer use
// their own value (4 or 6); of those turned away, only the ones with value 4 are drawn, with 8.
// A pixel of the solid is therefore 4 or 6 from the face in front, plus 8 when a "4" face is
// behind it: 4 shades, and the back faces show through as a second pattern.
void Demo::draw_solid(int32_t cx, int32_t cy, int32_t a) {
    std::fill(&screen.pix[0][0], &screen.pix[0][0] + sizeof screen.pix, 0);
    const int32_t b = (a * 442) >> 8;
    const int32_t vert[14][3] = {
        {-a, -a, -a}, {a, -a, -a}, {-a, a, -a}, {a, a, -a}, {-a, -a, a}, {a, -a, a}, {-a, a, a},
        {a, a, a}, {-b, 0, 0}, {b, 0, 0}, {0, -b, 0}, {0, b, 0}, {0, 0, -b}, {0, 0, b},
    };
    const int32_t s1 = S(11 * pos), c1 = S(11 * pos + 1024), s2 = S(9 * pos), c2 = S(9 * pos + 1024);
    int32_t px[14], py[14];
    for (int i = 0; i < 14; i++) {
        const int32_t x = vert[i][0], y = vert[i][1], z = vert[i][2];
        const int32_t x1 = (x * c1 + z * s1) >> 15, z1 = (z * c1 - x * s1) >> 15;
        px[i] = x1 + cx;
        py[i] = ((y * c2 + z1 * s2) >> 15) + cy;
    }
    for (const Face& f : kFaces) {
        const int32_t cross = (px[f.a] - px[f.b]) * (py[f.a] - py[f.c]) - (py[f.a] - py[f.b]) * (px[f.a] - px[f.c]);
        uint8_t v = f.value;
        if (cross >= 0) {   // facing away
            v <<= 1;
            if (v != 8) continue;
        }
        edge(px[f.a], py[f.a], px[f.b], py[f.b], v);
        edge(px[f.b], py[f.b], px[f.c], py[f.c], v);
        edge(px[f.a], py[f.a], px[f.c], py[f.c], v);
    }
    for (int x = 0; x < W; x++) {
        uint8_t v = 0;
        for (int r = 0; r < kRows; r++) screen.pix[r][x] = v ^= screen.pix[r][x];
    }
}

// ---- drawing ----

void Demo::draw() {
    if (!screen.on) { std::fill(canvas.begin(), canvas.end(), argb(0)); return; }
    const View& v = screen.view;
    const uint8_t* img = &tunnel.px[(size_t)v.image * 288 * tunnel.w];
    // The tunnel image is the top half. Row y + line/2 goes down to row 286 at line
    // 2·(286 - y), then the rows go back up: the bottom half is the top one mirrored.
    const int turn = (286 - v.y) * 2;
    int row = v.y, dir = 1;
    for (int line = 0; line < H; line++) {
        if (line == turn) dir = -1;
        const uint8_t* t = img + row * tunnel.w + v.x;
        const uint8_t* o = screen.pix[line >> 1];
        const uint16_t* oc = screen.solid[(line >> 1) & 1];
        uint32_t* out = &canvas[line * W];
        for (int x = 0; x < W; x++) {
            const uint8_t op = o[x], tp = t[x];
            out[x] = argb(op ? oc[op] : tp ? screen.tunnel[tp] : screen.back);
        }
        if (line & 1) row += dir;
    }
}

void Demo::to_rgb24(uint8_t* out) const {
    for (uint32_t c : canvas) {
        *out++ = c >> 16;
        *out++ = c >> 8;
        *out++ = c;
    }
}

uint32_t crc32(const uint8_t* p, size_t n) {
    static uint32_t table[256];
    static bool init = false;
    if (!init) {
        for (uint32_t i = 0; i < 256; i++) {
            uint32_t k = i;
            for (int j = 0; j < 8; j++) k = (k >> 1) ^ (0xEDB88320u & (0u - (k & 1)));
            table[i] = k;
        }
        init = true;
    }
    uint32_t c = ~0u;
    while (n--) c = (c >> 8) ^ table[(c ^ *p++) & 0xFF];
    return ~c;
}

}  // namespace kt
