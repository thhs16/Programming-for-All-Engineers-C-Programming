 
    #include <stdio.h>

    int main() {

        int scores[3];

        int sum = 0;
        int max_score;
        int min_score;
        float avg_score;

        if(scanf("%d", &scores[0]) != 1) {
            
            printf("Invalid Input.\n");
            return 1;
        }

        max_score = scores[0];
        min_score = scores[0];
        sum = scores[0];

        for (int i=1;   i<3;    i++) {

            if(scanf(" %d", &scores[i]) != 1) {

                printf("Invalid input.\n");
                return 1;
            }

            sum += scores[i];

            if (scores[i] > max_score) {
                max_score = scores[i];
            }

            if (scores[i] < min_score) {
                min_score = scores[i];
            }
        }

        avg_score = (float)sum / 3.0;

        printf("Max score of 3 students is %d\n", max_score);
        printf("Min score of 3 students is %d\n", min_score);
        printf("Average score of 3 students is %.2f\n", avg_score);

        return 0;
    }