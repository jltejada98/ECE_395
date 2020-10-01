cmake_minimum_required(VERSION 3.17)
project(HW5Assigned)

set(CMAKE_CXX_STANDARD 14)

include_directories(tejada)

add_executable(HW5Assigned
        tejada/Array2D.cpp
        tejada/Array2D.h
        tejada/main.cpp)
