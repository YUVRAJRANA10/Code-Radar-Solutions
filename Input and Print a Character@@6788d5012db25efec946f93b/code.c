#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char d;
    scanf("%c",&d);
    printf("You entered: %c",d);
    // printf("%s", welcome());
    return 0;
}