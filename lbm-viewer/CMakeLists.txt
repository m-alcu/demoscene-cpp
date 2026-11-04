cmake_minimum_required(VERSION 3.20)
project(SDL3LBMViewer)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find SDL3
find_package(SDL3 REQUIRED CONFIG)

# ImGui directory
set(IMGUI_DIR src/vendor/imgui)

# Source files
set(SOURCES
    src/main.cpp
    src/lbm_loader.cpp
    src/image_loader.cpp
    src/renderer.cpp
    src/ui.cpp
    ${IMGUI_DIR}/imgui.cpp
    ${IMGUI_DIR}/imgui_draw.cpp
    ${IMGUI_DIR}/imgui_tables.cpp
    ${IMGUI_DIR}/imgui_widgets.cpp
    ${IMGUI_DIR}/imgui_impl_sdl3.cpp
    ${IMGUI_DIR}/imgui_impl_sdlrenderer3.cpp
)

set(HEADERS
    src/lbm_loader.h
    src/image_loader.h
    src/renderer.h
    src/ui.h
)

# Create executable
add_executable(lbm-viewer ${SOURCES} ${HEADERS})

# Link SDL3
target_link_libraries(lbm-viewer PRIVATE SDL3::SDL3)

# Include directories
target_include_directories(lbm-viewer PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(lbm-viewer PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/${IMGUI_DIR})
target_include_directories(lbm-viewer PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/vendor)

# Enable optimization flags
if(MSVC)
    target_compile_options(lbm-viewer PRIVATE /W4)
else()
    target_compile_options(lbm-viewer PRIVATE -Wall -Wextra -Wpedantic)
endif()

# stb_image es código de terceros: sin warnings de funciones no usadas
if(NOT MSVC)
    set_source_files_properties(src/image_loader.cpp PROPERTIES COMPILE_OPTIONS "-Wno-unused-function")
endif()
