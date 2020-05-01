#include <stdlib.h>
#include "logica_pograma.h"
ESTADO *inicializar_estado() {
    int coluna,linha;

    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));
    e->jogador_atual = 1;

    e->ultima_jogada.coluna = 4;

    e->ultima_jogada.linha = 4;

    e->num_jogadas = 0;

    for (linha = 0; linha < 8; linha++) {
        for (coluna = 0; coluna < 8; coluna++) {
            if (linha == 4 && coluna == 4) e->tab[coluna][linha] = BRANCA;
            else if (linha == 0 && coluna == 0) e->tab[coluna][linha] = UM;
            else if (linha == 7 && coluna == 7) e->tab[coluna][linha] = DOIS;
            else e->tab[coluna][linha] = VAZIO;
        }
    }

    for(int i = 0; i < 32; i++) {
        e->jogadas[i].jogador1.linha = -1;
        e->jogadas[i].jogador1.coluna = -1;
        e->jogadas[i].jogador2.linha = -1;
        e->jogadas[i].jogador2.coluna = -1;
    }

    return e;
}



int obter_jogador_atual(int e) {
    if (e%2==0) return 1;
    else return 2;
}

