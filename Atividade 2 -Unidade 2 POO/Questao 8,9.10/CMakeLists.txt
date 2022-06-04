cmake_minimum_required(VERSION 3.22)
project(Questao_8_9_10)

set(CMAKE_CXX_STANDARD 14)

set(Pessoa.h agenda.h)

add_executable(Questao_8_9_10
        agenda.cpp
        agenda.h
        main.cpp
        Pessoa.cpp
        Pessoa.h)
