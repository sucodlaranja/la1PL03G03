//
// Created by joao on 09/03/20.
//

#include "camada_dados.h"
#include "lista.h"

#ifndef PROJETO_LOGICA_POGRAMA_H
void mostrar_tabuleiro(ESTADO estado);
int jogar(ESTADO *e, COORDENADA c);
int num_jogadas(ESTADO *e);
void atualizador(ESTADO *e,COORDENADA coord);
LISTA criadordeposicoes(ESTADO *e);
void posicoes(ESTADO *e,int num);
void array(ESTADO *e,int count,const char *lin,const char *col);
#define PROJETO_LOGICA_POGRAMA_H

#endif //PROJETO_LOGICA_POGRAMA_H
