//Reverse a given number and check if it is a palindrome or not. (use while loop).
//[Ex:  1234, reverse=4*10 3 +3 * 10 2 + 2 * 10 1 + 1 * 10 0 =4321]

#include <stdio.h>

#include <stdio.h>

int main() {
    int n, originalNum, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalNum = n;

    while (n != 0) {

        remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }

    printf("Reversed number = %d\n", reversedNum);

    if (originalNum == reversedNum) {
        printf("%d is a palindrome. 🔄\n", originalNum);
    } else {
        printf("%d is not a palindrome. 🔄\n", originalNum);
    }

    return 0;
}
