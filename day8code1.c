//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.


#include <stdio.h>   // Header file for input and output functions

int main() {
    char ch;   // Variable to store the character

    // Taking input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking character type using if–else ladder
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase alphabet.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase alphabet.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    }
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;   // Program executed successfully
}
