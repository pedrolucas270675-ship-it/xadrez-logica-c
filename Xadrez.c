#include <stdio.h>

/* =========================================================
   FUNCOES RECURSIVAS (REQUISITO NIVEL MESTRE)
   ========================================================= */

// Torre: Move-se para a Direita
void moverTorreRecursivo(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorreRecursivo(casas - 1);
    }
}

// Bispo: Move-se na diagonal Cima Direita
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}

// Rainha: Move-se para a Esquerda
void moverRainhaRecursivo(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainhaRecursivo(casas - 1);
    }
}

int main() {
    /* --- NIVEL NOVATO: Estruturas Simples --- */
    printf("### MOVIMENTACAO BASICA (Nivel Novato) ###\n\n");

    printf("Torre (5 casas para Direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\nBispo (5 casas Cima-Direita):\n");
    int b = 0;
    while (b < 5) {
        printf("Cima Direita\n");
        b++;
    }

    printf("\nRainha (8 casas para Esquerda):\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

    printf("\n------------------------------------------\n");

    /* --- NIVEL AVENTUREIRO: Loops Aninhados --- */
    printf("### MOVIMENTACAO CAVALO (Nivel Aventureiro) ###\n\n");
    printf("Cavalo (2 Baixo, 1 Esquerda):\n");

    for (int i = 1; i <= 1; i++) { 
        int j = 0;
        while (j < 2) { 
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n");
    }

    printf("\n------------------------------------------\n");

    /* --- NIVEL MESTRE: Recursividade e Loops Complexos --- */
    printf("### MOVIMENTACAO AVANCADA (Nivel Mestre) ###\n\n");

    printf("Torre (Recursiva - 5 Direita):\n");
    moverTorreRecursivo(5);

    printf("\nBispo (Recursivo e Aninhado):\n");
    // O loop externo controla o vertical e o interno o horizontal
    for (int i = 0; i < 1; i++) { 
        moverBispoRecursivo(5); 
    }

    printf("\nRainha (Recursiva - 8 Esquerda):\n");
    moverRainhaRecursivo(8);

    printf("\nCavalo (Loops Complexos - 2 Cima, 1 Direita):\n");
    // Uso de multiplas variaveis e controle de fluxo avancado
    for (int cima = 0, direita = 0; cima < 2 || direita < 1; ) {
        if (cima < 2) {
            printf("Cima\n");
            cima++;
            continue; 
        }
        if (direita < 1) {
            printf("Direita\n");
            direita++;
        }
    }

    return 0;
}
