#include <stdio.h>   // Header file for input and output functions

int main() {
    int n, i, sum = 0;   // Variables to store n, counter, and sum

    // Taking input from the user
    printf("Enter the number of odd terms: ");
    scanf("%d", &n);

    // Checking for valid input
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        printf("First %d odd numbers are: ", n);

        // Using loop to print and sum the first n odd numbers
        for (i = 1; i <= n; i++) {
            int odd = 2 * i - 1;  // Formula for ith odd number
            printf("%d ", odd);
            sum += odd;           // Adding to sum
        }

        // Display the result
        printf("\nSum of first %d odd numbers = %d\n", n, sum);
    }

    return 0;  // Program executed successfully
}
