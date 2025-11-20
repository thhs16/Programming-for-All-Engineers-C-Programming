#include <stdio.h>
#define MAXSUBJ 3
#define MAXSTRG 10

    // Define the struct course

    struct course {
        char subjID[MAXSTRG];
        double credit;
        char grade[3];
    };

    // Function to print course details

    void printCourse(struct course c){
        printf("%s %3.1f %s\n", c.subjID, c.credit, c.grade);
    }

    // Function to modify course details
    void modifyCourse(struct course *c){
        printf("Enter new name: ");
        scanf("%s", c->subjID);
    }

    int main(){
        
        // Initialize courses
        struct course courses[MAXSUBJ] = {
            {"CPE100", 3.0, "A"},
            {"CPE111", 3.0, "B+"},
            {"CPE123", 3.0, "F"}
        };

        double score[MAXSUBJ] = {4.0, 3.5, 0.0};

        double scores = 0.0;
        double credits = 0.0;
        double gpa = 0.0;

        // Calculate GPA
        for (int i=0;   i<MAXSUBJ; i++){
            scores += courses[i].credit * score[i];
            credits += courses[i].credit;
        }

        gpa = scores / credits;
        printf("GPA is %5.2f\n", gpa);

        // Print course details
        for (int i=0; i<MAXSUBJ; i++){
            printCourse(courses[i]);
        }

        return 0;
    };