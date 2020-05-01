//
// Created by joao on 24/04/20.
//
#include <stdio.h>
#include "logica pograma.h"

void atualizador(ESTADO *e,COORDENADA coord) {
    //transforma a jogada anterior em branca e dps torna a jogada atual na ultima jogada pra ser comparada outra vez mais tarde
    e->tab[e->ultima_jogada.coluna][e->ultima_jogada.linha] = PRETA;

    e->ultima_jogada.coluna=coord.coluna;

    e->ultima_jogada.linha=coord.linha;

    //transforma a jogada atual em asterisco
    e->tab[e->ultima_jogada.coluna][e->ultima_jogada.linha] = BRANCA;
}

LISTA criadordeposicoes(ESTADO *e) {
    int x,y;
    LISTA posicoes = criar_lista();

    //funciona
    for(x=(e->ultima_jogada.linha-1); x < (e->ultima_jogada.linha+2); x++) {
        for(y = (e->ultima_jogada.coluna-1); y < (e->ultima_jogada.coluna+2); y++) {
            if(x>=0 && x<=7 && y<=7 && y>=0 && e->tab[y][x] == VAZIO) {
                COORDENADA valor;
                valor.coluna = y;
                valor.linha = x;
                posicoes = insere_cabeca(posicoes,valor);
            }
        }

    }
    return posicoes;

}

//coloca no array de jogadas a respetiva jogada atual
void array(ESTADO *e,int count,const char *lin,const char *col) {
    if (obter_jogador_atual(count) == 1) {
        e->jogadas[e->num_jogadas].jogador1.linha = *lin - '1';
        e->jogadas[e->num_jogadas].jogador1.coluna = *col - 'a';
    } else {
        e->jogadas[e->num_jogadas].jogador2.linha = *lin - '1';
        e->jogadas[e->num_jogadas].jogador2.coluna = *col - 'a';
    }
}

//incrementa o num jogadas
int num_jogadas(ESTADO *e) {
    e->num_jogadas++;
    return e->num_jogadas;
}