#include <stdio.h>

int main(){

        int userN;
        
        printf("1 Possitive integer values"); scanf("%d", &userN);

        if( userN%2 != 0 ) {

                printf("Odd");
        }else {

                printf("Even");
        }

        return 0;
}