// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE :

#include <stdio.h>
#include <stdbool.h>

int main(){

        int value;
        bool test_con;
        
        scanf("%d", &value);
        // printf("%d", value);

        test_con = value < 10 || value > 100;
        printf("%d", test_con);
        printf("%d", value < 10 || value > 100);

        // if( value < 10 || value > 100 ){
        //     printf("No");
        // }else{
        //     printf("Yes");
        // }

        return 0;
}