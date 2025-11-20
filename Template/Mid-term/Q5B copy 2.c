// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : Horizontal Histogram

#include <stdio.h>

int main(){

        int data;

        scanf("%d", &data);

        int num[data];

        for ( int i=0;   i<data;     i++){
            scanf("%d", &num[i]);
        }

        for (int j=0; j < data; j++)
        {
            printf("%d | ", num[j]);
            for( int k=0;   k<num[j];  k++){
                
                printf("*");
            }

            printf("\n");
        }
        
        
        return 0;
}