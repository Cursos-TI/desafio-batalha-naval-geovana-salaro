#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
               
                //Definir tamanho do tabuleiro e do navio

                #define TAM 10
                #define TAM_NAVIO 3
                
                int main() {
                    int tabuleiro[TAM][TAM];
                
                    // Preenche o tabuleiro com água (0)
                    for (int i = 0; i < TAM; i++) {
                        for (int j = 0; j < TAM; j++) {
                            tabuleiro[i][j] = 0;
                        }
                    }
                
                    // Define as posições iniciais dos navios
                    int linhanavioh = 1;
                    int colunanavioh = 1;
                
                    int linhanaviov = 6;
                    int colunanaviov = 8;
                
                    // Posiciona navio horizontal
                    for (int i = 0; i < TAM_NAVIO; i++) {
                        if (colunanavioh + i < TAM) {
                            tabuleiro[linhanavioh][colunanavioh + i] = 3;
                        }
                    }
                
                    // Posiciona navio vertical
                    for (int i = 0; i < TAM_NAVIO; i++) {
                        int l = linhanaviov + i;
                        if (l < TAM) {
                            if (tabuleiro[l][colunanaviov] == 0) {
                                tabuleiro[l][colunanaviov] = 3;
                            } else {
                                printf("Erro: um navio está sobrepondo o outro.\n");
                                return 1;
                            }
                        }
                    }
                
                    // Exibe o tabuleiro com uma linha embaixo da outra
                    printf("Tabuleiro final:\n");
                    for (int i = 0; i < TAM; i++) {
                        for (int j = 0; j < TAM; j++) {
                            printf("%d ", tabuleiro[i][j]);  // espaço simples entre os números
                        }
                        printf("\n");  // cada linha bem colada na outra
                    }
                

    
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
