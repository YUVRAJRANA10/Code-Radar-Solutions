#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    float c;
    scanf("%f",&c);
    printf("you entered: %.4f",c);
    return 0;
}