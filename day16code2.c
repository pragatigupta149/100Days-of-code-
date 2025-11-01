#include <stdio.h>   // Header file for input and output functions

int main() {
    int num, original, reversed = 0, remainder;

    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;   // Store original number for comparison

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;               // Get last digit
        reversed = reversed * 10 + remainder; // Build reversed number
        num /= 10;                           // Remove last digit
    }

    // Check if palindrome
    if (original == reversed)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);

    return 0;   // Program executed successfully
}
