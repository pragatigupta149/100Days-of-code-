//Print initials of a name with the surname displayed in full.

    
#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    gets(name);  // Input full name

    // Find the last space to identify the surname
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("\nResult: ");

    // Print initials of all words except the last one
    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c.", name[i + 1]);
    }

    // Print surname in full
    if (lastSpace != -1)
        printf(" %s", &name[lastSpace + 1]);

    printf("\n");

    return 0;
}
