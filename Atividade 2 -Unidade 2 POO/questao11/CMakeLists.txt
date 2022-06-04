cmake_minimum_required(VERSION 3.22)
project(questao11)

set(CMAKE_CXX_STANDARD 14)

set(ArrayList.h)
include_directories(.idea)

add_executable(questao11

        ArrayList.cpp
        ArrayList.h
        main.cpp)
