
#include <stdio.h>

/// Função recursiva - Torre se move para a Direita
void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

/// Função recursiva - Rainha se move para a Esquerda
void moverRainhaEsquerda(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaEsquerda(casas - 1);
}

/// Função recursiva + loops aninhados - Bispo (Diagonal Cima Direita)
void moverBispoDiagonalRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispoDiagonalRecursivo(casas - 1);
}

/// Versão com loops aninhados para o Bispo (também obrigatória no nível mestre)
void moverBispoDiagonalComLoops(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
}

/// Cavalo com loops complexos (duas casas para cima e uma para direita)
void moverCavalo() {
    int i = 0, j = 0;
    for (i = 0, j = 0; i < 2 && j < 1; i++) {
        printf("Cima\n");
        if (i == 1) {
            while (j < 1) {
                printf("Direita\n");
                j++;
            }
        }
    }
}

int main() {
    printf("=== Movimento da Torre ===\n");
    moverTorreDireita(5);

    printf("\n=== Movimento do Bispo (recursivo) ===\n");
    moverBispoDiagonalRecursivo(5);

    printf("\n=== Movimento do Bispo (com loops aninhados) ===\n");
    moverBispoDiagonalComLoops(5);

    printf("\n=== Movimento da Rainha ===\n");
    moverRainhaEsquerda(8);

    printf("\n=== Movimento do Cavalo (em L - loops complexos) ===\n");
    moverCavalo();

    return 0;
}
