#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int sum = 0;
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        sum+=i;
    }
    printf("%d",,sum);
    return 0;
}