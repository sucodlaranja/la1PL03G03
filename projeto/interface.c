#include "camada_dados.h"
#include "logica_pograma.h"
#include <stdio.h>
#include <string.h>
void mostrar_tabuleiro(ESTADO estado) {
    int k,i;
    static int count=0;
    char tabuleiro[8][8];
    for (i = 0; i < 8; i++) {
        for (k = 0; k < 8; k++) {
            //faz quando comeca o pograma

            if (count=0) {if (i == 0 && k == 7) tabuleiro[k][i] = '2';
                else if (i == 7 && k == 0) tabuleiro[k][i] = '1';
                else if (i == 3 && k == 4) tabuleiro[k][i] = "*";
                else tabuleiro[k][i] = ".";}
            //faz a partir da primeira jogada
            else {
                if (i == 0 && k == 7) tabuleiro[k][i] = '2';
                else if (i == 7 && k == 0) tabuleiro[k][i] = '1';
                else if (estado.tab[k][i] =BRANCA) tabuleiro[k][i] = "*";
                else if (estado.tab[k][i] = PRETA)  tabuleiro[k][i] = "#";
                else  tabuleiro[k][i] = ".";
            }
        } }
        count++;
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
    if(fgets(linha, BUF_SIZE, stdin) == NULL)
        return 0;
    if(strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2) {
        COORDENADA coord = {*col - 'a', *lin - '1'};
        jogar(e, coord);
        mostrar_tabuleiro(*e);
    } }
int main() {
        ESTADO *x=inicializar_estado();
        interpretador(x);
    return 0;
    }