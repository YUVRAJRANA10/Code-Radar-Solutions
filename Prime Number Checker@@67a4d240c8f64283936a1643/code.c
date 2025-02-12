#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2)
        return 0;  // Not prime

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;  // Not prime
    }

    return 1;  // Prime
}

int main() {
    int n, num;

    // Taking the count of numbers
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Checking multiple numbers
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (isPrime(num))
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }

    return 0;
}