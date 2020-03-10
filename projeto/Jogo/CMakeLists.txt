cmake_minimum_required(VERSION 3.15)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(Jogo main.c camada_dados.c camada_dados.h interface.c interface.h logica_programa.c logica_programa.h)