//Check if the sum of the cubes of all digits of an inputted number equals the number itself (Armstrong Number). (use while loop)

#include <stdio.h>

#include <math.h>

int main() {
    int number, original_number, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original_number = number;

    // Use a while loop to extract digits and calculate the sum of their cubes
    while (number > 0) {
        remainder = number % 10;
        sum += remainder * remainder * remainder; // Or pow(remainder, 3)
        number /= 10;
    }

    // Check if the sum of cubes equals the original number
    if (sum == original_number) {
        printf("%d is an Armstrong number.\n", original_number);
    } else {
        printf("%d is not an Armstrong number.\n", original_number);
    }

    return 0;
}
