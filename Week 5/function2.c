// Name : Thae Htape Htar San
// ID : 68070503468
// PURPOSE :

#include <stdio.h>

int swap(int x, int y){ // function with parameters     // local var

        int temp = x;
        x = y;
        y = x;

        printf("a = %d, b = %d\n", x, y);

        return x + y;
}


int main() {
    int a = 5, b = 7;

    printf("a = %d, b = %d\n", a, b);

    // Swap a to b // b to a

    int sum = swap(a,b);

    printf("a = %d, b = %d\n", a, b);
    return 0;
}