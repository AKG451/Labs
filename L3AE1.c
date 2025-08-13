#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number, original_number, remainder, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    original_number = number;

    // A positive number is a strong number if the sum of its digits' factorials
    // equals the original number. This loop extracts each digit and calculates its factorial.
    while (number > 0) {
        remainder = number % 10;
        sum += factorial(remainder);
        number /= 10;
    }

    if (sum == original_number) {
        printf("%d is a strong number.\n", original_number);
    } else {
        printf("%d is not a strong number.\n", original_number);
    }

    return 0;
}
