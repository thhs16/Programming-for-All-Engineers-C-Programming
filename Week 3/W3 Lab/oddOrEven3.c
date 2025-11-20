#include <stdio.h>

#define BOLD_ON "\e[1m"
#define BOLD_OFF "\e[0m"

int main(){

        long int userN;

        
        printf("Enter A Number : "); scanf("%ld", &userN);

        if( userN%2 != 0 ) {
                printf("Input           Output", BOLD_ON, BOLD_OFF);
                printf("\n");
                printf("%lu            Odd", &userN);
        }else {
                printf("Input           Output", BOLD_ON, BOLD_OFF);
                printf("\n");
                printf("%ld            Even", &userN);
        }

        return 0;
}