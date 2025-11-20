#include <stdio.h>


int calculate_string_length(const char *str) {
    int length = 0;
    
    if (str == NULL) {
        return 0;
    }

    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main() {
    char input_string[101];

    if (scanf("%100s", input_string) != 1) {
        return 1; 
    }

    int length = calculate_string_length(input_string);

    printf("%d\n", length);

    return 0;
}