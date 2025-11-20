    #include <stdio.h>

    void swap(int* x, int* y) {
            int t = *x;
            *x = *y;
            *y = t;
            //printf("In Function >>a = %d b = %d\n", *x, *y);
    }

    void print(int arr[], int num) {
        for (int i=0; i < num; i++) 
            printf("%-3d", arr[i]);
        printf("\n");
    }

    int main(){

            int num = 10;

            int isPrime = 1;

           
            for (int i = 2;     i <= num;   i++){

                for( int k = 2; k<i;    k++){

                    // printf("%3d",k);

                    if(i%k==0){

                        // printf("  Not Prime\n");
                        isPrime = 0;
                        break;
                    }
                }

                if (isPrime == 1){
                    printf("%3d",i); // 3 spaces in front of the integer
                }
                // printf("\n");
            }
            return 0;
    }