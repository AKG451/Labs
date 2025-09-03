#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int order, i, j, temp;

    printf("Enter the order of the square matrix (e.g., 4 for 4x4): ");
    scanf("%d", &order);

    if (order <= 0 || order > MAX_SIZE) {
        printf("Error: Invalid matrix order.\n");
        return 1;
    }

    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i < order; i++) {
        for (j = 0; j < order; j++) {
            printf("  Enter element for row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for (i = 0; i < order; i++) {
        for (j = 0; j < order; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < order; i++) {
        temp = matrix[i][i];
        matrix[i][i] = matrix[i][(order - 1) - i];
        matrix[i][(order - 1) - i] = temp;
    }

    printf("\nMatrix after interchanging diagonals:\n");
    for (i = 0; i < order; i++) {
        for (j = 0; j < order; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
