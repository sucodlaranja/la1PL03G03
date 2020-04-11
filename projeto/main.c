#include <stdio.h>
#include "camada_dados.h"
#include "logica_pograma.h"
#include "interface.h"

int main() {
    ESTADO *e = inicializar_estado();
    mostrar_tabuleiro(*e);
    while(e->num_jogadas<32) {
    interpretador(e);
    if (interpretador(e) == 0) break;
                            }
    return 0;
}