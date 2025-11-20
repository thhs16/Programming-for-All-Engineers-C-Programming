#include <stdio.h>

int main(void) {
    long num, original, reversed = 0, remainder;

    // input
    scanf("%lld", &num);

    if (num < 0) {
        printf("Negative value is not considered a palindrome.\n");
        return 0;
    }

    original = num;

    // reverse digits
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // check palindrome
    if (original == reversed) {
        printf("%lld is a palindrome.\n", original);
    } else {
        printf("%lld is not a palindrome.\n", original);
    }

    return 0;
}