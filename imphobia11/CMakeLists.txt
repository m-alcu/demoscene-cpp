cmake_minimum_required(VERSION 3.16)
project(imphobia11 CXX)

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

add_executable(imphobia11 src/main.cpp)
target_link_libraries(imphobia11 PRIVATE core SDL3::SDL3 Threads::Threads)

enable_testing()
add_executable(imphobia11_tests tests/tests.cpp)
target_link_libraries(imphobia11_tests PRIVATE core)
add_test(NAME imphobia11_tests COMMAND imphobia11_tests ${CMAKE_SOURCE_DIR})
