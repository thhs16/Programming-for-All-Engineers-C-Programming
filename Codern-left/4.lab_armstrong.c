// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : Neil Armstrong

#include <stdio.h>
#include <math.h>

    int main(){
        
        int num;
        int digitCount = 0;
        long long sumOfPowers = 0;
        int itemsRead;

        itemsRead = scanf("%d", &num);

        // if (itemsRead != 1) {   //check whether there is input or not
        //     printf("Invalid input or EOF reached.\n");
        //     return 1;
        // }

        if (num < 0) {
            printf ("0 is invalid\n");
            return 0;
        }

        int originalNum = num;
        int tempNum = num;

        while (tempNum != 0) {
            tempNum /= 10;  //tempNum = tempNum / 10;
            digitCount ++;
        }

        tempNum = originalNum;

        while (tempNum != 0) {
            int lastDigit = tempNum % 10;
            sumOfPowers += (long long) round (pow(lastDigit, digitCount));

            tempNum /= 10;
        }

        if (sumOfPowers == originalNum) {
            printf("%d is valid\n", originalNum);
        } else {
            printf("%d is invalid\n", originalNum);
        }

        return 0;
    }