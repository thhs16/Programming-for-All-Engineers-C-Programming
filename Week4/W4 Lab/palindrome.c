// Name : Thae Htape Htar San
// ID : 68070503468

// Plan
// Add a number
// if it is postive or negative (no positive number)
// we have to find a mid number 

// (if it does not have a mid number, 
// it will be two interger or one interger meaning we have to show "num" is not a palindrome.)

// then we will compare two numbers adjacent
// all the numbers - success - palindrome
// not all the numbers - break - not palindrome


#include <stdio.h>

int main(){

        int num;
        char num_arr[];
        int arr_length;

        num = 101;

        // printf("Num : ");
        // scanf("%lf", &num);

        // array
        sprintf(num_arr, "%d", num);

        // printf("Array Element : "); //T
        printf("%s", num_arr); //T


        // odd or even
        arr_length = sizeof(num_arr);
        printf("%d", sizeof(num_arr));

        // 

        return 0;
}