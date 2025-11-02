#include <stdio.h>
#include <string.h>

// Function to reverse a portion of a string
void reverseWord(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    gets(str);

    while (1) {
        // When we reach space or end of string, reverse the current word
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1);
            start = i + 1;  // Move to next word
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("\nSentence after reversing each word:\n%s\n", str);

    return 0;
}
