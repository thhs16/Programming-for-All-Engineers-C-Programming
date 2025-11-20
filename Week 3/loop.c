#include <stdio.h>
#define MAX 10

int main(){

        int i, sum = 0;


        for(i=1;    i <= MAX; i++){
            sum = sum + i;
        }

        printf("%d", sum);

        return 0;
}