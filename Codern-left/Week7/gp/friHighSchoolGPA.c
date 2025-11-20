#include <stdio.h>

struct course 
{
    float credit;
    float score;
};

float calculate(struct course s[])
{
    float count = 0, credit = 0, score = 0, sum = 0;
     for(int i = 0; i < 30; i++)
    {
        if((s[i].credit <= 4) && (s[i].credit > 0))
        {
            count++;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < count; i++)
    {
        credit = credit + s[i].credit;
        score = score + (s[i].credit * s[i].score);
    }
    sum = score / credit;
    return sum;
}

int main(void)
{
    float scisum, mathsum, engsum;
    //s = science, m = math, e = english input "credit, score" then repeat for readability seperate semesters on different lines//
    struct course s[50] = {1.5, 4, 1.5, 3.5, 1.5, 3.5, 1.5, 3,  
                        0.5, 4, 1.5, 4, 1.5, 2.5, 1.0, 4 };
    struct course m[50] = {1.5, 4, 1.5, 3.5, 1.5, 3.5, 1.5, 3,  
                        0.5, 4, 1.5, 4, 1.5, 2.5, 1.0, 4 };
     struct course e[50] = {1.5, 4, 1.5, 3.5, 1.5, 3.5, 1.5, 3,  
                        0.5, 4, 1.5, 4, 1.5, 2.5, 1.0, 4 };
   
    scisum = calculate(s);
    mathsum = calculate(m);
    engsum = calculate(e);
    printf("GPAX of Science: %.2f\nGPAX of Mathematics: %.2f\nGPAX of English: %.2f", scisum, mathsum, engsum);
    
    return 0;
}