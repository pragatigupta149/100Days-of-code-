//Q2. Write a program to input two numbers and display their sum, difference, product, and quotient.

    #include <stdio.h>   // Header file for input and output functions

int main() {
    int num1, num2;        // Variables to store the two numbers
    int sum, difference, product;   // For integer results
    float quotient;         // For division result (can be decimal)

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Performing arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Checking division by zero before calculating quotient
    if (num2 != 0) {
        quotient = (float)num1 / num2;   // Type casting for float result
        printf("\nResults:\n");
        printf("Sum = %d\n", sum);
        printf("Difference = %d\n", difference);
        printf("Product = %d\n", product);
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("\nDivision by zero is not possible!\n");
    }

    return 0;   // Program executed successfully
}
