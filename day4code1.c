#include <stdio.h>

int main() {
    int a, b;   // Variables to store two numbers

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Displaying numbers before swapping
    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Swapping without using a third variable
    a = a + b;   // Step 1: Add both numbers
    b = a - b;   // Step 2: Subtract new 'a' from 'b'
    a = a - b;   // Step 3: Subtract new 'b' from 'a'

    // Displaying numbers after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
