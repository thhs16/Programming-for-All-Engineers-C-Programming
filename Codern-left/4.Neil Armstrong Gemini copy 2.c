// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : Neil Armstrong

#include <stdio.h>

int main(){

        long long num, tempNum, originalNum;
        int digitCount = 0;
        long long sumOfPowers = 0;
        
        printf("Enter a positive integer : ");

        if (scanf("%d", &num) < 0) {
            printf("%d", num);
            printf("Armstrong number can't be negative");
            return 1;
        }

        originalNum = num;
        tempNum = num;

        // Step 1 : Find the Order (Number of Digits) - n
        // We use tempNum here so we don't destory the original value of num.
        while (tempNum != 0) {

            tempNum /= 10; // Chop off the last digit
            digitCount++; // Increment the counter
        }

        // Reset tempNum to the original number for the second loop
        tempNum = originalNum;
        
        // Step 2 : Calculate the Sum of Powers
        // The exponent is now stored in 'digitCount'

        while (tempNum != 0) {
            int lastDigit = tempNum % 10; // Extract the last digit

            // Calculate the power : lastDigit ^ digitCount .
            // We cast the result of pow() back to long long as it returns a float/double.
            sumOfPowers += (long long)pow(lastDigit, digitCount);

            tempNum /= 10; // Chop off the last digit
        }

        // Step 3: Final Check
        if (sumOfPowers == originalNum) {
            printf("%d is valid", originalNum);
        } else {
            printf("%d is invalid", originalNum);
        }
        

        return 0;
}