#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[50], ch;
    int vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);  // Convert to lowercase for easier checking

        if (ch >= 'a' && ch <= 'z') {  // Check alphabet only
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}
