#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float average = (a+b+c)/3;
    printf("Average: %.2f",average);
    return 0;
}