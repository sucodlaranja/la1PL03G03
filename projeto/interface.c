#include "camada_dados.h"
#include "logica_pograma.h"
#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostrar_tabuleiro(ESTADO estado) {
    int coluna,linha;
    char tabuleiro[8][8];
    for (linha = 0; linha < 8; linha++) {
        for (coluna = 0; coluna < 8; coluna++) {
            if (estado.tab[coluna][linha] == DOIS) tabuleiro[coluna][linha] = '2';
            else if (estado.tab[coluna][linha] == UM) tabuleiro[coluna][linha] = '1';
            else if (estado.tab[coluna][linha] == BRANCA) tabuleiro[coluna][linha] = '*';
            else if (estado.tab[coluna][linha] == PRETA) tabuleiro[coluna][linha] = '#';
            else tabuleiro[coluna][linha] = '.';
            }
        }

        for (linha = 7; linha > -1; linha--) {
            
            for (coluna = 0; coluna < 8; coluna++) {
                printf("%c",tabuleiro[coluna][linha]);
                }
            printf("\n");
            }
    }



int interpretador(ESTADO *e) {
    char linha[BUF_SIZE];
    char nome[BUF_SIZE];
static int count=0;
    char col[2], lin[2];
int num;
    COORDENADA coord;

    int z = 0;

    while (z == 0) {
        printf("#%d PL%d %c%c ->", (e->num_jogadas + 1), obter_jogador_atual(count), e->ultima_jogada.coluna + 'a',e->ultima_jogada.linha + '1');
        fgets(linha, BUF_SIZE, stdin);
        if (strcmp(linha, "Q\n") == 0) {
            printf("jogo terminado\n");
            exit(-1);
        }

        else if (strcmp(linha, "jog\n") == 0) {
            LISTA  posicoes = criadordeposicoes(e);
            //euclina
            while(posicoes != NULL && posicoes->prox !=NULL) {
                if(obter_jogador_atual(count) == 1) {
                    if((posicoes->valor->coluna + posicoes->valor->linha) < (posicoes->prox->valor->coluna + posicoes->prox->valor->linha) ) {
                        posicoes->prox->valor->linha = posicoes->valor->linha;
                        posicoes->prox->valor->coluna = posicoes->valor->coluna;
                        posicoes= proximo(posicoes);
                    }
                    else posicoes = proximo(posicoes);
                }
                else {
                    if(abs(( posicoes->valor->coluna - 7 ) + ( posicoes->valor->linha - 7)) < abs(( posicoes->prox->valor->coluna - 7 ) + (posicoes->prox->valor->linha - 7))) {
                        posicoes->prox->valor->linha = posicoes->valor->linha;
                        posicoes->prox->valor->coluna = posicoes->valor->coluna;
                        posicoes= proximo(posicoes);
                    }
                    else posicoes = proximo(posicoes);
                }
            }
            *col = posicoes->valor->coluna;
            *lin = posicoes->valor->linha;
            coord.coluna = posicoes->valor->coluna;
            coord.linha = posicoes->valor->linha;
            z = jogar(e,coord);

        }
        else if (strcmp(linha, "jog2\n") == 0) {
            LISTA pos = criadordeposicoes(e);
            LISTA temp = criar_lista();
            temp = pos;
            int k=0;

            while(temp!=NULL) {
                k++;
                temp=temp->prox;
            }


            for (int i = 0; i < rand() % k; i++) {
                pos = pos->prox;
            }
            *col = pos->valor->coluna;
            *lin = pos->valor->linha;
            coord.coluna = pos->valor->coluna;
            coord.linha = pos->valor->linha;
            z = jogar(e,coord);

        }
        else if ((strlen(linha) == 6 || strlen(linha) == 7) && sscanf(linha,"pos %d",&num) == 1 && num>0 && num < e->num_jogadas) {
            posicoes(e,num);
            mostrar_tabuleiro(*e);
            if(obter_jogador_atual(count) == 2) count++;
        }


            //validacao da coordenada
        else if (strlen(linha) == 3 && sscanf(linha, "%[a-h]%[1-8]", col, lin) == 2) {
            coord.coluna = *col - 'a';
            coord.linha = *lin - '1';
            z = jogar(e, coord);
            if (coord.linha == 0 && coord.coluna == 7 && obter_jogador_atual(count) == 1) {
                printf("a jogada não e valida\n");
                z = 0;
            } else if (coord.linha == 7 && coord.coluna == 0 && obter_jogador_atual(count) == 2) {
                printf("a jogada não e valida\n");
                z = 0;
            }
        }


            //comando que mostra todas as jogadas anteriores
        else if (strcmp(linha, "movs\n") == 0) {
            for (int k = 0; k < e->num_jogadas; k++) {
                printf("%d: %c%c %c%c\n", k + 1, e->jogadas[k].jogador1.coluna + 'a', e->jogadas[k].jogador1.linha + '1',
                       e->jogadas[k].jogador2.coluna + 'a', e->jogadas[k].jogador2.linha + '1');
            }
            if (e->jogadas[e->num_jogadas].jogador1.linha != 0 && e->jogadas[e->num_jogadas].jogador1.coluna != 0) {
                printf("%d: %c%c\n", e->num_jogadas + 1, e->jogadas[e->num_jogadas].jogador1.coluna + 'a',
                       e->jogadas[e->num_jogadas].jogador1.linha + '1');
            }
        }






        //files
        else if (sscanf(linha,"gravar %s",nome) == 1 ) {
            FILE *fout;
            int c,l;
            char tabuleiro[8][8];
            for (l = 0; l < 8; l++) {
                for (c = 0; c < 8; c++) {
                    if (e->tab[c][l] == DOIS) tabuleiro[c][l] = '2';
                    else if (e->tab[c][l] == UM) tabuleiro[c][l] = '1';
                    else if (e->tab[c][l] == BRANCA) tabuleiro[c][l] = '*';
                    else if (e->tab[c][l] == PRETA) tabuleiro[c][l] = '#';
                    else tabuleiro[c][l] = '.';
                }
            }
            fout = fopen(nome,"w");

            //tabuleiro

            for (l = 7; l > -1; l--) {

                for (c = 0; c < 8; c++) {
                    fprintf(fout,"%c",tabuleiro[c][l]);
                }
                fprintf(fout,"\n");
            }

            //linha de separacao
            fprintf(fout,"\n");

            //jogadas
            for(int k=0;k<e->num_jogadas;k++) {
                fprintf(fout,"%c%d %c%d\n",e->jogadas[k].jogador1.coluna + 'a',e->jogadas[k].jogador1.linha,e->jogadas[k].jogador2.coluna +'a',e->jogadas[k].jogador2.linha);
            }
            if(e->jogadas[e->num_jogadas].jogador1.linha !=0 && e->jogadas[e->num_jogadas].jogador1.coluna !=0) {
                fprintf(fout,"%c%d\n",e->jogadas[e->num_jogadas].jogador1.coluna + 'a',e->jogadas[e->num_jogadas].jogador1.linha);
            }

            fclose(fout);
             }



        else if (sscanf(linha,"ler %s",nome) == 1 ) {
            FILE *fout;
            int colu=0,linh=7;
            char h;
            fout = fopen(nome,"r");
            if (fopen == NULL) {
                printf("este ficheiro não existe\n");
                return (-1);
            }
            else {

                //tabuleiro
            while (linh != -1) {
                h=fgetc(fout);
                if (h == '\n') colu=0,linh--;
                else if (h == '1') e->tab[colu][linh] = UM, colu++;
                else if (h == '*') e->tab[colu][linh] = BRANCA, colu++;
                else if (h == '#') e->tab[colu][linh] = PRETA, colu++;
                else if (h == '.') e->tab[colu][linh] = VAZIO, colu++;
                else e->tab[colu][linh] = DOIS, colu++;
            }

            //movs
            int n=0,j1c=0,j1l=0,j2c=0,j2l=0,contador=0;
           char line[BUF_SIZE];
           while (fgets(line,BUF_SIZE,fout) != NULL) {
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
           count=contador;
            fclose(fout);
            mostrar_tabuleiro(*e);
            }
        }
    }



    //organizar o array das jogadas com as coordenadas jogadas
    array(e,count,lin,col);

    //jogadas do ultimo jogo
    if(coord.linha == 7 && coord.coluna == 7 && obter_jogador_atual(count) == 2) {
        printf("Parabens!, Jogador 2 ganhou o jogo");
        exit(-1);

    }
    else if (coord.linha == 0 && coord.coluna == 0 && obter_jogador_atual(count) == 1) {
        printf("Parabens!, Jogador 1 ganhou o jogo");
        exit(-1);
        }


    else {
        atualizador(e,coord);


       if (obter_jogador_atual(count) == 2)  {
           num_jogadas(e);
       }

    mostrar_tabuleiro(*e);
       count++;
    }
}
