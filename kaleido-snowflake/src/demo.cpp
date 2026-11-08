#include "demo.h"
#include <SDL3/SDL.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>

namespace ks {

namespace {

// Timeline, in music positions
constexpr uint32_t kStartPos = 9123;   // position before the first frame
constexpr uint32_t kLeavePos = 9744;   // the light starts leaving

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

// Colours (12-bit 0xRGB) per pixel value 4, 6, ..., 14
constexpr uint16_t kFlakeColours[6] = {0x112, 0x335, 0x557, 0x77a, 0x99d, 0xeef};
constexpr uint16_t kStarColours[6] = {0x001, 0x444, 0x666, 0x888, 0xaaa, 0xccc};
constexpr uint16_t kBlank = 0x001;     // before the part's first vertical blank

constexpr uint32_t argb(uint32_t c) {
    return 0xff000000u | ((c >> 8 & 15) * 17) << 16 | ((c >> 4 & 15) * 17) << 8 | (c & 15) * 17;
}

uint32_t flake_argb[16], star_argb[16];

}  // namespace

bool Demo::init(const std::string& data) {
    const std::string np = data + "/normals.png", sp = data + "/stars.bin";
    SDL_Surface* s = SDL_LoadPNG(np.c_str());
    if (!s) { std::fprintf(stderr, "kaleido-snowflake: %s: %s\n", np.c_str(), SDL_GetError()); return false; }
    SDL_Surface* rgb = SDL_ConvertSurface(s, SDL_PIXELFORMAT_RGB24);
    SDL_DestroySurface(s);
    if (!rgb || rgb->w != kFlakeW || rgb->h != kFlakeH) {
        std::fprintf(stderr, "kaleido-snowflake: %s is not a %dx%d image\n", np.c_str(), kFlakeW, kFlakeH);
        if (rgb) SDL_DestroySurface(rgb);
        return false;
    }
    normals.resize(kFlakeW * kFlakeH);
    for (int y = 0; y < kFlakeH; y++) {
        const uint8_t* row = (const uint8_t*)rgb->pixels + y * rgb->pitch;
        for (int x = 0; x < kFlakeW; x++) normals[y * kFlakeW + x] = (uint8_t)((row[3 * x] / 17) << 4 | row[3 * x + 1] / 17);
    }
    SDL_DestroySurface(rgb);

    size_t size = 0;
    void* f = SDL_LoadFile(sp.c_str(), &size);
    if (!f || size % 4) { std::fprintf(stderr, "kaleido-snowflake: cannot read %s\n", sp.c_str()); SDL_free(f); return false; }
    star_list.resize(size / 4);
    const uint8_t* b = (const uint8_t*)f;
    for (size_t i = 0; i < star_list.size(); i++)
        star_list[i] = b[4 * i] | b[4 * i + 1] << 8 | b[4 * i + 2] << 16 | (uint32_t)b[4 * i + 3] << 24;
    SDL_free(f);

    make_sine();
    for (int i = 0; i < 6; i++) {
        flake_argb[4 + 2 * i] = argb(kFlakeColours[i]);
        star_argb[4 + 2 * i] = argb(kStarColours[i]);
    }
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
    case Prep:   // the part starts: the light far to the left, an empty star field
        light_x = -0xfc;
        light_y = 0;
        light();
        std::memset(stars, 4, sizeof stars);
        next_star = -64;
        phase = Arm;
        return;
    case Arm:    // the handler goes in a frame later
        blank_on = true;
        phase = Run;
        return;
    case Run:
        light();
        if (pos >= kLeavePos) phase = Fade;
        return;
    case Fade:
        light();
        if (fade > 63) phase = End;
        return;
    case End:
        return;
    }
}

// The main loop: lights the snowflake. Each texel of the normal map holds a normal (high nibble
// along the rows, low nibble along the columns, both centred on 8). The brightness falls off
// with the squared distance between the normal and the direction to the light, which is the
// light's position minus the texel's: a point light in the plane of the snowflake.
void Demo::light() {
    for (int r = 0; r < kFlakeH; r++) {
        const int32_t dy = light_y - 0x60 + r;
        for (int c = 0; c < kFlakeW; c++) {
            const uint8_t n = normals[r * kFlakeW + c];
            if (!n) { flake[r][c] = 0; continue; }
            const int32_t dx = light_x - 0x80 + c;
            const int32_t u = (n & 0xf0) - 0x80 - dy, v = ((n & 15) << 4) - 0x80 - dx;
            int32_t i = 0xf0 - std::min((u * u + v * v) >> 6, 0xd0);
            if (i < 0x40) i = 0;
            flake[r][c] = (uint8_t)((i >> 5) * 2);   // 0, or 4..14 in steps of 2
        }
    }
}

// The vertical blank: moves the light and the snowflake, scrolls the star field and adds a star.
void Demo::vblank() {
    if (phase == Fade || phase == End) fade++;
    count++;
    flake_x = S(11 * count) >> 11;
    // The light comes in from far left over the first 64 frames and leaves to the right over
    // the last 64.
    const int32_t in = 63 - (int32_t)std::min(count, 63u), out = (int32_t)std::min(fade, 63u);
    const int32_t slide = (((uint32_t)(out * out) >> 6) << 2) - (((uint32_t)(in * in) >> 6) << 2);
    light_y = S(17 * count) >> 9;
    light_x = (S(22 * count - 1024) >> 9) + slide;

    stars_x = pos * 0x1ed;
    stars_y = (pos * 0x129) % kStarsH;
    add_star();
}

// One star per frame, after a wait of 64 frames, from a list of 1760.
void Demo::add_star() {
    if (next_star >= (int32_t)star_list.size()) return;
    const int32_t i = next_star++;
    if (i < 0) return;
    const uint32_t w = star_list[i];
    const uint32_t o = (w >> 1) & 0x1fffc;               // byte offset of a 4-byte word
    stars[o >> 8][2 * (o & 0xfc) + (w & 7)] = (uint8_t)((w >> 17) & 14);
}

void Demo::draw() {
    if (!blank_on || count == 0) { std::fill(canvas.begin(), canvas.end(), argb(kBlank)); return; }
    for (int line = 0; line < H; line++) {
        const uint8_t* f = flake[line >> 2];
        const uint8_t* s = stars[(stars_y + (line >> 1)) % kStarsH];
        uint32_t* out = &canvas[line * W];
        for (int x = 0; x < W; x++) {
            const uint8_t fp = f[((uint32_t)(x + flake_x) & 511) >> 1];
            out[x] = fp ? flake_argb[fp] : star_argb[s[(x + stars_x) & 511]];
        }
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

}  // namespace ks
