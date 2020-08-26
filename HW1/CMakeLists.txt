cmake_minimum_required(VERSION 3.17)
project(HW1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(PartACode)

add_executable(HW1
        PartACode/Address.cpp
        PartACode/Address.h
        PartACode/main.cpp
        PartACode/output
        )

#Removed tejada/B/1/HW1.cpp tejada/B/1/Automobile.cpp tejada/B/1/Automobile.h
#Since it will run using a seperate makefile (Since each has their own independent main function.
#Removed HW1.pdf as well.
