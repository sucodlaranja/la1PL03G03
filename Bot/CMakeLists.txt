cmake_minimum_required(VERSION 3.16)
project(Bot C)

set(CMAKE_C_STANDARD 99)

add_executable(Bot main.c "Camada de dados.c" "Camada de dados.h" Listas.c Listas.h "logica pograma.c" "logica pograma.h")