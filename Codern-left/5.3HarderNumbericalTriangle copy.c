// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE :

#include <stdio.h>

        int main(){
                
                int height;

                int count = 1;

                scanf(" %d", &height);

                if (height < 0) {
                    printf("Negative number can't be the height of triangle");
                
                } else {
                    for (int i = 1;     i <= height;    i++) {
                        
                        for (int j = 1;     j <= i;     j++)
                        {
                            printf("%d", count);

                            if (j < i) {
                                printf(" ");
                            }

                            count++;
                        }

                        printf("\n");
                    }
                }
                

                return 0;
        }