#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    float c;
    scanf("%.2f",&c);
    printf("you entered: %f",c);
    return 0;
}