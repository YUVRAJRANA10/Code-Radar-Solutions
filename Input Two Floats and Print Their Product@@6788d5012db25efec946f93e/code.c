#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a,b;
    scanf("%f %f",&a,&b);
    printf("Product: %f",a*b);
    return 0;
}