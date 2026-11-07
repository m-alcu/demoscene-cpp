// browser.h: the module browser (folders, and a recursive search below a folder)
#pragma once

#include <atomic>
#include <filesystem>
#include <mutex>
#include <optional>
#include <string>
#include <thread>
#include <vector>

namespace modvis {

namespace fs = std::filesystem;

bool isModuleFile(const fs::path& p);

class Browser {
public:
    explicit Browser(fs::path start);
    ~Browser();

    // draws the panel; returns a file the user chose to play, with the list it was chosen from
    struct Choice {
        fs::path file;
        std::vector<fs::path> playlist;
    };
    std::optional<Choice> draw(const fs::path& playing);

    void open(const fs::path& dir);
    const fs::path& dir() const { return dir_; }

private:
    struct Entry {
        fs::path path;
        bool isDir;
        uintmax_t size;
    };
    void startSearch();
    void stopSearch();
    std::vector<fs::path> moduleFiles() const;

    fs::path dir_;
    std::vector<Entry> entries_;
    std::string error_;
    char pathBuf_[1024] = {};
    char filter_[128] = {};

    // search
    char query_[128] = {};
    fs::path searchRoot_, searchedRoot_;
    std::thread thread_;
    std::atomic<bool> cancel_{false}, running_{false};
    std::atomic<size_t> scanned_{0};
    mutable std::mutex mx_;
    std::vector<fs::path> results_;
    int tab_ = 0;
};

}  // namespace modvis
