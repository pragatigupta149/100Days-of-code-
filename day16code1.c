#include <stdio.h>   // Header file for input and output functions

int main() {
    int num, binary[32], i = 0;   // Array to store binary digits (max 32 bits for int)
    
    // Taking input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for non-positive input
    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    } else if (num < 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    // Convert to binary
    while (num > 0) {
        binary[i] = num % 2;   // Store remainder (0 or 1)
        num /= 2;              // Divide number by 2
        i++;
    }

    // Print binary digits in reverse order
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;   // Program executed successfully
}
