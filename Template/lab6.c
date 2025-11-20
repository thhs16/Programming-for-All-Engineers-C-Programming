#include <stdio.h>

int main(){

        int x;

        scanf("%d", &x);

        if(x % 2 == 0){
                printf("%d is prime number", x);
        } else {
                printf("%d is not prime number", x);
        }
        return 0;
}