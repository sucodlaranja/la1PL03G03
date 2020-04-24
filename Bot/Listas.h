//
// Created by joao on 24/04/20.
//

#include "Camada de dados.h"

#ifndef BOT_LISTAS_H
#define BOT_LISTAS_H
typedef struct nodo {
    COORDENADA *valor;
    struct nodo *prox;
} NODO, *LISTA;

LISTA criar_lista();
LISTA insere_cabeca(LISTA L, COORDENADA valor);
LISTA proximo(LISTA L);

#endif //BOT_LISTAS_H
