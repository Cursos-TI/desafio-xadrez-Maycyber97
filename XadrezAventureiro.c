#include <stdio.h>

int main() {
    // Declaração de variáveis para o número de casas a mover
    int torre_casas = 5;    // Torre deverá mover 5 casas para a direita
    int bispo_casas = 5;    // Bispo deverá mover 5 casas na diagonal (cima e direita)
    int rainha_casas = 8;   // Rainha deverá mover 8 casas para a esquerda
    int cavalo_baixo = 2;   // Cavalo deverá mover 2 casas para baixo
    int cavalo_esquerda = 1; // Cavalo deverá mover 1 casa para a esquerda

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

    // Simulação do movimento do Cavalo (usando for e while aninhados)
    printf("\nMovimento do Cavalo (2 Baixo, 1 Esquerda):\n");
    // Loop for para as duas casas para baixo
    for (int i = 1; i <= cavalo_baixo; i++) {
        printf("Baixo\n");
        // Loop while aninhado para a casa à esquerda, executado apenas na última iteração
        if (i == cavalo_baixo) {
            int contador_esquerda = 1;
            while (contador_esquerda <= cavalo_esquerda) {
                printf("Esquerda\n");
                contador_esquerda++;
            }
        }
    }

    return 0;
}