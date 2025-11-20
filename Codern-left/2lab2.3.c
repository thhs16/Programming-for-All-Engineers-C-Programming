// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : The value is in the range or not

#include <stdio.h>
#include <stdbool.h>

int main(){

        int value;
        // bool test_con;
        
        scanf("%d", &value);
        // printf("%d", value);

        // test_con = value < 10 || value > 100;
        // printf("%d\n", test_con);
        // printf("%d", value < 10 || value > 1000);

        if( value < 10 || value > 10000 ){
            printf("No");
        }else{
            printf("Yes");
        }

        return 0;
}