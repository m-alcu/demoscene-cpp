cmake_minimum_required(VERSION 3.16)
project(rbgdemo2 CXX)

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

# the music, without SDL, so the tests can use it too
add_library(music STATIC src/player670.cpp src/opl2.cpp)
target_include_directories(music PUBLIC src)

add_executable(rbgdemo2
    src/main.cpp
    src/demo.cpp
    src/objects.cpp
)
target_link_libraries(rbgdemo2 PRIVATE music SDL3::SDL3)

enable_testing()
add_executable(player_tests tests/player_tests.cpp)
target_link_libraries(player_tests PRIVATE music)
add_test(NAME player_tests COMMAND player_tests ${CMAKE_SOURCE_DIR})
