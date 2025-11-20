#include <stdio.h>


int main() {
    int n;
    
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 0) {
        printf("Factorial can't be negative\n");
    } 
    else {
        long long result = 1; 

        for (int i = 1; i <= n; i++) {
            result *= i;
            
        }

        printf("%lld\n", result);
    }

    return 0;
}
