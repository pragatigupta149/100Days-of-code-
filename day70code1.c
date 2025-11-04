//Q120. Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert first character to uppercase if it's a letter
    if (str[0] != '\0')
        str[0] = toupper(str[0]);

    // Traverse the string
    for (i = 1; str[i] != '\0'; i++) {
        // Convert all characters to lowercase first
        str[i] = tolower(str[i]);

        // If a period is found, capitalize next letter (after space)
        if (str[i] == '.' && str[i + 1] != '\0') {
            int j = i + 1;
            // Skip spaces after period
            while (str[j] == ' ') j++;
            if (str[j] != '\0')
                str[j] = toupper(str[j]);
        }
    }

    printf("Sentence case string: %s", str);

    return 0;
}
