#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a,b;
    scanf("%d %d",&a,&b);
    if(a!=b){
        printf("False");
    }
    else{
        printf("True");
    }
    return 0;
}