#include <stdio.h>
int toggle(int num) {
    return num ^ 1; 
}
int main() {
    int n,num=1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= i; j++) {  
            printf("%d",num);
            toggle(num);
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
