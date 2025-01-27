#include <stdio.h>
#include<string.h>
#include<math.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    double num;
    scanf("%lf",&num);
    printf("You entered: %.4lf\n",num);
    return 0;
}