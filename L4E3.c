#include <stdio.h>
#define PI 3.1415926535

int main() {
    int n, i;
    float deg, rad, sum, term;

    printf("Enter the angle x in degrees: ");
    if (scanf("%f", &deg) != 1) {
        printf("Invalid input for angle.\n");
        return 1;
    }

    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Number of terms must be a positive integer.\n");
        return 1;
    }

    rad = deg * (PI / 180.0);
    term = rad;
    sum = term;

    for (i = 1; i < n; i++) {
        term = -term * rad * rad / ((2 * i) * (2 * i + 1));
        sum = sum + term;
    }
    printf("\nCalculated sin(%.2f) for %d terms is: %f\n", deg, n, sum);
    return 0;
}
