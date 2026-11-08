cmake_minimum_required(VERSION 3.16)
project(megablast_blob CXX)

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

add_library(core STATIC src/blob.cpp)
target_include_directories(core PUBLIC src)

add_executable(megablast-blob src/main.cpp)
target_link_libraries(megablast-blob PRIVATE core SDL3::SDL3)

enable_testing()
add_executable(megablast_blob_tests tests/tests.cpp)
target_link_libraries(megablast_blob_tests PRIVATE core)
add_test(NAME megablast_blob_tests COMMAND megablast_blob_tests)
