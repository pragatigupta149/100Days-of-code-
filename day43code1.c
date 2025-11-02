#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;
    char temp;

    printf("Enter a string: ");
    gets(str);  // Taking input string

    length = strlen(str);  // Finding length of string

    // Reversing the string
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("\nReversed string: %s\n", str);

    return 0;
}
