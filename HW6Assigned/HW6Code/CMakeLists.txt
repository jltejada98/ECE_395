cmake_minimum_required(VERSION 3.17)
project(HW6Code)

set(CMAKE_CXX_STANDARD 14)

include_directories(2)

add_executable(HW6Code
        2/Faculty.cpp
        2/Faculty.h
        2/main.cpp
        2/Person.cpp
        2/Person.h
        2/Student.cpp
        2/Student.h)

add_executable(HW6StaticCast
        2/Faculty.cpp
        2/Faculty.h
        2/mainStaticCast.cpp
        2/Person.cpp
        2/Person.h
        2/Student.cpp
        2/Student.h)

add_executable(HW6DynamicCast
        2/Faculty.cpp
        2/Faculty.h
        2/mainDynamicCast.cpp
        2/Person.cpp
        2/Person.h
        2/Student.cpp
        2/Student.h)