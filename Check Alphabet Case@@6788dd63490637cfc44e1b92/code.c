#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    char c;
    scanf("%c",&c);
    if(c == toupper(c)){
        printf("Uppercase");
    }
    else if(c == tolower(c) ){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}