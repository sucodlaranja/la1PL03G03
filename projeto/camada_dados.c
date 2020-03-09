#include <stdio.h>
#include <stdlib.h>
#include "logica_pograma.h"
ESTADO *inicializar_estado() {
    ESTADO *estado = (ESTADO *) malloc(sizeof(ESTADO));
    //CASA
    int k,i;
    for (i = 0; i < 8; i++) {
        for (k = 0; k < 8; k++) {
           if (i == 3 && k == 4) estado.tab[k][i] = BRANCA;
            else estado.tab[k][i] = VAZIO;
        }
    }
    //COORDENADA
    estado.ultima_jogada.coluna = 0;
    estado.ultima_jogada.linha = 0;

    //jogador 1
    estado.jogadas->jogador1.linha = 4;
    estado.jogadas->jogador1.coluna = 3;

    //jogador 2
    estado.jogadas->jogador2.coluna = 3;
    estado.jogadas->jogador2.linha = 4;

    estado.num_jogadas = 0;
    estado.jogador_atual = 1;
    return estado;
}
int obter_jogador_atual(ESTADO *estado) {
    if (estado->jogador_atual == 1) return 1;
    else return 2;
}
int obter_numero_de_jogadas(ESTADO *estado) {
    static numero=-1;
    numero++;
    return 0;
}
