#include <stdio.h>

int main() {
    int size;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size. Please enter a positive number.\n");
        return 1;
    }

    int array[size];

    printf("Please enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int smallest = array[0];
    int largest = array[0];

    for (int i = 1; i < size; i++) {

        if (array[i] < smallest) {
            smallest = array[i];
        }

        if (array[i] > largest) {
            largest = array[i];
        }
    }

    printf("\nThe smallest element in your array is: %d\n", smallest);
    printf("The largest element in your array is: %d\n", largest);
    return 0;
}

