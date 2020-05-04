#include <stdlib.h>
#include "lista.h"
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


LISTA remove_cabeca(LISTA L){
    LISTA new = L == NULL ? NULL : L->prox;
    free(L);
    return new;
}

int lista_esta_vazia(LISTA L){
    int r=0;
    if(L==NULL) r=-1;
    return r;
}