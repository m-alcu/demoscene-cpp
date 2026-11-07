cmake_minimum_required(VERSION 3.16)
project(kaleido_bars CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
add_compile_options(-Wall -Wextra)

# SDL3 through pkg-config (its exported CMake config is broken here)
find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL3 REQUIRED IMPORTED_TARGET sdl3)
add_library(SDL3::SDL3 ALIAS PkgConfig::SDL3)

add_library(core STATIC src/machine.cpp src/video.cpp src/demo.cpp)
target_include_directories(core PUBLIC src)
target_link_libraries(core PUBLIC SDL3::SDL3)   # SDL_LoadPNG for the textures

add_executable(kaleido-bars src/main.cpp)
target_link_libraries(kaleido-bars PRIVATE core SDL3::SDL3)

enable_testing()
add_executable(kaleido_bars_tests tests/tests.cpp)
target_link_libraries(kaleido_bars_tests PRIVATE core)
add_test(NAME kaleido_bars_tests COMMAND kaleido_bars_tests ${CMAKE_SOURCE_DIR})
