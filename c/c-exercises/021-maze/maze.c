#include <stdio.h>

#define TAMANHO 5

void imprimirLabirinto(int maze[TAMANHO][TAMANHO]);
int encontrarCaminho(int maze[TAMANHO][TAMANHO], int x, int y);

int main () {
    int maze[TAMANHO][TAMANHO] = {
        {1, 0, 1, 1, 1},
        {1, 1, 1, 0, 1},
        {0, 0, 0, 1, 1},
        {0, 0, 0, 0, 1},
        {0, 0, 0, 0, 1}
    };

    printf("Labirinto Original: \n");
    imprimirLabirinto(maze);

    if(encontrarCaminho(maze, 0, 0)) {
        printf("\n\nCaminho encontrado!\nLabirinto com o caminho marcado: \n");
        imprimirLabirinto(maze);
        printf("\n");
    } else {
        printf("\n\nO caminho não foi encontrado.\n");
    }

    return 0;
}

void imprimirLabirinto(int maze[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d\t", maze[i][j]);
        }
        printf("\n");
    }
}

int encontrarCaminho(int maze[TAMANHO][TAMANHO], int x, int y) {
    if (x < 0 || x >= TAMANHO || y < 0 || y >= TAMANHO || maze[x][y] == 0) {
        return 0;
    } else if (x == TAMANHO - 1 && y == TAMANHO - 1) {
        maze[x][y] = 2; // Marca o fim do caminho
        return 1;
    } else if (maze[x][y] == 1) {
        maze[x][y] = 2; // Marca como parte do caminho

        // Tenta encontrar o caminho recursivamente nas quadro direções possíveis
        if (encontrarCaminho(maze, x + 1, y) || encontrarCaminho(maze, x, y + 1) || encontrarCaminho(maze, x - 1, y) || encontrarCaminho(maze, x, y - 1)) {
            return 1;
        }

        maze[x][y] = 1; // Marca como não parte do caminho
        return 0;
    }
    return 0;
}