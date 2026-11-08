// Smoke test: the blob is on screen, glows (dark inside, bright rims, black around it), and the
// renderer is deterministic.
#include <cstdio>
#include <vector>

#include "blob.h"

int main() {
    mb::Blob a, b;
    mb::Settings s;
    int bad = 0;
    for (double t : {0.0, 3.7, 12.5}) {
        a.render(t, s);
        b.render(t, s);
        int black = 0, dim = 0, bright = 0;
        for (int k = 0; k < mb::W * mb::H; k++) {
            const int v = a.frame()[k];
            if (v != b.frame()[k]) { bad++; break; }
            if (v == 0) black++;
            else if (v < 160) dim++;
            else if (v > 230) bright++;
        }
        std::printf("t=%.1f: black %d, dim %d, bright %d\n", t, black, dim, bright);
        if (black < 10000 || dim < 5000 || bright < 200) bad++;
    }
    std::printf(bad ? "FAILED\n" : "ok\n");
    return bad ? 1 : 0;
}
