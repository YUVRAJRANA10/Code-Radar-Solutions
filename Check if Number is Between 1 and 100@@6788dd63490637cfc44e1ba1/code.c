#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    if(a<100 && a>1){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}