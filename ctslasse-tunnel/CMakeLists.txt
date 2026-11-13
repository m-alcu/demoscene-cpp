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

add_library(core STATIC src/tunnel.cpp src/grid.cpp)
target_include_directories(core PUBLIC src)

add_executable(ctslasse-tunnel src/main.cpp)
target_link_libraries(ctslasse-tunnel PRIVATE core PkgConfig::SDL3)

enable_testing()
add_executable(tunnel_tests tests/tests.cpp)
target_link_libraries(tunnel_tests PRIVATE core)
add_test(NAME tunnel_tests COMMAND tunnel_tests ${CMAKE_SOURCE_DIR}/tests/ref.txt)
