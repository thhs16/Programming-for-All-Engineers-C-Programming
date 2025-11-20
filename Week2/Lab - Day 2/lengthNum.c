#include <stdio.h>
#include <string.h>

int main() {

    //Variable
    char word[100];
    int len;

    // Input
    printf("Enter a word: ");
    scanf("%s", word);
    

    len = strlen(word);
    

    printf("Word: %s\n", word);
    printf("Length: %d characters\n", len);
    
    return 0;
}