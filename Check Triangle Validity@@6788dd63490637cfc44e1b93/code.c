#include <stdio.h>
#include<math.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    // printf("%s", welcome());
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    // int cond = a*a + b*b =
    if(a*a + b*b == c*c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}