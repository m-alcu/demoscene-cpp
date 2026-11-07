cmake_minimum_required(VERSION 3.16)
project(show CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
add_compile_options(-Wall -Wextra -ffp-contract=off)

find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL3 REQUIRED IMPORTED_TARGET sdl3)
find_package(Threads REQUIRED)

# the translated programs (src/gen, from the analysis's translate.py): big
# functions with many labels; -O1 keeps their compile times down
file(GLOB GEN_SOURCES src/gen/*.cpp)
set_source_files_properties(${GEN_SOURCES} PROPERTIES COMPILE_OPTIONS "-O1;-Wno-unused-label;-Wno-unused-variable")

file(GLOB CORE_SOURCES src/*.cpp)
list(REMOVE_ITEM CORE_SOURCES ${CMAKE_SOURCE_DIR}/src/main.cpp)
# (an object library: the translations register themselves at static init)
add_library(core OBJECT ${CORE_SOURCES} ${GEN_SOURCES})
target_include_directories(core PUBLIC src)
target_link_libraries(core PUBLIC Threads::Threads)

add_executable(show src/main.cpp $<TARGET_OBJECTS:core>)
target_include_directories(show PRIVATE src)
target_link_libraries(show PRIVATE PkgConfig::SDL3 Threads::Threads)

enable_testing()
add_executable(show_tests tests/tests.cpp $<TARGET_OBJECTS:core>)
target_include_directories(show_tests PRIVATE src)
target_link_libraries(show_tests PRIVATE Threads::Threads)
add_test(NAME show_tests COMMAND show_tests ${CMAKE_SOURCE_DIR})
set_tests_properties(show_tests PROPERTIES TIMEOUT 3600)
