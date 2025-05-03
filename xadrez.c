#include <stdio.h>

int main() {
    // Movimento da Torre - 5 casas para a Direita
    // Utilizando o laço FOR
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo - 5 casas na diagonal para Cima e Direita
    // Utilizando o WHILE
    printf("Movimento do Bispo (5 casas na Diagonal - Cima Direita):\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da Rainha - 8 casas para a Esquerda
    // Utilizando o DO-WHILE
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}
