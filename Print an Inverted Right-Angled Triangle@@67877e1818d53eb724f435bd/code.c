#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    char cc;
    for(int i = a; i>=1;i--){
        for(int j = 1;j<=i;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}