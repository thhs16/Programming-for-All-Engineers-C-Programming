    // Name : Thae Htape Htar San
    // ID : 68070503468
    // PURPOSE :

    #include <stdio.h>

    int main(){

            char building;
            int units;
            float bill;

            scanf("%s", building);
            scanf("%d", &units);

            printf("%s, %d", building, units);

            if(building == 'd'){

                if(units < 200) {
                    bill = 2.50 * units;
                    printf("%d", bill);
                }else{
                    bill = 2.75 * units;
                    printf("%d", bill);
                }
            }else if(building == 'h'){

                if(units < 200) {
                    bill = 1.75 * units;
                    printf("%d", bill);
                }else{
                    bill = 2.00 * units;
                    printf("%d", bill);
                }
            }
            

            return 0;
    }