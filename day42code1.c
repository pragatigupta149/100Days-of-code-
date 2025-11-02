//Count vowels and consonants in a string.
    
#include <stdio.h>
#include <ctype.h>  // for tolower() function

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);  // Input string (supports spaces)

    // Loop through each character
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // Convert to lowercase for easy comparison

        if ((ch >= 'a' && ch <= 'z')) { // Check only alphabetic characters
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("\nNumber of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
