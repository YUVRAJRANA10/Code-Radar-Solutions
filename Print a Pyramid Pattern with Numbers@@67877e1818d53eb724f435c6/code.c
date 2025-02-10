#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
         for (int l = 1; l <= n - i; l++) {  
            printf(" ");
        }

    if(i==1){
        for (int j = 1; j <= i; j++) {  // Loop for stars
            printf("%d",j);  // Add space for proper formatting
        }
        printf("\n");  // Move to the next line
    }
    else{
        for(int k = 1; k<= n;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    }

    return 0;
}
