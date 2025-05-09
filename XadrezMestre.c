#include <stdio.h>

// Função recursiva para mover a Torre (Direita), retorna 0 para sucesso
int moveTorre(int casas_restantes) {
    // Caso base: se não há casas a mover, retorna 0
    if (casas_restantes <= 0) {
        return 0;
    }
    // Imprime a direção e chama recursivamente para a próxima casa
    printf("Direita\n");
    return moveTorre(casas_restantes - 1);
}

// Função recursiva para mover o Bispo (Cima, Direita) com loops aninhados, retorna 0 para sucesso
int moveBispo(int casas_restantes) {
    // Caso base: se não há casas a mover, retorna 0
    if (casas_restantes <= 0) {
        return 0;
    }
    // Loop externo (vertical): executa uma vez por recursão para "Cima"
    for (int vertical = 1; vertical <= 1; vertical++) {
        // Loop interno (horizontal): executa uma vez para "Direita"
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
    // Chama recursivamente para a próxima casa
    return moveBispo(casas_restantes - 1);
}

// Função recursiva para mover a Rainha (Esquerda), retorna 0 para sucesso
int moveRainha(int casas_restantes) {
    // Caso base: se não há casas a mover, retorna 0
    if (casas_restantes <= 0) {
        return 0;
    }
    // Imprime a direção e chama recursivamente para a próxima casa
    printf("Esquerda\n");
    return moveRainha(casas_restantes - 1);
}

// Função principal
int main() {
    // Declaração de variáveis para o número de casas a mover
    int torre_casas = 5;      // Torre move 5 casas para a direita
    int bispo_casas = 5;      // Bispo move 5 casas na diagonal (cima e direita)
    int rainha_casas = 8;     // Rainha move 8 casas para a esquerda
    int cavalo_cima = 2;      // Cavalo move 2 casas para cima
    int cavalo_direita = 1;   // Cavalo move 1 casa para a direita

    // Simulação do movimento da Torre (recursivo)
    printf("Movimento da Torre (Direita):\n");
    moveTorre(torre_casas);

    // Simulação do movimento do Bispo (recursivo com loops aninhados)
    printf("\nMovimento do Bispo (Cima e Direita):\n");
    moveBispo(bispo_casas);

    // Simulação do movimento da Rainha (recursivo)
    printf("\nMovimento da Rainha (Esquerda):\n");
    moveRainha(rainha_casas);

    // Simulação do movimento do Cavalo (loops aninhados complexos)
    printf("\nMovimento do Cavalo (2 Cima, 1 Direita):\n");
    int total_passos = cavalo_cima + cavalo_direita; // Total de 3 passos
    int passos_cima_restantes = cavalo_cima;        // Controla quantos "Cima" faltam
    int passos_direita_restantes = cavalo_direita;  // Controla quantos "Direita" faltam
    // Loop externo: controla o número total de passos
    for (int passo_atual = 1; passo_atual <= total_passos; passo_atual++) {
        int sub_passo = 1; // Variável para o loop interno
        // Loop interno: decide qual direção imprimir
        while (sub_passo <= 1) {
            // Se ainda há passos para cima, imprime "Cima"
            if (passos_cima_restantes > 0) {
                printf("Cima\n");
                passos_cima_restantes--;
                break; // Sai do loop interno após imprimir
            }
            // Se não há mais passos para cima, imprime "Direita"
            if (passos_direita_restantes > 0) {
                printf("Direita\n");
                passos_direita_restantes--;
                break; // Sai do loop interno após imprimir
            }
            // Se não há passos a imprimir, continua para a próxima iteração
            continue;
            sub_passo++;
        }
    }

    return 0;
}