#include "machine.h"

#include <algorithm>
#include <cmath>

namespace lasse {

namespace {
struct Patch {
    uint32_t addr;
    std::vector<uint8_t> bytes;
};
// What PMODE/W's C runtime has set when it calls main (from the harness).
const Patch kRuntime[] = {
#include "runtime.inc"
};

// The harness's clock is an instruction count at 10^13 a second: a jump to
// time T lands on the next count, (floor(T x 10^13) + 1) / 10^13.
double quantize(double t) { return (double)((int64_t)(t * 1e13) + 1) / 1e13; }
}  // namespace

Machine::Machine(const std::vector<uint8_t>& image) : mem(kMemSize, 0) {
    std::memcpy(&mem[kImageBase], image.data(), std::min(image.size(), (size_t)(kMemSize - kImageBase)));
    for (const Patch& p : kRuntime) std::memcpy(&mem[p.addr], p.bytes.data(), p.bytes.size());
    // the harness at time 0 (before main): the BIOS's tick and the first
    // retrace start have gone by
    nextTick_ = 0.0 + 65536 / kPit;
    nextVstart_ = 0.0 + 1 / 70.0;
}

Machine::~Machine() { stop(); }

// --- ports ---------------------------------------------------------------------

void Machine::out8(uint16_t p, uint8_t v) {
    if (p >= 0x3C0 && p <= 0x3DF) {
        vga.out(p, v);
    } else if (p >= 0x220 && p <= 0x32F) {
        audioTo(t_);
        gus.out8(p, v, t_);
    } else if (p == 0x43) {
        if ((v & 0x30) == 0) {                      // latch counter 0
            const int c = pitCount();
            pitLatch_ = {(uint8_t)c, (uint8_t)(c >> 8)};
        } else if ((v >> 6) == 0) {
            pitBytes_.clear();
            pitLoading_ = true;
            const int m = (v >> 1) & 7;
            pitMode_ = m >= 6 ? m - 4 : m;
        }
    } else if (p == 0x40 && pitLoading_) {
        pitBytes_.push_back(v);
        if (pitBytes_.size() == 2) {
            pitDiv_ = (pitBytes_[0] | pitBytes_[1] << 8) ? (pitBytes_[0] | pitBytes_[1] << 8) : 65536;
            pitLoading_ = false;
            pitLoad_ = t_;
            nextTick_ = t_ + pitDiv_ / kPit;
        }
    } else if (p == 0x20) {
        if (v == 0x20) inService0_ = false;         // EOI (IRQ 0 is the only one served)
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

// Counter 0 as the harness's 8254 has it (emu.py pit_count).
int Machine::pitCount() const {
    const int64_t e = (int64_t)((t_ - pitLoad_) * 1193182);
    const int64_t n = pitDiv_;
    int64_t c;
    if (pitMode_ == 3) {
        const int64_t h = std::max<int64_t>(1, n / 2);
        c = n - 2 * (e % h);
    } else if (pitMode_ == 2) {
        c = n - e % n;
    } else {
        c = n - e;
    }
    return (int)(c & 0xFFFF);
}

uint8_t Machine::in8(uint16_t p) {
    if (p == 0x3DA) return poll3da();
    if (p >= 0x3C0 && p <= 0x3DF) return vga.in(p);
    if (p >= 0x220 && p <= 0x32F) {
        uint8_t v = gus.in8(p, t_);
        if ((p == 0x324 || p == 0x325) && gus.selected() == 0x8D) gusRampWait(v);
        return v;
    }
    if (p == 0x60) {
        kbdFull_ = false;
        return kbdData_;
    }
    if (p == 0x64) return (uint8_t)(0x1C | (kbdFull_ ? 1 : 0));
    if (p == 0x40) {
        if (!pitLatch_.empty()) {
            const uint8_t v = pitLatch_.front();
            pitLatch_.erase(pitLatch_.begin());
            return v;
        }
        return (uint8_t)pitCount();
    }
    return 0xFF;
}

void Machine::keys(std::vector<std::pair<double, uint8_t>> k) {
    std::sort(k.begin(), k.end());
    keys_.assign(k.begin(), k.end());
}

void Machine::audioTo(double t) {
    if (!pcm) return;
    const int64_t end = (int64_t)(t * kRate);
    if (pcmPos_ < 0) {                          // from the first write on
        pcmPos_ = end;
        return;
    }
    if (end <= pcmPos_) return;
    const size_t o = pcm->size();
    pcm->resize(o + 2 * (size_t)(end - pcmPos_), 0.0f);
    gus.render(&(*pcm)[o], (int)(end - pcmPos_));
    pcmPos_ = end;
}

// --- the waits -------------------------------------------------------------------

double Machine::nextEvent() const { return if_ ? nextTick_ : 1e9; }

void Machine::frameCheck() {
    if (!waited_) {
        const double until = nextVstart_;
        do {
            wait(std::min(until, nextEvent()));
        } while (t_ < until);
    }
    waited_ = false;
}

void Machine::clockSpin(int32_t clock, int32_t target) {
    const uint32_t d = (uint32_t)target - (uint32_t)clock;
    if (d && d < 0x80000000u) {
        waited_ = true;
        wait(std::min(nextEvent(), t_ + d / 1193182.0));
    }
}

void Machine::clockPoll(uint32_t ret) {
    const std::pair<uint32_t, uint64_t> key{ret, warps_};
    if (key == lastClock_) {
        waited_ = true;
        wait(std::min(std::min(nextEvent(), nextVstart_), nextVsync_));
        return;
    }
    lastClock_ = key;
}

void Machine::posPoll(uint32_t ret) {
    const std::pair<uint32_t, uint64_t> key{ret, warps_};
    if (key == lastPos_) {
        wait(nextEvent());
        return;
    }
    lastPos_ = key;
}

uint8_t Machine::poll3da() {
    waited_ = true;
    const double ph = std::fmod(t_ * 70.0, 1.0);
    uint8_t v = ph < 0.06 ? 0x09 : 0;
    if (v == last3da_) {
        if (++same3da_ >= 3) {
            const double k = std::floor(t_ * 70.0);
            const double target = v ? (k + 0.06) / 70.0 + 1e-9 : (k + 1) / 70.0 + 1e-9;
            const double ev = nextEvent();
            same3da_ = 0;
            if (ev < target) {
                wait(ev);
            } else {
                wait(target);
                v ^= 0x09;
            }
        }
    } else {
        same3da_ = 0;
    }
    last3da_ = v;
    return v;
}

void Machine::gusRampWait(uint8_t& v) {
    (void)v;
    const double end = gus.rampEnd(t_);
    if (end < 0) return;
    waited_ = true;
    wait(std::min(end, nextEvent()));
}

// --- time ----------------------------------------------------------------------------

void Machine::wait(double target) {
    if (!(target > t_)) return;
    {
        std::unique_lock<std::mutex> l(m_);
        while (target > allowed_ && !quit_) {
            blocked_ = true;
            blockedAt_ = target;
            cv_.notify_all();
            cv_.wait(l);
        }
        blocked_ = false;
        if (quit_) throw Quit{};
    }
    t_ = quantize(target);
    warps_++;
    advance();
    deliver();
}

// What has come due by now, in the harness's order (emu.py advance).
void Machine::advance() {
    const double t = t_;
    if (t >= nextTick_) {
        if (pitMode_ == 0 || pitMode_ == 1) nextTick_ = 1e9;
        while (nextTick_ <= t) nextTick_ += pitDiv_ / kPit;
        pending0_ = true;
    }
    while (!keys_.empty() && keys_.front().first <= t) {
        kbdData_ = keys_.front().second;
        kbdFull_ = true;
        keys_.pop_front();
    }
    while (t >= nextVstart_ || t >= nextVsync_) {
        if (nextVstart_ <= nextVsync_) {
            nextVstart_ += 1 / 70.0;
            shown_ = vga.startAddress();
        } else {
            nextVsync_ += 1 / 70.0;
            vsyncs_++;
            if (frame) frame(vsyncs_ - 1, shown_);
        }
    }
}

void Machine::deliver() {
    if (!pending0_ || !if_ || inService0_) return;
    pending0_ = false;
    if (!irq0) return;
    inService0_ = true;
    if_ = false;
    irq0();
    if_ = true;                                 // iretd: the flags of the code it interrupted
}

void Machine::start(std::function<void()> program) {
    thread_ = std::thread([this, program] {
        try {
            program();
        } catch (const Quit&) {
        }
        std::lock_guard<std::mutex> g(m_);
        done_ = true;
        cv_.notify_all();
    });
}

bool Machine::run(double until) {
    std::unique_lock<std::mutex> l(m_);
    allowed_ = until;
    cv_.notify_all();
    cv_.wait(l, [&] { return done_ || (blocked_ && blockedAt_ > allowed_); });
    return !done_;
}

void Machine::stop() {
    {
        std::lock_guard<std::mutex> g(m_);
        quit_ = true;
        cv_.notify_all();
    }
    if (thread_.joinable()) thread_.join();
}

}  // namespace lasse
