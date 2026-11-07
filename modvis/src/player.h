// player.h: a MOD/S3M replayer (sequencer + mixer) and the song's precomputed timeline
#pragma once

#include <atomic>
#include <cstdint>
#include <functional>
#include <vector>

#include "module.h"

namespace modvis {

// what one channel does during one tick
struct ChanState {
    float pitch = 0;   // in notes (48 = C-4), slides and vibrato included
    uint8_t vol = 0;   // 0..64, everything included (global volume, tremolo)
    uint8_t inst = 0;
    uint8_t pan = 128;
    uint8_t flags = 0;  // ACTIVE, TRIG
    enum : uint8_t { ACTIVE = 1, TRIG = 2 };
};

struct TickInfo {
    int64_t sample = 0;  // where the tick starts, in output samples from the song start
    uint16_t orderPos = 0, row = 0, pattern = 0;
    uint8_t tick = 0, speed = 6, tempo = 125, globalVol = 64;
};

// the whole song once through, tick by tick (a dry run of the replayer)
struct Timeline {
    int channels = 0, rate = 48000;
    std::vector<TickInfo> ticks;
    std::vector<ChanState> states;  // ticks * channels
    int64_t totalSamples = 0;
    float minPitch = 36, maxPitch = 84;
    std::vector<int> orderFirstTick;  // per order position, -1 if never played
    std::vector<uint32_t> instUse;    // how many notes each instrument plays

    const ChanState& at(size_t tick, int ch) const { return states[tick * channels + ch]; }
    size_t tickAt(int64_t sample) const;  // the tick playing at that sample
    double seconds(int64_t sample) const { return (double)sample / rate; }
};

class Player {
public:
    static constexpr int SCOPE = 16384;  // scope ring length (power of two)

    Player(const Module& m, int rate);

    // fills `frames` stereo float frames (silence once the song has ended)
    void render(float* out, int frames);
    // jumps to a sample position (replays the song silently up to there)
    void seek(int64_t sample);
    // the song once through, without mixing
    static Timeline buildTimeline(const Module& m, int rate);

    int64_t position() const { return pos_; }
    bool ended() const { return ended_; }

    // settings (set from the UI)
    bool mute[64] = {};
    float stereoSeparation = 0.6f;  // 0 mono .. 1 full
    float volume = 1.f;
    bool interpolate = true;

    // per-channel output (mono, after volume) at absolute sample s: scope[ch][s & (SCOPE-1)]
    std::vector<std::vector<float>> scope;

private:
    struct Channel {
        int smp = -1, inst = 0;
        double pos = 0;
        bool playing = false;
        int period = 0, target = 0, outPeriod = 0, c2spd = 8363;
        int vol = 0, outVol = 0, pan = 128;
        uint8_t memS3m = 0, memTone = 0, memOffset = 0;
        int vibSpeed = 0, vibDepth = 0, vibPos = 0, vibWave = 0, vibShift = 5;
        int tremSpeed = 0, tremDepth = 0, tremPos = 0, tremWave = 0;
        int retrigCount = 0, tremorCount = 0;
        int loopRow = 0, loopCount = 0;
        int cutTick = -1, delayTick = -1;
        Cell cur, delayed;
        int vibOff = 0, arp = 0, tremOff = 0;  // this tick's modulation
        bool tremorMute = false;
        bool trig = false, fresh = false;
        float gl = 0, gr = 0;
    };

    void reset();
    void run(float* out, int frames, bool dry);
    void processTick();
    void processRow();
    void nextRow();
    int resolveOrder(int o) const;
    void triggerCell(Channel& c, const Cell& cell);
    void effectsTick0(Channel& c);
    void effectsTickN(Channel& c);
    void volSlideMod(Channel& c, uint8_t p);
    void volSlideS3m(Channel& c, uint8_t p, bool tick0);
    void tonePorta(Channel& c);
    void vibrato(Channel& c);
    void tremolo(Channel& c);
    void retrigger(Channel& c);
    void clampPeriod(int& p) const;
    int periodOf(int note, int c2spd) const;
    int waveValue(int wave, int pos);
    void mixChannel(Channel& c, int ci, float* out, int n, bool dry);
    void snapshot(std::vector<ChanState>& out, TickInfo& info) const;

    const Module& m_;
    int rate_;
    std::vector<Channel> ch_;
    int orderPos_ = 0, row_ = 0, tick_ = 0, speed_ = 6, tempo_ = 125, globalVol_ = 64;
    int jumpOrder_ = -1, breakRow_ = -1, loopJumpRow_ = -1, patDelay_ = 0, patDelayDone_ = 0;
    int64_t pos_ = 0;           // samples rendered since the song start
    int samplesLeft_ = 0;       // in the current tick
    double tickFrac_ = 0;
    bool ended_ = false, started_ = false;
    uint32_t rng_ = 1;
    std::vector<std::vector<bool>> visited_;
    std::function<void()> onTick_;
};

}  // namespace modvis
