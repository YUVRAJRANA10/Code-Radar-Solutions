#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    int pos;
    int count = 0;
    for (int i= 0 ; i < 16;i++)
    {
        pos = a << i;
        if(pos == 1){
            count++;
            break;
        }

    }