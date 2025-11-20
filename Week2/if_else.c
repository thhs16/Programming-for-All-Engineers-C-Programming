#include <stdio.h>

    int main(){

        int num = 39;

        if(num % 2 == 0) {
            // printf("It is even.\n");
        }
        if (num % 2 == 1) {
            // printf ("It is odd.\n");
        }

        // if(num % 2 == 0) 
            // printf("It is even.\n");
        // else
            // printf("It is odd.\n");



    // Init; Ending Condition; Increment
        for(int i=1;    i<=10;  i++){
            // printf("%3d", i);       //%3d means three colums to be printed out.
        }

        
        for(    int i=1;    i<= 20;    i++){
            if(i % 2 != 0){
                printf("%3d", i);
            }
        }

        // printf("\n");

        for(    int i=1;    i<= 20;    i= i+2){     //faster
                printf("\n%3d", i);
        }

        

        return 0;
    }