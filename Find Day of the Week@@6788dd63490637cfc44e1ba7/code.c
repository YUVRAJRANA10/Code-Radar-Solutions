#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("Monday");
        break;
          
        case 2:
        printf("Tuesday");
        break;
        

    }
    return 0;
}