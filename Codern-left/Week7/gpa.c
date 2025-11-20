#include <stdio.h>
#define MAXSUBJ 3
#define MAXSTRG 10


int main() {
    
    // char courseID[MAXSTRG] = "CPE100";
    // double credit = 3;
    // char grade = 'A';
    // double score = 4.0;

    char courseID[MAXSUBJ][MAXSTRG] = {"CPE100", "CPE111", "CPE123"};
    double credit[MAXSUBJ] = {3, 3, 3};
    char grade[MAXSUBJ][3] = {"A", "B+", "F"};
    double score[MAXSUBJ] = {4.0, 3.5, 0.0};

    // GPA
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
    
    return 0;
}
