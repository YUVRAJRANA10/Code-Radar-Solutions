#include <stdio.h>
#include <math.h>  // Required for sqrt()

int isPrime(int n) {
    if (n <= 1) return 0;  // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; i++) {  // Loop till sqrt(n)
        if (n % i == 0) return 0;  // If divisible, not prime
    }
    return 1;  // Prime number
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
