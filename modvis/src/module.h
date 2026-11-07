// module.h: a tracker module in memory (ProTracker MOD or Scream Tracker 3 S3M)
#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace modvis {

enum : uint8_t { NOTE_NONE = 255, NOTE_CUT = 254, VOL_NONE = 255 };

// one pattern cell; note is octave*12+semitone (C-4 = 48 = 8363 Hz at c2spd 8363),
// cmd/param are the format's own (MOD: 0..15 hex digit, S3M: 1..26 = A..Z)
struct Cell {
    uint8_t note = NOTE_NONE;
    uint8_t inst = 0;
    uint8_t vol = VOL_NONE;
    uint8_t cmd = 0;
    uint8_t param = 0;
};

struct Pattern {
    int rows = 64;
    std::vector<Cell> cells;  // rows * channels
};

struct Sample {
    std::string name;
    std::vector<float> data;  // mono, -1..1
    uint32_t loopStart = 0, loopEnd = 0;
    bool loop = false;
    int volume = 64;
    int c2spd = 8363;
    int finetune = 0;  // MOD: -8..7
    std::vector<float> thumbMin, thumbMax;  // a small waveform for the UI
};

enum class Format { MOD, S3M };

struct Module {
    Format format = Format::MOD;
    std::string title, typeName, tracker;
    int channels = 4;
    std::vector<uint8_t> orders;  // S3M: 254 = skip ("+++"), 255 = end
    std::vector<Pattern> patterns;
    std::vector<Sample> samples;  // instrument n is samples[n-1]
    int initSpeed = 6, initTempo = 125, globalVolume = 64;
    std::vector<int> pan;  // per channel, 0 (left) .. 255 (right)
    bool amigaLimits = false;
    bool fastVolSlides = false;  // S3M: volume slides also on tick 0
    bool stereo = true;

    const Cell& cell(int pattern, int row, int ch) const {
        return patterns[pattern].cells[(size_t)row * channels + ch];
    }
    // display name of a note: "C-4"; MOD notes are shown in ProTracker octaves
    std::string noteName(uint8_t note) const;
    // display text of an effect: "A06", "..."
    std::string effectText(uint8_t cmd, uint8_t param) const;
};

// loads a .mod or .s3m (by content, then extension); throws std::runtime_error
Module loadModule(const std::string& path);

}  // namespace modvis
