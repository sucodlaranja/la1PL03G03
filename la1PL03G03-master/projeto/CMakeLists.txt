cmake_minimum_required(VERSION 3.15)
project(projeto C)

set(CMAKE_C_STANDARD 99)

add_executable(projeto main.c camada_dados.c logica_pograma.c camada_dados.h logica_pograma.h interface.c interface.h)