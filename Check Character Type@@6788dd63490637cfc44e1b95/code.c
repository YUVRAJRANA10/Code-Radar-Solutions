#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);  // Space before %c to avoid newline issues

    if (isdigit(ch)) {
        printf("Digit\n");
    }else if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'O' || ch == 'u'){
        printf("Vowel");
    }
     else if (isalpha(ch)) {
        printf("Consonant\n");
    } else if (ispunct(ch)) {
        printf("Special Character\n");
    } 

    return 0;
}
