cmake_minimum_required(VERSION 3.16)
project(ctslasse CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
# x87 arithmetic must stay as written: no contraction into fused multiply-adds
add_compile_options(-Wall -Wextra -ffp-contract=off)

# SDL3 through pkg-config
find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL3 REQUIRED IMPORTED_TARGET sdl3)
find_package(Threads REQUIRED)

file(GLOB CORE_SOURCES src/*.cpp)
list(REMOVE_ITEM CORE_SOURCES ${CMAKE_SOURCE_DIR}/src/main.cpp)
add_library(core STATIC ${CORE_SOURCES})
target_include_directories(core PUBLIC src)
target_link_libraries(core PUBLIC Threads::Threads)

add_executable(ctslasse src/main.cpp)
target_link_libraries(ctslasse PRIVATE core PkgConfig::SDL3)

enable_testing()
add_executable(ctslasse_tests tests/tests.cpp)
target_link_libraries(ctslasse_tests PRIVATE core)
add_test(NAME ctslasse_tests COMMAND ctslasse_tests ${CMAKE_SOURCE_DIR})
set_tests_properties(ctslasse_tests PROPERTIES TIMEOUT 3600)
