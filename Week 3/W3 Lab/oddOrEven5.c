#include <stdio.h>

#define BOLD_ON "\e[1m"
#define BOLD_OFF "\e[0m"

int main(){

        int userN;

        
        printf("Enter A Number : "); scanf("%d", &userN);

        if( userN%2 != 0 ) {
                printf("Input           Output", BOLD_ON, BOLD_OFF);
                printf("\n");
                printf("%d             Odd", userN);
        }else {
                printf("Input           Output", BOLD_ON, BOLD_OFF);
                printf("\n");
                printf("%d             Even", userN);
        }

        return 0;
}