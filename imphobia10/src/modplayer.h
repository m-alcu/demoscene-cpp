// A module player for Imphobia #10's background tunes: DATA.001 "late
// visit", DATA.003 "stolen data" and DATA.004 "out of control" (4-channel
// ProTracker) and DATA.002 "Midnight Rhumba" (8-channel FastTracker); the
// NFO credits Scorpik, The Rew, NHP and Claws. No SDL, so the tests can use
// it.
//
// It is not a translation of the mag's music code (Robban's GUS replay, the
// SoundBlaster routines of The Wizard and Numerus); it plays the modules by
// ProTracker's rules (plus FastTracker's 8xx and E8x panning), mixed at
// 48 kHz with linear interpolation, as a GUS would have. It comes from the
// port of HEX APPEAL's end part, by way of the #12 and #11 ports.
#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace imp {

class ModPlayer {
public:
    static constexpr int kRate = 48000;
    static constexpr int kMaxChannels = 8;

    bool load(const std::string& path);
    bool loadMemory(const std::vector<uint8_t>& data);
    const std::string& error() const { return error_; }

    // Plays the song from its start up to this position and row, without
    // output, so that speed, tempo and the notes still sounding are as they
    // would be there.
    void seek(int position, int row);

    // Stereo float frames, interleaved.
    void render(float* out, int frames);

    void setVolume(int v) { volume_ = v; }   // 0..64, the music system's master volume

    int channels() const { return channels_; }
    int songLength() const { return songLength_; }
    int position() const { return pos_; }
    int row() const { return row_; }
    int tick() const { return tick_; }
    int speed() const { return speed_; }
    int tempo() const { return tempo_; }
    uint64_t rowsPlayed() const { return rowsPlayed_; }

private:
    struct Sample {
        uint32_t start = 0, length = 0, loopStart = 0, loopLength = 0;
        int finetune = 0;
        int volume = 0;
    };
    struct Channel {
        int sample = 0;             // 1..31, 0 none
        const Sample* smp = nullptr;
        double pos = 0.0;           // in sample bytes
        bool playing = false;
        int period = 0, outPeriod = 0, target = 0;
        int volume = 0, outVolume = 0;
        int portaSpeed = 0;
        int vibSpeed = 0, vibDepth = 0, vibPos = 0, vibWave = 0;
        int tremSpeed = 0, tremDepth = 0, tremPos = 0, tremWave = 0;
        int offset = 0;
        int loopRow = 0, loopCount = 0;
        int note = 0, effect = 0, param = 0;
        int finetune = 0;
        float pan = 0.5f;
    };

    void processRow();
    void processTick();
    void trigger(Channel& c, int period);
    void advanceRow();
    void mix(float* out, int frames);
    static int vibratoValue(int wave, int pos);

    std::string error_;
    std::vector<uint8_t> data_;
    std::vector<int8_t> pcm_;
    Sample samples_[32];
    Channel ch_[kMaxChannels];
    uint8_t orders_[128] = {};
    int channels_ = 4, songLength_ = 0, restart_ = 0;
    size_t patternBase_ = 1084;
    int pos_ = 0, row_ = 0, tick_ = 0;
    int speed_ = 6, tempo_ = 125;
    int nextPos_ = -1, nextRow_ = -1;
    int patternDelay_ = 0;
    double tickLeft_ = 0.0;         // output frames left in this tick
    int volume_ = 64;
    uint64_t rowsPlayed_ = 0;
};

}  // namespace imp
