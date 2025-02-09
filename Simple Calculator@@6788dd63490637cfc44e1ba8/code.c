#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int a,b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    switch(op){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
           case '/':
            if (b == 0) {
                printf("error\n");  // Handle division by zero
            } else {
                printf("%d\n", a / b);
            }
            break;
        default:
        printf("Error");
    }
    return 0;
}