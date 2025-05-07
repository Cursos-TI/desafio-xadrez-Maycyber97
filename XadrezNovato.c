#include <stdio.h>

int main() {
    // Declaração de variáveis para o número de casas a se mover para cada uma das peças
    int torre_casas = 5;    // Torre deverá mover 5 casas para a direita
    int bispo_casas = 5;    // Bispo deverá mover 5 casas na diagonal (cima e direita)
    int rainha_casas = 8;   // Rainha deverá mover 8 casas para a esquerda

    // Simulação do movimento da Torre (usando for)
    printf("Movimento da Torre (Direita):\n");
    for (int i = 1; i <= torre_casas; i++) {
        printf("Direita\n");
    }

    // Simulação do movimento do Bispo (usando while)
    printf("\nMovimento do Bispo (Cima e Direita):\n");
    int contador_bispo = 1;
    while (contador_bispo <= bispo_casas) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    // Simulação do movimento da Rainha (usando do-while)
    printf("\nMovimento da Rainha (Esquerda):\n");
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= rainha_casas);

    return 0;
}