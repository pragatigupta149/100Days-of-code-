//Write a program to calculate the factorial of a number.


#include <stdio.h>   // Header file for input and output functions

int main() {
    int n, i;
    long long factorial = 1;   // Using long long to handle large results

    // Taking input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Checking for valid input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else {
        // Using a for loop to calculate factorial
        for (i = 1; i <= n; i++) {
            factorial *= i;   // Multiply each number from 1 to n
        }

        // Display the result
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;   // Program executed successfully
}
