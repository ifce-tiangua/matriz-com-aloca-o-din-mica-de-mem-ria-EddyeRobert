#include <stdio.h>
#include <stdlib.h>

void alocaMatriz(int linhas, int colunas) {
    if (linhas == 0) {
        printf("[matriz vazia]\n");
        return;
    }

    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (j != 0) {
                printf(" ");
            }
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main() {
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);
    alocaMatriz(linhas, colunas);
    return 0;
}
