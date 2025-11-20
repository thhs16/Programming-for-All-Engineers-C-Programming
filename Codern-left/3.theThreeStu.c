// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : The 3 students

# include <stdio.h>

    int main () {

        int num[2];
        float avg;
        
        for ( int i=0;  i<3;    i++) {
            scanf(" %d", &num[i]);  // 1) The space is crutial. // 2) Assign the index
        }

        // Testing
        // for ( int i=0;  i<3;    i++) {
        //     printf("%d", num[i]);
        // }

        if (num[1] > num[0]) {


            if (num[1] > num[2]){
                
                printf ("Max score of 3 students is %d\n", num[1]);
            } else {
                
                printf ("Max score of 3 students is %d\n", num[2]);
            }

            if (num[2] > num[0]){

                printf ("Min score of 3 students is %d\n", num[0]);
            } else {

                printf ("Min score of 3 students is %d\n", num[2]);
            }
            

        } else if (num[2] > num[0]) {


            if (num[2] > num[1]){
                
                printf ("Max score of 3 students is %d\n", num[2]);
            } else {
                
                printf ("Max score of 3 students is %d\n", num[1]);
            }

            if (num[1] > num[0]){

                printf ("Min score of 3 students is %d\n", num[0]);
            } else {

                printf ("Min score of 3 students is %d\n", num[1]);
            }
            

        } else if (num[0] > num[2]) {


            if (num[0] > num[1]){
                
                printf ("Max score of 3 students is %d\n", num[0]);
            } else {
                
                printf ("Max score of 3 students is %d\n", num[1]);
            }

            if (num[1] > num[2]){

                printf ("Min score of 3 students is %d\n", num[2]);
            } else {

                printf ("Min score of 3 students is %d\n", num[1]);
            }
            
            
        } else {

            printf ("Max score of 3 students is %d\n", num[0]);

            printf ("Min score of 3 students is %d\n", num[0]);

        }

        avg = (num[0] + num[1] + num[2]) / 3;
        printf ("Average score of 3 students is %.2f", avg);

        return 0;
    }