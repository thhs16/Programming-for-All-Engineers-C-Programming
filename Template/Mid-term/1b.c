// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE :

#include <stdio.h>

int main(){

        int times;
        float e;

        printf("hello\n");

        scanf("%d", &times);

            for ( int i=0;  i<times;    i++){

                if(i == 0){
                    e = 1;
                } else {
                    e += 1/i;
                }
                
            }

        printf("%.6f", e);

        return 0;
}