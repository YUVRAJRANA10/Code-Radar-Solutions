#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    double c;
    scanf("%lf",&c);
    printf("you entered: %lf",c);
    return 0;
}