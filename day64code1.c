#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int lastIndex[256];  // To store last seen index of every character
    int i, start = 0, maxLen = 0;

    printf("Enter a string: ");
    gets(s);  // Input string

    int len = strlen(s);

    // Initialize all characters as unseen (-1)
    for (i = 0; i < 256; i++)
        lastIndex[i] = -1;

    for (i = 0; i < len; i++) {
        // If current character is already seen and its index is >= start of current window
        if (lastIndex[(unsigned char)s[i]] >= start)
            start = lastIndex[(unsigned char)s[i]] + 1;

        // Update last seen index of current character
        lastIndex[(unsigned char)s[i]] = i;

        // Update maximum length if needed
        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
