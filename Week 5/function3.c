// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE :

#include <stdio.h>

        int swap(int *x, int *y){ // function with parameters     // local var

                int temp = *x;

                printf("a = %d, b = %d\n", *x, *y);
                *x = *y;
                *y = temp;

                printf("a = %d, b = %d\n", *x, *y);

                return 0;
        }


        int main() {
            
        }