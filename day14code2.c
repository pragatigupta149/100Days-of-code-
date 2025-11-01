#include <stdio.h>   // Header file for input and output functions

int main() {
    int n, i; 
    long long product = 1;  // Using long long to handle large results
    int found = 0;          // Flag to check if any even number exists

    // Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Checking for valid input
    if (n < 2) {
        printf("No even numbers found between 1 and %d.\n", n);
    } else {
        printf("Even numbers from 1 to %d are: ", n);

        // Loop to find and multiply even numbers
        for (i = 2; i <= n; i++) {
            if (i % 2 == 0) {       // Check if number is even
                printf("%d ", i);
                product *= i;       // Multiply even numbers
                found = 1;
            }
        }

        printf("\n");

        // Display product only if even numbers were found
        if (found)
            printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    }

    return 0;   // Program executed successfully
}
