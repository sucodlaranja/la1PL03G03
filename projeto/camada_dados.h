
#ifndef PROJETO_CAMADA_DADOS_H
#define BUF_SIZE 1024
/**
 * @file ficheiros que tem todos os dados do estado do jogo
 */

/** 
\brief estrutura que nos da o estado do tabuleiro 
*/
typedef enum {VAZIO, BRANCA, PRETA,UM,DOIS} CASA;

/** 
\brief estrutura da COORDENADA que nos da um int coluna e um linha  
*/
typedef struct {
    int coluna;
    int linha;
} COORDENADA;
/** 
\brief estrutura que nos as jogadas 
*/
typedef struct {
    COORDENADA jogador1;
    COORDENADA jogador2;
} JOGADA;

typedef JOGADA JOGADAS[32];
/** 
\brief estrutura que nos da o estado do jogo
*/
typedef struct {
    CASA tab[8][8];
    COORDENADA ultima_jogada;
    JOGADAS jogadas;
    int num_jogadas;
    int jogador_atual;
} ESTADO;

 /** funcao que obtem o jogador atual */
int obter_jogador_atual(int e);

/** funcao que inicializa a estrutura do estado */
ESTADO *inicializar_estado();
#define PROJETO_CAMADA_DADOS_H

#endif //PROJETO_CAMADA_DADOS_H
