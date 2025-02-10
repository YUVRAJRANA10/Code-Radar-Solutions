#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int  c[n];

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = i; j <= i; j++) {  // Loop for stars
            printf("%c ",j);  // Add space for proper formatting
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}t
