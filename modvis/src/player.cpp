// player.cpp: the MOD/S3M replayer
//
// Periods are kept in quarter Amiga units (ST3 style): period(C-4) = 1712 at
// c2spd 8363, frequency = clock / period. MOD pattern periods are turned into
// notes at load, so both formats share one sequencer; effects follow
// ProTracker for MOD and Scream Tracker 3 for S3M.
#include "player.h"

#include <algorithm>
#include <cmath>
#include <cstring>

namespace modvis {

namespace {

const int kSine[64] = {0,    24,   49,   74,   97,   120,  141,  161,  180,  197,  212,  224,  235,
                       244,  250,  253,  255,  253,  250,  244,  235,  224,  212,  197,  180,  161,
                       141,  120,  97,   74,   49,   24,   0,    -24,  -49,  -74,  -97,  -120, -141,
                       -161, -180, -197, -212, -224, -235, -244, -250, -253, -255, -253, -250, -244,
                       -235, -224, -212, -197, -180, -161, -141, -120, -97,  -74,  -49,  -24};

const int kS3mFinetune[16] = {7895, 7941, 7985, 8046, 8107, 8169, 8232, 8280,
                              8363, 8413, 8463, 8529, 8581, 8651, 8723, 8757};

// effect letters of S3M (cmd 1 = A)
enum { A = 1, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z };

}  // namespace

size_t Timeline::tickAt(int64_t sample) const {
    if (ticks.empty()) return 0;
    auto it = std::upper_bound(ticks.begin(), ticks.end(), sample,
                               [](int64_t s, const TickInfo& t) { return s < t.sample; });
    return it == ticks.begin() ? 0 : (size_t)(it - ticks.begin() - 1);
}

Player::Player(const Module& m, int rate) : m_(m), rate_(rate) {
    scope.assign(m.channels, std::vector<float>(SCOPE, 0.f));
    reset();
}

void Player::reset() {
    ch_.assign(m_.channels, Channel{});
    for (int i = 0; i < m_.channels; ++i) ch_[i].pan = m_.pan[i];
    orderPos_ = row_ = tick_ = 0;
    speed_ = m_.initSpeed;
    tempo_ = m_.initTempo;
    globalVol_ = m_.globalVolume;
    jumpOrder_ = breakRow_ = loopJumpRow_ = -1;
    patDelay_ = patDelayDone_ = 0;
    pos_ = 0;
    samplesLeft_ = 0;
    tickFrac_ = 0;
    ended_ = started_ = false;
    rng_ = 1;
    visited_.assign(m_.orders.size(), std::vector<bool>(256, false));
}

int Player::resolveOrder(int o) const {
    while (o >= 0 && o < (int)m_.orders.size() && m_.orders[o] == 254) ++o;
    if (o < 0 || o >= (int)m_.orders.size() || m_.orders[o] == 255) return -1;
    if (m_.orders[o] >= m_.patterns.size()) return -1;
    return o;
}

int Player::periodOf(int note, int c2spd) const {
    return std::max(1, (int)std::lround(1712.0 * 8363.0 / c2spd * std::pow(2.0, (48 - note) / 12.0)));
}

void Player::clampPeriod(int& p) const {
    if (m_.amigaLimits)
        p = std::clamp(p, 113 * 4, 856 * 4);
    else
        p = std::clamp(p, 32, 0x7FFF * 4);
}

int Player::waveValue(int wave, int pos) {
    pos &= 63;
    switch (wave & 3) {
        case 0: return kSine[pos];
        case 1: return (32 - pos) * 8;
        case 2: return pos < 32 ? 255 : -255;
        default:
            rng_ = rng_ * 1103515245u + 12345u;
            return (int)((rng_ >> 16) & 511) - 256;
    }
}

// ---------------------------------------------------------------------------- sequencer

void Player::processTick() {
    for (auto& c : ch_) {
        c.trig = false;
        c.vibOff = c.arp = c.tremOff = 0;
        c.tremorMute = false;
    }
    if (!started_) {
        started_ = true;
        orderPos_ = resolveOrder(0);
        if (orderPos_ < 0) {
            ended_ = true;
            return;
        }
        row_ = tick_ = 0;
        visited_[orderPos_][0] = true;
        processRow();
    } else if (++tick_ >= speed_) {
        tick_ = 0;
        if (patDelayDone_ < patDelay_) {
            ++patDelayDone_;  // the row again, without its notes
        } else {
            patDelay_ = patDelayDone_ = 0;
            nextRow();
            if (ended_) return;
            processRow();
        }
    } else {
        for (auto& c : ch_) effectsTickN(c);
    }
    for (auto& c : ch_) {
        int p = c.period;
        if (c.arp) p = (int)std::lround(p * std::pow(2.0, -c.arp / 12.0));
        p += c.vibOff;
        clampPeriod(p);
        c.outPeriod = p;
        c.outVol = c.tremorMute ? 0 : std::clamp(c.vol + c.tremOff, 0, 64);
    }
}

void Player::processRow() {
    const int pat = m_.orders[orderPos_];
    for (int i = 0; i < m_.channels; ++i) {
        Channel& c = ch_[i];
        Cell cell = m_.cell(pat, row_, i);
        // S3M: most effects share one parameter memory
        if (m_.format == Format::S3M) {
            switch (cell.cmd) {
                case D: case E: case F: case I: case J: case K: case L: case Q: case R:
                    if (cell.param)
                        c.memS3m = cell.param;
                    else
                        cell.param = c.memS3m;
                    break;
                default: break;
            }
        }
        c.cur = cell;
        c.cutTick = c.delayTick = -1;
        const bool mod = m_.format == Format::MOD;
        const bool delay = mod ? (cell.cmd == 0xE && (cell.param >> 4) == 0xD) : (cell.cmd == S && (cell.param >> 4) == 0xD);
        if (delay && (cell.param & 15)) {
            c.delayTick = cell.param & 15;
            c.delayed = cell;
        } else {
            triggerCell(c, cell);
        }
        effectsTick0(c);
    }
}

void Player::nextRow() {
    if (loopJumpRow_ >= 0) {
        for (int r = loopJumpRow_; r <= row_; ++r) visited_[orderPos_][r] = false;
        row_ = loopJumpRow_;
        loopJumpRow_ = -1;
        jumpOrder_ = breakRow_ = -1;
        visited_[orderPos_][row_] = true;
        return;
    }
    int order = orderPos_, row = row_ + 1;
    if (jumpOrder_ >= 0 || breakRow_ >= 0) {
        order = jumpOrder_ >= 0 ? jumpOrder_ : orderPos_ + 1;
        row = breakRow_ >= 0 ? breakRow_ : 0;
        jumpOrder_ = breakRow_ = -1;
    } else if (row >= m_.patterns[m_.orders[orderPos_]].rows) {
        row = 0;
        ++order;
    }
    order = resolveOrder(order);
    if (order < 0) {
        ended_ = true;
        return;
    }
    if (row >= m_.patterns[m_.orders[order]].rows) row = 0;
    if (visited_[order][row]) {  // the song loops
        ended_ = true;
        return;
    }
    if (order != orderPos_)
        for (auto& c : ch_) c.loopRow = 0;
    orderPos_ = order;
    row_ = row;
    visited_[orderPos_][row_] = true;
}

void Player::triggerCell(Channel& c, const Cell& cell) {
    const bool mod = m_.format == Format::MOD;
    const bool porta = mod ? (cell.cmd == 3 || cell.cmd == 5) : (cell.cmd == G || cell.cmd == L);
    if (cell.inst && cell.inst <= m_.samples.size()) {
        const Sample& s = m_.samples[cell.inst - 1];
        c.inst = cell.inst;
        c.vol = s.volume;
        c.c2spd = s.c2spd;
    }
    if (mod && cell.cmd == 0xE && (cell.param >> 4) == 5) {
        int ft = cell.param & 15;
        if (ft > 7) ft -= 16;
        c.c2spd = (int)std::lround(8363.0 * std::pow(2.0, ft / 96.0));
    }
    if (cell.note < NOTE_CUT && c.inst) {
        const int per = periodOf(cell.note, c.c2spd);
        if (porta && c.playing) {
            c.target = per;
        } else {
            c.smp = c.inst - 1;
            const Sample& s = m_.samples[c.smp];
            c.period = c.target = per;
            c.pos = 0;
            c.playing = !s.data.empty();
            c.trig = c.fresh = c.playing;
            if (c.vibWave < 4) c.vibPos = 0;
            if (c.tremWave < 4) c.tremPos = 0;
            c.retrigCount = c.tremorCount = 0;
            const bool offset = mod ? cell.cmd == 9 : cell.cmd == O;
            if (offset) {
                if (cell.param) c.memOffset = cell.param;
                const uint32_t off = c.memOffset * 256u;
                const uint32_t end = s.loop ? s.loopEnd : (uint32_t)s.data.size();
                if (off < end)
                    c.pos = off;
                else if (s.loop)
                    c.pos = s.loopStart;
                else
                    c.playing = false;
            }
        }
    } else if (cell.note == NOTE_CUT) {
        c.playing = false;
    }
    if (cell.vol != VOL_NONE) c.vol = std::min<int>(cell.vol, 64);
}

void Player::retrigger(Channel& c) {
    if (c.smp < 0 || m_.samples[c.smp].data.empty()) return;
    c.pos = 0;
    c.playing = c.trig = c.fresh = true;
}

void Player::volSlideMod(Channel& c, uint8_t p) {
    if (p >> 4)
        c.vol = std::min(64, c.vol + (p >> 4));
    else
        c.vol = std::max(0, c.vol - (p & 15));
}

void Player::volSlideS3m(Channel& c, uint8_t p, bool tick0) {
    const int x = p >> 4, y = p & 15;
    if (y == 0xF && x) {
        if (tick0) c.vol = std::min(64, c.vol + x);
    } else if (x == 0xF && y) {
        if (tick0) c.vol = std::max(0, c.vol - y);
    } else if (!tick0 || m_.fastVolSlides) {
        if (y == 0)
            c.vol = std::min(64, c.vol + x);
        else
            c.vol = std::max(0, c.vol - y);
    }
}

void Player::tonePorta(Channel& c) {
    const int sp = c.memTone * 4;
    if (!c.target) return;
    if (c.period < c.target)
        c.period = std::min(c.period + sp, c.target);
    else if (c.period > c.target)
        c.period = std::max(c.period - sp, c.target);
}

void Player::vibrato(Channel& c) {
    c.vibOff = (waveValue(c.vibWave, c.vibPos) * c.vibDepth) >> c.vibShift;
    c.vibPos = (c.vibPos + c.vibSpeed) & 63;
}

void Player::tremolo(Channel& c) {
    c.tremOff = (waveValue(c.tremWave, c.tremPos) * c.tremDepth) >> 6;
    c.tremPos = (c.tremPos + c.tremSpeed) & 63;
}

void Player::effectsTick0(Channel& c) {
    const uint8_t p = c.cur.param;
    const int x = p >> 4, y = p & 15;
    if (m_.format == Format::MOD) {
        switch (c.cur.cmd) {
            case 0x3: if (p) c.memTone = p; break;
            case 0x4:
                if (x) c.vibSpeed = x;
                if (y) c.vibDepth = y;
                c.vibShift = 5;
                break;
            case 0x7:
                if (x) c.tremSpeed = x;
                if (y) c.tremDepth = y;
                break;
            case 0x8: c.pan = p; break;
            case 0xB: jumpOrder_ = p; break;
            case 0xC: c.vol = std::min<int>(p, 64); break;
            case 0xD: breakRow_ = std::min(x * 10 + y, 63); break;
            case 0xE:
                switch (x) {
                    case 0x1: c.period -= y * 4; clampPeriod(c.period); break;
                    case 0x2: c.period += y * 4; clampPeriod(c.period); break;
                    case 0x4: c.vibWave = y; break;
                    case 0x6:
                        if (!y) c.loopRow = row_;
                        else if (!c.loopCount) { c.loopCount = y; loopJumpRow_ = c.loopRow; }
                        else if (--c.loopCount) loopJumpRow_ = c.loopRow;
                        break;
                    case 0x7: c.tremWave = y; break;
                    case 0x8: c.pan = y * 17; break;
                    case 0xA: c.vol = std::min(64, c.vol + y); break;
                    case 0xB: c.vol = std::max(0, c.vol - y); break;
                    case 0xC: if (!y) c.vol = 0; else c.cutTick = y; break;
                    case 0xE: if (!patDelay_) patDelay_ = y; break;
                    default: break;
                }
                break;
            case 0xF:
                if (p && p < 32) speed_ = p;
                else if (p >= 32) tempo_ = p;
                break;
            default: break;
        }
        return;
    }
    switch (c.cur.cmd) {
        case A: if (p) speed_ = p; break;
        case B: jumpOrder_ = p; break;
        case C: breakRow_ = std::min(x * 10 + y, 63); break;
        case D: volSlideS3m(c, p, true); break;
        case K: volSlideS3m(c, p, true); break;
        case L: volSlideS3m(c, p, true); break;
        case E:
            if (x == 0xF) c.period += y * 4;
            else if (x == 0xE) c.period += y;
            clampPeriod(c.period);
            break;
        case F:
            if (x == 0xF) c.period -= y * 4;
            else if (x == 0xE) c.period -= y;
            clampPeriod(c.period);
            break;
        case G: if (p) c.memTone = p; break;
        case H:
        case U:
            if (x) c.vibSpeed = x;
            if (y) c.vibDepth = y;
            c.vibShift = c.cur.cmd == H ? 5 : 7;
            break;
        case R:
            if (x) c.tremSpeed = x;
            if (y) c.tremDepth = y;
            break;
        case S:
            switch (x) {
                case 0x2: c.c2spd = kS3mFinetune[y]; break;
                case 0x3: c.vibWave = y; break;
                case 0x4: c.tremWave = y; break;
                case 0x8: c.pan = y * 17; break;
                case 0xB:
                    if (!y) c.loopRow = row_;
                    else if (!c.loopCount) { c.loopCount = y; loopJumpRow_ = c.loopRow; }
                    else if (--c.loopCount) loopJumpRow_ = c.loopRow;
                    break;
                case 0xC: if (y) c.cutTick = y; break;
                case 0xE: if (!patDelay_) patDelay_ = y; break;
                default: break;
            }
            break;
        case T: if (p >= 0x20) tempo_ = p; break;
        case V: globalVol_ = std::min<int>(p, 64); break;
        case X:
            if (p <= 0x80) c.pan = std::min(255, p * 2);
            else if (p == 0xA4) c.pan = 128;
            break;
        case I: {  // tremor: on x+1 ticks, off y+1 ticks
            const int on = x + 1, off = y + 1;
            c.tremorMute = (c.tremorCount % (on + off)) >= on;
            ++c.tremorCount;
            break;
        }
        default: break;
    }
}

void Player::effectsTickN(Channel& c) {
    const uint8_t p = c.cur.param;
    const int x = p >> 4, y = p & 15;
    if (c.delayTick == tick_) {
        triggerCell(c, c.delayed);
        c.delayTick = -1;
    }
    if (c.cutTick == tick_) c.vol = 0;
    if (m_.format == Format::MOD) {
        switch (c.cur.cmd) {
            case 0x0:
                if (p) c.arp = (tick_ % 3) == 1 ? x : (tick_ % 3) == 2 ? y : 0;
                break;
            case 0x1: c.period -= p * 4; clampPeriod(c.period); break;
            case 0x2: c.period += p * 4; clampPeriod(c.period); break;
            case 0x3: tonePorta(c); break;
            case 0x4: vibrato(c); break;
            case 0x5: tonePorta(c); volSlideMod(c, p); break;
            case 0x6: vibrato(c); volSlideMod(c, p); break;
            case 0x7: tremolo(c); break;
            case 0xA: volSlideMod(c, p); break;
            case 0xE:
                if (x == 0x9 && y && tick_ % y == 0) retrigger(c);
                break;
            default: break;
        }
        return;
    }
    switch (c.cur.cmd) {
        case D: volSlideS3m(c, p, false); break;
        case E: if (x < 0xE) { c.period += p * 4; clampPeriod(c.period); } break;
        case F: if (x < 0xE) { c.period -= p * 4; clampPeriod(c.period); } break;
        case G: tonePorta(c); break;
        case H:
        case U: vibrato(c); break;
        case I: {
            const int on = x + 1, off = y + 1;
            c.tremorMute = (c.tremorCount % (on + off)) >= on;
            ++c.tremorCount;
            break;
        }
        case J: c.arp = (tick_ % 3) == 1 ? x : (tick_ % 3) == 2 ? y : 0; break;
        case K: vibrato(c); volSlideS3m(c, p, false); break;
        case L: tonePorta(c); volSlideS3m(c, p, false); break;
        case Q:
            if (y && ++c.retrigCount >= y) {
                c.retrigCount = 0;
                switch (x) {
                    case 1: case 2: case 3: case 4: case 5: c.vol -= 1 << (x - 1); break;
                    case 6: c.vol = c.vol * 2 / 3; break;
                    case 7: c.vol /= 2; break;
                    case 9: case 0xA: case 0xB: case 0xC: case 0xD: c.vol += 1 << (x - 9); break;
                    case 0xE: c.vol = c.vol * 3 / 2; break;
                    case 0xF: c.vol *= 2; break;
                    default: break;
                }
                c.vol = std::clamp(c.vol, 0, 64);
                retrigger(c);
            }
            break;
        case R: tremolo(c); break;
        default: break;
    }
}

// ---------------------------------------------------------------------------- mixer

void Player::mixChannel(Channel& c, int ci, float* out, int n, bool dry) {
    float* sc = dry ? nullptr : scope[ci].data();
    const int mask = SCOPE - 1;
    if (!c.playing || c.smp < 0 || c.outPeriod <= 0) {
        if (sc)
            for (int k = 0; k < n; ++k) sc[(pos_ + k) & mask] = 0;
        return;
    }
    const Sample& s = m_.samples[c.smp];
    const uint32_t len = (uint32_t)s.data.size();
    const uint32_t end = s.loop ? s.loopEnd : len;
    const double loopLen = s.loop ? (double)(s.loopEnd - s.loopStart) : 0;
    const double clock = m_.format == Format::MOD ? 14187578.4 : 14317456.0;
    const double step = clock / c.outPeriod / rate_;
    if (dry) {
        c.pos += step * n;
        if (c.pos >= end) {
            if (s.loop)
                c.pos = s.loopStart + std::fmod(c.pos - s.loopStart, loopLen);
            else
                c.playing = false;
        }
        return;
    }
    const float g = c.outVol * globalVol_ / 4096.f;
    float p = c.pan / 255.f;
    p = 0.5f + (p - 0.5f) * (m_.stereo ? stereoSeparation : 0.f);
    const float tl = g * std::min(1.f, 2.f * (1.f - p)), tr = g * std::min(1.f, 2.f * p);
    if (c.fresh) {
        c.gl = c.gr = 0;
        c.fresh = false;
    }
    const bool muted = mute[ci];
    const int ramp = 64;
    for (int k = 0; k < n; ++k) {
        if (!c.playing) {
            sc[(pos_ + k) & mask] = 0;
            continue;
        }
        const uint32_t i = (uint32_t)c.pos;
        float v = s.data[std::min(i, len - 1)];
        if (interpolate) {
            const uint32_t j = i + 1;
            const float b = j < end ? s.data[j] : (s.loop ? s.data[s.loopStart] : 0.f);
            v += (b - v) * (float)(c.pos - i);
        }
        if (k < ramp) {
            c.gl += (tl - c.gl) / (float)(ramp - k);
            c.gr += (tr - c.gr) / (float)(ramp - k);
        }
        sc[(pos_ + k) & mask] = v * g;
        if (!muted) {
            out[2 * k] += v * c.gl;
            out[2 * k + 1] += v * c.gr;
        }
        c.pos += step;
        if (c.pos >= end) {
            if (s.loop) {
                c.pos -= loopLen;
                if (c.pos >= end || c.pos < s.loopStart) c.pos = s.loopStart;
            } else {
                c.playing = false;
            }
        }
    }
}

void Player::run(float* out, int frames, bool dry) {
    int done = 0;
    while (done < frames) {
        if (samplesLeft_ <= 0) {
            if (ended_) break;
            processTick();
            if (ended_) break;
            if (onTick_) onTick_();
            const double len = rate_ * 2.5 / tempo_ + tickFrac_;
            samplesLeft_ = (int)len;
            tickFrac_ = len - samplesLeft_;
        }
        const int n = std::min(frames - done, samplesLeft_);
        float* o = dry ? nullptr : out + 2 * done;
        if (o) std::memset(o, 0, sizeof(float) * 2 * n);
        for (int i = 0; i < m_.channels; ++i) mixChannel(ch_[i], i, o, n, dry);
        if (o) {
            const float amp = volume * 0.55f * std::sqrt(4.f / std::max(4, m_.channels));
            for (int k = 0; k < 2 * n; ++k) o[k] = std::clamp(o[k] * amp, -1.f, 1.f);
        }
        done += n;
        samplesLeft_ -= n;
        pos_ += n;
    }
    if (!dry && done < frames) std::memset(out + 2 * done, 0, sizeof(float) * 2 * (frames - done));
}

void Player::render(float* out, int frames) { run(out, frames, false); }

void Player::seek(int64_t sample) {
    reset();
    while (pos_ < sample && !ended_) run(nullptr, (int)std::min<int64_t>(sample - pos_, 1 << 20), true);
    for (auto& c : ch_) c.fresh = true;
}

void Player::snapshot(std::vector<ChanState>& out, TickInfo& info) const {
    info.sample = pos_;
    info.orderPos = (uint16_t)orderPos_;
    info.row = (uint16_t)row_;
    info.pattern = m_.orders[orderPos_];
    info.tick = (uint8_t)tick_;
    info.speed = (uint8_t)speed_;
    info.tempo = (uint8_t)std::min(tempo_, 255);
    info.globalVol = (uint8_t)globalVol_;
    for (const Channel& c : ch_) {
        ChanState s;
        const int v = c.outVol * globalVol_ / 64;
        s.vol = (uint8_t)v;
        s.inst = (uint8_t)(c.smp + 1);
        s.pan = (uint8_t)c.pan;
        if (c.playing && c.smp >= 0 && c.outPeriod > 0) {
            s.pitch = 48.f + 12.f * (float)std::log2(1712.0 * 8363.0 / ((double)c.c2spd * c.outPeriod));
            if (v > 0) s.flags |= ChanState::ACTIVE;
            if (c.trig) s.flags |= ChanState::TRIG;
        }
        out.push_back(s);
    }
}

Timeline Player::buildTimeline(const Module& m, int rate) {
    Timeline t;
    t.channels = m.channels;
    t.rate = rate;
    t.orderFirstTick.assign(m.orders.size(), -1);
    t.instUse.assign(m.samples.size() + 1, 0);
    Player p(m, rate);
    p.onTick_ = [&] {
        TickInfo info;
        p.snapshot(t.states, info);
        if (t.orderFirstTick[info.orderPos] < 0) t.orderFirstTick[info.orderPos] = (int)t.ticks.size();
        t.ticks.push_back(info);
    };
    const int64_t limit = (int64_t)rate * 60 * 60;  // an hour at most
    while (!p.ended_ && p.pos_ < limit) p.run(nullptr, rate, true);
    t.totalSamples = p.pos_;
    float lo = 1e9f, hi = -1e9f;
    for (size_t i = 0; i < t.states.size(); ++i) {
        const ChanState& s = t.states[i];
        if (!(s.flags & ChanState::ACTIVE)) continue;
        lo = std::min(lo, s.pitch);
        hi = std::max(hi, s.pitch);
        if (s.flags & ChanState::TRIG && s.inst < t.instUse.size()) ++t.instUse[s.inst];
    }
    if (lo <= hi) {
        t.minPitch = std::floor(lo) - 2;
        t.maxPitch = std::ceil(hi) + 2;
    }
    if (t.maxPitch - t.minPitch < 24) {
        const float mid = (t.minPitch + t.maxPitch) / 2;
        t.minPitch = mid - 12;
        t.maxPitch = mid + 12;
    }
    return t;
}

}  // namespace modvis
