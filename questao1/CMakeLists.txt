cmake_minimum_required(VERSION 3.22.1)
project(questao1 VERSION 0.1 LANGUAGES CXX )

include_directories( include )

add_executable( program
                src/main.cpp
                src/Funcionario.cpp )