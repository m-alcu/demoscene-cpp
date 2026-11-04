#include "soundtrack.h"

#include <algorithm>
#include <cmath>

namespace cyb {

Soundtrack::Soundtrack(const std::vector<uint8_t>& image) : music_(image, gus_) {
    music_.init();
    music_.load();
    music_.start();
}

void Soundtrack::render(double seconds, std::vector<float>& out) {
    const int64_t end = (int64_t)(seconds * kRate);
    const size_t first = out.size();
    while (pos_ < end) {
        // the next interrupt, as a frame number (rounded up)
        const int64_t at = (int64_t)std::ceil(irq_ * Music::kIrqPeriod * kRate);
        const int64_t upto = std::min(end, at);
        if (upto > pos_) {
            const size_t o = out.size();
            out.resize(o + 2 * (size_t)(upto - pos_), 0.0f);
            gus_.render(&out[o], (int)(upto - pos_));
            pos_ = upto;
        }
        if (pos_ >= at) {
            music_.irq();
            irq_++;
        }
    }
    // the GF1's sum, scaled: 16 voices at the song's loudest stay in range
    for (size_t i = first; i < out.size(); i++) out[i] = std::clamp(out[i] * 0.9f, -1.0f, 1.0f);
}

}  // namespace cyb
