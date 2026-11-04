#include "machine.h"

#include <algorithm>
#include <cmath>

namespace drift {

namespace {
struct Patch {
    uint32_t off;
    std::vector<uint8_t> bytes;
};
const Patch kPmode[] = {
#include "pmode.inc"
};
}  // namespace

Machine::Machine(const std::vector<uint8_t>& image) : mem(kMemSize, 0) {
    // the image from its offset EB0h (where PMODE's flat segment starts),
    // then what PMODE has set by the time it calls the program
    if (image.size() > 0xEB0) std::memcpy(mem.data(), image.data() + 0xEB0, image.size() - 0xEB0);
    for (const Patch& p : kPmode) std::memcpy(&mem[p.off], p.bytes.data(), p.bytes.size());
}

Machine::~Machine() { stop(); }

// --- ports -------------------------------------------------------------------

void Machine::out8(uint16_t p, uint8_t v) {
    if (p >= 0x3C0 && p <= 0x3DF) {
        vga.out(p, v);
    } else if (p >= 0x220 && p <= 0x32F) {
        audioTo(t_);
        gus.out8(p, v, t_);
    } else if (p == 0x43) {
        if ((v >> 6) == 0 && (v & 0x30)) {
            pitBytes_.clear();
            pitLoading_ = true;
            const int m = (v >> 1) & 7;
            pitMode_ = m >= 6 ? m - 4 : m;
        }
    } else if (p == 0x40 && pitLoading_) {
        pitBytes_.push_back(v);
        if (pitBytes_.size() == 2) {
            const int div = (pitBytes_[0] | pitBytes_[1] << 8) ? (pitBytes_[0] | pitBytes_[1] << 8) : 65536;
            pitPer_ = div / kPit;
            pitNext_ = t_ + pitPer_;
            pitLoading_ = false;
        }
    }
}

void Machine::out16(uint16_t p, uint16_t v) {
    if (p == 0x324) {
        audioTo(t_);
        gus.out16(p, v, t_);
        return;
    }
    out8(p, (uint8_t)v);
    out8((uint16_t)(p + 1), (uint8_t)(v >> 8));
}

uint8_t Machine::in8(uint16_t p) {
    if (p == 0x3DA) return poll3da();
    if (p >= 0x3C0 && p <= 0x3DF) return vga.in(p);
    if (p >= 0x220 && p <= 0x32F) return gus.in8(p, t_);
    if (p == 0x60) return key;
    return 0xFF;
}

void Machine::audioTo(double t) {
    if (!pcm) return;
    const int64_t end = (int64_t)(t * kRate);
    if (end <= pcmPos_) return;
    if (pcmPos_ == 0) {                         // from the first write on
        pcmPos_ = end;
        return;
    }
    const size_t o = pcm->size();
    pcm->resize(o + 2 * (size_t)(end - pcmPos_), 0.0f);
    gus.render(&(*pcm)[o], (int)(end - pcmPos_));
    pcmPos_ = end;
}

// --- time, program side -------------------------------------------------------

bool Machine::inRetrace() const {
    const double ph = t_ * 70.0 - std::floor(t_ * 70.0);
    return ph < 0.06;
}

uint8_t Machine::poll3da() {
    waited_ = true;
    uint8_t v = inRetrace() ? 0x09 : 0;
    if (v == last3da_) {
        if (++same3da_ >= 3) {
            const double k = std::floor(t_ * 70.0);
            const double target = v ? (k + 0.06) / 70.0 + 1e-9 : (k + 1) / 70.0 + 1e-9;
            const double ev = nextEvent();
            same3da_ = 0;
            if (ev < target) {
                if (ev > t_) wait(ev);
            } else {
                if (target > t_) wait(target);
                v ^= 0x09;
            }
        }
    } else {
        same3da_ = 0;
    }
    last3da_ = v;
    return v;
}

void Machine::waitRetrace() {
    while (!(poll3da() & 8)) {
    }
}

void Machine::waitDisplay() {
    while (poll3da() & 8) {
    }
}

void Machine::present() {
    if (!waited_ && pitNext_ < 1e8) wait(pitNext_);
    waited_ = false;
}

void Machine::waitIrq() { wait(nextEvent()); }

void Machine::sleepUntil(double t) {
    if (t > t_) wait(t);
}

void Machine::deliver11() {
    if (!irq11Pending_ || irq11Masked_) return;
    irq11Pending_ = false;
    if (irq11Vec_ && irq11) irq11();
}

double Machine::nextEvent() const { return std::min(pitNext_, gus.nextIrq()); }

void Machine::wait(double target) {
    std::unique_lock<std::mutex> l(m_);
    target_ = target;
    progTurn_ = false;
    cv_.notify_all();
    cv_.wait(l, [&] { return progTurn_ || quit_; });
    if (quit_) throw Quit{};
}

// --- time, caller side ----------------------------------------------------------

void Machine::setClock(double t) {
    t_ = t;
    target_ = t;
    vstart_ = (long)std::ceil(t * 70.0);
    if (vstart_ / 70.0 < t) vstart_++;
    mid_ = (long)std::floor(t * 70.0 - 0.5) + 1;
    if ((mid_ + 0.5) / 70.0 < t) mid_++;
    pitNext_ = std::ceil(t / pitPer_) * pitPer_;
}

void Machine::start(std::function<void()> program) {
    started_ = true;
    target_ = t_;
    thread_ = std::thread([this, program] {
        {
            std::unique_lock<std::mutex> l(m_);
            cv_.wait(l, [&] { return progTurn_ || quit_; });
            if (quit_) {
                done_ = true;
                return;
            }
        }
        try {
            program();
        } catch (const Quit&) {
        }
        std::lock_guard<std::mutex> g(m_);
        done_ = true;
        progTurn_ = false;
        cv_.notify_all();
    });
}

void Machine::stop() {
    {
        std::lock_guard<std::mutex> g(m_);
        quit_ = true;
        cv_.notify_all();
    }
    if (thread_.joinable()) thread_.join();
}

// The harness's clock is an instruction count at 10^13 a second: a jump to
// time T lands on the next count, (floor(T x 10^13) + 1) / 10^13. Timer
// arithmetic (the GUS timer's next period from its start) depends on being
// just past T, not on it.
static double quantize(double t) { return (double)((int64_t)(t * 1e13) + 1) / 1e13; }

bool Machine::run(double until) {
    for (;;) {
        const double tv = vstart_ / 70.0, tm = (mid_ + 0.5) / 70.0;
        const double tg = gus.nextIrq();
        const double ev = std::min(std::min(pitNext_, tg), std::min(tv, tm));
        if (!done_ && target_ < ev && target_ <= until) {
            if (target_ > t_) t_ = quantize(target_);
            std::unique_lock<std::mutex> l(m_);
            progTurn_ = true;
            cv_.notify_all();
            cv_.wait(l, [&] { return !progTurn_; });
            continue;
        }
        if (ev > until) {
            if (until > t_) t_ = until;
            audioTo(t_);
            return !done_;
        }
        t_ = std::max(t_, quantize(ev));
        if (ev == pitNext_) {
            if (pitMode_ == 0 || pitMode_ == 1) pitNext_ = 1e9;
            while (pitNext_ <= t_) pitNext_ += pitPer_;
            if (irq0) irq0();
        } else if (ev == tg) {
            gus.irqDue(t_);
            irq11Pending_ = true;
            deliver11();
        } else if (ev == tv) {
            shown_ = vga.startAddress();
            vstart_++;
        } else {
            if (frame) frame(mid_, shown_);
            mid_++;
        }
    }
}

}  // namespace drift
