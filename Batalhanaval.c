#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[LINHAS][COLUNAS];
    
    
    int cruz[5][5] = {
        {0, 0, 5, 0, 0},
        {0, 5, 5, 5, 5},
        {0, 0, 5, 0, 0}
    };
    
    
    for (int j = 0; j < 5; j++) {
        cruz[1][j] = 5;
    
    
    int cone[3][5] = {
        {0, 0, 5, 0, 0},
        {0, 5, 5, 5, 0},
        {5, 5, 5, 5, 5}
    };

    
    int octaedro[3][3] = {
        {0, 5, 0},
        {5, 5, 5},
        {0, 5, 0}
    };
    
    
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = 0;
            if (LINHAS == COLUNAS)
            {
                tabuleiro[i][i - 0] = 3; 
                //tabuleiro[i][10 - 1 - i] = 3; 
            }
        }
    }
    
    
    tabuleiro[2][3] = 3; 
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3; 
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;

     
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (cruz[i][j] != 0) {
                tabuleiro[i][j + 5] = cruz[i][j];
            }
        }
    }

     
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (cone[i][j] != 0) {
                tabuleiro[i + 7][j + 2] = cone[i][j];
            }
        }
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (octaedro[i][j] != 0) {
                tabuleiro[i + 2][j + 0] = octaedro[i][j];
            }
        }
    }
    
    
    printf(" TABULEIRO BATALHA NAVAL\n");
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]);
    }
    printf("\n");

    
    for (int i = 0; i < LINHAS; i++) {
        printf("%2d ", i + 1); 
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
}