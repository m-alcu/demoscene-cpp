cmake_minimum_required(VERSION 3.16)
project(insert_chipcity CXX)

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
set(OpenGL_GL_PREFERENCE GLVND)
find_package(OpenGL REQUIRED)

# The scene: x87 maths (long double, fcos/fsin) - no fast-math, no FMA contraction.
# GL headers only (gl_sink.h uses gl.h's enums); the core does not link against GL.
add_library(core STATIC src/chipcity.cpp)
target_include_directories(core PUBLIC src ${OPENGL_INCLUDE_DIR})
target_compile_options(core PRIVATE -ffp-contract=off -fno-fast-math)

add_executable(insert-chipcity src/main.cpp)
target_link_libraries(insert-chipcity PRIVATE core SDL3::SDL3 OpenGL::GL)

enable_testing()
add_executable(insert_chipcity_tests tests/tests.cpp tests/gl_record.cpp)
target_link_libraries(insert_chipcity_tests PRIVATE core SDL3::SDL3)
add_test(NAME insert_chipcity_tests
         COMMAND insert_chipcity_tests ${CMAKE_SOURCE_DIR}/data ${CMAKE_SOURCE_DIR}/tests/data)
