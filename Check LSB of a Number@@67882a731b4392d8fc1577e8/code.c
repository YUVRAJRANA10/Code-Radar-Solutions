#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    if(a % 2 == 1 ){
        printf("Set\n");
    }
    else{
        printf("Not Set\n");
    }
    return 0;
}