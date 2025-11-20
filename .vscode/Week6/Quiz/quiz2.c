// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE :

#include <stdio.h>
#define MAX 1000;

int main() {

        int num, num1, num2;
        int num_arr[1000];
        int prime;
        
        // scanf("%d", &num);

        for (int i = 0; i < MAX; i++)
            num_arr[i] = i + 1;
            printf("%d", num_arr[i]);
        {
        

        // if(num % 2 == 0){

        //     num1 = num %2;
        // } else {

        //     num2 = num %3;
        // }

        // if(num1 != 0 | num2 != 0){
        //     // prime 
            
        // } else
        

        // printf("%d", num2);

        // if ()
        // {
        //     /* code */
        for (int i = 0; i < MAX; i++) {
            prime = 1; 
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    prime = 0; // Not prime
                    break;
                }
            }
            if (prime && i > 1) {
                printf("%d ", num_arr[i]);
            }
        }
        // }
        
    int isPrime(int num) {

        if (num <= 1) return 0;

        for (int i = 2; i * i <= num; i++) {

            if (num % i == 0) return 0;
            
        }
        return 1;
    }

    int findPrimeAtRank(int rank) {
        int count = 0, num = 1;
        while (count < rank) {
            num++;
            if (isPrime(num)) count++;
        }
        return num;
    }
        return 0;
}