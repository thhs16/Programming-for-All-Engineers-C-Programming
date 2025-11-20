// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE :

#include <stdio.h>

int main(){

        int len;
        
        

        scanf("%d", &len);       // length of the interger's array

        int arr_ele[len];



                for (int i = 0;   i<len;   i++) {
                        scanf("%d", &arr_ele[i]); 
                }

                
                printf("Array: ");
                for (int i = 0;   i<len;   i++) {
                        printf("%d ", arr_ele[i]);
                }
                
                printf("Reversed Array: ");
                for (int i = 0;   i<len;   i++) {
                        printf("%d ", arr_ele[len-i-1]);
                }


        return 0;
}