cmake_minimum_required(VERSION 3.16)
project(ctslasse_tunnel CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
# x87 arithmetic must stay as written: no contraction into fused multiply-adds
add_compile_options(-Wall -Wextra -ffp-contract=off)

# SDL3 through pkg-config (its exported CMake config is broken here)
find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL3 REQUIRED IMPORTED_TARGET sdl3)

# The part itself, with no SDL in it (the tests link it alone). In the order
# a frame goes through it:
add_library(core STATIC
    # once, at start-up: the texture (and its logo), the light tables, the palettes
    src/precalc/logo.cpp
    src/precalc/texture.cpp
    src/precalc/light.cpp
    src/precalc/palette.cpp
    # each frame: the time -> the effects on, their parameters, the DAC
    src/timeline.cpp
    # the effects, each written into a grid of (u, v, light)
    src/effects/drops.cpp
    src/effects/plane.cpp
    src/effects/tunnel.cpp
    src/effects/blend.cpp
    # the grid -> pixels
    src/render/mapper.cpp
    src/render/truecolor.cpp
    # the class that joins them
    src/tunnel.cpp)
target_include_directories(core PUBLIC src)
# the 32-bit picture is drawn in bands of rows, one per thread
find_package(Threads REQUIRED)
target_link_libraries(core PUBLIC Threads::Threads)

# The player: the window, the keys, the loop, the inspector, the frame dump
add_executable(ctslasse-tunnel src/app/main.cpp src/app/playback.cpp src/app/inspector.cpp)
target_link_libraries(ctslasse-tunnel PRIVATE core PkgConfig::SDL3)

enable_testing()
add_executable(tunnel_tests tests/tests.cpp)
target_link_libraries(tunnel_tests PRIVATE core)
add_test(NAME tunnel_tests COMMAND tunnel_tests ${CMAKE_SOURCE_DIR}/tests/ref.txt)
