#include <stdio.h>
#define MAXSUBJ 3
#define MAXSTRG 10

    // abstraction = variable with a name

    void printInfo( char subjID[], double credit,  char grade[]) {
        printf("%s %3.1f %s\n", subjID, credit, grade);
    }

    void printCourse(struct course c){};
    void modifyCourse(struct course c){};

    int main () {
        
    char courseID[MAXSUBJ][MAXSTRG] = {"CPE100", "CPE111", "CPE123"};
    double credit[MAXSUBJ] = {3, 3, 3};
    char grade[MAXSUBJ][3] = {"A", "B+", "F"};
    double score[MAXSUBJ] = {4.0, 3.5, 0.0};

    double scores = 0.0;
    double credits = 0.0;
    double gpa = 0.0;

    for (int i=0;   i<MAXSUBJ;   i++){
        // 3x4.0 + 3x3.5 + 3x0.0 ==> score / count
        scores += credit[i] * score[i];
        credits += credit[i];
    }

    gpa = scores / credits;
    printf("GPA is %5.2f\n", gpa);

    for (int i=0; i<MAXSUBJ; i++) {
        printCourse( c[i] );
    }
    
    return 0;
    };

    void printCourse(struct course c){ // previously defined methods or struct
        printf("%s %3.1f %s\n", c.subjID, c.credit, c.grade);
    };

    void modifyCourse(struct course c){
        printf("Enter new name: ");
        scanf("%s", c.subjID);
    }