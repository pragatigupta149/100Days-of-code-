#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Take input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    // Find sum of proper divisors (excluding the number itself)
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;  // Add divisor to sum
        }
    }

    // Check for perfect number
    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}
