#include <stdio.h>

int main() {
    char order_choice;
    int new_element, position;

    int array[20] = {64, 34, 25, 12, 22, 11, 90};
    int size = 7;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");

    printf("Enter the element to insert: ");
    scanf("%d", &new_element);

    printf("Enter the position (0 to %d) where you want to insert it: ", size);
    scanf("%d", &position);

    if (position < 0 || position > size) {
        printf("Invalid position!\n");
        return 1;
    } else {
        for (int i = size - 1; i >= position; i--) {
            array[i + 1] = array[i];
        }

        array[position] = new_element;
        size++;

        printf("\nArray after inserting %d at position %d:\n", new_element, position);
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    printf("\nEnter 'a' for ascending order or 'd' for descending order: ");
    scanf(" %c", &order_choice);

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            switch (order_choice) {
                case 'a':
                    if (array[j] > array[j + 1]) {
                        int temp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = temp;
                    }
                    break;
                case 'd':
                    if (array[j] < array[j + 1]) {
                        int temp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = temp;
                    }
                    break;
            }
        }
    }

    if (order_choice == 'a' || order_choice == 'd') {
        printf("\nThe final sorted array is:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    } else {
        printf("\nInvalid choice. Please run the program again and enter 'a' or 'd'.\n");
    }

    return 0;
}
