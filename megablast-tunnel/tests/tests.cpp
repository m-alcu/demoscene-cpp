// Smoke test: the texture loads, frames are deterministic, the far end is dark and the near
// walls show both light and dark checks.
#include <cstdio>
#include <string>

#include "tunnel.h"

int main(int argc, char** argv) {
    const std::string data = argc > 1 ? argv[1] : "data";
    mt::Tunnel a, b;
    if (!a.init(data) || !b.init(data)) return 1;
    int bad = 0;
    for (double t : {0.0, 4.2, 17.3}) {
        a.render(t);
        b.render(t);
        int black = 0, bright = 0, dark = 0;
        for (int k = 0; k < mt::W * mt::H; k++) {
            if (a.frame()[k] != b.frame()[k]) { bad++; break; }
            const uint32_t c = a.palette()[a.frame()[k]];
            const int l = ((c >> 16 & 255) + (c >> 8 & 255) + (c & 255)) / 3;
            if (l < 8) black++;
            if (l > 180) bright++;
            else if (l < 60) dark++;
        }
        std::printf("t=%.1f: black %d, bright %d, dark %d\n", t, black, bright, dark);
        if (black < 100 || bright < 3000 || dark < 3000) bad++;
    }
    std::printf(bad ? "FAILED\n" : "ok\n");
    return bad ? 1 : 0;
}
