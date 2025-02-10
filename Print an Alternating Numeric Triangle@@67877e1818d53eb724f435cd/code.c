#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
        int num = (i % 2 == 1) ? 1 : 0;  // Start with 1 for odd rows, 0 for even

        for (int j = 1; j <= i; j++) { 
            printf("%d ", num);
            num ^= 1;  // Toggle between 1 and 0
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
