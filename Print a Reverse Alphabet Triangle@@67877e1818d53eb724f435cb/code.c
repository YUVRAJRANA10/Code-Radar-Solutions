#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int  c[n];

    for (int i = n; i >= 1; i--) {  // Loop for rows
        for (int j = 1; j <= i; j++) {  // Loop for stars
            printf("%d ",j);  // Add space for proper formatting
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
