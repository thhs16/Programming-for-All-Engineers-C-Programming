// NAME :
// ID:

#include <stdio.h>
#include <math.h>
#define MAX 3

int main() {
    int matrix[MAX][MAX] = {{11,12,13}, 
                            {21,22,23}, 
                            {31,32,33}};
    
    int m1[MAX][MAX];
    // Perform Transpose to this matrix

    for (int i=0; i < MAX; i++) {

        for (int j=0; j < MAX; j++) {

            m1[i][j] = matrix[j][i];
        }
 
    }

    
    // Matrix Addition
    //   matrix[i][j] = m1[i][j] + m2[i][j];
    // Print the 3x3 matrix 
    for (int i=0; i < MAX; i++) {
        printf("[");
        for (int j=0; j < MAX; j++) {
            printf("%3d", m1[i][j]);
        }
        printf("]\n");
    }
    return 0;
}