#include <stdio.h>
#include <string.h>

int main() {

    //Variable
    char string[100];
    char copy[100];

    // Input
    printf("Enter source string: ");
    scanf("%s", string);
    

    strcpy(copy,string);
    

    printf("Source: %s\n", string);
    printf("Destination: %s\n", copy);
    printf("Copy successful!");
    
    return 0;
}