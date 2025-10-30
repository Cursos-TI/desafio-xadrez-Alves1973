#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Constantes Globais
const int MOV_BISPO = 5;
const int MOV_TORRE = 5;
const int MOV_RAINHA = 8;
const int CAVALO_L_VERTICAL = 2;
const int CAVALO_L_HORIZONTAL = 1;

// Declaração de Funções

/**
 * @brief Move a Torre usando recursão.
 * @param passos_restantes Quantos movimentos ainda faltam.
 */
void moverTorre_Recursivo(int passos_restantes) {
    if (passos_restantes <= 0) {
        return;
    }
    printf("Direita\n");
    moverTorre_Recursivo(passos_restantes - 1);
}

/**
 * @brief Move a Rainha usando recursão.
 * @param passos_restantes Quantos movimentos ainda faltam.
 */
void moverRainha_Recursivo(int passos_restantes) {
    if (passos_restantes <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha_Recursivo(passos_restantes - 1);
}

/**
 * @brief Move o Bispo usando recursão e loops aninhados.
 * @param passos_restantes Quantos movimentos ainda faltam.
 */
void moverBispo_Recursivo(int passos_restantes) {
    if (passos_restantes <= 0) {
        return;
    }
    
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
    
    moverBispo_Recursivo(passos_restantes - 1);
}

/**
 * @brief Move o Cavalo em L com loops avançados.
 */
void moverCavalo_Avancado() {
    for (int v = 0, h = 0; (v + h) < (CAVALO_L_VERTICAL + CAVALO_L_HORIZONTAL);) {
        if (v < CAVALO_L_VERTICAL) {
            printf("Cima\n");
            v++;
            continue;
        }
        
        if (h < CAVALO_L_HORIZONTAL) {
            printf("Direita\n");
            h++;
        }
        
        if (v == CAVALO_L_VERTICAL && h == CAVALO_L_HORIZONTAL) {
            break;
        }
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo (%d casas na diagonal):\n", MOV_BISPO);
    int k = 0;
    do {
        printf("Cima\n");
        printf("Direita\n");
        k++;
    } while (k < MOV_BISPO);
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentação da Torre (%d casas):\n", MOV_TORRE);
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentação da Rainha (%d casas):\n", MOV_RAINHA);
    int j = 0;
    while (j < MOV_RAINHA) {
        printf("Esquerda\n");
        j++;
    }
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimentação do Cavalo (2 Baixo, 1 Esquerda):\n");
    for (int i = 0; i < CAVALO_L_VERTICAL; i++) {
        printf("Baixo\n");
        if (i == (CAVALO_L_VERTICAL - 1)) {
            int j_cavalo = 0;
            while (j_cavalo < CAVALO_L_HORIZONTAL) {
                printf("Esquerda\n");
                j_cavalo++;
            }
        }
    }
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("Movimentação da Torre (Recursiva):\n");
    moverTorre_Recursivo(MOV_TORRE);
    printf("\n");

    printf("Movimentação da Rainha (Recursiva):\n");
    moverRainha_Recursivo(MOV_RAINHA);
    printf("\n");

    printf("Movimentação do Bispo (Recursiva):\n");
    moverBispo_Recursivo(MOV_BISPO);
    printf("\n");

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("Movimentação do Cavalo (Avançado):\n");
    moverCavalo_Avancado();
    printf("\n");

    return 0;
}
