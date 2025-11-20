#include <stdio.h>
#include <math.h> // for sqrt and pow methods
#define MAX 10

int main(){

        double num=2;
        double score[MAX] = {10,9,8,7,6,5,6,7,8,9};
        double sum = 0.0, average = 0.0;

        for( int i=0;  i<MAX;   i++) {
            sum += score[i];
        }

        printf("%lf\n", sum);
        return 0;
}