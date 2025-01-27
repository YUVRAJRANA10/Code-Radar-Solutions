#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int average = (a+b+c)/2;
    printf("Average: %.2f",average);
    return 0;
}