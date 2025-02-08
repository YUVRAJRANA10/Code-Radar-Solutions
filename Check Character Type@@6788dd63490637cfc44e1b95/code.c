#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);  // Space before %c to avoid newline issues

    if (isdigit(ch)) {
        printf("Digit\n");
    }else if(ch = 'a','e','i','o','u' ){
        printf("Vowel");
    }
     else if (isalpha(ch)) {
        printf("Constant\n");
    } else if (ispunct(ch)) {
        printf("Special Character\n");
    } 

    return 0;
}
