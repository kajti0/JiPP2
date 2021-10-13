cmake_minimum_required(VERSION 3.20)
project(JiPP)

set(CMAKE_CXX_STANDARD 17)

#add_executable(JiPP simpleCalc/main.cpp)

add_subdirectory(allocation_basics)
add_subdirectory(simpleCalc)

set(CMAKE_EXE_LINKER_FLAGS ${CMAKE_EXE_LINKER_FLAGS} "-static")


