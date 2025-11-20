#include <stdio.h>

    int main() {

        int num[3]; // cool
        float avg;
        int max_score, min_score;
        int sum = 0;
    

        for (int i=0;   i<3;    i++){
            
            if(scanf(" %d", &num[i])    != 1) {
                
                printf("Invalid Input.\n");
                return 1;
            }

            sum += num[i];
        }

        max_score = num[0];
        min_score = num[0];

        for (int i=1;   i<3;    i++) {

            if(num[i] > max_score) {
                max_score = num[i];
            }

            if(num[i] < min_score) {
                min_score = num[i];
            }
        }

        printf("\nMax score of 3 students is %d\n", max_score);
        printf("Min score of 3 students is %d\n", min_score);

        avg = (float)sum / 3.0;

        printf("Average score of 3 students is %.1f\n", avg);

        return 0;
    
    }