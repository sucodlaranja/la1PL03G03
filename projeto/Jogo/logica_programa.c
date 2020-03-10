#include "camada_dados.h"
#include <stdio.h>
#include "logica_programa.h"


int jogar (ESTADO *e, COORDENADA c) {
    if ((c.coluna == e->ultima_jogada.coluna) || (c.coluna -1 == e->ultima_jogada.coluna) || (c.coluna + 1 == e->ultima_jogada.coluna)){
if ((c.linha == e->ultima_jogada.linha) || (c.coluna -1 == e->ultima_jogada.linha) || (c.linha + 1 == e->ultima_jogada.linha)) return 1;
    }
    else if ((c.linha == e->ultima_jogada.linha) || (c.coluna -1 == e->ultima_jogada.linha) || (c.linha + 1 == e->ultima_jogada.linha)) {
        if ((c.coluna == e->ultima_jogada.coluna) || (c.coluna -1 == e->ultima_jogada.coluna) || (c.coluna + 1 == e->ultima_jogada.coluna)) return 1;
    }
    else return 0;
    printf("jogar %d %d\n", c.coluna, c.linha);
}

