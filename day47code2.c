#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, currentLen = 0;

    printf("Enter a sentence: ");
    gets(str);  // Input the sentence

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';  // End the current word
            currentLen = strlen(word);

            if (currentLen > maxLen) {
                maxLen = currentLen;
                strcpy(longest, word);  // Store longest word
            }

            j = 0;  // Reset word index for next word
        } else {
            word[j++] = str[i];
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("\nThe longest word is: %s", longest);
    printf("\nLength of the longest word: %d\n", maxLen);

    return 0;
}
