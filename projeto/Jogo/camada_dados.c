#include <stdio.h>
#include <stdlib.h>
#include "logica_pograma.h"
int obter_jogador_atual(ESTADO *estado) {
    if (estado->jogador_atual == 1) return 1;
    else return 2;
}
int obter_numero_de_jogadas(ESTADO *estado) {
    static int numero=-1;
    numero++;
    return 0;
}