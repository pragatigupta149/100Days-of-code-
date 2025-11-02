#include <stdio.h>

int main() {
    char str[200];
    int i, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    gets(str);  // Input the string

    // Traverse through the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (!((str[i] >= 'A' && str[i] <= 'Z') || 
                   (str[i] >= 'a' && str[i] <= 'z')))
            special++;
    }

    printf("\nNumber of spaces: %d", spaces);
    printf("\nNumber of digits: %d", digits);
    printf("\nNumber of special characters: %d\n", special);

    return 0;
}
