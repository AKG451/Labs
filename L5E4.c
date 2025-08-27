#include <stdio.h>

int main() {
    int position_to_delete;

    int my_array[20] = {64, 34, 25, 12, 22, 11, 90};
    int array_size = 7;

    printf("Original array: ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n\n");

    printf("Enter the position of the element you want to delete (0 to %d): ", array_size - 1);
    scanf("%d", &position_to_delete);

    if (position_to_delete >= 0 && position_to_delete < array_size) {
        for (int i = position_to_delete; i < array_size - 1; i++) {
            my_array[i] = my_array[i + 1];
        }
        array_size--;

        printf("\nArray after deleting the element at position %d:\n", position_to_delete);
        for (int i = 0; i < array_size; i++) {
            printf("%d ", my_array[i]);
        }
        printf("\n");
    } else {
        printf("\nInvalid position! Please enter a position between 0 and %d.\n", array_size - 1);
    }

    return 0;
}
