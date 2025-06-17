#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

int main() {
    // ---------------------------
    // TORRE: move 5 casas para a direita (usando for)
    // ---------------------------
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ---------------------------
    // BISPO: move 5 casas na diagonal superior direita (usando while)
    // ---------------------------
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo (5 casas na Diagonal - Cima Direita):\n");

    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // ---------------------------
    // RAINHA: move 8 casas para a esquerda (usando do-while)
    // ---------------------------
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
