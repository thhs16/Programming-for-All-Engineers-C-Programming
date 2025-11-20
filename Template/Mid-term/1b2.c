// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE :  Approximating Euler's Number (e)

#include <stdio.h>
#define main.c

int main(){

        int times;
        float e;

        // printf("hello\n");

        scanf("%d", &times);

            for ( int i=0;  i<times;    i++){

                if(i == 0){
                    e = 1;
                } else {

                    e += 1/i;
                }
                
            }

        // e = 2;
        // e = 17/3;

        printf("%.6f", e);

        return 0;
}