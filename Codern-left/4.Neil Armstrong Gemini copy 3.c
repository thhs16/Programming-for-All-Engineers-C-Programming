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
            printf("Invalid input or EOF reached.\n")
            return 1;
        }

        // 2. NEGATIVE NUMBER CHECK (First specific requriement)

        return 0;
}