    // Name : Thae Htape Htar San
    // ID : 68070503468
    // PURPOSE :

    #include <stdio.h>

    int main(){

            char building;
            int units;
            float bill;

            scanf(" %c", &building);
            
            scanf("%d", &units);

            // printf("%c, %d", building, units);

            if(building == 'd'){

                if(units < 200) {
                    bill = 2.50 * units;
                    printf("%.2f", bill);
                }else{
                    bill = 2.75 * units;
                    printf("%.2f", bill);
                }


            }else if(building == 'h'){

                if(units < 200) {
                    bill = 1.75 * units;
                    printf("%.2f", bill);
                }else{
                    bill = 2.00 * units;
                    printf("%.2f", bill);
                }
                
            }
            

            return 0;
    }