Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>   // Header file for input and output functions

int main() {
    int n, sum = 0, i;   // Variables for limit, sum, and loop counter

    // Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Checking if input is valid
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;   // Exit the program if input is invalid
    }

    // Calculating sum using a loop
    for (i = 1; i <= n; i++) {
        sum = sum + i;   // Adding each natural number to sum
    }

    // Displaying the result
    printf("The sum of the first %d natural numbers is %d\n", n, sum);

    return 0;   // Program executed successfully
}
