// Tests for the intro's routines. No SDL, no files.
#include <cstdio>
#include <cstring>

#include "desert.h"

static int failures = 0;

static void check(bool ok, const char* what) {
    std::printf("%s %s\n", ok ? "ok  " : "FAIL", what);
    if (!ok) failures++;
}

static bool dacIs(const uint8_t* dac, int i, int r, int g, int b) {
    return dac[i * 3] == r && dac[i * 3 + 1] == g && dac[i * 3 + 2] == b;
}

// FNV-1a over the visible screen.
static uint32_t hash(const uint8_t* p) {
    uint32_t h = 2166136261u;
    for (int i = 0; i < desert::kScreenW * desert::kScreenH; i++) h = (h ^ p[i]) * 16777619u;
    return h;
}

int main() {
    using desert::kScreenW;
    desert::Desert d;
    const uint8_t* dac = d.dac();

    // Entry 0 takes the AL the BIOS returned (20h); entry 1 is -(FFh sar 2) = 1;
    // each B is its R plus 15h; 255 is never written.
    check(dacIs(dac, 0, 0x20, 0x20, 0x35), "palette entry 0 comes from the BIOS's AL");
    check(dacIs(dac, 1, 1, 1, 0x16), "palette entry 1 is -(CL sar 2) with CL = FFh");
    check(dacIs(dac, 129, 0x21, 0x21, 0x36), "palette entry 129 wraps at 6 bits");
    check(dacIs(dac, 255, 0, 0, 0), "palette entry 255 keeps the BIOS black");

    uint8_t before[kScreenW * 200];
    std::memcpy(before, d.screen(), sizeof(before));
    d.retrace();
    check(std::memcmp(d.screen() + kScreenW, before + 2 * kScreenW, 198 * kScreenW) == 0,
          "a retrace scrolls lines 2..199 up to 1..198");

    for (int i = 0; i < 500; i++) d.retrace();
    bool top = true;
    for (int x = 0; x < kScreenW; x++) top &= d.screen()[x] == 0;
    check(top, "line 0 is never written and stays colour 0");

    desert::Desert again;
    for (int i = 0; i < 501; i++) again.retrace();
    check(std::memcmp(d.screen(), again.screen(), kScreenW * 200) == 0,
          "the same start state gives the same desert");

    // Taken from running the bytes of original/DESERT.COM, instruction by
    // instruction, from the same start state (see README).
    std::printf("     screen hash after 501 retraces: %08x\n", hash(d.screen()));
    check(hash(d.screen()) == 0x56ba062bu, "after 501 retraces the screen matches DESERT.COM");

    std::printf(failures ? "\n%d check(s) failed\n" : "\nall checks passed\n", failures);
    return failures ? 1 : 0;
}
