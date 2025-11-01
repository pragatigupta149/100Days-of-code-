#include <stdio.h>   // Header file for input and output functions
#include <math.h>    // Header for power() function

int main() {
    int num, original, remainder, digits = 0;
    int result = 0;

    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;   // Store original number for comparison

    // Count the number of digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of cubes (or powers) of its digits
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);  // Raise each digit to 'digits' power
        temp /= 10;
    }

    // Check if Armstrong
    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;   // Program executed successfully
}
