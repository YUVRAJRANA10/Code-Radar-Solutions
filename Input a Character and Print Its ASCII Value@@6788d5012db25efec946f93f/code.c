#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    char c;
    scanf("%c",&c);
    printf("ASCII Value: %d",c);
    return 0;
}