#include <stdio.h>
#include "camada_dados.h"
#include "logica_pograma.h"
int main() {
    ESTADO estado;
    estado=inicializar_estado();
    mostrar_tabuleiro(estado);
    return 0;
}
