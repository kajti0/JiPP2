CMAKE_MINIMUM_REQUIRED(VERSION 3.20)
project(Punkt)

set(CMAKE_CXX_STANDARD 17)
include_directories(inc)
add_executable(Punkt
        src/main.cpp
        src/Punkt.cpp
        src/Figura.cpp)