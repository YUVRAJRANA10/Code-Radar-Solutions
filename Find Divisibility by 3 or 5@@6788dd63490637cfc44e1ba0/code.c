#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    if(a%3 == 0 && a%5 == 0){
        printf("Divisible by Both");
    }
    else if(a%3 == 0){
        printf("Divisible by 3");
    }
    else if(a%5 == 0){
        printf("Dvivisible by 5");
    }

    else{
        printf("Not divisible");
    }
    return 0;
}