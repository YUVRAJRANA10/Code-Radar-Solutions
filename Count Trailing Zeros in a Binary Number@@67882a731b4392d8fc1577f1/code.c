// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int trail = __builtin_ctz(n);
    printf("%d",trail);
}