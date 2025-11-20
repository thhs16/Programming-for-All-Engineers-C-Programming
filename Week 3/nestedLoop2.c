#include <stdio.h>
#define MAX 10

int main(){

        // int sum = 0;

        for(int i=0;  i<MAX; i++){

            printf("Row %d:",   i);


            for(int j=2;  j<i;    j++){

                if (i % j == 0){
                    break;
                }else{
                    printf("%3d",   j);
                }

            }

            printf("\n");
        }

        return 0;
}