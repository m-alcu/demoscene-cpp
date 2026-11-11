cmake_minimum_required(VERSION 3.16)
project(tunnel_rotozoom CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
add_compile_options(-Wall -Wextra)

# SDL3 through pkg-config (its exported CMake config is broken here)
find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL3 REQUIRED IMPORTED_TARGET sdl3)

add_executable(tunnel-rotozoom src/main.cpp src/demo.cpp)
target_include_directories(tunnel-rotozoom PRIVATE src)
target_link_libraries(tunnel-rotozoom PRIVATE PkgConfig::SDL3)
