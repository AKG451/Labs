#include <stdio.h>

int main() {
    // Variable for the new element and its desired position
    int new_element, position;

    // Initial array and its size
    int array[20] = {64, 34, 25, 12, 22, 11, 90};
    int size = 7;

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");

    // Get user input for the new element
    printf("Enter the element to insert: ");
    scanf("%d", &new_element);

    // Get user input for the position
    printf("Enter the position (0 to %d) where you want to insert it: ", size);
    scanf("%d", &position);

    // Validate the position
    if (position < 0 || position > size) {
        printf("Invalid position!\n");
        return 1; // Exit with an error code
    } else {
        // Shift elements to the right to make space for the new element
        for (int i = size - 1; i >= position; i--) {
            array[i + 1] = array[i];
        }

        // Insert the new element at the specified position
        array[position] = new_element;
        // Increment the size of the array
        size++;

        // Print the final array after insertion
        printf("\nArray after inserting %d at position %d:\n", new_element, position);
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}
