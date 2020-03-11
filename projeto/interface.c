#include "camada_dados.h"
#include "logica_pograma.h"
#include <stdio.h>
#include <string.h>
void mostrar_tabuleiro(ESTADO estado) {
    int coluna,linha;
    char tabuleiro[8][8];
    for (linha = 0; linha < 8; linha++) {
        for (coluna = 0; coluna < 8; coluna++) {
                if (linha == 0 && coluna == 7) tabuleiro[coluna][linha] = '2';
                else if (linha == 7 && coluna == 0) tabuleiro[coluna][linha] = '1';
                else if (estado.tab[coluna][linha] == BRANCA) tabuleiro[coluna][linha] = '*';
                else if (estado.tab[coluna][linha] == PRETA)  tabuleiro[coluna][linha] = '#';
                else  tabuleiro[coluna][linha] = '.';
            }
        }

        for (linha = 0; linha < 8; linha++) {
            for (coluna = 0; coluna < 8; coluna++) {
                printf("%c",tabuleiro[coluna][linha]);
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
        e->tab[e->ultima_jogada.coluna][e->ultima_jogada.linha] = PRETA;
                    e->ultima_jogada.coluna=coord.coluna;
        e->ultima_jogada.linha=coord.linha;
                    //transforma a jogada atual em asterisco
                    e->tab[e->ultima_jogada.coluna][e->ultima_jogada.linha] = BRANCA;


                    e->num_jogadas++;

        printf("é a jogar o jogador %d",obter_jogador_atual(e));
        mostrar_tabuleiro(*e);
    }
