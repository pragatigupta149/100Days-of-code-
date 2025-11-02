#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, isPalindrome = 1; // Flag to check palindrome

    printf("Enter a string: ");
    gets(str);  // Input string

    length = strlen(str);

    // Check for palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;  // Not a palindrome
            break;
        }
    }

    if (isPalindrome == 1)
        printf("\nThe string is a palindrome.\n");
    else
        printf("\nThe string is not a palindrome.\n");

    return 0;
}
