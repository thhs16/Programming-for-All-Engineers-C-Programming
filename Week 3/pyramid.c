#include <stdio.h>
#define MAX 7

int main(){

        int i, j;

        for (i = 0;     i<5;    i++) {
            
            for(j = 0;  j< MAX-i-1;    j++) printf(" ");
        
            for(j = 0;  j< i+1;    j++) printf("*");

            for(j = 0;  j< i;    j++) printf("*");

            
            printf("\n");
        }

        return 0;
}