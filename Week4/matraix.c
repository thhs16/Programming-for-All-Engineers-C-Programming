#include <stdio.h>
#define MAX 3

int main(){

        // int matrix[3][3] = {0};

        int matrix[MAX][MAX] = {{11,12,13},
                                {21,22,23},
                                {31,32,33}};

        for (int i=0; i < MAX; i++) {

            printf("[%d\n",i);

            for ( int j=0;  j < MAX; j++) {

                printf("%3d", matrix[i][j]);
            }
            printf("]\n");
        }
        return 0;
}