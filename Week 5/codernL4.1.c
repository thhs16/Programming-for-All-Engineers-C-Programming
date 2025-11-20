// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE :

#include <stdio.h>

int main(){

        int len;
        char arr_ele[len];
        

        scanf("%d\n", &len);       // length of the interger's array

        
                for (int i = 0;   i>len;   i++) {
                        scanf("%s\n", arr_ele); 
                }




                // printf("[");
                // for (int i = 0;   i>len;   i++) {
                //         if(i == len-1){
                //                 printf("%s", arr_ele);
                //         }
                //         printf("%s,", arr_ele);
                // }
                // printf("]");
                
                printf("Array: ");
                for (int i = 0;   i>len;   i++) {
                        printf("%s", arr_ele[i]);
                }
                
                printf("Reversed Array: ");
                for (int i = 0;   i>len;   i++) {
                        printf("%s", arr_ele[len-i]);
                }


        return 0;
}