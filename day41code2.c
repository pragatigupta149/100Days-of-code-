//Print each character of a string on a new line.
    
#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);  // Input the string (can include spaces)

    printf("\nCharacters of the string are:\n");

    // Loop through each character until '\0'
    for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
