#include <stdio.h>   // Header file for input and output functions

int main() {
    int num, reversed = 0, remainder, original;

    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;   // Store original number for display

    // Loop to reverse the number
    while (num != 0) {
        remainder = num % 10;               // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        num /= 10;                           // Remove the last digit
    }

    // Display the result
    printf("Reversed number of %d = %d\n", original, reversed);

    return 0;   // Program executed successfully
}
