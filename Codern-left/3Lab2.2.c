// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE :

#include <stdio.h>

int main(){

        float gross_sal;
        float tax_rate_per;
        int perf_rate;

        float tax_amt;
        float bonus;

        float net_sal;

        scanf("%f", &gross_sal);

                if (gross_sal < 0) {
                        printf("Gross salary must be positive");
                        return 0;
                        }

        scanf("%f", &tax_rate_per);

                if (tax_rate_per > 100 || tax_rate_per < 0) {
                        printf("Tax rate out of range");
                        return 0;
                }


        scanf("%d", &perf_rate);

        tax_amt = gross_sal*tax_rate_per/100;
        // printf("%f", tax_amt); //t1

        net_sal = gross_sal - tax_amt;

        switch (perf_rate) //use precise
        {
        case 5: bonus = gross_sal * 20 / 100; break;
        case 4: bonus = gross_sal * 10 / 100; break;
        case 3: bonus = gross_sal * 5 / 100; break;
        case 2: bonus = gross_sal * 2 / 100; break;
        default: printf("Performance rating out of range"); return 0;
         
        }

        // printf("%f", bonus); //t2

        net_sal = gross_sal - tax_amt + bonus;

        printf("%.2f", net_sal);

        return 0;
}