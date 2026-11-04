cmake_minimum_required(VERSION 3.16)
project(desert CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# SDL3 on this system is installed in /usr/local; its exported CMake config is
# broken, so locate it through pkg-config instead (same as tsbdemo).
find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL3 REQUIRED IMPORTED_TARGET sdl3)
add_library(SDL3::SDL3 ALIAS PkgConfig::SDL3)

add_executable(desert
    src/main.cpp
    src/desert.cpp
)
target_link_libraries(desert PRIVATE SDL3::SDL3)

# unit tests for the intro's routines; no SDL involved
enable_testing()
add_executable(desert_tests tests/desert_tests.cpp src/desert.cpp)
target_include_directories(desert_tests PRIVATE src)
add_test(NAME desert_tests COMMAND desert_tests)
