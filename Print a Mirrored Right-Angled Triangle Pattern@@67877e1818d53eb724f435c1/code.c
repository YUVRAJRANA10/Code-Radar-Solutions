#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
      for (int l = 1; l <= n - i; l++) {  
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {  // Loop for stars
            printf(" *");  // Add space for proper formatting
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
