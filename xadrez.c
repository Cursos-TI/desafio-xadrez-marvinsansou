#include <stdio.h>

void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o Bispo com loops aninhados (vertical + horizontal)
void moverBispo(int verticais, int horizontais) {
    if (verticais <= 0) return;

    // Loop interno para a movimentação horizontal em cada passo vertical
    for (int j = 0; j < horizontais; j++) {
        printf("Cima Direita\n");
    }

    moverBispo(verticais - 1, horizontais); // chamada recursiva para o próximo passo diagonal
}

int main() {
    // ------------------------------
    // MOVIMENTO DA TORRE
    // ------------------------------
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(5); // chamada da função recursiva
    printf("\n");

    // ------------------------------
    // MOVIMENTO DO BISPO
    // ------------------------------
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    moverBispo(5, 1); // vertical: 5 passos, horizontal: 1 passo cada
    printf("\n");

    // ------------------------------
    // MOVIMENTO DA RAINHA
    // ------------------------------
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(8); // chamada da função recursiva
    printf("\n");

    // ------------------------------
    // MOVIMENTO DO CAVALO
    // ------------------------------
    printf("Movimento do Cavalo (2 casas para Cima, 1 para Direita):\n");

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    // Loop externo para movimento vertical
    for (int i = 0; i < movimentosVerticais; i++) {
        // Verificação adicional: exemplo de uso de continue
        if (i == 1) {
            printf("Pulando casa intermediária...\n");
            continue; // simula um pulo extra, não imprime um movimento
        }
        printf("Cima\n");

        // Loop interno para o movimento horizontal
        for (int j = 0; j < movimentosHorizontais; j++) {
            // Exemplo de condição artificial com break
            if (j == 0 && i == 0) {
                printf("Direita\n");
                break;
            }
        }
    }

    return 0;
}
