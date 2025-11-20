#include <stdio.h>
#define MAX 1000

// There can be 1000 letters.

int main(){

        char str1[MAX];
        char str2[MAX];

        // Clear strings

        for (int i=0; i < MAX; i++) {

            str1[i] = '\0';
            str2[i] = '\0';
        }

        // Get String
        scanf("%[^\n]s", str1);

        // Find String Length
        int len = 0;

        for (int i=0; i < MAX; i++)
            if (str1[i] != '\0') len++;

        printf("String Length = %d\n", len);
        
        // String Reverse :: Change index from first to last
        for (int i=0;   i<len;  i++)
            str2[i] = str1[len - i -1];

        printf("String Reverse = %s\n", str2);


        return 0;
}