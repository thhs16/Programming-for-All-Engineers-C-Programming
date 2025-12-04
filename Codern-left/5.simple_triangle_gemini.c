#include <stdio.h>

int main() {
    int height;

    // Read the height input
    if (scanf("%d", &height) != 1) return 1;

    // 1. Check for Negative Numbers
    if (height < 0) {
        printf("Negative number can't be the height of triangle\n");
    } 
    // 2. Print the Triangle
    else {
        // Loop for each row (from 0 to height-1)
        for (int i = 0; i < height; i++) {
            
            // Loop for stars in the current row
            // We want (i + 1) stars on row i.
            for (int j = 0; j <= i; j++) {
                printf("*");
                
                // Print a space AFTER the star, but ONLY if it's not the last star.
                // This ensures the line doesn't end with an invisible space.
                if (j < i) {
                    printf(" ");
                }
            }
            
            // Move to the next line after finishing the row
            printf("\n");
        }
    }

    return 0;
}