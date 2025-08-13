#include <stdio.h>

int main() {

    // --- Demonstrating 'break' and 'continue' in a WHILE loop ---
    printf("--- WHILE Loop Demonstration ---\n\n");

    int i = 1;
    printf("Demonstrating 'continue': Skipping numbers divisible by 3\n");
    while (i <= 10) {
        if (i % 3 == 0) {
            printf("  Skipping %d (divisible by 3)\n", i);
            i++; // Important: Increment i before 'continue' to avoid infinite loop
            continue; // Skip the rest of this iteration
        }
        printf("  Processing number: %d\n", i);
        i++;
    }
    printf("While loop with 'continue' finished.\n\n");

    int j = 1;
    printf("Demonstrating 'break': Stopping when j reaches 7\n");
    while (j <= 10) {
        if (j == 7) {
            printf("  Breaking loop because j is %d\n", j);
            break; // Exit the loop entirely
        }
        printf("  Processing number: %d\n", j);
        j++;
    }
    printf("While loop with 'break' finished.\n\n");


    // --- Demonstrating 'break' and 'continue' in a DO-WHILE loop ---
    printf("--- DO-WHILE Loop Demonstration ---\n\n");

    int k = 1;
    printf("Demonstrating 'continue': Skipping numbers divisible by 4\n");
    do {
        if (k % 4 == 0) {
            printf("  Skipping %d (divisible by 4)\n", k);
            k++; // Important: Increment k before 'continue' to avoid infinite loop
            continue; // Skip the rest of this iteration
        }
        printf("  Processing number: %d\n", k);
        k++;
    } while (k <= 10);
    printf("Do-While loop with 'continue' finished.\n\n");

    int l = 1;
    printf("Demonstrating 'break': Stopping when l reaches 5\n");
    do {
        if (l == 5) {
            printf("  Breaking loop because l is %d\n", l);
            break; // Exit the loop entirely
        }
        printf("  Processing number: %d\n", l);
        l++;
    } while (l <= 10);
    printf("Do-While loop with 'break' finished.\n\n");

    return 0; // Indicate successful program execution
}
