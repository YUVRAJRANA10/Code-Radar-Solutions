#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a,n;
    scanf("%d %d",&a,&n);
    if((a>0 && n<0) || (a==0 &&n == 0)){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}