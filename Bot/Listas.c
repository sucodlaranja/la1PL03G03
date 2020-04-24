#include <stdlib.h>
#include "Listas.h"

LISTA criar_lista() {
    LISTA L = malloc(sizeof(NODO));
    L->valor = malloc(sizeof(COORDENADA));
    L = NULL;
    return L;
}

LISTA insere_cabeca(LISTA L, COORDENADA valor) {
    LISTA new = malloc(sizeof(NODO));
    new->valor = malloc(sizeof(COORDENADA));
    new->valor->coluna = valor.coluna;
    new->valor->linha = valor.linha;
    new->prox = L;
    return new;
}

LISTA proximo(LISTA L) {
    LISTA x = L == NULL ? NULL : L->prox;
    return x;
}