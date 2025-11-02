//Write a program to find the product of odd digits of a number.

    
    #include <stdio.h>   // Header file for input and output functions

int main() {
    int num, remainder;
    long long product = 1;   // Use long long for large products
    int hasOdd = 0;          // Flag to check if odd digits exist

    // Taking input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for valid input
    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    int original = num;   // Store original number for display

    // Loop to find product of odd digits
    while (num != 0) {
        remainder = num % 10;       // Extract last digit
        if (remainder % 2 != 0) {   // Check if digit is odd
            product *= remainder;   // Multiply odd digit
            hasOdd = 1;             // Mark that an odd digit was found
        }
        num /= 10;                  // Remove last digit
    }

    // Display result
    if (hasOdd)
        printf("Product of odd digits of %d = %lld\n", original, product);
    else
        printf("%d has no odd digits.\n", original);

    return 0;   // Program executed successfully
}
