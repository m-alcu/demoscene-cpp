cmake_minimum_required(VERSION 3.16)
project(ctslasse CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
# x87 arithmetic must stay as written: no contraction into fused multiply-adds
add_compile_options(-Wall -Wextra -ffp-contract=off)

find_package(Threads REQUIRED)

file(GLOB CORE_SOURCES src/*.cpp)
list(REMOVE_ITEM CORE_SOURCES ${CMAKE_SOURCE_DIR}/src/main.cpp)
add_library(core STATIC ${CORE_SOURCES})
target_include_directories(core PUBLIC src)
target_link_libraries(core PUBLIC Threads::Threads)

add_executable(ctslasse src/main.cpp)
target_link_libraries(ctslasse PRIVATE core)
