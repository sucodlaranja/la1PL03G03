#include "camada_dados.h"
#include "logica_pograma.h"
#include <stdio.h>
#include <string.h>
void mostrar_tabuleiro(ESTADO estado) {
    int k,i;
    char tabuleiro[8][8];
    for (i = 0; i < 8; i++) {
        for (k = 0; k < 8; k++) {
                if (i == 0 && k == 7) tabuleiro[k][i] = '2';
                else if (i == 7 && k == 0) tabuleiro[k][i] = '1';
                else if (estado.tab[k][i] == BRANCA) tabuleiro[k][i] = '*';
                else if (estado.tab[k][i] == PRETA)  tabuleiro[k][i] = '#';
                else  tabuleiro[k][i] = '.';
            }
        }

        for (i = 0; i < 8; i++) {
            for (k = 0; k < 8; k++) {
                printf("%c",tabuleiro[k][i]);
            }
            printf("\n");
        }
    }

int interpretador(ESTADO *e) {
    char linha[BUF_SIZE];
    char col[2], lin[2];
    COORDENADA coord = {*col - 'a', *lin - '1'};
    int z=0;
    while(z==0) {
    if(fgets(linha, BUF_SIZE, stdin) == NULL) return 0;
    if(strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2) {
        COORDENADA coord = {*col - 'a', *lin - '1'};
        z=jogar(e, coord);

    }}

            //transforma a jogada anterior em branca e dps torna a jogada atual na ultima jogada pra ser comparada outra vez mais tarde
        e->tab[e->ultima_jogada.linha][e->ultima_jogada.coluna] = PRETA;
                    e->ultima_jogada.coluna=coord.coluna;
        e->ultima_jogada.linha=coord.linha;
                    //transforma a jogada atual em asterisco
                    e->tab[e->ultima_jogada.linha][e->ultima_jogada.coluna] = BRANCA;


                    e->num_jogadas++;

        obter_jogador_atual(e);
        mostrar_tabuleiro(*e);
    }
