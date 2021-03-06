#include "camada_dados.h"
#include <stdio.h>
#include "logica_pograma.h"
#include "interface.h"
#include "lista.h"

//valida a jogada
int jogar (ESTADO *e, COORDENADA c) {
    if (((c.coluna == e->ultima_jogada.coluna) || (c.coluna - 1 == e->ultima_jogada.coluna) || (c.coluna + 1 == e->ultima_jogada.coluna)) && ((e->tab[c.coluna][c.linha] == VAZIO) || (e->tab[c.coluna][c.linha] == DOIS) || (e->tab[c.coluna][c.linha] == UM))) {
        if ((c.linha == e->ultima_jogada.linha) || (c.linha - 1 == e->ultima_jogada.linha) || (c.linha + 1 == e->ultima_jogada.linha)){
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

//funcao pos
void posicoes(ESTADO *e,int num) {
    int linha, coluna;
    if (num == 0) {
        for (linha = 0; linha < 8; linha++) {
            for (coluna = 0; coluna < 8; coluna++) {
                if (linha == 4 && coluna == 4) e->tab[coluna][linha] = BRANCA;
                else if (linha == 0 && coluna == 0) e->tab[coluna][linha] = UM;
                else if (linha == 7 && coluna == 7) e->tab[coluna][linha] = DOIS;
                else e->tab[coluna][linha] = VAZIO;
            }
        }
    } else {
        for (linha = 0; linha < 8; linha++) {
            for (coluna = 0; coluna < 8; coluna++) {
                if (linha == 4 && coluna == 4) e->tab[coluna][linha] = PRETA;
                else if (linha == 0 && coluna == 0) e->tab[coluna][linha] = UM;
                else if (linha == 7 && coluna == 7) e->tab[coluna][linha] = DOIS;
                else e->tab[coluna][linha] = VAZIO;
            }
        }

        for (int i = 0; i < num; i++) {
            if (i == num-1) {
                e->tab[e->jogadas[i].jogador1.coluna][e->jogadas[i].jogador1.linha] = PRETA;
                e->tab[e->jogadas[i].jogador2.coluna][e->jogadas[i].jogador2.linha] = BRANCA;
                e->ultima_jogada.linha = e->jogadas[i].jogador2.linha;
                e->ultima_jogada.coluna = e->jogadas[i].jogador2.coluna; }
            else {
                e->tab[e->jogadas[i].jogador1.coluna][e->jogadas[i].jogador1.linha] = PRETA;
                e->tab[e->jogadas[i].jogador2.coluna][e->jogadas[i].jogador2.linha] = PRETA;
            }
        }
    }



    int h;
    //inicializa novamente o array
    for(h=num;h < e->num_jogadas;h++) {
        e->jogadas[h].jogador1.linha = 0;
        e->jogadas[h].jogador1.coluna = 0;
        e->jogadas[h].jogador2.linha = 0;
        e->jogadas[h].jogador2.coluna = 0;
    }
    e->num_jogadas = num;
}


void array(ESTADO *e,int count,const char *lin,const char *col) {
    if (obter_jogador_atual(count) == 1) {
        e->jogadas[e->num_jogadas].jogador1.linha = *lin - '1';
        e->jogadas[e->num_jogadas].jogador1.coluna = *col - 'a';
        } else {
        e->jogadas[e->num_jogadas].jogador2.linha = *lin - '1';
        e->jogadas[e->num_jogadas].jogador2.coluna = *col - 'a';
        }
}

//cria as posicoes possiveis
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