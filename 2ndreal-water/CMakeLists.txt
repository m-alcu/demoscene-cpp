cmake_minimum_required(VERSION 3.16)
project(2ndreal-water CXX)

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

add_library(core STATIC src/water.cpp)
target_include_directories(core PUBLIC src)
target_link_libraries(core PUBLIC SDL3::SDL3)   # SDL_LoadPNG

add_executable(2ndreal-water src/main.cpp)
target_link_libraries(2ndreal-water PRIVATE core SDL3::SDL3)

enable_testing()
add_executable(water_tests tests/tests.cpp)
target_link_libraries(water_tests PRIVATE core)
add_test(NAME water_tests COMMAND water_tests ${CMAKE_SOURCE_DIR})
