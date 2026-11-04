cmake_minimum_required(VERSION 3.16)
project(imphobia8 CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
add_compile_options(-Wall -Wextra)

# SDL3 on this system is installed in /usr/local; its exported CMake config is
# broken, so locate it through pkg-config instead (as in hexappeal).
find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL3 REQUIRED IMPORTED_TARGET sdl3)
add_library(SDL3::SDL3 ALIAS PkgConfig::SDL3)
find_package(Threads REQUIRED)

# the mag, the VGA and the music, without SDL, so the tests can use them
add_library(core STATIC src/vga.cpp src/mag.cpp src/modplayer.cpp)
target_include_directories(core PUBLIC src)

add_executable(imphobia8 src/main.cpp)
target_link_libraries(imphobia8 PRIVATE core SDL3::SDL3 Threads::Threads)

enable_testing()
add_executable(imphobia8_tests tests/tests.cpp)
target_link_libraries(imphobia8_tests PRIVATE core)
add_test(NAME imphobia8_tests COMMAND imphobia8_tests ${CMAKE_SOURCE_DIR})
