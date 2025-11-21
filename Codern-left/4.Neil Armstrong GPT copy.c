// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : Do you know Neil Armstrong?

#include <stdio.h>

int main(){

        int num;
        int count = 0;

        printf("Enter a number: ");

        if (scanf("%d", &num) != 1) {
                return 1; // Exist if input is bad
        }


        int originalNum = num;
        do {
                num = num / 10;
                count ++;

        } while (num != 0);

        printf("Number : %d\n", originalNum);
        printf("Digits : %d\n", count);

        return 0;
}