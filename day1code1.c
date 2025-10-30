#include <stdio.h>   // Header file for input and output functions

int main() {
    int num1, num2, sum;   // Variables to store numbers and their sum

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculating sum
    sum = num1 + num2;

    // Displaying the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;   // Program executed successfully
}
 