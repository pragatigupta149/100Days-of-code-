#include <stdio.h>   // Header file for input and output functions

int main() {
    int num, i, isPrime = 1;   // Assume number is prime initially

    // Taking input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for numbers less than 2 (not prime)
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check divisibility from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {    // If divisible, not prime
            isPrime = 0;
            break;
        }
    }

    // Display result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;   // Program executed successfully
}
