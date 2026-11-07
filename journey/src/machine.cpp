#include "machine.h"

#include <algorithm>
#include <cmath>
#include <stdexcept>

namespace journey {

Machine::Machine() : mem(kMemSize, 0) {
    nextTick_ = 65536 / kPit;
    double per, vr;
    vga.timing(per, vr);
    fper_ = per;
    vga.lines(fvt_, fvrs_, fvde_, fhfrac_);
    lastVstart_ = 0;
    vrEnd_ = vr * per;
    nextVstart_ = per;
    nextVsync_ = per / 2;
}

Machine::~Machine() { stop(); }

// --- ports ---------------------------------------------------------------------

void Machine::out8(uint16_t p, uint8_t v) {
    if (p >= 0x3C0 && p <= 0x3DF) {
        vga.out(p, v);
        if (vgaWrite) vgaWrite(t_, p, v);
    } else if (p == 0x20 || p == 0xA0) {
        const int i = p == 0xA0;
        if (v & 0x10) {
            picIcw_[i] = 2;
        } else if (v == 0x20) {                 // EOI: the lowest in service
            for (int n = 0; n < 16; n++)
                if (inService_ >> n & 1) {
                    inService_ &= (uint16_t)~(1 << n);
                    break;
                }
            deliver();
        }
    } else if (p == 0x21 || p == 0xA1) {
        const int i = p == 0xA1;
        if (picIcw_[i] == 2) picBase_[i] = v & 0xF8, picIcw_[i] = 3;
        else if (picIcw_[i] == 3) picIcw_[i] = 4;
        else if (picIcw_[i] == 4) picIcw_[i] = 0;
        else picMask_[i] = v, deliver();
    } else if (p == 0x43 && v >> 6 == 2) {
        if ((v & 0x30) == 0) {
            const int c = pit2Count();
            pit2Latch_ = {(uint8_t)c, (uint8_t)(c >> 8)};
        } else {
            pit2Bytes_.clear();
            pit2Loading_ = true;
            const int m = (v >> 1) & 7;
            pit2Mode_ = m >= 6 ? m - 4 : m;
        }
    } else if (p == 0x42) {
        if (pit2Loading_) {
            pit2Bytes_.push_back(v);
            if (pit2Bytes_.size() == 2) {
                const int d = pit2Bytes_[0] | pit2Bytes_[1] << 8;
                pit2Div_ = d ? d : 65536;
                pit2Loading_ = false;
                pit2LoadT_ = t_;
            }
        }
    } else if (p == 0x61) {
        if ((v & 1) && !(port61_ & 1)) pit2LoadT_ = t_;
        port61_ = v;
    } else if (p == 0x43) {
        if ((v & 0x30) == 0) {
            const int c = pitCount();
            pitLatch_ = {(uint8_t)c, (uint8_t)(c >> 8)};
        } else if ((v >> 6) == 0) {
            pitBytes_.clear();
            pitLoading_ = true;
            const int m = (v >> 1) & 7;
            pitMode_ = m >= 6 ? m - 4 : m;
        }
    } else if (p == 0x40) {
        if (pitLoading_) {
            pitBytes_.push_back(v);
            if (pitBytes_.size() == 2) {
                const int d = pitBytes_[0] | pitBytes_[1] << 8;
                pitDiv_ = d ? d : 65536;
                pitLoading_ = false;
                pitLoadT_ = t_;
                nextTick_ = t_ + pitDiv_ / kPit;
            }
        }
    } else if ((p >= 0x220 && p < 0x230) || (p >= 0x320 && p < 0x328)) {
        audioTo(t_);
        gus.out8(p, v, t_);
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

int Machine::pitCount() const {
    const int64_t e = (int64_t)((t_ - pitLoadT_) * kPit);
    const int64_t n = pitDiv_;
    int64_t c;
    if (pitMode_ == 3) c = n - 2 * (e % std::max<int64_t>(1, n / 2));
    else if (pitMode_ == 2) c = n - e % n;
    else c = n - e;
    return (int)(c & 0xFFFF);
}

int Machine::pit2Count() const {
    if (!(port61_ & 1)) return pit2Div_ & 0xFFFF;
    const int64_t e = (int64_t)((t_ - pit2LoadT_) * kPit);
    const int64_t n = pit2Div_;
    int64_t c;
    if (pit2Mode_ == 3) c = n - 2 * (e % std::max<int64_t>(1, n / 2));
    else if (pit2Mode_ == 2) c = n - e % n;
    else c = n - e;
    return (int)(c & 0xFFFF);
}

bool Machine::pit2Out() const {
    if (!(port61_ & 1)) return true;
    const int64_t e = (int64_t)((t_ - pit2LoadT_) * kPit);
    if (pit2Mode_ == 3) return e % pit2Div_ < pit2Div_ / 2;
    return true;
}

uint8_t Machine::in8(uint16_t p) {
    if (p == 0x3DA) return poll3da(0x09);
    if (p >= 0x3C0 && p <= 0x3DF) return vga.in(p);
    if (p == 0x21) return picMask_[0];
    if (p == 0xA1) return picMask_[1];
    if (p == 0x20 || p == 0xA0) return 0;
    if (p == 0x60) return kbdData_;
    if (p == 0x64) return 0x1C;
    if (p == 0x42) {
        if (!pit2Latch_.empty()) {
            const uint8_t v = pit2Latch_.front();
            pit2Latch_.erase(pit2Latch_.begin());
            return v;
        }
        return (uint8_t)pit2Count();
    }
    if (p == 0x40) {
        if (!pitLatch_.empty()) {
            const bool first = pitLatch_.size() == 2;
            const uint8_t v = pitLatch_.front();
            pitLatch_.erase(pitLatch_.begin());
            // a delay loop polls the latched count: each latch takes
            // kPitStep (the CPU is infinitely fast), as in the harness
            if (first) wait(t_ + kPitStep);
            return v;
        }
        return (uint8_t)pitCount();
    }
    if (p == 0x61)
        return (uint8_t)((port61_ & 0x0F) | (pit2Out() ? 0x20 : 0) | ((icount_ / 100) & 1 ? 0x10 : 0));
    if ((p >= 0x220 && p < 0x230) || (p >= 0x320 && p < 0x328)) return gus.in8(p, t_);
    return 0xFF;
}

uint16_t Machine::in16(uint16_t p) {
    const uint8_t lo = in8(p);
    return (uint16_t)(lo | in8((uint16_t)(p + 1)) << 8);
}

void Machine::keys(std::vector<std::pair<double, uint8_t>> k) {
    std::sort(k.begin(), k.end());
    keys_.assign(k.begin(), k.end());
}

void Machine::audioTo(double t) {
    if (!pcm) return;
    const int64_t end = (int64_t)(t * gus.rate());
    if (pcmPos_ < 0) {
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

double Machine::nextEvent() const { return if_ ? std::min(nextTick_, gus.nextIrq()) : 1e9; }

uint8_t Machine::statusAt(double t) const {
    const double dt = t - lastVstart_;
    const double lt = fper_ / fvt_;
    const int64_t line = (int64_t)(dt / lt);
    const int64_t L = (fvrs_ + line) % fvt_;
    if (t < vrEnd_) return 0x09;
    if (L > fvde_ || dt - (double)line * lt >= fhfrac_ * lt) return 0x01;
    return 0;
}

double Machine::nextStatusEdge(double t, uint8_t mask) const {
    const int cur = statusAt(t) & mask;
    const double lt = fper_ / fvt_;
    for (int k = 0; k < 4 * fvt_; k++) {
        const double dt = t - lastVstart_;
        double best = nextVstart_;
        auto cand = [&](double x) {
            if (x > t && x < best) best = x;
        };
        if (t < vrEnd_) cand(vrEnd_);
        if (mask & 1) {
            const int64_t line = (int64_t)(dt / lt);
            cand(lastVstart_ + (double)(line + 1) * lt);
            const double h = lastVstart_ + (double)line * lt + fhfrac_ * lt;
            if (h > t) cand(h);
        }
        t = best + 1e-9;
        if (t >= nextVstart_ || (statusAt(t) & mask) != cur) return t;
    }
    throw std::runtime_error("no 3DAh edge");
}

uint8_t Machine::poll3da(uint8_t mask) {
    vga.resetFlip();
    uint8_t v = statusAt(t_);
    if ((v & mask) == last3da_) {
        if (++same3da_ >= 3) {
            // the third same read: on to the change (or an interrupt before
            // it). The read's value is the one there, before the interrupts
            // due run (they may poll 3DAh themselves).
            const double target = nextStatusEdge(t_, mask);
            const double ev = nextEvent();
            same3da_ = 0;
            jump(ev < target ? ev : target);
            v = statusAt(t_);
            last3da_ = v & mask;
            advance();
            deliver();
            return v;
        }
    } else {
        same3da_ = 0;
    }
    last3da_ = v & mask;
    return v;
}

void Machine::spinWait() {
    const double key = !keys_.empty() && keys_.front().first > t_ ? keys_.front().first : 1e9;
    wait(std::min(nextEvent(), key));
}

void Machine::exit() {
    {
        std::lock_guard<std::mutex> g(m_);
        done_ = true;
        cv_.notify_all();
    }
    throw Quit{};
}

void Machine::wait(double target) {
    if (!(target > t_)) return;
    jump(target);
    advance();
    deliver();
}

void Machine::jump(double target) {
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
    // the harness's clock: the next instruction count after TARGET
    icount_ = (int64_t)(target * 1e13) + 1;
    t_ = (double)icount_ / 1e13;
}

void Machine::advance() {
    const double t = t_;
    if (t >= nextTick_) {
        if (pitMode_ == 0 || pitMode_ == 1) nextTick_ = 1e9;
        while (nextTick_ <= t) nextTick_ += pitDiv_ / kPit;
        pending_ |= 1;
    }
    if (gus.nextIrq() <= t) {
        gus.irqDue(t);
        pending_ |= 1 << 11;
    }
    while (!keys_.empty() && keys_.front().first <= t) {
        kbdData_ = keys_.front().second;
        pending_ |= 2;
        keys_.pop_front();
    }
    while (t >= nextVstart_ || t >= nextVsync_) {
        if (nextVstart_ <= nextVsync_) {
            if (retrace) retrace();
            lastVstart_ = nextVstart_;
            double per, vr;
            vga.timing(per, vr);
            vrEnd_ = lastVstart_ + vr * per;
            fper_ = per;
            vga.lines(fvt_, fvrs_, fvde_, fhfrac_);
            nextVstart_ = lastVstart_ + per;
            nextVsync_ = lastVstart_ + per / 2;
            shown_ = vga.startAddress();
            shownPan_ = vga.panning();
        } else {
            nextVsync_ = 1e9;
            vsyncs_++;
            if (frame) frame(vsyncs_ - 1, shown_, shownPan_);
        }
    }
}

void Machine::deliver() {
    // one after another while one can be taken (a handler's IRET takes the
    // next itself; the BIOS's, answered in place, comes back here)
    for (;;) {
        if (!pending_ || !if_) return;
        int take = -1;
        for (int n = 0; n < 16; n++) {
            const uint16_t bit = (uint16_t)(1 << n);
            if (!(pending_ & bit)) continue;
            if (picMask_[n >> 3] >> (n & 7) & 1) continue;
            if (inService_ & ((bit << 1) - 1)) return;
            take = n;
            break;
        }
        if (take < 0) return;
        const uint16_t bit = (uint16_t)(1 << take);
        pending_ &= (uint16_t)~bit;
        inService_ |= bit;
        if (take >= 8) inService_ |= 4;
        dispatch(take < 8 ? picBase_[0] + take : picBase_[1] + take - 8);
    }
}

// --- the caller's side --------------------------------------------------------

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

}  // namespace journey
