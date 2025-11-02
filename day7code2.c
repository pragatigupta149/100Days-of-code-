Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>   // Header file for input and output functions

int main() {
    char ch;   // Variable to store the character

    // Taking input from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking if the entered character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Checking for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;   // Program executed successfully
}
