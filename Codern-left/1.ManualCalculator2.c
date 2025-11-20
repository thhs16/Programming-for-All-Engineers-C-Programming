// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : Manual Calculator

#include <stdio.h>

int main(){
        float num, num2;
        char op;
        

        scanf("%f", &num);

        // FIX: Adding a space " %c" tells scanf to skip leading whitespace (like the Enter key)
        scanf(" %c", &op);
        scanf("%f", &num2);

            // We have to test with printf whether the scanf works or not
            // printf("%c", op);
            switch(op){
                case '+': printf("%g", num + num2); break;
                case '-': printf("%g", num - num2); break;
                case '*': printf("%g", num * num2); break;
                case '/': printf("%g", num / num2); break;
                default: printf("Invalid operator");
            }

        return 0;
}