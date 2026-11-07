cmake_minimum_required(VERSION 3.16)
project(modvis CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL3 REQUIRED IMPORTED_TARGET sdl3)
find_package(Threads REQUIRED)

# Dear ImGui 1.92.4 (third_party/imgui, MIT) with its SDL3 + SDL_Renderer backends
set(IMGUI_DIR ${CMAKE_SOURCE_DIR}/third_party/imgui)
add_library(imgui STATIC
    ${IMGUI_DIR}/imgui.cpp ${IMGUI_DIR}/imgui_draw.cpp ${IMGUI_DIR}/imgui_tables.cpp
    ${IMGUI_DIR}/imgui_widgets.cpp ${IMGUI_DIR}/imgui_demo.cpp
    ${IMGUI_DIR}/backends/imgui_impl_sdl3.cpp ${IMGUI_DIR}/backends/imgui_impl_sdlrenderer3.cpp)
target_include_directories(imgui PUBLIC ${IMGUI_DIR})
target_link_libraries(imgui PUBLIC PkgConfig::SDL3)

add_executable(modvis src/main.cpp src/module.cpp src/player.cpp src/browser.cpp src/views.cpp)
target_compile_options(modvis PRIVATE -Wall -Wextra)
target_link_libraries(modvis PRIVATE imgui Threads::Threads)
