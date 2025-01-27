#include <stdio.h>
#include<string.h>
#include<math.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    double cc;
    scanf("%lf",&cc);
    printf("You entered: %lf",cc);
    return 0;
}