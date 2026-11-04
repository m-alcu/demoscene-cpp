#pragma once

#include <string>
#include <vector>
#include "imgui.h"

// Forward declarations
struct SDL_Window;
struct SDL_Renderer;

struct UIState {
    bool show_info = true;
    bool show_controls = true;
    float zoom_level = 1.0f;
    float pan_x = 0.0f;
    float pan_y = 0.0f;
    bool paused = false;
    
    // File info
    std::string loaded_file;
    int image_width = 0;
    int image_height = 0;
    int num_planes = 0;
    int num_colors = 0;
};

// Initialize ImGui context
void initImGui(SDL_Window* window, SDL_Renderer* renderer);

// Shutdown ImGui
void shutdownImGui();

// Draw the UI for the current frame
void drawUI(UIState& state);

// Start a new ImGui frame
void imguiBeginFrame();

// End ImGui frame and render
void imguiEndFrame(SDL_Renderer* renderer);

// Apply ImGui style
void applyStyle();
