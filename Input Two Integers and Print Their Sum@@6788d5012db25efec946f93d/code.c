#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a,b,sum;
    scanf("%d %d", &a, &b);
    printf("Sum: %d",a + b);
    return 0;
}