#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {
    // Criação das variáveis de linhas e colunas da matriz
    char linha[10] = { 'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10] = {{0}};

    // Exibição do título do tabuleiro e espaço inicial
    printf("TABULEIRO BATALHA NAVAL\n");
    printf(" ");

    // Barco na vertical(Começando no H7 e acabando no H9)
    for (int i = 3, j = 3; j <= 5; j++){
        tabuleiro[i][j] = 3;
    }

    // Barco na horizontal(Começando no D4 e acabando no F4)
    for (int i = 6, j = 7; i <= 8; i++){
        tabuleiro[i][j] = 3;
    }
    
    // Primeiro barco na diagonal(Começando A1 e acabando no C3)
    for (int i = 0, j = 0; i <= 2; i++,j++){
        tabuleiro[i][j] = 3;
    } 

    // Segundo barco na diagonal(Começando A7 e acabando no C9)
    for (int i = 6, j = 0; i <= 8; i++,j++){
        tabuleiro[i][j] = 3;
    } 

    // Habilidade em cone(E5 a E7)
    // Topo do cone
    tabuleiro[4][4] = 1;

    //Segunda linha do cone
    for(int j = 3; j <= 5; j++){
        if(tabuleiro[5][j] != 3){
            tabuleiro[5][j] = 1;
        }
    }

    // Terceira linha do cone
    for (int j=2; j <= 6; j++){
        if(tabuleiro[6][j] != 3){
            tabuleiro[6][j] = 1;
        }
    }
    
    // Habilidade em cruz(H1 a H5 e F3 a J3)
    // Coluna da cruz
    for(int i = 0; i <= 4; i++){
        if(tabuleiro[i][7] != 3){
            tabuleiro[i][7] = 1;
        }
    }
    // Linha da cruz
    for(int j = 5; j <= 9; j++){
        if(tabuleiro[2][j] != 3){
            tabuleiro[2][j] = 1;
        }
    }
    // Habilidade em octaedro(B3 a B5 e A4 a C4)
    // Topo do octaedro
    tabuleiro[2][1] = 1;
    // Base do octaedro
    tabuleiro[4][1] = 1;
    // Linha central do octaedro
    for(int j = 0; j <= 2; j++){
        if(tabuleiro[3][j] != 3){
        tabuleiro[3][j] = 1;
        }
    }
    // Exibição dos valores da matriz 
    for (int i = 0; i < 10; i++){
        printf(" %c",linha[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++){
        printf("%d", i + 1);
    for(int j = 0; j < 10; j++){
        printf(" %d",tabuleiro[i][j]);
        }
        //Pula a linha quando termina de percorrer todos os valores de j(coluna)
        printf("\n");
    }

    return 0;
}