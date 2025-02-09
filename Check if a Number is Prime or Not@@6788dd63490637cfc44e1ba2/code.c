#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    if(a%2 != 0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}