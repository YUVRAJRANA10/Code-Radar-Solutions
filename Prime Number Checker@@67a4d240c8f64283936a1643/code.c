#include <stdio.h>
#include <math.h>  // Required for sqrt()

int isPrime(int n) {
    if (n <= 1) return 0;  // 0 and 1 are not prime numbers
    if (n == 2 || n == 3) return 1; // 2 and 3 are prime numbers
    if (n % 2 == 0 || n % 3 == 0) return 0; // Eliminate even numbers and multiples of 3
    
    for (int i = 5; i * i <= n; i += 6) {  // Check divisibility using 6k ± 1 optimization
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    
    return 1;
}

int main() {
    int t, num;
    scanf("%d", &t);
    
    while (t--) {
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }

    return 0;
}
