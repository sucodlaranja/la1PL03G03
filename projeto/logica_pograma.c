#include "camada_dados.h"
#include <stdio.h>
#include "logica_pograma.h"
#include "interface.h"

//valida a jogada
int jogar (ESTADO *e, COORDENADA c) {
    if (((c.coluna == e->ultima_jogada.coluna) || (c.coluna - 1 == e->ultima_jogada.coluna) || (c.coluna + 1 == e->ultima_jogada.coluna)) && (e->tab[c.coluna][c.linha] == VAZIO)){
        if ((c.linha == e->ultima_jogada.linha) || (c.linha - 1 == e->ultima_jogada.linha) || (c.linha + 1 == e->ultima_jogada.linha)){
            printf("a jogar %c%d\n", c.coluna +'a', c.linha + 1);
            return 1;
        }
        else {
            printf("a jogada %c%d não e valida\n", c.coluna + 'a', c.linha + 1);
            return 0;
        }
    }
    else {
        printf("a jogada %c%d não e valida\n", c.coluna + 'a', c.linha + 1);
        return 0;
    }
}


 int num_jogadas(ESTADO *e) {
    e->num_jogadas++;
    return e->num_jogadas;
}


//atualiza o tabuleiro
void atualizador(ESTADO *e,COORDENADA coord) {
    //transforma a jogada anterior em branca e dps torna a jogada atual na ultima jogada pra ser comparada outra vez mais tarde
    e->tab[e->ultima_jogada.coluna][e->ultima_jogada.linha] = PRETA;

    e->ultima_jogada.coluna=coord.coluna;

    e->ultima_jogada.linha=coord.linha;

    //transforma a jogada atual em asterisco
    e->tab[e->ultima_jogada.coluna][e->ultima_jogada.linha] = BRANCA;
}


void gravador(ESTADO *e) {
    FILE *fout;
    int coluna,linha;
    char tabuleiro[8][8];
    fout = fopen("pos.txt","w");

    //tabuleiro
    for (linha = 0; linha < 8; linha++) {
        for (coluna = 0; coluna < 8; coluna++) {
            if (linha == 0 && coluna == 7) tabuleiro[coluna][linha] = '2';
            else if (linha == 7 && coluna == 0) tabuleiro[coluna][linha] = '1';
            else if (e->tab[coluna][linha] == BRANCA) tabuleiro[coluna][linha] = '*';
            else if (e->tab[coluna][linha] == PRETA) tabuleiro[coluna][linha] = '#';
            else tabuleiro[coluna][linha] = '.';
        }
    }

    for (linha = 0; linha < 8; linha++) {

        for (coluna = 0; coluna < 8; coluna++) {
            printf("%c",tabuleiro[coluna][linha]);
        }
        printf("\n");
    }

    //linha de separacao
    printf("\n");

    //jogadas
    for(int k=0;k<e->num_jogadas;k++) {
        printf("%d: %c%c %c%c\n",k+1, e->jogadas[k].jogador1.coluna,e->jogadas[k].jogador1.linha,e->jogadas[k].jogador2.coluna,e->jogadas[k].jogador2.linha);
    }
    if(e->jogadas[e->num_jogadas].jogador1.linha !=0 && e->jogadas[e->num_jogadas].jogador1.coluna !=0) {
        printf("%d: %c%c\n",e->num_jogadas+1, e->jogadas[e->num_jogadas].jogador1.coluna,e->jogadas[e->num_jogadas].jogador1.linha);
    }

    fclose(fout);
}


