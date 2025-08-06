#include <stdio.h>

int main() {
    double n1, n2, n3;
    double largest;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    //Assuming the first number is the largest
    largest = n1;

    if (n2 > largest) {
        largest = n2;
    }

    if (n3 > largest) {
        largest = n3;
    }

    printf("The largest number is %.2lf\n", largest);

    return 0;
}
