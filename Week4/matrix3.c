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

    
    // Find Determinant
    // 11 22 33 + 12 23 31 + 13 21 32 - (31 22 13 + 32 23 11 + 33 21 12)

    // Matrix Addition
    //  matrix[i][j] = m1[i][j] + m2[i][j];
    // Print the 3*3 matrix
}