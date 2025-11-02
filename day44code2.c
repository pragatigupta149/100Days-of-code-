#include <stdio.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    gets(str);  // Input string

    // Replace spaces with hyphens
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
    }

    printf("\nModified string: %s\n", str);

    return 0;
}
