//Generate prime numbers between 2 given limits.(use while loop)

#include <stdio.h>

int main() {
    int lower, upper;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);

    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    int current = lower;
    while (current <= upper) {
        if (current > 1) {
            int is_prime = 1; // Assume the number is prime
            int i = 2;
            while (i * i <= current) {
                if (current % i == 0) {
                    is_prime = 0; // Not a prime number
                    break;
                }
                i++;
            }
            if (is_prime) {
                printf("%d\n", current);
            }
        }
        current++;
    }

    return 0;
}
