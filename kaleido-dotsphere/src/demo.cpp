#include "demo.h"
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

namespace kd {

namespace {

// Timeline, in music positions
constexpr uint32_t kStartPos = 12682;   // position before the first frame
constexpr uint32_t kBouncePos = 12782;  // the sphere has landed; from here it bounces to the beat
constexpr uint32_t kLeavePos = 13468;   // the dots start going
constexpr int32_t kMaxDots = 1373;
// Drawing more dots than this takes the main loop past the start of the next frame, so its
// picture is shown a frame later (measured on the harness at the original CPU speed: 64 dots
// make it, 80 do not).
constexpr int32_t kDotsInTime = 64;

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

// The six dot sprites, 9x9, from far (0) to near (5); the digit is the pixel value / 2.
const char* const kSprites[6][9] = {
    {".........", ".........", ".........", "....2....", "...222...", "....2....", ".........", ".........", "........."},
    {".........", ".........", "....3....", "...333...", "..33333..", "...333...", "....3....", ".........", "........."},
    {".........", ".........", "...444...", "..44444..", "..44.44..", "..44444..", "...444...", ".........", "........."},
    {".........", "...555...", "..55555..", ".55...55.", ".55...55.", ".55...55.", "..55555..", "...555...", "........."},
    {"...666...", "..66666..", ".66...66.", "66.....66", "66.....66", "66.....66", ".66...66.", "..66666..", "...666..."},
    {"..77777..", ".7777777.", "777...777", "77.....77", "77.....77", "77.....77", "777...777", ".7777777.", "..77777.."},
};
uint8_t sprite[6][9][9];

// Colours (12-bit 0xRGB) per pixel value 4, 6, ..., 14, and the background
constexpr uint16_t kDotColours[6] = {0x024, 0x125, 0x138, 0x24a, 0x26d, 0x59f};
constexpr uint16_t kBack = 0x012;

constexpr uint32_t argb(uint32_t c) {
    return 0xff000000u | ((c >> 8 & 15) * 17) << 16 | ((c >> 4 & 15) * 17) << 8 | (c & 15) * 17;
}

uint32_t colour[16];

bool load(const std::string& path, std::vector<uint8_t>& out) {
    size_t size = 0;
    void* f = SDL_LoadFile(path.c_str(), &size);
    if (!f) { std::fprintf(stderr, "kaleido-dotsphere: %s: %s\n", path.c_str(), SDL_GetError()); return false; }
    out.assign((const uint8_t*)f, (const uint8_t*)f + size);
    SDL_free(f);
    return true;
}

int16_t le16(const uint8_t* p) { return (int16_t)(p[0] | p[1] << 8); }

}  // namespace

bool Demo::init(const std::string& data) {
    std::vector<uint8_t> p, s;
    if (!load(data + "/points.bin", p) || !load(data + "/squash.bin", s)) return false;
    if (p.size() < 6 * (size_t)kMaxDots || s.size() != 2 * 1025) {
        std::fprintf(stderr, "kaleido-dotsphere: bad data files in %s\n", data.c_str());
        return false;
    }
    for (size_t i = 0; i + 6 <= p.size(); i += 6) points.push_back({le16(&p[i]), le16(&p[i + 2]), le16(&p[i + 4])});
    for (size_t i = 0; i < s.size(); i += 2) squash.push_back(le16(&s[i]));

    make_sine();
    for (int k = 0; k < 6; k++)
        for (int r = 0; r < 9; r++)
            for (int c = 0; c < 9; c++) {
                const char ch = kSprites[k][r][c];
                sprite[k][r][c] = ch == '.' ? 0 : (uint8_t)(2 * (ch - '0'));
            }
    colour[0] = argb(kBack);
    for (int i = 0; i < 6; i++) colour[4 + 2 * i] = argb(kDotColours[i]);
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
    if (pending >= 0) { shown = pending; pending = -1; }   // the late picture is ready by now
    pos++;
    if (blank_on) vblank();
    switch (phase) {
    case Prep:   // the part starts with no dots
        dots = shift_x = shift_y = 0;
        main_loop();
        phase = Arm;
        return;
    case Arm:    // the handler goes in a frame later
        blank_on = true;
        phase = Run;
        return;
    case Run:
        main_loop();
        if (pos >= kLeavePos) phase = Fade;
        return;
    case Fade:
        main_loop();
        if (fade > 60) phase = End;
        return;
    case End:
        return;
    }
}

// The vertical blank: how many dots, the sway and the bounce.
void Demo::vblank() {
    if (phase == Fade || phase == End) fade++;
    count++;
    // 16 more dots per frame up to all 1373, then they drop away quadratically
    dots = std::max(std::min((int32_t)(16 * count), kMaxDots) - (int32_t)((fade * fade) >> 1), 0);
    shift_x = S(25 * count) >> 9;
    const uint32_t p = pos + 3;
    if (p < kBouncePos) {
        // landing: eases from 39 down to 0 over the last 128 positions before kBouncePos
        const uint32_t m = std::min(kBouncePos - p, 128u);
        shift_y = ((S(16 * m + 1024) * -20) >> 15) + 20;
    } else {
        // bouncing: a parabola per beat (28 frames), 0 at mid-beat, 107 at the beat
        const int32_t b = (int32_t)(p % 28) - 14;
        shift_y = (int32_t)((uint32_t)(b * b * 0x230) >> 10);
    }
}

// Draws one dot sprite with a "max" blend: a pixel only gets brighter. Columns are not clipped,
// so a dot past the right edge carries on at the left of the next row, as in the original. (In
// this scene no dot reaches the left edge, where the original would write outside its buffer.)
void Demo::plot(uint8_t* b, int32_t col, int32_t row, int size) {
    for (int r = 0; r < 9; r++) {
        uint8_t* p = b + (row + r) * 256 + ((uint32_t)col >> 1);
        int odd = col & 1;
        for (int c = 0; c < 9; c++) {
            const uint8_t v = sprite[size][r][c];
            if (!odd) {
                if ((*p & 15) < v) *p = (uint8_t)((*p & 0xf0) | v);
            } else {
                if ((*p >> 4) < v) *p = (uint8_t)((*p & 15) | v << 4);
                p++;
            }
            odd ^= 1;
        }
    }
}

// The main loop: clears the back buffer, turns every dot, projects it with perspective and
// draws it, then makes that buffer the shown one.
void Demo::main_loop() {
    const int back = shown ^ 1;
    uint8_t* b = buf[back].data();
    std::fill(buf[back].begin(), buf[back].end(), 0);
    const int32_t s1 = S(7 * pos), c1 = S(7 * pos + 1024), s2 = S(9 * pos), c2 = S(9 * pos + 1024);
    for (int i = 0; i < dots; i++) {
        const Point& pt = points[i];
        // about the vertical axis by 7p, then about the horizontal one by 9p
        const int32_t x1 = (pt.x * c1 + pt.z * s1) >> 15, z1 = (pt.z * c1 - pt.x * s1) >> 15;
        const int32_t y2 = (pt.y * c2 + z1 * s2) >> 15, z2 = (z1 * c2 - pt.y * s2) >> 15;
        const int32_t zf = (z2 >> 8) + 256;            // 128 (near) .. 383 (far)
        const int32_t sx = x1 / zf, sy = y2 / zf;      // truncating division
        const int size = 2 - ((3 * z2) >> 15);         // 0 (far) .. 5 (near)
        const int32_t col = sx + shift_x + 252;
        const int32_t row = std::clamp(squash[sy + shift_y + 512] + 152, 0, 375);
        plot(b, col, row, size);
    }
    if (dots > kDotsInTime) pending = back;   // finished during the next frame
    else shown = back;
}

void Demo::draw() {
    if (count == 0) { std::fill(canvas.begin(), canvas.end(), colour[0]); return; }
    const uint8_t* b = buf[shown].data();
    for (int line = 0; line < H; line++) {
        const uint8_t* row = b + (line >> 1) * 256;
        uint32_t* out = &canvas[line * W];
        for (int x = 0; x < W; x++) out[x] = colour[(row[x >> 1] >> (4 * (x & 1))) & 15];
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

}  // namespace kd
