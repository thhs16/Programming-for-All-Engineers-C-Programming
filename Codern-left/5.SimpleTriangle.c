// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : Simple Triangle

#include <stdio.h>

        int main(){
                int height;


                scanf("%d", &height);

                if(height > 1) {

                        for (int i = 0;         i < height;     i++)
                        {
                                printf("*");
                                
                                for (int j = 0;         j < i;      j++)
                                {
                                        printf("*");
                                }
                                
                                printf("\n");
                        }

                } else {
                        printf("Negative number can't be the height of triangle");
                }

                
                return 0;
        }