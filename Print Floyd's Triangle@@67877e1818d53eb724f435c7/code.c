#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int n;
    scanf("%d",&n);
    for(int i = 1; i <=n;i++){
        for(int j = 0; j< i; j++){
            printf("%d ",j*i+1);
        }
        printf("\n");
    }
    return 0;
}