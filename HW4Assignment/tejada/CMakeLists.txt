cmake_minimum_required(VERSION 3.17)
project(tejada)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(tejada
        Address.cpp
        Address.h
        Employee.cpp
        Employee.h
        HW4.cpp
        Person.cpp
        Person.h)
