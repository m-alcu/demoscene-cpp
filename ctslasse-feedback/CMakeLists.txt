cmake_minimum_required(VERSION 3.16)
project(ctslasse_feedback CXX)

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

add_library(core STATIC src/feedback.cpp)
target_include_directories(core PUBLIC src)

set(IMGUI_DIR src/vendor/imgui)
add_library(imgui STATIC
    ${IMGUI_DIR}/imgui.cpp
    ${IMGUI_DIR}/imgui_draw.cpp
    ${IMGUI_DIR}/imgui_tables.cpp
    ${IMGUI_DIR}/imgui_widgets.cpp
    ${IMGUI_DIR}/imgui_impl_sdl3.cpp
    ${IMGUI_DIR}/imgui_impl_sdlrenderer3.cpp)
target_include_directories(imgui PUBLIC ${IMGUI_DIR})
target_link_libraries(imgui PUBLIC PkgConfig::SDL3)
target_compile_options(imgui PRIVATE -w)

add_executable(ctslasse-feedback src/main.cpp)
target_link_libraries(ctslasse-feedback PRIVATE core imgui)

enable_testing()
add_executable(feedback_tests tests/tests.cpp)
target_link_libraries(feedback_tests PRIVATE core)
add_test(NAME feedback_tests COMMAND feedback_tests ${CMAKE_SOURCE_DIR}/tests/ref.txt)
