#include <stdio.h>

// Constantes para as movimentações das peças
#define BISPO_MOV 5    // Bispo: 5 casas na diagonal superior direita
#define TORRE_MOV 5    // Torre: 5 casas para a direita
#define RAINHA_MOV 8   // Rainha: 8 casas para a esquerda
#define CAVALO_MOV 1   // Cavalo: 1 movimento em L (cima + direita)

// Função recursiva para movimentação do Bispo
void moverBispo(int passo, int total) {
    if (passo > total) return; // Caso base: parar quando passo exceder total
    printf("Passo %d: Cima + Direita\n", passo);
    moverBispo(passo + 1, total); // Chamada recursiva
}

// Função recursiva para movimentação da Torre
void moverTorre(int passo, int total) {
    if (passo > total) return; // Caso base
    printf("Passo %d: Direita\n", passo);
    moverTorre(passo + 1, total); // Chamada recursiva
}

// Função recursiva para movimentação da Rainha
void moverRainha(int passo, int total) {
    if (passo > total) return; // Caso base
    printf("Passo %d: Esquerda\n", passo);
    moverRainha(passo + 1, total); // Chamada recursiva
}

// Função para movimentação do Cavalo (Nível Aventureiro e Mestre)
void moverCavalo(int total) {
    int i, j;
    int passos = 0; // Contador de movimentos em L concluídos

    // Loop externo (for) para controlar o número total de movimentos em L
    for (i = 0; i < total; i++) {
        // Loop interno (while) para simular o movimento em L (2 casas cima + 1 casa direita)
        j = 0;
        while (j < 3) { // 3 passos para formar o L (2 cima + 1 direita)
            // Condição múltipla para simular o movimento em L
            if (j < 2) {
                printf("Passo %d.%d: Cima\n", i + 1, j + 1);
            } else {
                printf("Passo %d.%d: Direita\n", i + 1, j + 1);
                passos++;
                break; // Sai do loop interno após completar o movimento em L
            }
            j++;
        }
        if (passos >= total) break; // Sai do loop externo após atingir o total de movimentos
    }
}

// Função para movimentação do Bispo com loops aninhados (Nível Mestre)
void moverBispoAninhado(int total) {
    int i, j;
    for (i = 0; i < total; i++) {
        // Loop interno para simular a combinação de Cima e Direita
        for (j = 0; j < 1; j++) { // Executa uma vez por iteração para manter a lógica
            printf("Passo %d: Cima + Direita\n", i + 1);
        }
    }
}

int main() {
    // Movimentação do Bispo (Recursiva)
    printf("\n=== Movimentacao do Bispo (Recursiva) ===\n");
    moverBispo(1, BISPO_MOV);

    // Movimentação do Bispo (Loops Aninhados)
    printf("\n=== Movimentacao do Bispo (Loops Aninhados) ===\n");
    moverBispoAninhado(BISPO_MOV);

    // Movimentação da Torre (Recursiva)
    printf("\n=== Movimentacao da Torre (Recursiva) ===\n");
    moverTorre(1, TORRE_MOV);

    // Movimentação da Rainha (Recursiva)
    printf("\n=== Movimentacao da Rainha (Recursiva) ===\n");
    moverRainha(1, RAINHA_MOV);

    // Movimentação do Cavalo (Loops Aninhados com Variáveis/Condições Múltiplas)
    printf("\n=== Movimentacao do Cavalo (Em L: Cima + Direita) ===\n");
    moverCavalo(CAVALO_MOV);

    return 0;
}