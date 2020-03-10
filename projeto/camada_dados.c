#include <stdio.h>
#include <stdlib.h>
#include "logica_pograma.h"
ESTADO *inicializar_estado() {
    int i,k;

    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));
    e->jogador_atual = 1;
    e->ultima_jogada.coluna = 3;
    e->ultima_jogada.linha = 4;
    e->num_jogadas = 0;
    for (i = 0; i < 8; i++) {
        for (k = 0; k < 8; k++) {
            if (i == 3 && k == 4) e->tab[k][i] = BRANCA;
                    else e->tab[k][i] = VAZIO;
        }}
// Falta a resto da inicialização.
    return e;
}



int obter_jogador_atual(ESTADO *estado) {
    if (estado->num_jogadas%2==0) return 1;
    else return 2;
}

