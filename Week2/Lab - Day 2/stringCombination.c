#include <stdio.h>
#include <string.h>

int main() {

    //Variable
    char name1[10];
    char name2[10];

    // Input
    printf("Enter first name: ");
    scanf("%s", name1);

    printf("Enter last name: ");
    scanf("%s", name2);
    

    strcat(name1,name2);
    

    printf("Full name: %s", name1);
    
    return 0;
}