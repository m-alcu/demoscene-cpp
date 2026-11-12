cmake_minimum_required(VERSION 3.16)
project(ctslasse_textures CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# SDL3 through pkg-config (its exported CMake config is broken here)
find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL3 REQUIRED IMPORTED_TARGET sdl3)

add_library(texgen STATIC src/texgen.cpp)
target_include_directories(texgen PUBLIC src)
target_compile_options(texgen PRIVATE -Wall -Wextra)

set(IMGUI_DIR src/vendor/imgui)
add_library(imgui STATIC
    ${IMGUI_DIR}/imgui.cpp
    ${IMGUI_DIR}/imgui_draw.cpp
    ${IMGUI_DIR}/imgui_tables.cpp
    ${IMGUI_DIR}/imgui_widgets.cpp
    ${IMGUI_DIR}/imgui_impl_sdl3.cpp
    ${IMGUI_DIR}/imgui_impl_sdlrenderer3.cpp)
target_include_directories(imgui PUBLIC ${IMGUI_DIR})
target_link_libraries(imgui PUBLIC PkgConfig::SDL3)

add_executable(ctslasse-textures src/main.cpp)
target_link_libraries(ctslasse-textures PRIVATE texgen imgui)
target_compile_options(ctslasse-textures PRIVATE -Wall -Wextra)

enable_testing()
add_executable(texgen_tests tests/tests.cpp)
target_link_libraries(texgen_tests PRIVATE texgen)
add_test(NAME texgen_tests COMMAND texgen_tests)
