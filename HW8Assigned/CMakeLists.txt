cmake_minimum_required(VERSION 3.17)
project(HW8Assigned)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HW8Assigned
        main.cpp
        Person.cpp
        Person.h
        Student.cpp
        Student.h
        TA.cpp
        TA.h
        Teacher.cpp
        Teacher.h)
