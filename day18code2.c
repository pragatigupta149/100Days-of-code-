#include <stdio.h>   // Header file for input and output functions

int main() {
    int num1, num2, hcf;

    // Taking input from the user
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Check for valid input
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    // Find HCF using Euclidean algorithm
    int a = num1, b = num2;

    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    hcf = a;  // When both are equal, that's the HCF

    // Display result
    printf("HCF (GCD) of %d and %d = %d\n", num1, num2, hcf);

    return 0;   // Program executed successfully
}
