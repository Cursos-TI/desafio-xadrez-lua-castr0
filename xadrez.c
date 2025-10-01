#include <stdio.h>

// Programa: Simulação dos movimentos de peças de xadrez
// Autor: [Seu Nome]
// Disciplina: Lógica de Programação em C
// Desafio: Nível Novato - Estruturas de Repetição
//
// Objetivo: Demonstrar o uso de loops for, while e do-while
// simulando os movimentos da Torre, do Bispo e da Rainha.

int main() {
    // ---------------------------
    // Movimento da Torre
    // Estrutura usada: for
    // A Torre se move em linha reta horizontal ou vertical.
    // Neste exemplo, vamos mover a Torre 5 casas para a direita.
    // ---------------------------
    int casasTorre = 5; // número de casas que a Torre deve andar
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n"); // linha em branco para separar as saídas

    // ---------------------------
    // Movimento do Bispo
    // Estrutura usada: while
    // O Bispo se move na diagonal.
    // Neste exemplo, vamos mover o Bispo 5 casas para cima e para a direita.
    // ---------------------------
    int casasBispo = 5; // número de casas que o Bispo deve andar
    int i = 1; // variável de controle do loop while
    printf("Movimento do Bispo:\n");
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++; // incrementa para não entrar em loop infinito
    }
    printf("\n");

    // ---------------------------
    // Movimento da Rainha
    // Estrutura usada: do-while
    // A Rainha pode se mover em todas as direções.
    // Neste exemplo, vamos mover a Rainha 8 casas para a esquerda.
    // ---------------------------
    int casasRainha = 8; // número de casas que a Rainha deve andar
    int j = 1; // variável de controle do loop do-while
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    // Final do programa
    return 0;
}
