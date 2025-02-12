#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    // 0 and 1 are not prime numbers
    if (n <= 1) return 0;

    // 2 and 3 are prime numbers
    if (n == 2 || n == 3) return 1;

    // Eliminate even numbers and multiples of 3
    if (n % 2 == 0 || n % 3 == 0) return 0;

    // Check for divisibility using 6k ± 1 optimization
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }

    // If no divisors were found, the number is prime
    return 1;
}

int main() {
    int t, num;

    // Read the number of test cases
    scanf("%d", &t);

    // Loop through each test case
    while (t--) {
        // Read the number to check for primality
        scanf("%d", &num);

        // Print 1 if prime, 0 if not prime
        printf("%d\n", isPrime(num));
    }
    
    return 0;
}
