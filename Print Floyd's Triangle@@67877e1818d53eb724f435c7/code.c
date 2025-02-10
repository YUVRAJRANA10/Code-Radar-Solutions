#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int n;
    scanf("%d",&n);
    for(int i = 0; i <n;i++){
        for(int j = 1; j<= i; j++){
            printf("%d ",j+i);
        }
        printf("\n");
    }
    return 0;
}