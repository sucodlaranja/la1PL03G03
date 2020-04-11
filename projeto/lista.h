//
// Created by joao on 06/04/20.
//

#ifndef PROJETO_LISTA_H
#define PROJETO_LISTA_H

#include "camada_dados.h"


typedef struct nodo {
    COORDENADA *valor;
   struct nodo *prox;
} NODO, *LISTA;

LISTA criar_lista();
LISTA insere_cabeca(LISTA L, COORDENADA valor);
void *devolve_cabeca(LISTA L);
LISTA proximo(LISTA L);
LISTA remove_cabeca(LISTA L);
int lista_esta_vazia(LISTA L);
#endif //PROJETO_LISTA_H
