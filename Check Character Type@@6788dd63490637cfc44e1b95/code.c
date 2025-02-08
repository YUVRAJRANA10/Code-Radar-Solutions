#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf(" %c", &ch);  // Space before %c to avoid newline issues

    if (isdigit(ch)) {
        printf("Digit\n");
    } else if (isalpha(ch)) {
        printf("Alphabet\n");
    } else if (ispunct(ch)) {
        printf("Special Character (Punctuation)\n");
    } else {
        printf("Other Character (like space or control character)\n");
    }

    return 0;
}
