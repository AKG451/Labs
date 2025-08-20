#include <stdio.h>

int main() {
    int num;
    int sum_of_divisors = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num <= 1) {
        printf("%d is not a perfect number.\n", num);
        return 0;
    }

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum_of_divisors = sum_of_divisors + i;
        }
    }

    if (sum_of_divisors == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
