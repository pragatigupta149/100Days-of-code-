//Write a program to input an integer and check whether it is even or odd using if–else.
   
#include <stdio.h>   // Header file for input and output functions

int main() {
    int num;   // Variable to store the input number

    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Checking whether the number is even or odd
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0;   // Program executed successfully
}
