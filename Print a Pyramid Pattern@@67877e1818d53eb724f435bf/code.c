#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
    if(i==1){
        for (int j = 1; j <= i; j++) {  // Loop for stars
            printf("*");  // Add space for proper formatting
        }
        printf("\n");  // Move to the next line
    }
    else{
        for(int k = 1; k<= (i*2)-1;k++){
            printf("*");
        }
        printf("\n");
    }
    }

    return 0;
}
