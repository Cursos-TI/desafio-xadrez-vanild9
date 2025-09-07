#include <stdio.h>

// Constantes para as movimentações das peças
#define BISPO_MOV 5    // Movimentação do Bispo: 5 casas na diagonal superior direita
#define TORRE_MOV 5    // Movimentação da Torre: 5 casas para a direita
#define RAINHA_MOV 8   // Movimentação da Rainha: 8 casas para a esquerda

int main() {
    // Variáveis para controle das posições
    int i;

    // Movimentação do Bispo (diagonal superior direita: combinação de Cima e Direita)
    printf("\n=== Movimentacao do Bispo (Diagonal Superior Direita) ===\n");
    for (i = 0; i < BISPO_MOV; i++) {
        printf("Passo %d: Cima + Direita\n", i + 1);
    }

    // Movimentação da Torre (direita)
    printf("\n=== Movimentacao da Torre (Direita) ===\n");
    i = 0;
    while (i < TORRE_MOV) {
        printf("Passo %d: Direita\n", i + 1);
        i++;
    }

    // Movimentação da Rainha (esquerda)
    printf("\n=== Movimentacao da Rainha (Esquerda) ===\n");
    do {
        i = 0; // Reinicia a variável para a Rainha
        while (i < RAINHA_MOV) {
            printf("Passo %d: Esquerda\n", i + 1);
            i++;
        }
    } while (0); // Executa apenas uma vez, usado para demonstrar a estrutura do-while

    return 0;
}