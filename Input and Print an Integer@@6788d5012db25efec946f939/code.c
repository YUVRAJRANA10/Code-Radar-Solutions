#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int d;
    scanf("%d",&d);
    printf("You entered: %d",d);
    printf("%s", welcome());
    return 0;
}