#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int n;
    scanf("%d",&n);
    //  int n =2;
    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    
    }
    return 0;
}