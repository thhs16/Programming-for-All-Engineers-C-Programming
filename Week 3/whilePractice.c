#include <stdio.h>
#define MAX 30

int main(){

        int i, sum = 0;

        //   1 2 3 4 5 6
        // 7 8 9 10 11 12 13

        printf("  S  M  T  W  T  F  S\n");
        printf("%3c", ' ');

        for(i=1;    i<= MAX;    i++){

            printf("%3d", i);

            if(i%7 == 6){ // How can this happen?
                printf("\n");

            }

        }
        

        return 0;
}