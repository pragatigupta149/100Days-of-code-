#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a lowercase string: ");
    gets(str);  // Input the string

    // Convert lowercase to uppercase manually
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // ASCII difference between 'a' and 'A' is 32
        }
    }

    printf("\nString in uppercase: %s\n", str);

    return 0;
}
