#include <stdio.h>

int main() {
    int array_size;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &array_size);

    if (array_size <= 0) {
        printf("Invalid size. Please enter a positive number.\n");
        return 1;
    }

    int my_array[array_size];

    printf("Please enter %d numbers:\n", array_size);
    for (int i = 0; i < array_size; i++) {
        scanf("%d", &my_array[i]);
    }

    int smallest = my_array[0];
    int largest = my_array[0];

    for (int i = 1; i < array_size; i++) {

        if (my_array[i] < smallest) {
            smallest = my_array[i];
        }

        if (my_array[i] > largest) {
            largest = my_array[i];
        }
    }

    printf("\nThe smallest element in your array is: %d\n", smallest);
    printf("The largest element in your array is: %d\n", largest);
    return 0;
}

