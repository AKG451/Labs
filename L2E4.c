#include <stdio.h>

int main() {

    double n1, n2, n3, smallest;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    smallest = (n1 < n2) ? ((n1 < n3) ? n1 : n3) : ((n2 < n3) ? n2 : n3);

    printf("The smallest number is: %.2lf\n", smallest);

    return 0;
}
