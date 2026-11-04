#include "machine.h"

#include <algorithm>
#include <cmath>

namespace asm94 {

namespace {
struct Patch {
    uint32_t off;
    std::vector<uint8_t> bytes;
};
struct GusReg {
    int voice, reg;
    uint32_t value;
};
struct DramByte {
    uint32_t addr;
    uint8_t value;
};
#include "runtime.inc"
// What PMODE and the sound card set-up leave by 4007h (from the harness)
const Patch kRuntime[] = {RUNTIME_MEMORY};
const GusReg kGusRegs[] = {RUNTIME_GUS_REGS};
const DramByte kGusDram[] = {RUNTIME_GUS_DRAM};

// The harness's clock is an instruction count at 10^13 a second: a jump to
// time T lands on the next count, (floor(T x 10^13) + 1) / 10^13.
double quantize(double t) { return (double)((int64_t)(t * 1e13) + 1) / 1e13; }
}  // namespace

Machine::Machine(const std::vector<uint8_t>& image) : mem(kMemSize, 0) {
    std::memcpy(mem.data(), image.data(), std::min(image.size(), (size_t)kMemSize));
    for (const Patch& p : kRuntime) std::memcpy(&mem[p.off], p.bytes.data(), p.bytes.size());
    for (const GusReg& g : kGusRegs) gus.loadReg(g.voice, g.reg, g.value);
    for (const DramByte& d : kGusDram) gus.loadDram(d.addr, d.value);
    gus.select(kRuntimeGusReg, kRuntimeGusVoice);
    // the harness at time 0: the BIOS's tick (65536) and the CRTC's first
    // frame in mode 3 from 0
    nextTick_ = 65536 / kPit;
    double per, vr;
    vga.timing(per, vr);
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
    } else if (p == 0x20 || p == 0xA0) {
        if (v == 0x20)                          // EOI: the highest priority in service
            for (int n = 0; n < 16; n++)
                if (inService_ >> n & 1) {
                    inService_ &= (uint16_t)~(1 << n);
                    break;
                }
    } else if (p == 0x21 || p == 0xA1) {
        picMask_[p == 0xA1] = v;
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
            pitDiv_ = (pitBytes_[0] | pitBytes_[1] << 8) ? (pitBytes_[0] | pitBytes_[1] << 8) : 65536;
            pitLoading_ = false;
            nextTick_ = t_ + pitDiv_ / kPit;
        }
    } else if (p >= 0x220 && p <= 0x32F) {
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

uint8_t Machine::in8(uint16_t p) {
    if (p == 0x3DA) return poll3da();
    if (p >= 0x3C0 && p <= 0x3DF) return vga.in(p);
    if (p == 0x21) return picMask_[0];
    if (p == 0xA1) return picMask_[1];
    if (p == 0x60) return kbdData_;
    if (p >= 0x220 && p <= 0x32F) return gus.in8(p, t_);
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

double Machine::nextEvent() const { return if_ ? std::min(nextTick_, gus.nextIrq()) : 1e9; }

uint8_t Machine::poll3da() {
    vga.resetFlip();
    uint8_t v = t_ < vrEnd_ ? 0x09 : 0;
    if (v == last3da_) {
        if (++same3da_ >= 3) {
            // just past the edge (1 ns)
            const double target = (v ? vrEnd_ : nextVstart_) + 1e-9;
            const double ev = nextEvent();
            same3da_ = 0;
            if (ev < target) {
                wait(ev);                       // an interrupt comes first
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

void Machine::flagWait(uint32_t flag, uint8_t value) {
    if (r8(flag) == value) return;
    // a key still to come counts (one due already comes in with the next step of time)
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
    advance();
    deliver();
}

// What has come due by now, in the harness's order (emu.py advance).
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
            lastVstart_ = nextVstart_;
            double per, vr;
            vga.timing(per, vr);
            vrEnd_ = lastVstart_ + vr * per;
            nextVstart_ = lastVstart_ + per;
            nextVsync_ = lastVstart_ + per / 2;
            shown_ = vga.startAddress();
            shownPan_ = vga.panning();
        } else {
            nextVsync_ = 1e9;                   // till the next frame starts
            vsyncs_++;
            if (frame) frame(vsyncs_ - 1, shown_, shownPan_);
        }
    }
}

// The interrupts pending, in priority order: one is taken if the flag is
// set, it is not masked and nothing of the same or a higher priority is in
// service. Its handler runs here; its STI takes the next.
void Machine::deliver() {
    if (!pending_ || !if_) return;
    for (int n = 0; n < 16; n++) {
        const uint16_t bit = (uint16_t)(1 << n);
        if (!(pending_ & bit)) continue;
        if (picMask_[n >> 3] >> (n & 7) & 1) continue;
        if (inService_ & ((bit << 1) - 1)) return;
        pending_ &= (uint16_t)~bit;
        inService_ |= bit;
        if_ = false;                            // an interrupt gate
        if (n == 0 && irq0) irq0();
        else if (n == 11 && irq11) irq11();
        else ack(n);                            // the BIOS's
        if_ = true;                             // iretd
        return;
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

}  // namespace asm94
