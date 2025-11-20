// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE : Beverage Machine

#include <stdio.h>

int main(){

        int drink;
        char* drinkName;
        float money;
        int drinkPrice;

        scanf("%d", &drink);
        scanf("%f", &money);


        if (drink == 1 ) {drinkPrice = 7; drinkName = "Water";}
        else if (drink == 2) {drinkPrice = 13; drinkName = "Soda";}
        else if (drink == 3) {drinkPrice = 20; drinkName = "Juice";}
        else {
            printf("Invalid choice");
            return 0;
        };

            if (money >= drinkPrice ) {

                printf("Dispensing your drink: %s\nHere is your change: %.2f", drinkName, money-drinkPrice);
            } else {
                
                printf("Insufficient funds");
            }
        
        return 0;
}