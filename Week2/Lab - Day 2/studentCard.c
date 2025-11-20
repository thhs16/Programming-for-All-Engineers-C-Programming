#include <stdio.h>

int main() {

    //Variable
    char name;
    int studentID;

    // Input of Age, Height, and First Name
    printf("Enter student name: ");
    scanf("%c\n", &name);
    

    printf("Enter student ID: ");
    scanf("%d\n", &studentID); 
    

    printf("=== STUDENT CARD ===");
    printf("Name: %c\n", name);
    printf("ID: %d\n", studentID);
    printf("==================");
    
    return 0;
}