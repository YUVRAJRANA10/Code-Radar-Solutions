#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int w,d;
    scanf("%d %d",&w,&d);
    if(w>d){
        printf("%d",w);
    }
    else{
        printf("%d",d)
    }
    return 0;
}