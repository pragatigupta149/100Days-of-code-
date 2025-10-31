#include <stdio.h>   // Header file for input and output functions

int main() {
    float num1, num2, result;  // Variables to store numbers and result
    char op;                   // Variable to store operator symbol

    // Taking input from user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // space before %c to ignore any leftover newline

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Performing operation based on operator using switch-case
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        case '%':
            // Modulus works only on integers
            if ((int)num2 != 0)
                printf("Result = %d\n", (int)num1 % (int)num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;  // Program executed successfully
}
