cmake_minimum_required(VERSION 3.16)
project(hexappeal CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
add_compile_options(-Wall -Wextra)

# SDL3 on this system is installed in /usr/local; its exported CMake config is
# broken, so locate it through pkg-config instead (same as tsbdemo).
find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL3 REQUIRED IMPORTED_TARGET sdl3)
add_library(SDL3::SDL3 ALIAS PkgConfig::SDL3)

# the part and the music, without SDL, so the tests can use them too
add_library(core STATIC src/endpart.cpp src/modplayer.cpp)
target_include_directories(core PUBLIC src)

add_executable(hexappeal src/main.cpp)
target_link_libraries(hexappeal PRIVATE core SDL3::SDL3)

enable_testing()
add_executable(hexappeal_tests tests/tests.cpp)
target_link_libraries(hexappeal_tests PRIVATE core)
add_test(NAME hexappeal_tests COMMAND hexappeal_tests ${CMAKE_SOURCE_DIR})
