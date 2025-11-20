// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : The value is in the range or not

#include <stdio.h>

int main(){

        int value;
        
        scanf("%d", &value);

        if( value < 10 || value > 10000 ){
            printf("No");
        }else{
            printf("Yes");
        }

        return 0;
}