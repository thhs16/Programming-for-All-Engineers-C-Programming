// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : Floyd's Triangle (a Number Triangle Pattern) - no trailing spaces

#include <stdio.h>

int main(){

        int line;
        int num = 1;

        printf("hello\n");
        scanf("%d", &line);
        
         for( int i=0;  i<line;  i++){
            
            if(i != 0){
            num = num + 1;
            }

            printf("%d", num);

            for ( int j = 0; j < i; j++)
            {
                num++;
                printf("%d", num);
            }

            printf("\n");
            
         }

        return 0;
}