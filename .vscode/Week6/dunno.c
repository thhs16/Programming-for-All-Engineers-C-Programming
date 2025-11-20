#include <stdio.h>

void main() {
    
    int v[5];
    int* vPtr;
    vPtr = v;

    printf("Value at v[0] = %d\n", *vPtr);
    printf("Value at v[1] = %d\n", *(vPtr + 1));
    printf("Value at v[2] = %d\n", *(vPtr + 2));
    printf("Value at v[3] = %d\n", *(vPtr + 3));
    printf("Value at v[4] = %d\n", *(vPtr + 4));

    vPtr = v;

    printf("Address v = %p\n", v);
    printf("Address v[0] = %p\n", &v);
    printf("Address v[1] = %p\n", &v);
    printf("Address v[2] = %p\n", &v);
    printf("Address v[3] = %p\n", &v);    

    return 0;
}
