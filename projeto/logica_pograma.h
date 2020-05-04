//
// Created by joao on 09/03/20.
//
/**
 * @file ficheiro que acessa a camada de dados
 */
#include "camada_dados.h"
#include "lista.h"

#ifndef PROJETO_LOGICA_POGRAMA_H
/** funcao que testa a validade da coordenada */
int jogar(ESTADO *e, COORDENADA c);
/** funcao que incrementa o numero de jogadas */
int num_jogadas(ESTADO *e);

/** funcao que atualiza o tabuleiro */
void atualizador(ESTADO *e,COORDENADA coord);

/** funcao que coloca numa lista todas as jogadas possiveis */
LISTA criadordeposicoes(ESTADO *e);

/** funcao que acede o array jogadas para o comando pos */
void posicoes(ESTADO *e,int num);

/** atualiza o array das jogadas */
void array(ESTADO *e,int count,const char *lin,const char *col);
#define PROJETO_LOGICA_POGRAMA_H

#endif //PROJETO_LOGICA_POGRAMA_H
