#include "demo.h"
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>

namespace kt {

namespace {

// Timeline, in music positions
constexpr uint32_t kStartPos = 14575;  // position before the first frame
constexpr uint32_t kFadePos = 15428;   // the fade to white starts

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

// Width profile of the balloon: for each step down its outline, the row of balloon.png
// (scaled by the zoom) that has the right width. 0-269 the envelope, 270-293 the ropes,
// 294-325 the basket.
const uint8_t kProfile[326] = {
    32, 44, 49, 52, 55, 58, 60, 63, 65, 67, 68, 70, 72, 73, 75, 76, 78, 79, 80, 81,
    82, 84, 85, 86, 87, 88, 89, 90, 91, 92, 92, 93, 94, 95, 96, 97, 97, 98, 99, 100,
    100, 101, 102, 102, 103, 104, 104, 105, 105, 106, 107, 107, 108, 108, 109, 109, 110, 110, 111, 111,
    112, 112, 113, 113, 113, 114, 114, 115, 115, 115, 116, 116, 117, 117, 117, 118, 118, 118, 119, 119,
    119, 119, 120, 120, 120, 121, 121, 121, 121, 122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 124,
    124, 124, 124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126,
    126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126,
    126, 125, 125, 125, 125, 125, 125, 125, 125, 124, 124, 124, 124, 124, 123, 123, 123, 123, 122, 122,
    122, 122, 121, 121, 121, 120, 120, 120, 119, 119, 118, 118, 118, 117, 117, 116, 116, 115, 115, 114,
    114, 113, 113, 112, 112, 111, 111, 110, 109, 109, 108, 108, 107, 106, 106, 105, 104, 104, 103, 102,
    101, 101, 100, 99, 98, 98, 97, 96, 95, 94, 93, 93, 92, 91, 90, 89, 88, 87, 86, 85,
    84, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 71, 70, 69, 68, 67, 66, 65,
    64, 63, 62, 61, 59, 58, 57, 56, 55, 54, 53, 52, 50, 49, 48, 47, 46, 45, 43, 42,
    41, 40, 39, 38, 36, 35, 34, 33, 0, 0, 64, 64, 64, 63, 63, 63, 62, 62, 62, 61,
    61, 61, 60, 60, 60, 59, 59, 59, 58, 58, 58, 57, 57, 57, 56, 56, 55, 55, 54, 54,
    54, 53, 53, 52, 52, 52, 51, 51, 50, 50, 50, 49, 49, 48, 48, 48, 47, 47, 46, 46,
    46, 45, 45, 44, 44, 44,
};

// Colours: 12-bit 0xRGB.
constexpr uint16_t kTunnel[3] = {0x112, 0x33b, 0x44c};                       // pixel values 4, 8, 12
constexpr uint16_t kBalloon[6] = {0xd33, 0xf55, 0xddd, 0xd62, 0x420, 0x200};  // 4, 6, ..., 14

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
    if (!load_image(data + "/tunnel.png", 768, 2304, tunnel) || !load_image(data + "/balloon.png", 1024, 192, balloon))
        return false;
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

// Colours (fade in from black over 16 frames, fade out to white over 32) and the balloon.
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
    for (int i = 0; i < 6; i++) screen.balloon[4 + 2 * i] = mix(from, kBalloon[i], t);

    // The balloon bobs on two sines and, from frame 100, shrinks towards the vanishing point
    // of the tunnel, which the current view puts at (120 - x, 282 - y).
    int32_t y = (S(15 * count) >> 9) + 164;
    int32_t x = S(13 * count - 512) >> 9;
    const int32_t late = std::max((int32_t)count - 100, 0);
    const int32_t scale = std::max(256 - (int32_t)((uint32_t)(3 * late * late) >> 13), 1);
    const View& cur = views[front];
    y = (y * scale + (282 - cur.y) * (256 - scale)) >> 8;
    x = ((x * scale + (120 - cur.x) * (256 - scale)) >> 8) + 4;
    place_balloon(y, scale, x);
}

// Builds the balloon's copper list: each screen row (two lines) picks a row of balloon.png. The
// image holds the outline at every width, so the profile table gives the balloon's shape and
// stepping through it faster or slower scales it.
void Demo::place_balloon(int32_t y, int32_t scale, int32_t x) {
    const int32_t col = -x & 1023;
    for (int r = 0; r < kRows; r++) { screen.row[r] = 0; screen.col[r] = (int16_t)(col & 7); }
    int32_t r = y - (scale >> 2);
    const uint32_t step = 0x20000u / (uint32_t)scale;
    auto put = [&](int row) {
        if (r >= 0 && r < kRows) { screen.row[r] = (int16_t)row; screen.col[r] = (int16_t)col; }
        r++;
    };
    uint32_t a = 0;
    for (; a < 0x10e00; a += step) put((kProfile[a >> 8] * scale) >> 9);          // envelope
    for (a = 0x10e00; a < 0x12600; a += step) put(((kProfile[a >> 8] * scale) >> 10) + 144);  // ropes
    for (a = 0x12600; a < 0x14600; a += step) put(((kProfile[a >> 8] * scale) >> 10) + 96);   // basket
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
        const int br = line >> 1;
        const uint8_t* b = &balloon.px[screen.row[br] * balloon.w];
        const int bc = screen.col[br];
        uint32_t* out = &canvas[line * W];
        for (int x = 0; x < W; x++) {
            const uint8_t bp = b[(bc + x) & 1023], tp = t[x];
            out[x] = argb(bp ? screen.balloon[bp] : tp ? screen.tunnel[tp] : screen.back);
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
