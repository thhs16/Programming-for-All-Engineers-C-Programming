#include <stdio.h>
#include <string.h> // for strcpy
#define MAXSTRG 10 // max length of string not array elements+


    struct course {
        char subjID[MAXSTRG];
        double credit;
        double score;
        char grade[3];
    };

    int main() {
        
        struct course c1; // declare a variable of type struct course
        c1.credit = 3;
        c1.score = 4.0;
        
        strcpy(c1.subjID, "CPE100");
        strcpy(c1.grade, "A"); // assign string to grade instead of putting data in it as a variable, we would need * to do so
        
        
        
        struct course c1; // declare a variable of type struct course
        c1.credit = 3;
        c1.score = 4.0;
        
        strcpy(c1.subjID, "CPE100");
        strcpy(c1.grade, "A"); struct course c1; // declare a variable of type struct course
        
        
        
        c1.credit = 3;
        c1.score = 3.5;
        
        strcpy(c1.subjID, "CPE100");
        strcpy(c1.grade, "B+"); struct course c1; // declare a variable of type struct course
        
        
        
        c1.credit = 3.0;
        c1.score = 0.0;
        
        strcpy(c1.subjID, "CPE100");
        strcpy(c1.grade, "F"); 
        
        return 0;
    };
