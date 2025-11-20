#include <stdio.h>

/**
 * Program to calculate the Max, Min, and Average score for 3 students.
 * It reads the scores into an array and uses an efficient single loop
 * to find the required values.
 */
int main() {
    // Array to hold the 3 student scores
    int scores[3];
    
    // Variables for calculations
    int sum = 0;
    int max_score;
    int min_score;
    float avg_score;

    printf("Enter the 3 student scores (e.g., 85 92 78): ");

    // 1. Input and Initialization Loop
    // Read the first score separately to initialize max and min easily.
    if (scanf("%d", &scores[0]) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    max_score = scores[0];
    min_score = scores[0];
    sum = scores[0];
    
    // Read the remaining 2 scores (from index 1) and find Max/Min/Sum simultaneously.
    for (int i = 1; i < 3; i++) {
        if (scanf(" %d", &scores[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        
        // Update Sum
        sum += scores[i];
        
        // Update Max
        if (scores[i] > max_score) {
            max_score = scores[i];
        }
        
        // Update Min
        if (scores[i] < min_score) {
            min_score = scores[i];
        }
    }

    // 2. Calculate Average
    // Cast 'sum' to float before dividing to ensure floating-point arithmetic.
    avg_score = (float)sum / 3.0;

    // 3. Output Results (Matching the required format)
    printf("Max score of 3 students is %d\n", max_score);
    printf("Min score of 3 students is %d\n", min_score);
    // Use %.2f to print the average with exactly two decimal places
    printf("Average score of 3 students is %.2f\n", avg_score);

    return 0;
}
