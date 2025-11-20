#include <stdio.h>

int main() {

    //Variable
    int age;
    float height;
    char firstN;
    
    char leave;

    // Input of Age, Height, and First Name
    printf("Enter your age:");
    scanf("%d", &age);
    

    printf("Enter your height :");
    scanf("%f", &height); 
    

    printf("Enter your First Name Initial :");
    scanf(" %c", &firstN); 

    printf("%d\n", age);
    printf("%f\n", height);
    printf("%c\n", firstN);
    printf("Thank You");
    scanf("%c", &leave);
    // printf("You will exist the program now! Press Enter.");
    // scanf("%d", &noth); 
    // printf("You will exist the program now! Press Enter.");
    
    return 0;
}