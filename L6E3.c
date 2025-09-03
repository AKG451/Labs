#include <stdio.h>

#define R1 2
#define C1 3
#define R2 3
#define C2 2

int main() {
    int resultMatrix[R1][C2];
    int i, j, k;

    if (C1 != R2) {
        printf("Error: Incompatible matrix dimensions for multiplication.\n");
        return 1;
    }

    int matrixA[R1][C1] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int matrixB[R2][C2] = {
        {7, 8},
        {9, 1},
        {2, 3}
    };

    printf("Matrix A:\n");
    for (i = 0; i < R1; i++) {
        for (j = 0; j < C1; j++) {
            printf("%d\t", matrixA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < R2; i++) {
        for (j = 0; j < C2; j++) {
            printf("%d\t", matrixB[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < R1; i++) {
        for (j = 0; j < C2; j++) {
            resultMatrix[i][j] = 0;
        }
    }

    for (i = 0; i < R1; i++) {
        for (j = 0; j < C2; j++) {
            for (k = 0; k < C1; k++) {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("\n--------------------------------\n");
    printf("Result of Matrix A x Matrix B:\n");
    for (i = 0; i < R1; i++) {
        for (j = 0; j < C2; j++) {
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }
    printf("--------------------------------\n");

    return 0;
}
