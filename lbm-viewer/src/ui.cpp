#include "ui.h"
#include <SDL3/SDL.h>
#include "imgui_impl_sdl3.h"
#include "imgui_impl_sdlrenderer3.h"
#include <filesystem>

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

void drawUI(UIState& state, FileLoadCallback on_file_selected,
            DirChangeCallback on_dir_selected) {
    // Info panel
    if (state.show_info) {
        ImGui::SetNextWindowPos(ImVec2(10, 10), ImGuiCond_FirstUseEver);
        ImGui::SetNextWindowSize(ImVec2(400, 350), ImGuiCond_FirstUseEver);
        if (ImGui::Begin("Información", &state.show_info)) {
            ImGui::Text("Archivo: %s", state.loaded_file.c_str());
            
            if (state.current_file_index >= 0 && !state.files_in_dir.empty()) {
                ImGui::Text("Posición: %d / %zu", state.current_file_index + 1, state.files_in_dir.size());
            }
            
            ImGui::Separator();
            ImGui::LabelText("Formato", "%s", state.image_format.c_str());
            ImGui::LabelText("Resolución", "%dx%d", state.image_width, state.image_height);
            if (state.image_format == "LBM") {
                ImGui::LabelText("Planos", "%d", state.num_planes);
            } else {
                ImGui::LabelText("Bits/píxel", "%d", state.num_planes);
            }
            if (state.num_colors > 0) {
                ImGui::LabelText("Colores", "%d", state.num_colors);
            } else {
                ImGui::LabelText("Colores", "color real");
            }
            
            ImGui::Separator();
            if (!state.files_in_dir.empty()) {
                ImGui::Text("Navegación:");
                if (ImGui::Button("← Anterior (P)")) {
                    // Navegación será controlada por teclas
                }
                ImGui::SameLine();
                if (ImGui::Button("Siguiente (N) →")) {
                    // Navegación será controlada por teclas
                }
            }
        }
        ImGui::End();
    }

    // Files panel with list
    if (state.show_files && !state.current_directory.empty()) {
        ImGui::SetNextWindowPos(ImVec2(420, 10), ImGuiCond_FirstUseEver);
        ImGui::SetNextWindowSize(ImVec2(500, 700), ImGuiCond_FirstUseEver);
        if (ImGui::Begin("Archivos (L)", &state.show_files)) {
            ImGui::TextWrapped("%s", state.current_directory.c_str());
            ImGui::Text("%zu carpetas, %zu imágenes",
                        state.subdirs.size(), state.files_in_dir.size());
            ImGui::Separator();

            // Las acciones se aplican tras dibujar la lista, porque cambian los vectores
            std::string pending_dir;
            int pending_file = -1;
            static const ImVec4 dir_color = rgb(240, 200, 100);

            if (ImGui::BeginListBox("##FilesListBox", ImVec2(-1, -40))) {
                if (state.has_parent) {
                    ImGui::PushStyleColor(ImGuiCol_Text, dir_color);
                    if (ImGui::Selectable("[..] Subir")) {
                        pending_dir = std::filesystem::path(state.current_directory).parent_path().string();
                    }
                    ImGui::PopStyleColor();
                }

                ImGui::PushStyleColor(ImGuiCol_Text, dir_color);
                for (const auto& dir : state.subdirs) {
                    std::string label = "[DIR] " + std::filesystem::path(dir).filename().string() + "/";
                    if (ImGui::Selectable(label.c_str())) {
                        pending_dir = dir;
                    }
                }
                ImGui::PopStyleColor();

                for (int i = 0; i < (int)state.files_in_dir.size(); ++i) {
                    std::string filename = std::filesystem::path(state.files_in_dir[i]).filename().string();
                    bool is_selected = (i == state.current_file_index);

                    if (ImGui::Selectable(filename.c_str(), is_selected)) {
                        pending_file = i;
                    }

                    // Scroll al archivo actual
                    if (is_selected) {
                        ImGui::SetItemDefaultFocus();
                    }
                }
                ImGui::EndListBox();
            }

            ImGui::TextDisabled("Clic en carpeta para entrar, Backspace para subir");

            if (!pending_dir.empty() && on_dir_selected) {
                on_dir_selected(pending_dir);
            } else if (pending_file >= 0 && on_file_selected) {
                on_file_selected(pending_file);
            }
        }
        ImGui::End();
    }

    // Controls panel
    if (state.show_controls) {
        ImGui::SetNextWindowPos(ImVec2(10, 370), ImGuiCond_FirstUseEver);
        ImGui::SetNextWindowSize(ImVec2(400, 320), ImGuiCond_FirstUseEver);
        if (ImGui::Begin("Controles", &state.show_controls)) {
            ImGui::SliderFloat("Zoom", &state.zoom_level, 0.1f, 5.0f);
            ImGui::SliderFloat("Pan X", &state.pan_x, -500.0f, 500.0f);
            ImGui::SliderFloat("Pan Y", &state.pan_y, -500.0f, 500.0f);
            ImGui::Checkbox("Pausado", &state.paused);
            
            ImGui::Separator();
            ImGui::Text("Atajos de teclado:");
            ImGui::BulletText("ESC o Q - Salir");
            ImGui::BulletText("I - Toggle Información");
            ImGui::BulletText("C - Toggle Controles");
            ImGui::BulletText("L - Toggle Lista Archivos");
            ImGui::BulletText("Backspace - Directorio padre");
            ImGui::BulletText("← o P - Archivo anterior");
            ImGui::BulletText("→ o N - Archivo siguiente");
        }
        ImGui::End();
    }
}
