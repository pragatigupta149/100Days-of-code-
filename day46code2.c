#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};  // To store frequency of each lowercase letter
    int i, found = 0;

    printf("Enter a string: ");
    gets(str);  // Input string

    // Traverse the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;  // Increase frequency

            if (freq[str[i] - 'a'] == 2) {  // Found repeating character
                printf("\nThe first repeating lowercase alphabet is: '%c'\n", str[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("\nNo repeating lowercase alphabet found.\n");

    return 0;
}
