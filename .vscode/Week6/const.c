// Purpose : 

    #include <stdio.h>
    // #include <typeinfo.h>

    void convertToUppercase(char *sPtr) {
        while ( *sPtr != '\0' ) {
            *sPtr = toupper( *sPtr );
            ++sPtr;
        }
    }

    void transform( char str[] ) {

        int i;
        while (str[i] != '\0') {
            str[i] = toupper ( str[i] );
            i++;
        }
    }

    int main () {
        
        char string[] = "cHaRaCters and $32.98";

        printf("Before %s\n", string);
        convertToUppercase( string );
        printf("After %s\n", string);
    }