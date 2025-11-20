#include <stdio.h>

int main() {

    //Variable
    char name[20];
    int studentID;

    // Input of Age, Height, and First Name
    printf("Enter student name: ");
    scanf("%s", name);
    

    printf("Enter student ID: ");
    scanf("%d", &studentID); 
    

    printf("=== STUDENT CARD ===\n");
    printf("Name: %s\n", name);
    printf("ID: %d\n", studentID);
    printf("==================");
    
    return 0;
}