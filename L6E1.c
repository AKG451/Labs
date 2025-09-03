#include <stdio.h>

#define MAX_SIZE 5

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int isSymmetric = 1;


    printf("Enter the number of rows (max %d): ", MAX_SIZE);
    scanf("%d", &rows);
    printf("Enter the number of columns (max %d): ", MAX_SIZE);
    scanf("%d", &cols);


    if (rows <= 0 || cols <= 0 || rows > MAX_SIZE || cols > MAX_SIZE) {
        printf("Error: Invalid matrix dimensions.\n");
        return 1;
    }


    if (rows != cols) {
        printf("\nThe matrix is %dx%d. It is not a square matrix, so it cannot be symmetric. \n", rows, cols);
        return 0;
    }


    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("  Enter element for row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }


    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (isSymmetric == 0) {
            break;
        }
    }


    printf("\n--------------------------------\n");
    if (isSymmetric == 1) {
        printf("Yes, the given matrix is symmetric.\n");
    } else {
        printf("No, the given matrix is not symmetric.\n");
    }
    printf("--------------------------------\n");

    return 0;
}
