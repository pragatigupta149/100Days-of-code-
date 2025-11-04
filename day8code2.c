//Write a program to input three numbers and find the largest among them using if–else.


#include <stdio.h>   // Header file for input and output functions

int main() {
    int num1, num2, num3;   // Variables to store three numbers

    // Taking input from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Checking which number is the largest using if–else
    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest number.\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the largest number.\n", num2);
    }
    else {
        printf("%d is the largest number.\n", num3);
    }

    return 0;   // Program executed successfully
}
