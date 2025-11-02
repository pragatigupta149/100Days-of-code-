//Write a program to find the LCM of two numbers.

    
    #include <stdio.h>   // Header file for input and output functions

int main() {
    int num1, num2, a, b, hcf, lcm;

    // Taking input from the user
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Check for valid input
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    // Store original values
    a = num1;
    b = num2;

    // Find HCF using Euclidean algorithm
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    hcf = a;   // When both are equal, that’s the HCF

    // Calculate LCM using the formula: (num1 × num2) / HCF
    lcm = (num1 * num2) / hcf;

    // Display result
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;   // Program executed successfully
}
