// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE :

#include <stdio.h>

int main(){

        int gross_sal;
        int tax_rate_per;
        int perf_rate;

        int tax_amt;
        int bonus;

        int net_sal;

        scanf("%d", &gross_sal);
        scanf("%d", &tax_rate_per);
        scanf("%d", &perf_rate);

        tax_amt = gross_sal*tax_rate_per/100;
        printf("%d", tax_amt);

        net_sal = gross_sal;

        return 0;
}