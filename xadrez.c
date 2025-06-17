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

    // ---------------------------
    // CAVALO: movimento em "L" (2 Baixo, 1 Esquerda) usando for + while
    // ---------------------------
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    printf("\nMovimento do Cavalo (2 casas para Baixo e 1 para Esquerda):\n");

    // Primeiro loop (for) para as casas para baixo
    for (int i = 0; i < movimentosBaixo; i++) {
        printf("Baixo\n");
    }

    // Segundo loop (while) para a casa à esquerda (aninhado, separado por clareza)
    int i = 0;
    while (i < movimentosEsquerda) {
        printf("Esquerda\n");
        i++;
    }

    return 0;
}
