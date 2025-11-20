// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE :

#include <stdio.h>

int main(){

        int data;

        scanf("%d", &data);

        int num[data];

        for ( int i=0;   i<data;     i++){
            scanf("%d", &num[i]);
        }

        for (int j=0; i < data; i++)
        {
            for( int k=0;   k<data[i];  k++){
                printf("*");
            }
        }
        
        
        return 0;
}