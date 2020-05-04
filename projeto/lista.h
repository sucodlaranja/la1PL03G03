//
// Created by joao on 06/04/20.
//
/**
 @file
 funçoẽs de listas
 */
#ifndef PROJETO_LISTA_H
#define PROJETO_LISTA_H

#include "camada_dados.h"

/**
 * \brief estrutura das listas
 */
typedef struct nodo {
    COORDENADA *valor;
   struct nodo *prox;
} NODO, *LISTA;


/**funcao que cria uma lista */
LISTA criar_lista();
/** funcao que insere um valor na lista */
LISTA insere_cabeca(LISTA L, COORDENADA valor);
/** funcao que da return de L->prox */
LISTA proximo(LISTA L);
/** funcao que remove a cabeça da lista */
LISTA remove_cabeca(LISTA L);
/** funcao que verifica se a lista esta vazia */
int lista_esta_vazia(LISTA L);
#endif //PROJETO_LISTA_H
