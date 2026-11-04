#pragma once

#include <string>
#include <vector>
#include <functional>
#include "imgui.h"

// Forward declarations
struct SDL_Window;
struct SDL_Renderer;

struct UIState {
    bool show_info = true;
    bool show_controls = true;
    bool show_files = true;
    float zoom_level = 1.0f;
    float pan_x = 0.0f;
    float pan_y = 0.0f;
    bool paused = false;
    
    // File info
    std::string loaded_file;
    std::string image_format;
    int image_width = 0;
    int image_height = 0;
    int num_planes = 0;
    int num_colors = 0;
    
    // File navigation
    std::vector<std::string> files_in_dir;
    std::vector<std::string> subdirs;          // Rutas completas de subdirectorios
    bool has_parent = false;                   // Se puede subir con ".."
    int current_file_index = -1;
    std::string current_directory;
};

// Forward declarations
class Renderer;
using FileLoadCallback = std::function<void(int)>;
using DirChangeCallback = std::function<void(const std::string&)>;

// Initialize ImGui context
void initImGui(SDL_Window* window, SDL_Renderer* renderer);

// Shutdown ImGui
void shutdownImGui();

// Draw the UI for the current frame
void drawUI(UIState& state, FileLoadCallback on_file_selected,
            DirChangeCallback on_dir_selected);

// Start a new ImGui frame
void imguiBeginFrame();

// End ImGui frame and render
void imguiEndFrame(SDL_Renderer* renderer);

// Apply ImGui style
void applyStyle();
