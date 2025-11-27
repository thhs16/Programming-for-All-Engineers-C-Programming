// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : Neil Armstrong

#include <stdio.h>
#include <math.h>

// Program to determine if a positive integer is an Armstrong Number. An Armstrong number is equal to the sum of its own digits, each raised to the power of the number of digits in that number.

int main(){

        int num;
        int digitCount = 0;
        long long sumOfPowers = 0;
        int itemsRead;

        // Read the single integer input.
        itemsRead = scanf("%d", &num);

        // 1. INPUT VALIDATION CHECK (Handle non-integer input or EOF)
        if (itemsRead != 1){
            // This case generally handles non-integer characters if the input is buffered.
            printf("Invalid input or EOF reached.\n");
            return 1;
        }

        // 2. NEGATIVE NUMBER CHECK (First specific requriement)
        if (num < 0){
            printf("Armstrong number can't be negative\n");
            return 0;
        }

        // Handle 0 separately, as 0 is technically an Armstrong number (0^1 = 0)
        if (num == 0) {
            printf("0 is invalid\n");
            return 0;
        }

        // Store copies of the number, as 'temp' and 'num' will be modified
        int originalNum = num;
        int tempNum = num;


        // -- STEP 1 : Find the Order (Number of Digits) ---
        while (tempNum != 0) {
            tempNum /= 10;
            digitCount ++;
        }

        // Reset the tempory number for the power calculation loop
        tempNum = originalNum;

        // -- STEP 2: Calculate the Sum of Powers ---
        // Use long long for the sum to prevent overflow during the calculation
        while (tempNum != 0) {
            int lastDigit = tempNum % 10;

            // Calculate power and add to sum. The pow function returns a double, so cast it.
            // For large numbers, using long long is essential for this sum.
            sumOfPowers += (long long)round(pow(lastDigit, digitCount));

            tempNum /= 10;
        }

        // ---STEP 3: Determine and Print Final Output ---
        if (sumOfPowers == originalNum) {
            // 3. Armstrong (Valid) CHECK (Second specific requirement)
            printf("%d is valid\n", originalNum);
        } else {
            // 4. Not Armstrong (Invalid) CHECK (Third specific requirement)
            printf("%d is invalid\n", originalNum);
        }

        return 0;
}