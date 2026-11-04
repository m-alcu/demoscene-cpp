#include "ui.h"
#include <SDL3/SDL.h>
#include "imgui_impl_sdl3.h"
#include "imgui_impl_sdlrenderer3.h"

// Color palette helper
static ImVec4 rgb(int r, int g, int b, float a = 1.0f) {
    return ImVec4(r / 255.0f, g / 255.0f, b / 255.0f, a);
}

void applyStyle() {
    ImGuiStyle& style = ImGui::GetStyle();
    ImGuiIO& io = ImGui::GetIO();

    // Colors - dark theme
    ImVec4* colors = style.Colors;
    colors[ImGuiCol_WindowBg] = rgb(30, 30, 35);
    colors[ImGuiCol_ChildBg] = rgb(25, 25, 30);
    colors[ImGuiCol_PopupBg] = rgb(20, 20, 25);
    colors[ImGuiCol_Border] = rgb(60, 60, 70);
    colors[ImGuiCol_BorderShadow] = rgb(0, 0, 0);
    colors[ImGuiCol_FrameBg] = rgb(50, 50, 60);
    colors[ImGuiCol_FrameBgHovered] = rgb(60, 60, 75);
    colors[ImGuiCol_FrameBgActive] = rgb(70, 70, 85);
    colors[ImGuiCol_TitleBg] = rgb(20, 20, 25);
    colors[ImGuiCol_TitleBgActive] = rgb(30, 30, 40);
    colors[ImGuiCol_TitleBgCollapsed] = rgb(20, 20, 25);
    colors[ImGuiCol_MenuBarBg] = rgb(35, 35, 40);
    colors[ImGuiCol_ScrollbarBg] = rgb(30, 30, 35);
    colors[ImGuiCol_ScrollbarGrab] = rgb(70, 70, 80);
    colors[ImGuiCol_ScrollbarGrabHovered] = rgb(80, 80, 90);
    colors[ImGuiCol_ScrollbarGrabActive] = rgb(90, 90, 100);
    colors[ImGuiCol_CheckMark] = rgb(100, 200, 255);
    colors[ImGuiCol_SliderGrab] = rgb(100, 200, 255);
    colors[ImGuiCol_SliderGrabActive] = rgb(120, 220, 255);
    colors[ImGuiCol_Button] = rgb(60, 60, 70);
    colors[ImGuiCol_ButtonHovered] = rgb(80, 80, 90);
    colors[ImGuiCol_ButtonActive] = rgb(100, 200, 255);
    colors[ImGuiCol_Header] = rgb(60, 60, 75);
    colors[ImGuiCol_HeaderHovered] = rgb(80, 80, 95);
    colors[ImGuiCol_HeaderActive] = rgb(100, 200, 255);
    colors[ImGuiCol_Separator] = rgb(60, 60, 70);
    colors[ImGuiCol_SeparatorHovered] = rgb(80, 80, 90);
    colors[ImGuiCol_SeparatorActive] = rgb(100, 200, 255);
    colors[ImGuiCol_ResizeGrip] = rgb(100, 100, 120);
    colors[ImGuiCol_ResizeGripHovered] = rgb(120, 120, 150);
    colors[ImGuiCol_ResizeGripActive] = rgb(150, 150, 200);
    colors[ImGuiCol_Tab] = rgb(50, 50, 60);
    colors[ImGuiCol_TabHovered] = rgb(80, 80, 90);
    colors[ImGuiCol_TabActive] = rgb(100, 100, 120);
    colors[ImGuiCol_TabUnfocusedActive] = rgb(80, 80, 90);
    colors[ImGuiCol_PlotLines] = rgb(100, 200, 255);
    colors[ImGuiCol_PlotLinesHovered] = rgb(120, 220, 255);
    colors[ImGuiCol_PlotHistogram] = rgb(100, 150, 255);
    colors[ImGuiCol_PlotHistogramHovered] = rgb(120, 170, 255);
    colors[ImGuiCol_TextSelectedBg] = rgb(100, 200, 255, 0.4f);
    colors[ImGuiCol_DragDropTarget] = rgb(100, 200, 255);
    colors[ImGuiCol_NavHighlight] = rgb(100, 200, 255);
    colors[ImGuiCol_NavWindowingHighlight] = rgb(100, 200, 255, 0.7f);

    // Style parameters
    style.WindowPadding = ImVec2(10, 10);
    style.FramePadding = ImVec2(8, 6);
    style.ItemSpacing = ImVec2(10, 8);
    style.ItemInnerSpacing = ImVec2(4, 4);
    style.IndentSpacing = 20;
    style.ScrollbarSize = 14;
    style.GrabMinSize = 10;
    style.WindowRounding = 5;
    style.FrameRounding = 3;
    style.PopupRounding = 3;
    style.ScrollbarRounding = 3;
    style.GrabRounding = 2;
    style.TabRounding = 3;
}

void initImGui(SDL_Window* window, SDL_Renderer* renderer) {
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    (void)io; // Suppress unused variable warning
    io.IniFilename = nullptr;  // Don't persist imgui.ini

    applyStyle();

    // Setup ImGui SDL3 backend
    ImGui_ImplSDL3_InitForSDLRenderer(window, renderer);
    ImGui_ImplSDLRenderer3_Init(renderer);
}

void shutdownImGui() {
    ImGui_ImplSDLRenderer3_Shutdown();
    ImGui_ImplSDL3_Shutdown();
    ImGui::DestroyContext();
}

void imguiBeginFrame() {
    ImGui_ImplSDLRenderer3_NewFrame();
    ImGui_ImplSDL3_NewFrame();
    ImGui::NewFrame();
}

void imguiEndFrame(SDL_Renderer* renderer) {
    ImGui::Render();
    ImGui_ImplSDLRenderer3_RenderDrawData(ImGui::GetDrawData(), renderer);
}

void drawUI(UIState& state) {
    // Info panel
    if (state.show_info) {
        ImGui::SetNextWindowPos(ImVec2(10, 10), ImGuiCond_FirstUseEver);
        ImGui::SetNextWindowSize(ImVec2(350, 300), ImGuiCond_FirstUseEver);
        if (ImGui::Begin("Información", &state.show_info, ImGuiWindowFlags_AlwaysAutoResize)) {
            ImGui::Text("Archivo: %s", state.loaded_file.c_str());
            ImGui::Separator();
            ImGui::LabelText("Resolución", "%dx%d", state.image_width, state.image_height);
            ImGui::LabelText("Planos", "%d", state.num_planes);
            ImGui::LabelText("Colores", "%d", state.num_colors);
            ImGui::End();
        }
    }

    // Controls panel
    if (state.show_controls) {
        ImGui::SetNextWindowPos(ImVec2(10, 320), ImGuiCond_FirstUseEver);
        ImGui::SetNextWindowSize(ImVec2(350, 250), ImGuiCond_FirstUseEver);
        if (ImGui::Begin("Controles", &state.show_controls, ImGuiWindowFlags_AlwaysAutoResize)) {
            ImGui::SliderFloat("Zoom", &state.zoom_level, 0.1f, 5.0f);
            ImGui::SliderFloat("Pan X", &state.pan_x, -500.0f, 500.0f);
            ImGui::SliderFloat("Pan Y", &state.pan_y, -500.0f, 500.0f);
            ImGui::Checkbox("Pausado", &state.paused);
            
            ImGui::Separator();
            ImGui::Text("Atajos de teclado:");
            ImGui::BulletText("ESC o Q - Salir");
            ImGui::BulletText("I - Toggle Información");
            ImGui::BulletText("C - Toggle Controles");
            
            ImGui::End();
        }
    }
}
