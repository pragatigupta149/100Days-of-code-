//Print all sub-strings of a string.
    
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;

    printf("Enter a string: ");
    gets(str);  // read the string

    int len = strlen(str);

    printf("\nAll possible substrings are:\n");

    // Generate all substrings
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            // Print substring from i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
