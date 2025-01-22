#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float s;
    scanf("%f",&s);
    printf("%f",s);
    printf("%s", welcome());
    return 0;
}