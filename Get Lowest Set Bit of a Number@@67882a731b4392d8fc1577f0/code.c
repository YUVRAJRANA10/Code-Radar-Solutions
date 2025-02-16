#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // Edge case: If n is 0, no set bits are present
    if (n == 0) {
        printf("-1\n");
        return 0;
    }

    // Use __builtin_ctz to count trailing zeros (GCC specific)
    int position = __builtin_ctz(n);
    
    printf("%d\n", position);
    return 0;
}
