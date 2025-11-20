#include <stdio.h>
int main() {


    // Declare variables here
    int inte = 25;
    float flo = 3.14;
    double dou = 2.718281;
    char chara = 'A';
    long lg = 1234567890;
    
    // Display values section
    printf("=== DATA TYPE VALUES ===\n");
    printf("Integer: %d\n", inte);
    printf("Float: %.2f\n", flo);
    printf("Double: %lf\n", dou);
    printf("Character: %c\n", chara);
    printf("Long: %ld\n\n", lg);
    
    // Display sizes section
    printf("=== DATA TYPE SIZES ===\n");
    printf("Size of int: %zu\n", sizeof(inte));
    printf("Size of float: %zu\n", sizeof(flo));
    printf("Size of double: %zu\n", sizeof(dou));
    printf("Size of char: %zu\n", sizeof(chara));
    printf("Size of long: %zu", sizeof(lg));
    
    return 0;
}