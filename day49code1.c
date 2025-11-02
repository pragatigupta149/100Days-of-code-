#include <stdio.h>

int main() {
    char name[200];
    int i;

    printf("Enter your full name: ");
    gets(name);  // Input full name

    printf("\nInitials: ");

    // Print first character (first initial)
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Loop through the string
    for (i = 1; name[i] != '\0'; i++) {
        // If space is found, print next character (next initial)
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ')
            printf(".%c", name[i + 1]);
    }

    printf(".\n");

    return 0;
}
