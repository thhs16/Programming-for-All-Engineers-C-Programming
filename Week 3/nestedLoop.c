#include <stdio.h>
#define MAX 10

int main(){

        // int sum = 0;

        for(int i=0;  i<MAX; i++){

            printf("Row %d:",   i);


            for(int j=2;  j<i;    j++){

                

                printf("%3d",   j);
            }

            printf("\n");
        }

        return 0;
}