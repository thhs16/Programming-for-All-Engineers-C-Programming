#include <stdio.h>
#include <math.h> // for sqrt and pow methods
#define MAX 10

int main(){

        double num=2;
        double score[MAX] = {10,9,8,7,6,5,6,7,8,9};
        double sum = 0.0, average = 0.0;
        double sd;

        for (int i =0;  i<MAX;  i++) {
            sum += pow(score[i] - average, 2);
        }

        sd = sqrt(sum/ num);

        printf("Standard Deviation is %.2lf\n", sum);
        return 0;
}