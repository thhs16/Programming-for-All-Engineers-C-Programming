#include <stdio.h>
#define MAX 20

int main(){

        int i, j= 0;

        for( i=2;  i<MAX; i++){

            // printf("Row %d:",   i);


            for( j=2;  j<i;    j++){

                if (i % j == 0){
                    break;}
                // }else{
                //     printf("%3d",   j);
                // }

            }

            if (i == j) printf("%3d", i);

            // printf("\n");
        }

        return 0;

}