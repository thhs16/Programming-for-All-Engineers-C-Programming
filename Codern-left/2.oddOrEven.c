// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : To determine if a number is odd or even

#include <stdio.h>

    int main(){
        
        int num;

        scanf("%d", &num);
        
        if ( num%2 == 0 ){
            
            printf("%d is even.", num);
        } else {

            printf("%d is odd.", num);
        }

        return 0;
    }