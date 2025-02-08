#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    char cg;
    scanf("%c",&cg);
    if(cg == toupper(cg)){
        printf("Uppercase");
    }
    else if(cg == tolower(cg) ){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}