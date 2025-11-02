#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, len1, len2, isAnagram = 1;

    printf("Enter first string: ");
    gets(s);
    printf("Enter second string: ");
    gets(t);

    len1 = strlen(s);
    len2 = strlen(t);

    // If lengths are different, they can't be anagrams
    if (len1 != len2) {
        printf("Not Anagram\n");
        return 0;
    }

    // Count frequency of characters in both strings
    for (i = 0; i < len1; i++) {
        freq1[s[i] - 'a']++;
        freq2[t[i] - 'a']++;
    }

    // Compare frequency arrays
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
