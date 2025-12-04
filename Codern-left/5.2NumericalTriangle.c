// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : Numerical Triangle

#include <stdio.h>

        int main(){
                int h;
                int temp;
                
                scanf("%d", &h);

                

                for (int i = 0;     i<h;    i++) { // i = 2
                    
                    if (i == 0){
                        temp = i+1;
                    } else {
                        temp = temp+1;
                    }
                    
                    printf("%d", temp); // print = 3

                    for (int j=0;   j<i;    j++) { // i = 2
                        
                        temp = temp+1; // 3
                        
                        printf(" ");
                        printf("%d", temp); // print = 4
                    }

                    printf("\n");
                
                }

                return 0;
        }