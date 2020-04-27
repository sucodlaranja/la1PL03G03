#include <stdio.h>
#include "Camada de dados.h"
#include "Listas.h"
#include <stdlib.h>
#include "logica pograma.h"

int main(int argc, char **argv) {

    //C
    COORDENADA coord;
    ESTADO *e;
    int coluna=0,linha=7,count;
    char h;
    char col[2], lin[2];


  FILE *file = fopen(argv[0], "r");
    if (file == NULL) {
        inicializar_estado(e);
    }
    else {

        //tabuleiro
        while (linha != -1) {
            h=fgetc(file);
            if (h == '\n') coluna=0,linha--;
            else if (h == '1') e->tab[coluna][linha] = UM, coluna++;
            else if (h == '*') e->tab[coluna][linha] = BRANCA, coluna++;
            else if (h == '#') e->tab[coluna][linha] = PRETA, coluna++;
            else if (h == '.') e->tab[coluna][linha] = VAZIO, coluna++;
            else e->tab[coluna][linha] = DOIS, coluna++;
        }

        //movs
        int n=0,j1l=0,j2l=0,contador=0;
        char line[BUF_SIZE],j1c,j2c;
        while (fgets(line, BUF_SIZE, file) != NULL) {
            if (sscanf(line,"%c%d %c%d",&j1c,&j1l,&j2c,&j2l) == 4) {
                e->jogadas[n].jogador1.coluna = j1c-'a';
                e->jogadas[n].jogador1.linha = j1l;
                e->jogadas[n].jogador2.linha = j2l;
                e->jogadas[n].jogador2.coluna = j2c- 'a';
                n++;
            }
            else if (sscanf(line,"%c%d ",&j1c,&j1l) == 2) {
                e->jogadas[n].jogador1.coluna = j1c-'a';
                e->jogadas[n].jogador1.linha = j1l;
                contador++;
            }
        }
        e->num_jogadas=n;
        if(contador == 1) {
            e->ultima_jogada.coluna = j1c - 'a';
            e->ultima_jogada.linha = j1l;
        }
        else {
            e->ultima_jogada.coluna = j2c - 'a';
            e->ultima_jogada.linha = j2l;
        }
        count = contador;
        fclose(file);
    }



    //heuristia
    int valor = rand() % 1;
    LISTA L;
    switch (valor) {

        //primeira heuristia
        case(0) :
            L = criadordeposicoes(e);
            LISTA temp = criar_lista();
            temp = L;
            int k=0;

            while(temp!=NULL) {
                k++;
                temp=temp->prox;
            }


            for (int i = 0; i < rand() % k; i++) {
                L = L->prox;
            }
            *col = L->valor->coluna;
            *lin = L->valor->linha;
            coord.coluna = L->valor->coluna;
            coord.linha = L->valor->linha;
            atualizador(e,coord);
            break;


            //segunda heuristia
        case(2) :
            L = criadordeposicoes;
            while(L != NULL && L->prox !=NULL) {
                if(obter_jogador_atual(count) == 1) {
                    if((L->valor->coluna + L->valor->linha) < (L->prox->valor->coluna + L->prox->valor->linha) ) {
                        L->prox->valor->linha = L->valor->linha;
                        L->prox->valor->coluna = L->valor->coluna;
                        L = proximo(L);
                    }
                    else L = proximo(L);
                }
                else {
                    if(abs(( L->valor->coluna - 7 ) + ( L->valor->linha - 7)) < abs(( L->prox->valor->coluna - 7 ) + (L->prox->valor->linha - 7))) {
                        L->prox->valor->linha = L->valor->linha;
                        L->prox->valor->coluna = L->valor->coluna;
                        L = proximo(L);
                    }
                    else L = proximo(L);
                }
            }

            *col = L->valor->coluna;
            *lin = L->valor->linha;
            coord.coluna = L->valor->coluna;
            coord.linha = L->valor->linha;
            atualizador(e,coord);
            break;
        default:
            printf("Erro o switch não é valido");

    }

    //se o bot for o segundo jogador incrementar o numero de jogadas
    if(obter_jogador_atual(count) == 2) {
        num_jogadas(e);
    }
    array(e,count,lin,col);



    //gravar em jog02
    char tabuleiro[8][8];
    int c,l;

    for (l = 0; l < 8; l++) {
        for (c = 0; c < 8; c++) {
            if (e->tab[c][l] == DOIS) tabuleiro[c][l] = '2';
            else if (e->tab[c][l] == UM) tabuleiro[c][l] = '1';
            else if (e->tab[c][l] == BRANCA) tabuleiro[c][l] = '*';
            else if (e->tab[c][l] == PRETA) tabuleiro[c][l] = '#';
            else tabuleiro[c][l] = '.';
        }
    }
    FILE *file2 = fopen(argv[1],"w");


    //tabuleiro
    for (l = 7; l > -1; l--) {

        for (c = 0; c < 8; c++) {
            fprintf(file2, "%c", tabuleiro[c][l]);
        }
        fprintf(file2, "\n");
    }

    //linha de separacao
    fprintf(file2, "\n");

    //jogadas
    for(int k=0;k<e->num_jogadas;k++) {
        fprintf(file2, "%c%d %c%d\n", e->jogadas[k].jogador1.coluna + 'a', e->jogadas[k].jogador1.linha, e->jogadas[k].jogador2.coluna + 'a', e->jogadas[k].jogador2.linha);
        }
    if(e->jogadas[e->num_jogadas].jogador1.linha !=0 && e->jogadas[e->num_jogadas].jogador1.coluna !=0) {
        fprintf(file2, "%c%d\n", e->jogadas[e->num_jogadas].jogador1.coluna + 'a', e->jogadas[e->num_jogadas].jogador1.linha);
        }

    fclose(file2);

    return 0;
}
