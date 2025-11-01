#include <stdio.h>   // Header file for input and output functions

int main() {
    int num, remainder, sum = 0;

    // Taking input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for valid input
    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    // Loop to extract digits and add them
    int original = num;
    while (num != 0) {
        remainder = num % 10;   // Get the last digit
        sum += remainder;       // Add it to sum
        num /= 10;              // Remove the last digit
    }

    // Display result
    printf("Sum of digits of %d = %d\n", original, sum);

    return 0;   // Program executed successfully
}
