#include <stdio.h>
#include <stdbool.h>

int main() {
    int number;
    int prime_count = 0;
    int composite_count = 0;

    printf("Enter numbers to check (enter -1 to stop):\n");

    // This loop reads numbers and continues as long as the user doesn't enter -1.
    do {
        printf("Enter a number: ");
        scanf("%d", &number);

        // We only process the number if it's not the stop value (-1)
        if (number != -1) {
            // Check for the special case of 1
            if (number == 1) {
                printf("1 is neither prime nor composite.\n");
            }
            // Check for numbers greater than 1
            else if (number > 1) {
                bool is_prime = true;
                int i = 2;

                // Inner loop to check for factors
                while (i < number) {
                    if (number % i == 0) {
                        is_prime = false; // Found a factor
                        break;
                    }
                    i++;
                }

                if (is_prime) {
                    prime_count++;
                    printf("%d is a prime number.\n", number);
                } else {
                    composite_count++;
                    printf("%d is a composite number.\n", number);
                }
            }
            // Handle invalid input
            else {
                printf("Invalid input. Please enter a positive number greater than 0.\n");
            }
        }

    } while (number != -1);

    printf("\n--- Summary ---\n");
    printf("Total prime numbers entered: %d\n", prime_count);
    printf("Total composite numbers entered: %d: %d\n", composite_count);

    return 0;
}
