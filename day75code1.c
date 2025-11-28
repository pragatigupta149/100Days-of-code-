#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    // Take filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar();  // Clear buffer for fgets

    // Open file in append mode
    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    // Take a line of text from the user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append to file
    fputs(text, fp);

    fclose(fp);

    printf("Text appended successfully to %s\n", filename);

    return 0;
}
