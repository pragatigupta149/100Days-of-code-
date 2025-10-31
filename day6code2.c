#include <stdio.h>   // Header file for input and output functions

int main() {
    int num;   // Variable to store the input number

    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Checking the number using nested if–else
    if (num >= 0) {
        if (num == 0) {
            printf("The number is zero.\n");
        } else {
            printf("The number is positive.\n");
        }
    } else {
        printf("The number is negative.\n");
    }

    return 0;   // Program executed successfully
}
