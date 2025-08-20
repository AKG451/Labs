#include <stdio.h>

int main() {
    int n;
    int current_number = 1;

    printf("Enter the number of rows for Floyd's Triangle (N): ");

    if (scanf("%d", &n) != 1) {
        printf("\nInvalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (n <= 0) {
        printf("\nPlease enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", current_number);
            current_number++;
        }
         printf("\n");
    }

    return 0;
}
