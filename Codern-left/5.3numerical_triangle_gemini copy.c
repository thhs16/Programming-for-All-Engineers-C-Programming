// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE :



#include <stdio.h>

int main() {

    int height;

    scanf("%d", &height);


    if (height < 0) {
        printf("Negative number can't be the height of triangle\n");
    } else {

        for (int i=0;   i<height;   i++) {

            long long val = i+1;

            printf("%d", val);

                for (int j=1;   j<= i;  j++) {

                    val += (height - j); // main point
                
                    printf(" %d", val);
                }

                printf("\n");
        }
    }

    return 0;
}