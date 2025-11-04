//Write a program to swap two numbers using a third variable.
   
#include <stdio.h>   // Header file for input and output functions

int main() {
    int a, b, temp;   // Variables to store numbers and a temporary variable

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Displaying numbers before swapping
    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    // Displaying numbers after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;   // Program executed successfully
}
