#include <stdio.h>

int main() {

    //Variable
    int age;
    float height;
    char firstN;

    // Input of Age, Height, and First Name
    printf("Enter your age: ");
    scanf("%d", &age);
    

    printf("Enter your height in meters: ");
    scanf("%f", &height); 
    

    printf("Enter your first name initial: ");
    scanf(" %c", &firstN); 

    printf("Age: %d years \n", age);
    printf("Height: %.2f meters\n", height);
    printf("Initial: %c", firstN);
    
    return 0;
}