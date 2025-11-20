#include <stdio.h>

    struct Student {
        int id;
        char name[50];
        float gpa;
    };
    
    int main() {
        struct Student s1 = {1001, "Alice", 3.85}; // assigning data to struct's variables
        printf("ID: %d\n", s1.id);
        printf("Name: %s\n", s1.name);
        printf("GPA: %.2f\n", s1.gpa);
        return 0;
    }