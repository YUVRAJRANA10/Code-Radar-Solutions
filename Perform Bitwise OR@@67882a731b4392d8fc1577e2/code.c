#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome())
    int a,b;
    scanf("%d %d",&a,&b);
    int l = a | b;
    printf("%d",l);
    return 0;
}