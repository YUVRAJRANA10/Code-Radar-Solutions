#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    char cg;
    scanf("%c",&cg);
    char cj = toupper(cg);
    char cl = tolower(cg);
    if(cg == cj){
        printf("Uppercase");
    }
    else if(cg == cl ){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}