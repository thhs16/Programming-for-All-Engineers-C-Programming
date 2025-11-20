

#include <stdio.h>
#include <math.h> // for sqrt and pow methods
#define MAX 10

int main(){

        double num=2;
        double score[MAX] = {10,9,8,7,6,5,6,7,8,9};
        double sum = 0.0, average = 0.0;

        printf("%.8lf\n", sqrt(num));   // square root
        printf("%.8lf\n", pow(num, 5));     // Power
        printf("%.8lf\n", pow(num, -5));     // Power
        printf("%.8lf\n", pow(num, 0.5));     // Power
        printf("%.8lf\n", log(num));     // log
        printf("%.8lf\n", log(num)/log(2.71828));     
        printf("%.8lf\n", log10(num));     
        

        return 0;
}