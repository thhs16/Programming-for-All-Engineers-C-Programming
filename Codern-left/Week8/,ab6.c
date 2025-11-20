#include <stdio.h>
#include <stdbool.h>

bool is_prime_optimized(long long n) {
    if (n <= 1) {
        return false;
    }
    
    if (n == 2) {
        return true;
    }
    
    if (n % 2 == 0) {
        return false;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    long long number;

    if (scanf("%lld", &number) != 1) {
        return 1; 
    }

    if (number < 2) {
         printf("%lld is not prime number\n", number);
         return 0;
    }

    if (is_prime_optimized(number)) {
        printf("%lld is prime number\n", number);
    } else {
        printf("%lld is not prime number\n", number);
    }

    return 0;
}