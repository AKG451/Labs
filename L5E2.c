#include <stdio.h>

int main() {
    char order_choice;

    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(array) / sizeof(array[0]);

    printf("The array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

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
        printf("\nThe sorted array is:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    } else {
        printf("\nInvalid choice. Please run the program again and enter 'a' or 'd'.\n");
    }
  return 0;
}
