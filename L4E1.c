#include <stdio.h>

int main() {
    int n, k;

    printf("Enter the number of tables to generate (n): ");
    if (scanf("%d", &n) != 1) {
        printf("\nInvalid input. Please enter a valid integer.\n");
        return 1;
    }

    printf("Enter the number of terms for each table (k): ");
    if (scanf("%d", &k) != 1) {
        printf("\nInvalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (n > 0 && k > 0) {

        for (int i = 1; i <= n; i++) {
            printf("\n--- Multiplication Table for %d ---\n", i);

            for (int j = 1; j <= k; j++) {
                printf("%d x %d = %d\n", i, j, i * j);
            }
        }
    } else {
        printf("\nPlease enter positive integers greater than zero.\n");
        return 1;
    }

    return 0;
}
