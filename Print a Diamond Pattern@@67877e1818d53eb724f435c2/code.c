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


  
    for (int i = 1; i <= n-1; i++) {  // Loop for rows
    for (int k = i; k>=1;k--){
        printf(" ");
    }
        for (int j = (i*2)-1; j <= n+1; j++ ) {  // Loop for stars
            printf("*");
        }
        printf("\n");  // Move to next line
    }

    return 0;
}
