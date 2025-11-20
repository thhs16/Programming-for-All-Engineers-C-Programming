#include <stdio.h>

    int main(){

        int bi = 100111;
        int base10;     // 1*2^5 + 1*2^2 + 1*2^1 + 1*2^0

        
        int bit0 = 1;
        int bit1 = 0;
        int bit2 = 0;
        int bit3 = 1;
        int bit4 = 1;
        int bit5 = 1;

        // cannot use ^ in C
        
        // int decimal5 = bit5*(2^0); //1
        // int decimal4 = bit4*(2^1); //2
        // int decimal3 = bit3*(2^2); //4
        // int decimal2 = bit2*(2^3); //0
        // int decimal1 = bit1*(2^4); //0
        // int decimal0 = bit0*(2^5); //32
        // int decimal0 = 1*2^5;

        int decimal5 = bit5; //1
        int decimal4 = bit4*2; //2
        int decimal3 = bit3*2*2; //4
        int decimal2 = bit2*2*2*2; //0
        int decimal1 = bit1*2*2*2*2; //0
        int decimal0 = bit0*2*2*2*2*2; //32

        // printf("%d\n", decimal0);

        int decimal = decimal0 + decimal1 + decimal2 + decimal3 + decimal4 + decimal5;
        printf("%d\n", decimal);
        


        return 0;
    }