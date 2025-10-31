
#include <stdio.h>   // Header file for input and output functions

int main() {
    int n, i;   // Variables to store limit and loop counter

    // Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Checking for valid input
    if (n <= 0) {
        printf("Please enter a positive number greater than 0.\n");
    } else {
        printf("Numbers from 1 to %d are:\n", n);
        
        // Using for loop to print numbers from 1 to n
        for (i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");  // Move to next line after printing all numbers
    }

    return 0;   // Program executed successfully
}
