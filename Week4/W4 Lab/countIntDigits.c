// Name : Thae Htape Htar San
// ID : 68070503468

#include <stdio.h>

int main(){

        int num = 1234556789;

        int digits = (num == 0) ? 1 : log10(num) + 1;
        
        printf("Number of digits = %d\n", digits);
        return 0;
}