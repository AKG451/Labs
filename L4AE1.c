#include <stdio.h>

int main() {
    int num, root;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num == 0) {
        root = 0;
    } else {
        root = (num - 1) % 9 + 1;
    }

    printf("The generic root is: %d\n", root);

    return 0;
}
