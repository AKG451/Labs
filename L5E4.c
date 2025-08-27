#include <stdio.h>

int main() {
    int element_to_delete, position = -1;

    int my_array[20] = {64, 34, 25, 12, 22, 11, 90};
    int array_size = 7;

    printf("Original array: ");
    for (int i = 0; i < array_size; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n\n");

    printf("Enter the element you want to delete: ");
    scanf("%d", &element_to_delete);

    for (int i = 0; i < array_size; i++) {
        if (my_array[i] == element_to_delete) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        for (int i = position; i < array_size - 1; i++) {
            my_array[i] = my_array[i + 1];
        }
        array_size--;

        printf("\nArray after deleting %d:\n", element_to_delete);
        for (int i = 0; i < array_size; i++) {
            printf("%d ", my_array[i]);
        }
        printf("\n");
    } else {
        printf("\nElement %d not found in the array.\n", element_to_delete);
    }

    return 0;
}

