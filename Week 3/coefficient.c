#include <stdio.h>

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1

int main(){

        int rows, coef = 1;
        
        printf("Enter number of rows: "); scanf("%d", &rows);

        for (int i = 0;     i < rows;   i++) {
            
            for(int space = 1;  space <= rows-i;    space++)
            printf("   ");

            for(int j = 0;  j <= i;     j++) {

                if (j==0 || i==0) coef = 1;
                else coef = coef * (i - j + 1) /j;
                printf("%4d", coef);
            }

            printf("\n");
        }

        return 0;
}