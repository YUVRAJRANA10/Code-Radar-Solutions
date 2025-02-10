#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int  c[n];

    for (int i = 0; i < n; i++) {  // Loop for rows
        for (int j = 0; j <= i; j++) {  // Loop for stars
            printf("%c ",'A' + j);  // Add space for proper formatting
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
