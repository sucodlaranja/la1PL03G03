
#ifndef PROJETO_CAMADA_DADOS_H
#define BUF_SIZE 1024
typedef enum {VAZIO, BRANCA, PRETA} CASA;
typedef struct {
    int coluna;
    int linha;
} COORDENADA;
typedef struct {
    COORDENADA jogador1;
    COORDENADA jogador2;
} JOGADA;
typedef JOGADA JOGADAS[32];
typedef struct {
    CASA tab[8][8];
    COORDENADA ultima_jogada;
    JOGADAS jogadas;
    int num_jogadas;
    int jogador_atual;
} ESTADO;

int obter_jogador_atual(int e);
ESTADO *inicializar_estado();
#define PROJETO_CAMADA_DADOS_H

#endif //PROJETO_CAMADA_DADOS_H
