#include <stdio.h>

int main(){

        int num;

        num = 2;

        if(num == 1){
            printf("The num is 1.");
        }else{
            printf("The num is 2.");
        }


        switch(num){
            case 1: printf("The num is 1.");break;
            case 2: printf("The num is 2.");break;
            
        }

        return 0;
}