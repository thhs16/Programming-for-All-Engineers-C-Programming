// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : Pointer

#include <stdio.h>

int main(){

        int count = 7;
        int* countPtr;  //pointer to count

        printf("%d\n", count);
        printf("%p\n", &count);         //the adress of count variable put in the computer

        countPtr =& count;  // countPtr --> count
        printf("%p\n", countPtr);

        // %p is used to show the value of address of the variable on the computer

        return 0;
}