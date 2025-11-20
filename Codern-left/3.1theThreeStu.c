#include <stdio.h>

int main() {
    // FIX: Array size must be 3 to hold 3 scores.
    int num[3]; 
    float avg;
    int max_score, min_score;
    int sum = 0;

    printf("Enter 3 scores, pressing Enter after each one:\n");

    // 1. Input and Summation Loop (Efficiently reads all inputs)
    for (int i = 0; i < 3; i++) {
        if (scanf(" %d", &num[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        sum += num[i]; // Calculate the sum while reading for the average later
    }

    // 2. Initialize Max and Min
    // Start by assuming the first score is both the max and min
    max_score = num[0];
    min_score = num[0];

    // 3. Find Max and Min (The short logic to replace all the if/else)
    // Start the loop from the second element (index 1)
    for (int i = 1; i < 3; i++) {
        if (num[i] > max_score) {
            max_score = num[i];
        }
        if (num[i] < min_score) {
            min_score = num[i];
        }
    }

    // 4. Calculate and Print Results
    printf("\nMax score of 3 students is %d\n", max_score);
    printf("Min score of 3 students is %d\n", min_score);

    // Ensure floating-point division by casting the sum to float
    avg = (float)sum / 3.0;
    printf("Average score of 3 students is %.2f\n", avg);

    return 0;
}