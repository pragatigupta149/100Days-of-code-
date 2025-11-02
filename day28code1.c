#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++) { // Start from 2 (smallest prime)
        isPrime = 1; // Assume number is prime

        for (j = 2; j * j <= i; j++) { // Check divisibility
            if (i % j == 0) {
                isPrime = 0; // Not a prime
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
