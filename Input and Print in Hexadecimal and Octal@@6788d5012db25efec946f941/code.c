#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    printf("Hexadecimal: %X\n Octal: %o",a,a);
    return 0;
}