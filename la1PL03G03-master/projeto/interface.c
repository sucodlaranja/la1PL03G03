#include "camada_dados.h"
#include "logica_pograma.h"
#include <stdio.h>
#include <stdlib.h>
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
    COORDENADA coord;
    int z = 0;

    while (z == 0) {
        if (fgets(linha, BUF_SIZE, stdin) == NULL) return 0;
        else if (strcmp(linha,"Q") == 0) {
            printf("jogo terminado\n");
            return 0;
        }
        else if (strcmp(linha, "stats") == 0) {
            printf("%d PL%d %c%c\n", e->num_jogadas, obter_jogador_atual(e), e->ultima_jogada.coluna + 'a',
                   e->ultima_jogada.linha + '1');
        }
        else if (strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2) {
            coord.coluna = *col - 'a';
            coord.linha = *lin - '1';
            z = jogar(e, coord);
        }


        else if (strcmp(linha, "gravar tabuleiro") == 0 ) {
            int coluna,linha;
            FILE *fout;
            fout = fopen("tabuleiro.txt","w+");
            for (linha = 0; linha < 8; linha++) {
                for (coluna = 0; coluna < 8; coluna++) {
                    fprintf(fout,"%s",e->tab[coluna][linha]);
                }
                fprintf(fout,"\n");
            }
            fclose(fout);
        }
        else if ((strcmp(linha, "ler tabuleiro")) == 0) {
            FILE *fout;
            fout = fopen("tabuleiro.txt","r");
        }
    }



    if(coord.linha == 7 && coord.coluna == 0 && obter_jogador_atual(e) == 2) {
        printf("Parabens!, Jogador 2 ganhou o jogo");
        return 0;

    }



    else if (coord.linha == 0 && coord.coluna == 7 && obter_jogador_atual(e) == 1) {
        printf("Parabens!, Jogador 1 ganhou o jogo");
        return 0;
        }


    else{

            //transforma a jogada anterior em branca e dps torna a jogada atual na ultima jogada pra ser comparada outra vez mais tarde
        e->tab[e->ultima_jogada.coluna][e->ultima_jogada.linha] = PRETA;
                    e->ultima_jogada.coluna=coord.coluna;
        e->ultima_jogada.linha=coord.linha;
                    //transforma a jogada atual em asterisco
                    e->tab[e->ultima_jogada.coluna][e->ultima_jogada.linha] = BRANCA;


                    e->num_jogadas++;

        mostrar_tabuleiro(*e);
        }
}
