//Write a program to find the 1’s complement of a binary number and print it.
    
#include <stdio.h>   // Header file for input and output functions
#include <string.h>  // Header for string functions

int main() {
    char binary[50];   // To store binary input (up to 49 bits)

    // Taking input from the user
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Find the length of the binary string
    int length = strlen(binary);

    // Convert to 1’s complement
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary number! Please enter only 0s and 1s.\n");
            return 0;
        }
    }

    // Display result
    printf("1’s Complement: %s\n", binary);

    return 0;   // Program executed successfully
}
