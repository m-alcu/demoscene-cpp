#include "machine.h"

#include <algorithm>
#include <cmath>

namespace asm94 {

namespace {
struct Patch {
    uint32_t off;
    std::vector<uint8_t> bytes;
};
#include "runtime.inc"
// What PMODE and the sound card set-up leave by 4007h
const Patch kRuntime[] = {RUNTIME_MEMORY};

constexpr double kPit = 1193182.0;

// The refresh: dots a line x lines a frame / dot clock, and the vertical
// retrace's lines. Text mode: 28.322 MHz, 900 x 449; 320 x 200: 25.175
// MHz, 800 x 449; Mode X: 25.175 MHz, 800 x 527. Two lines of retrace.
constexpr double kTextPeriod = 900.0 * 449 / 28.322e6, kTextRetrace = 2.0 / 449;
constexpr double kMode13Period = 800.0 * 449 / 25.175e6, kMode13Retrace = 2.0 / 449;
constexpr double kModeXPeriod = 800.0 * 527 / 25.175e6, kModeXRetrace = 2.0 / 527;

// A jump to time T lands on the next tick of a 10^13 Hz clock (as the
// harness the port was checked with counted time).
double quantize(double t) { return (double)((int64_t)(t * 1e13) + 1) / 1e13; }
}  // namespace

Machine::Machine(const std::vector<uint8_t>& image) : mem(kMemSize, 0) {
    std::memcpy(mem.data(), image.data(), std::min(image.size(), (size_t)kMemSize));
    for (const Patch& p : kRuntime) std::memcpy(&mem[p.off], p.bytes.data(), p.bytes.size());
    // at time 0: the BIOS's tick (65536), the first frame of the text screen
    pitPer_ = 65536 / kPit;
    pitNext_ = pitPer_;
    period_ = kTextPeriod, retrace_ = kTextRetrace;
    vrEnd_ = retrace_ * period_;
    nextVstart_ = period_;
    nextVsync_ = period_ / 2;
}

Machine::~Machine() { stop(); }

// --- the screen ------------------------------------------------------------------

void Machine::textMode() {
    screen.graphics = false;
    period_ = kTextPeriod, retrace_ = kTextRetrace;
}

void Machine::graphicsMode() {
    screen.graphics = true;
    std::fill(screen.vram.begin(), screen.vram.end(), 0);
    screen.start = 0, screen.pan = 0;
    screen.pitch = 320, screen.lines = 200;
    period_ = kMode13Period, retrace_ = kMode13Retrace;
}

void Machine::modeXTiming() { period_ = kModeXPeriod, retrace_ = kModeXRetrace; }

void Machine::picture(std::vector<uint8_t>& px, int& lines) const {
    lines = screen.lines;
    px.resize((size_t)320 * lines);
    for (int y = 0; y < lines; y++) {
        const uint32_t row = shownStart_ + (uint32_t)(y * screen.pitch + shownPan_);
        for (int x = 0; x < 320; x++) px[(size_t)y * 320 + x] = screen.vram[(row + x) & (kVramSize - 1)];
    }
}

// --- timers, interrupts, keyboard ---------------------------------------------------

void Machine::setPit(uint16_t divisor) {
    pitPer_ = (divisor ? divisor : 65536) / kPit;
    pitNext_ = t_ + pitPer_;
}

// The music timer counts from its start: its interrupts stay on the grid
// t0 + k x period (with some slack on an edge).
void Machine::startMusicTimer(uint8_t count) {
    setMusicTimer(count);
    musicT0_ = t_;
    musicNext_ = t_ + musicPer_;
}

void Machine::rearmMusicTimer() {
    musicNext_ = musicT0_ + musicPer_ * ((long)((t_ - musicT0_) / musicPer_ + 1e-6) + 1);
}

void Machine::mask(int irq, bool masked) {
    if (masked) masks_ |= (uint16_t)(1 << irq);
    else masks_ &= (uint16_t)~(1 << irq);
}

void Machine::eoi() {
    for (int n = 0; n < 16; n++)
        if (inService_ >> n & 1) {
            inService_ &= (uint16_t)~(1 << n);
            break;
        }
}

void Machine::keys(std::vector<std::pair<double, uint8_t>> k) {
    std::sort(k.begin(), k.end());
    keys_.assign(k.begin(), k.end());
}

void Machine::audioTo(double t) {
    const int64_t end = (int64_t)(t * Mixer::kRate);
    if (end <= pcmPos_) return;
    const int n = (int)(end - pcmPos_);
    float* out;
    if (pcm) {
        const size_t o = pcm->size();
        pcm->resize(o + 2 * (size_t)n, 0.0f);
        out = &(*pcm)[o];
    } else {
        scratch_.assign(2 * (size_t)n, 0.0f);
        out = scratch_.data();
    }
    mixer_.render(out, n);
    pcmPos_ = end;
}

// --- the waits -------------------------------------------------------------------

double Machine::nextEvent() const {
    if (!if_) return 1e9;
    return musicNext_ < 0 ? pitNext_ : std::min(pitNext_, musicNext_);
}

bool Machine::inRetrace() {
    int v = t_ < vrEnd_;
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
                v ^= 1;
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

// What has come due by now: the timers, keys, frames.
void Machine::advance() {
    const double t = t_;
    if (t >= pitNext_) {
        while (pitNext_ <= t) pitNext_ += pitPer_;
        pending_ |= 1;
    }
    if (musicNext_ >= 0 && musicNext_ <= t) {
        while (musicNext_ <= t) musicNext_ += musicPer_;
        pending_ |= 1 << 11;
    }
    while (!keys_.empty() && keys_.front().first <= t) {
        kbdData_ = keys_.front().second;
        pending_ |= 2;
        keys_.pop_front();
    }
    while (t >= nextVstart_ || t >= nextVsync_) {
        if (nextVstart_ <= nextVsync_) {
            const double vstart = nextVstart_;
            vrEnd_ = vstart + retrace_ * period_;
            nextVstart_ = vstart + period_;
            nextVsync_ = vstart + period_ / 2;
            shownStart_ = screen.start;
            shownPan_ = screen.pan;
        } else {
            nextVsync_ = 1e9;                   // till the next frame starts
            vsyncs_++;
            if (frame) frame(vsyncs_ - 1);
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
        if (masks_ & bit) continue;
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
    // the program waits past UNTIL: nothing changes the sound before it
    if (!done_) audioTo(until);
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
