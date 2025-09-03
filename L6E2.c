#include <stdio.h>
#include <math.h>

#define MAX_SIZE 5

int main() {
    float matrix[MAX_SIZE][MAX_SIZE];
    int order;
    float trace = 0.0f;
    float sum_of_squares = 0.0f;
    float norm = 0.0f;

    printf("Enter the order of the square matrix (e.g., 3 for 3x3, max %d): ", MAX_SIZE);
    scanf("%d", &order);

    if (order <= 0 || order > MAX_SIZE) {
        printf("Error: Invalid matrix order.\n");
        return 1;
    }

    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            printf("  Enter element for row %d, column %d: ", i + 1, j + 1);
            scanf("%f", &matrix[i][j]);
        }
    }

    printf("\nEntered Matrix:\n");
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            sum_of_squares += matrix[i][j] * matrix[i][j];

            if (i == j) {
                trace += matrix[i][j];
            }
        }
    }

    norm = sqrt(sum_of_squares);

    printf("\n--------------------------------\n");
    printf("Trace of the matrix is: %.2f\n", trace);
    printf("Norm of the matrix is: %.4f\n", norm);
    printf("--------------------------------\n");

    return 0;
}
