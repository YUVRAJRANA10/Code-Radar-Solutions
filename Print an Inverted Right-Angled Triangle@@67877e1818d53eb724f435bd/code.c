#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    char cc[a] = "*";
    for(int i = a; i==0;i--){
        printf("%c\n",cc*i);
    }
    return 0;
}