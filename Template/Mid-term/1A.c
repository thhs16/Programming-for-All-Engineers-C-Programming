// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE :

# include <stdio.h>
# include <math.h>

    int main(){

            int x1,x2,y1,y2;
            float ans;

            scanf("%d ", &x1);
            scanf("%d ", &x2);
            scanf("%d ", &y1);
            scanf("%d ", &y2);

                // ans = 2^3;
            ans = sqrt( pow(x2 - x1) + pow(y2-y1) );

            printf("Distance = %.2f", ans);
            return 0;
    }