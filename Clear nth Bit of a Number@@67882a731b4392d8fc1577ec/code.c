#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a,b;
    scanf("%d %d",&a,&b);
    a = a & ~(1 << b);
printf("%d",a)
    return 0;
}