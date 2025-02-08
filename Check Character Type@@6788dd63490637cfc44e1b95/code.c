#include <stdio.h>
#include<ctype.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    char ch;
    scanf("%d",&ch);
    if(ch == 'a','e','i','o','u'){
        printf("Vowel");

    }
    else if(isdigit(ch)){
        // printf("Digit";)
    }
    

    return 0;
}