#include <stdio.h>

int main() {
    char str[200], result[200];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);  // Input string

    // Copy only non-vowel characters to result
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';  // End the string

    printf("\nString after removing vowels: %s\n", result);

    return 0;
}
