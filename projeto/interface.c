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
            else if (estado.tab[coluna][linha] == PRETA) tabuleiro[coluna][linha] = '#';
            else tabuleiro[coluna][linha] = '.';
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
static int count=0;
    char col[2], lin[2];

    COORDENADA coord;

    int z = 0;

    while (z == 0) {
        if(fgets(linha, BUF_SIZE, stdin) == NULL) return 0;

        else if (strcmp(linha,"Q\n") == 0) {
            printf("jogo terminado\n");
            return 0;
            }
        else if (strcmp(linha, "stats\n") == 0) {
            printf("%d PL%d %c%c\n", (e->num_jogadas+1), obter_jogador_atual(count), e->ultima_jogada.coluna + 'a',
                   e->ultima_jogada.linha + '1');
            }
        else if (strlen(linha) == 3 && sscanf(linha,"%[a-h]%[1-8]",col,lin) == 2) {
            coord.coluna = *col - 'a';
            coord.linha = *lin - '1';
            z = jogar(e, coord);
            }
        else if (strcmp(linha,"movs\n") == 0) {
            for(int k=0;k<e->num_jogadas;k++) {
            printf("%d: %c%c %c%c\n",k+1, e->jogadas[k].jogador1.coluna,e->jogadas[k].jogador1.linha,e->jogadas[k].jogador2.coluna,e->jogadas[k].jogador2.linha);
            }

        }


        //files
        else if (strcmp(linha, "gr\n") == 0 ) {
            gravador(e);

             }
        else if ((strcmp(linha, "ler\n")) == 0) {
            FILE *fout;
            fout = fopen("jogo.txt", "r");

            fclose(fout);
        }

    }

    if (obter_jogador_atual(count) == 1) {
        e->jogadas[e->num_jogadas].jogador1.linha = *lin;
        e->jogadas[e->num_jogadas].jogador1.coluna = *col;
    } else {
        e->jogadas[e->num_jogadas].jogador2.linha = *lin;
        e->jogadas[e->num_jogadas].jogador2.coluna = *col;
    }


    if(coord.linha == 0 && coord.coluna == 7 && obter_jogador_atual(count) == 2) {
        printf("Parabens!, Jogador 2 ganhou o jogo");
        return 0;

    }
    else if (coord.linha == 7 && coord.coluna == 0 && obter_jogador_atual(count) == 1) {
        printf("Parabens!, Jogador 1 ganhou o jogo");
        return 0;
        }


    else {
        atualizador(e,coord);


       if (obter_jogador_atual(count) == 2)  {
           num_jogadas(e);
       }

    mostrar_tabuleiro(*e);
       count++;
        obter_jogador_atual(count);
    }
}
