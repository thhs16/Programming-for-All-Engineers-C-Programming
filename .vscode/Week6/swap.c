
    #include <stdio.h>

    void sway (int *x, int *y) {
        int temp = *x;
        *x = *y;
        *y = temp;
        printf("In function: A=%d B=%d\n", *x, *y);
    }

    int main() {
        
        int count = 7;
        int* countPtr;

        int a=10, b=100;

        printf("Before: A=%d B=%d\n", a, b);
        swap( &a, &b);
        printf("After: A=%d B=%d\n");

        printf("%d\n", count);
        return 0;
    }