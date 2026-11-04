// The intro on its own thread: each Host::frame() (the original waiting
// for the retrace or the timer) hands the frame back to the caller of
// step(), which runs the timer's callbacks and gives it the next. No SDL.
#pragma once

#include <atomic>
#include <condition_variable>
#include <memory>
#include <mutex>
#include <thread>

#include "intro.h"

namespace cyb {

struct Quit {};

class Runner : public Host {
public:
    std::unique_ptr<Intro> intro;
    std::atomic<bool> esc{false};

    void start() {
        thread_ = std::thread([this] {
            try {
                intro->run();
            } catch (const Quit&) {
            }
            std::lock_guard<std::mutex> g(m_);
            done_ = true;
            progTurn_ = false;
            cv_.notify_all();
        });
    }
    // One frame: the callbacks due at its start, then the intro until it
    // waits again. False once it has ended.
    bool step() {
        std::unique_lock<std::mutex> l(m_);
        if (done_) return false;
        if (started_) intro->tick();
        started_ = true;
        progTurn_ = true;
        cv_.notify_all();
        cv_.wait(l, [&] { return !progTurn_ || done_; });
        return true;
    }
    void stop() {
        {
            std::lock_guard<std::mutex> g(m_);
            quit_ = true;
            cv_.notify_all();
        }
        if (thread_.joinable()) thread_.join();
    }
    void frame() override {
        std::unique_lock<std::mutex> l(m_);
        progTurn_ = false;
        cv_.notify_all();
        cv_.wait(l, [&] { return progTurn_ || quit_; });
        if (quit_) throw Quit{};
    }
    bool escape() override { return esc; }

private:
    std::thread thread_;
    std::mutex m_;
    std::condition_variable cv_;
    bool progTurn_ = false, done_ = false, quit_ = false, started_ = false;
};

}  // namespace cyb
