// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : Symmetric Triangles (Up and Down)

#include <stdio.h>

int main(){

        int num;

        printf("hello\n");
        scanf("%d", &num);
        
         for( int i=0;  i<num;  i++){
            
            for( int l = 0;     l<num-1;  l += 2){
                printf(" ");

                // for ( int m = 0;     j < l;     j ++)
                // {
                // printf("*");

                // }
            }

            printf("*");

            for ( int j = 0;     j < i;     j ++)
            {
                printf("*");

            }

            for ( int k = 0;     k < i;     k ++)
            {

                    printf("*");

            }

            printf("\n");
            
         }

        return 0;
}