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
            printf("Invalid choice!");
            return 0;
        };

        // printf("%d,%s", drinkPrice, drinkName);

        
        // switch (drink)
        // {
        // case :
        //     drinkCode = 1
        //     break;
        
        // default:
        //     break;
        // }

        // switch (drink)
        // {
        // case 1:

            if (money >= drinkPrice ) {

                printf("Dispensing your drink: %s\nHere is your change: %.2f", drinkName, money-drinkPrice);
            } else { // if (money < drinkPrice) {
                
                printf("Insufficient funds");
            // } else {
                
            //     printf("Invalid choice");
            }

            // break;
        
        // default:
        //     break;
        // }
        
        // printf("%d%.2f", drink, money); //debug
        
        return 0;
}