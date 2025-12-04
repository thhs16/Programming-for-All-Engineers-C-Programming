// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : Numerical Triangle

#include <stdio.h>

int main() {
    int height;
    int count = 1; // This variable remembers the current number to print

    // Read the input
    if (scanf("%d", &height) != 1) return 1;

    // 1. Check for Negative Numbers
    if (height < 0) {
        printf("Negative number can't be the height of triangle\n");
    } 
    // 2. Print the Numeric Triangle
    else {
        // Outer loop: iterates through each row (1 to height)
        for (int i = 1; i <= height; i++) {
            
            // Inner loop: prints numbers in the current row
            // Row 1 has 1 number, Row 2 has 2 numbers, etc.
            for (int j = 1; j <= i; j++) {
                
                printf("%d", count);
                
                // Print a space only if it is NOT the last number in the row
                if (j < i) {
                    printf(" ");
                }

                // Increment the counter so the next number is higher
                count++;
            }
            
            // Move to the next line after the row is done
            printf("\n");
        }
    }

    return 0;
}