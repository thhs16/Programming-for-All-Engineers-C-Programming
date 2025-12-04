// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : Numerical Triangle

#include <stdio.h>

int main() {
    int height;
    // FIX: Use 'long long' to prevent overflow for large triangles
    long long count = 1; 

    // Read the input
    if (scanf("%d", &height) != 1) return 1;

    // 1. Check for Negative Numbers
    if (height < 0) {
        printf("Negative number can't be the height of triangle\n");
    } 
    // 2. Print the Numeric Triangle
    else {
        // Outer loop: Rows
        for (int i = 1; i <= height; i++) {
            
            // Inner loop: Columns
            for (int j = 1; j <= i; j++) {
                
                // FIX: Use %lld to print long long variables
                printf("%lld", count);
                
                // Only print a space if it is NOT the last number in the row
                if (j < i) {
                    printf(" ");
                }

                count++;
            }
            
            // Move to new line
            printf("\n");
        }
    }

    return 0;
}