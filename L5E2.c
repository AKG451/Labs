#include <stdio.h>

// The main function where the program execution begins.
int main() {
    int array_size;
    char order_choice;

    // --- Get User Input for the Array ---

    // 1. Ask the user how many elements they want in the array.
    printf("How many numbers do you want to enter? ");
    scanf("%d", &array_size);

    // Check if the user entered a valid size.
    if (array_size <= 0) {
        printf("Invalid size. Please enter a positive number.\n");
        return 1; // Exit with an error code
    }

    // 2. Declare an array of the size the user specified.
    int my_array[array_size];

    // 3. Ask the user to enter the numbers and read them into the array.
    printf("Please enter %d numbers:\n", array_size);
    for (int i = 0; i < array_size; i++) {
        scanf("%d", &my_array[i]);
    }

    // --- Get User's Sorting Choice ---
    printf("\nEnter 'a' for ascending order or 'd' for descending order: ");
    // Note the space before %c to consume any leftover newline characters from previous inputs.
    scanf(" %c", &order_choice);


    // --- Bubble Sort Implementation ---
    // Outer loop for passes
    for (int i = 0; i < array_size - 1; i++) {
        // Inner loop for comparisons
        for (int j = 0; j < array_size - i - 1; j++) {

            // Use a switch case to decide the comparison logic
            switch (order_choice) {
                case 'a': // Ascending Order
                    if (my_array[j] > my_array[j + 1]) {
                        // Swap the elements
                        int temp = my_array[j];
                        my_array[j] = my_array[j + 1];
                        my_array[j + 1] = temp;
                    }
                    break;

                case 'd': // Descending Order
                    if (my_array[j] < my_array[j + 1]) {
                        // Swap the elements
                        int temp = my_array[j];
                        my_array[j] = my_array[j + 1];
                        my_array[j + 1] = temp;
                    }
                    break;
            }
        }
    }

    // --- Print the Final Sorted Array ---
    if (order_choice == 'a' || order_choice == 'd') {
        printf("\nThe sorted array is:\n");
        for (int i = 0; i < array_size; i++) {
            printf("%d ", my_array[i]);
        }
        printf("\n");
    } else {
        printf("\nInvalid choice. Please run the program again and enter 'a' or 'd'.\n");
    }


    // Return 0 to show the program ran successfully.
    return 0;
}
